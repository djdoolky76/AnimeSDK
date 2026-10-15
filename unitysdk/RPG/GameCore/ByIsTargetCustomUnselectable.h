#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTargetCustomUnselectable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D524AA0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D524CA0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D524C70)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D524AB0)
#define RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D524A70)

namespace RPG::GameCore
{
	class ByIsTargetCustomUnselectable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETCUSTOMUNSELECTABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
