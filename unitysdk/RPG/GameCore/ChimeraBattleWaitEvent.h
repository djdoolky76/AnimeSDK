#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleWaitEvent; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEWAITEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56B4A0)
#define RPG_GAMECORE_CHIMERABATTLEWAITEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56B4B0)
#define RPG_GAMECORE_CHIMERABATTLEWAITEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56C270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleWaitEvent_TypeDefinitionIndex = 15846;

	class ChimeraBattleWaitEvent : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* Content; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEWAITEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleWaitEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEWAITEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleWaitEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleWaitEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEWAITEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
