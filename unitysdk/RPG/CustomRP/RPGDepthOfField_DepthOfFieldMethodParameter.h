#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC159B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_DepthOfFieldMethodParameter_TypeDefinitionIndex = 37800;

	class RPGDepthOfField_DepthOfFieldMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
