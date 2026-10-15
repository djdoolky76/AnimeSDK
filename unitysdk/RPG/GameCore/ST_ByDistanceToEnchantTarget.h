#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_EnchantTargetDistanceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class ST_ByDistanceToEnchantTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA46D70)
#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA46FC0)
#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA46F90)
#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA46D80)
#define RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA46D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistanceToEnchantTarget_TypeDefinitionIndex = 20078;

	class ST_ByDistanceToEnchantTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::ST_EnchantTargetDistanceType DistanceType; // 0x24
		::RPG::GameCore::PredicateConfig* FallBackPredicate; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOENCHANTTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
