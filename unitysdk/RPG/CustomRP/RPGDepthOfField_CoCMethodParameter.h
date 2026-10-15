#pragma once
#include "unitysdk/unitysdk.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCMETHODPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC15A00)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_CoCMethodParameter_TypeDefinitionIndex = 37804;

	class RPGDepthOfField_CoCMethodParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCMETHODPARAMETER_CTOR_OFFSET))(this);
		}

	};
}
