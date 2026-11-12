#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDDEBUGMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEB090)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_DepthOfFieldDebugMethodParameter_TypeDefinitionIndex = 38734;

	class RPGDepthOfField_DepthOfFieldDebugMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_DEPTHOFFIELDDEBUGMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
