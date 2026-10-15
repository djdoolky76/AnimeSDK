#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByComparePhoneMessageItem; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C7D40)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C7EF0)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C7EC0)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C7D50)
#define RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C7D10)

namespace RPG::GameCore
{
	class ByComparePhoneMessageItem : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MessageItemID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByComparePhoneMessageItem* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByComparePhoneMessageItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPHONEMESSAGEITEM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
