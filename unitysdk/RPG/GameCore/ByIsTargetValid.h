#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsTargetValid; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISTARGETVALID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D525860)
#define RPG_GAMECORE_BYISTARGETVALID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D525AE0)
#define RPG_GAMECORE_BYISTARGETVALID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D525AB0)
#define RPG_GAMECORE_BYISTARGETVALID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D525870)
#define RPG_GAMECORE_BYISTARGETVALID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D525830)

namespace RPG::GameCore
{
	class ByIsTargetValid : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Boolean AliveOnly; // 0x28
		::System::Boolean ExcludeDisposing; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsTargetValid* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsTargetValid*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISTARGETVALID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
