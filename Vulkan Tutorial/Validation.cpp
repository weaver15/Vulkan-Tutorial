#include "Validation.h"

void ErrorCheck(VkResult res)
{
	if (res != VkResult::VK_SUCCESS)
	{
		std::cout << "Error" << std::endl;
		assert(0 && "There was an error");
	}
}
