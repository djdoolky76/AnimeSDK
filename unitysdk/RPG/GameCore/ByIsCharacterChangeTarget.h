#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsCharacterChangeTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1FFF60)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E200180)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E200140)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E1FFF70)
#define RPG_GAMECORE_BYISCHARACTERCHANGETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E1FFF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsCharacterChangeTarget_TypeDefinitionIndex = 24062;

	class ByIsCharacterChangeTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::AliveStateMask AliveStateMask; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsCharacterChangeTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsCharacterChangeTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCHARACTERCHANGETARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
