#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAIValueCompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ST_Parkour_ByCompareProjectileHitCount; }
namespace SimpleJSON { class JSONNode; }

#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D307A00)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D307C20)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D307BF0)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D307A10)
#define RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3079D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ST_Parkour_ByCompareProjectileHitCount_TypeDefinitionIndex = 10265;

	class ST_Parkour_ByCompareProjectileHitCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ComplexSkillAIValueCompareType CompareType; // 0x20
		::System::Int32 CompareValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::Client::ST_Parkour_ByCompareProjectileHitCount*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ST_PARKOUR_BYCOMPAREPROJECTILEHITCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
