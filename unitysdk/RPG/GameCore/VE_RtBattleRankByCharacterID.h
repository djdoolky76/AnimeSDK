#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_RtBattleRankByCharacterID; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC56A20)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC56BC0)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC56B90)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC56A30)
#define RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC569F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VE_RtBattleRankByCharacterID_TypeDefinitionIndex = 24265;

	class VE_RtBattleRankByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleRankByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleRankByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLERANKBYCHARACTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
