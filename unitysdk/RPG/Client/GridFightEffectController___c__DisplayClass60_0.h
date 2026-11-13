#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightGridPutDownEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS60_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D157980)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS60_0__PLAYGRIDPUTDOWNCHARACTERBUFFEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1D157990)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass60_0_TypeDefinitionIndex = 65990;

	class GridFightEffectController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::RPG::Client::GridFightGridPutDownEffect* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS60_0_CTOR_OFFSET))(this);
		}

		::System::Void _PlayGridPutDownCharacterBuffEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS60_0__PLAYGRIDPUTDOWNCHARACTERBUFFEFFECT_B__0_OFFSET))(this);
		}

	};
}
