#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareItemNumber; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B9210)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B94B0)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B9470)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B9220)
#define RPG_GAMECORE_BYCOMPAREITEMNUMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B91D0)

namespace RPG::GameCore
{
	class ByCompareItemNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ItemID; // 0x20
		::RPG::GameCore::DynamicFloat* Number; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUMBER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
