#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareSwitchHandCatchItem; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4DBF70)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4DC290)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4DC260)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4DBF80)
#define RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4DBF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSwitchHandCatchItem_TypeDefinitionIndex = 20956;

	class ByCompareSwitchHandCatchItem : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ID; // 0x20
		::RPG::GameCore::DynamicFloat* GroupID; // 0x28
		::RPG::GameCore::DynamicFloat* GroupInstanceID; // 0x30
		::System::Boolean InvalidRetureValue; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSwitchHandCatchItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSwitchHandCatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESWITCHHANDCATCHITEM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
