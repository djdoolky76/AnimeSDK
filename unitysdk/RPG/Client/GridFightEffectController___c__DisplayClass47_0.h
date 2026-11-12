#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightAstropolisTierEffect; }
namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS47_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6D20)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS47_0__PLAYASTROPOLISTIEREFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6D30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass47_0_TypeDefinitionIndex = 65977;

	class GridFightEffectController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::System::Action* onFinish; // 0x18
		::RPG::Client::GridFightAstropolisTierEffect* effect; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS47_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayAstropolisTierEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS47_0__PLAYASTROPOLISTIEREFFECT_B__0_OFFSET))(this);
		}

	};
}
