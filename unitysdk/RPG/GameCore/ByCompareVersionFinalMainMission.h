#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareVersionFinalMainMission; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E4A00)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E4BB0)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E4B80)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E4A10)
#define RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E49D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareVersionFinalMainMission_TypeDefinitionIndex = 20765;

	class ByCompareVersionFinalMainMission : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareVersionFinalMainMission* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareVersionFinalMainMission*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREVERSIONFINALMAINMISSION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
