#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ValueEvaluatorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VE_RtBattleLevelByCharacterID; }
namespace RPG::GameCore { class ValueEvaluatorConfig; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC830E0)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DC83280)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DC83250)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC830F0)
#define RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC830B0)

namespace RPG::GameCore
{
	class VE_RtBattleLevelByCharacterID : public ::RPG::GameCore::ValueEvaluatorConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* CharacterID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::VE_RtBattleLevelByCharacterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::VE_RtBattleLevelByCharacterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VE_RTBATTLELEVELBYCHARACTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
