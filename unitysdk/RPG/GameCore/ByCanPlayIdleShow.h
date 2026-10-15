#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCanPlayIdleShow; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCANPLAYIDLESHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D488CB0)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D488F50)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D488ED0)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D488CF0)
#define RPG_GAMECORE_BYCANPLAYIDLESHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D488C30)

namespace RPG::GameCore
{
	class ByCanPlayIdleShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean IgnoreForbidPlayIdleShow; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCanPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCanPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCANPLAYIDLESHOW_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
