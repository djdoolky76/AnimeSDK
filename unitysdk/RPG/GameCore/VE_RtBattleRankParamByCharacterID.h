#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_RtBattleRankParamByCharacterID; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC847E0)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC849C0)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC84990)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC847F0)
#define RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC847B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleRankParamByCharacterID_TypeDefinitionIndex = 24263;

	class VE_RtBattleRankParamByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20
		::RPG::GameCore::ValueEvaluatorConfig* Rank; // 0x28
		::RPG::GameCore::ValueEvaluatorConfig* ParamIndex; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankParamByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKPARAMBYCHARACTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
