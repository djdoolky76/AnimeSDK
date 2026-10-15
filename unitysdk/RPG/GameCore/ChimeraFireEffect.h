#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraFireEffect; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAFIREEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AD2B0)
#define RPG_GAMECORE_CHIMERAFIREEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AD2C0)
#define RPG_GAMECORE_CHIMERAFIREEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AD260)

namespace RPG::GameCore
{
	class ChimeraFireEffect : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::String* EffectPath; // 0x20
		::System::String* UniqueName; // 0x28
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAFIREEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraFireEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraFireEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAFIREEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraFireEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraFireEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAFIREEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
