#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetMapCreatedBattleEvent; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB6A7B0)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB6A840)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB6A820)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB6A7C0)
#define RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB6A740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCreatedBattleEvent_TypeDefinitionIndex = 23931;

	class TargetMapCreatedBattleEvent : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreatedBattleEvent* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreatedBattleEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATEDBATTLEEVENT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
