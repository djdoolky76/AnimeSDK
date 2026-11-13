#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareMonsterID; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREMONSTERID_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE01120)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1CE013E0)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1CE01360)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE01180)
#define RPG_GAMECORE_BYCOMPAREMONSTERID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE010A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareMonsterID_TypeDefinitionIndex = 23425;

	class ByCompareMonsterID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::DynamicFloat* TargetMonsterID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareMonsterID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareMonsterID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREMONSTERID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
