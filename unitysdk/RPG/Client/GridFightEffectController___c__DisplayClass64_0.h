#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAnimEffect; }
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS64_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB7220)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS64_0__PLAYSHOPROLEREPLACE_B__0_OFFSET UNITYSDK_OFFSET(0xDAB7230)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS64_0__PLAYSHOPROLEREPLACE_B__1_OFFSET UNITYSDK_OFFSET(0xDAB7270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass64_0_TypeDefinitionIndex = 65991;

	class GridFightEffectController___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::System::Action* onFinish; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::RPG::Client::GridFightAnimEffect* effect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS64_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayShopRoleReplace_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS64_0__PLAYSHOPROLEREPLACE_B__0_OFFSET))(this);
		}

		::System::Void _PlayShopRoleReplace_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS64_0__PLAYSHOPROLEREPLACE_B__1_OFFSET))(this, a1);
		}

	};
}
