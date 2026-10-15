#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/SurfaceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectSurfaceOverride; }
namespace System { class String; }

#define RPG_GAMECORE_EFFECTSURFACEOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D631560)
#define RPG_GAMECORE_EFFECTSURFACEOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D631430)

namespace RPG::GameCore
{
	class EffectSurfaceOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::SurfaceType StandSurfaceType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* EffectPathOverride; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACEOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EffectSurfaceOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EffectSurfaceOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EFFECTSURFACEOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
