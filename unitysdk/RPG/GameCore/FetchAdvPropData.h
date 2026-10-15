#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FetchAdvPropData; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FETCHADVPROPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0500)
#define RPG_GAMECORE_FETCHADVPROPDATA_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D6A0570)
#define RPG_GAMECORE_FETCHADVPROPDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A0330)

namespace RPG::GameCore
{
	class FetchAdvPropData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVPROPDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FetchAdvPropData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FetchAdvPropData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVPROPDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvPropData* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvPropData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVPROPDATA_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
