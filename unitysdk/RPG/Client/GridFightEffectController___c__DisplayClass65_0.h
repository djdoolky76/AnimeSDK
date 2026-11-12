#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAnimEffect; }
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS65_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB7290)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS65_0__PLAYSHOPHIDEGOODSBLACKHOLE_B__0_OFFSET UNITYSDK_OFFSET(0xDAB72A0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS65_0__PLAYSHOPHIDEGOODSBLACKHOLE_B__1_OFFSET UNITYSDK_OFFSET(0xDAB72E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass65_0_TypeDefinitionIndex = 65992;

	class GridFightEffectController___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightAnimEffect* effect; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::GridFightEffectController* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS65_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayShopHideGoodsBlackHole_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS65_0__PLAYSHOPHIDEGOODSBLACKHOLE_B__0_OFFSET))(this);
		}

		::System::Void _PlayShopHideGoodsBlackHole_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS65_0__PLAYSHOPHIDEGOODSBLACKHOLE_B__1_OFFSET))(this, a1);
		}

	};
}
