#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VE_CharacterID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_CHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7FC10)
#define RPG_GAMECORE_VE_CHARACTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC7FE30)
#define RPG_GAMECORE_VE_CHARACTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC7FDD0)
#define RPG_GAMECORE_VE_CHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7FC50)
#define RPG_GAMECORE_VE_CHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7FBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_CharacterID_TypeDefinitionIndex = 24273;

	class VE_CharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_CharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_CharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_CHARACTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
