#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightFlyEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB69A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__PLAYFLYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB69B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__PLAYFLYEFFECT_B__1_OFFSET UNITYSDK_OFFSET(0xDAB69F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass33_0_TypeDefinitionIndex = 65970;

	class GridFightEffectController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightFlyEffect* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayFlyEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__PLAYFLYEFFECT_B__0_OFFSET))(this);
		}

		::System::Void _PlayFlyEffect_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS33_0__PLAYFLYEFFECT_B__1_OFFSET))(this);
		}

	};
}
