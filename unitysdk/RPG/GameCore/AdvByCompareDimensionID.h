#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvByCompareDimensionID; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D391650)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D391880)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D391840)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D391660)
#define RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D391610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCompareDimensionID_TypeDefinitionIndex = 20572;

	class AdvByCompareDimensionID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::System::Int16 CompareValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvByCompareDimensionID* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvByCompareDimensionID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCOMPAREDIMENSIONID_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
