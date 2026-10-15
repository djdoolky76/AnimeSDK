#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraPostSoundEvent; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D580A40)
#define RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D580A50)
#define RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5809F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraPostSoundEvent_TypeDefinitionIndex = 15864;

	class ChimeraPostSoundEvent : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AnchorName; // 0x18
		::System::String* SoundEvent; // 0x20
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraPostSoundEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraPostSoundEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraPostSoundEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraPostSoundEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPOSTSOUNDEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
