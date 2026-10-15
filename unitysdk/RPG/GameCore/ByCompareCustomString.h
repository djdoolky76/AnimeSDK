#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCustomString; }
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A6100)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A6360)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A6330)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A6110)
#define RPG_GAMECORE_BYCOMPARECUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A60D0)

namespace RPG::GameCore
{
	class ByCompareCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean IgnoreCase; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::DynamicString* LeftValue; // 0x28
		::RPG::GameCore::DynamicString* RightValue; // 0x30
		::RPG::GameCore::CompareType CompareType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECUSTOMSTRING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
