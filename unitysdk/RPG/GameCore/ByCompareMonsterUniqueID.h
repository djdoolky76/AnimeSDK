#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMonsterUniqueID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C2A00)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C2CC0)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C2C40)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C2A60)
#define RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C2980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterUniqueID_TypeDefinitionIndex = 22999;

	class ByCompareMonsterUniqueID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterUniqueID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterUniqueID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterUniqueID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERUNIQUEID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
