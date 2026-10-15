#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_RtBattleSkillParamByCharacterID; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC57610)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC57840)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC57810)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC57620)
#define RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC575E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleSkillParamByCharacterID_TypeDefinitionIndex = 24262;

	class VE_RtBattleSkillParamByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Level; // 0x28
		::System::String* SkillName; // 0x30
		::RPG::GameCore::ValueEvaluatorConfig* ParamIndex; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleSkillParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLESKILLPARAMBYCHARACTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
