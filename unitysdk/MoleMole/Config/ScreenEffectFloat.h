#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_SCREENEFFECTFLOAT_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B8B6910)
#define MOLEMOLE_CONFIG_SCREENEFFECTFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B69D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectFloat_TypeDefinitionIndex = 61855;

	class ScreenEffectFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTFLOAT__CTOR_OFFSET))(this);
		}

		::System::Single GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTFLOAT_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
