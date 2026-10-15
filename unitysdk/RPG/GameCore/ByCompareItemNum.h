#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareItemNum; }
namespace RPG::GameCore { class ByCompareItemPair; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREITEMNUM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B8BB0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4B8DB0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4B8D80)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4B8BC0)
#define RPG_GAMECORE_BYCOMPAREITEMNUM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4B8B80)

namespace RPG::GameCore
{
	class ByCompareItemNum : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ByCompareItemPair*>* ItemPair; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemNum* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemNum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMNUM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
