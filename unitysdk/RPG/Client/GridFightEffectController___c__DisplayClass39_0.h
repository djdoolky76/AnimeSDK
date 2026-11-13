#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEffectController; }
namespace RPG::Client { class GridFightUIParticleEffect; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AB990)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS39_0___PLAYTRAILENDEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x1D5B5610)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass39_0_TypeDefinitionIndex = 65973;

	class GridFightEffectController___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightUIParticleEffect* effect; // 0x10
		::RPG::Client::GridFightEffectController* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Void __PlayTrailEndEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS39_0___PLAYTRAILENDEFFECT_B__0_OFFSET))(this);
		}

	};
}
