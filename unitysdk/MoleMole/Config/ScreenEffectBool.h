#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_SCREENEFFECTBOOL_GETVALUE_OFFSET UNITYSDK_OFFSET(0x1B44FFF0)
#define MOLEMOLE_CONFIG_SCREENEFFECTBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4500B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScreenEffectBool_TypeDefinitionIndex = 63204;

	class ScreenEffectBool
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTBOOL__CTOR_OFFSET))(this);
		}

		::System::Boolean GetValue(::System::Single curTime, ::System::Single totalTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCREENEFFECTBOOL_GETVALUE_OFFSET))(this, curTime, totalTime);
		}
	};
}
