#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APKDMEEAPKJ;

#define RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xF202560)
#define RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0__GETACTIVITYBUFFLAYERCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0xF202570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelUIComponent___c__DisplayClass8_0_TypeDefinitionIndex = 58528;

	class LevelUIComponent___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Int32 buffID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetActivityBuffLayerCount_b__0(::APKDMEEAPKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APKDMEEAPKJ*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELUICOMPONENT___C__DISPLAYCLASS8_0__GETACTIVITYBUFFLAYERCOUNT_B__0_OFFSET))(this, a1);
		}

	};
}
