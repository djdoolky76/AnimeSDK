#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattlePostEvent; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56A730)
#define RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56A740)
#define RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56BFF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattlePostEvent_TypeDefinitionIndex = 15845;

	class ChimeraBattlePostEvent : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* To; // 0x18
		::System::String* Content; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattlePostEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattlePostEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattlePostEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattlePostEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPOSTEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
