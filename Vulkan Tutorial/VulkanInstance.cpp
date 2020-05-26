#include "VulkanInstance.h"

VulkanInstance::VulkanInstance(VulkanConfiguration & vulkan_config)
{
	VkApplicationInfo application_info = Initilizers::ApplicationInfo(vulkan_config);

	VkInstanceCreateInfo instance_info = Initilizers::InstanceCreateInfo(application_info, layers, extensions);
	ErrorCheck(vkCreateInstance(&instance_info, NULL, &instance));
	vkDestroyInstance(instance, NULL);
}

VulkanInstance::~VulkanInstance()
{
}

VkInstance& VulkanInstance::GetInstance()
{
	return instance;
}
