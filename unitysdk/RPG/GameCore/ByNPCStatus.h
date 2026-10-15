#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCStatus.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByNPCStatus; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYNPCSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D52CA20)
#define RPG_GAMECORE_BYNPCSTATUS_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D52CC60)
#define RPG_GAMECORE_BYNPCSTATUS_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D52CC30)
#define RPG_GAMECORE_BYNPCSTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D52CA30)
#define RPG_GAMECORE_BYNPCSTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D52C9F0)

namespace RPG::GameCore
{
	class ByNPCStatus : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::NPCStatus NPCStatus; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByNPCStatus* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByNPCStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYNPCSTATUS_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
