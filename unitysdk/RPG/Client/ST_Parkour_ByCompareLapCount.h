#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_ByCompareLapCount; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D307230)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D307450)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D307420)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D307240)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D307200)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareLapCount_TypeDefinitionIndex = 10263;

	class ST_Parkour_ByCompareLapCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareLapCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareLapCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPARELAPCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
