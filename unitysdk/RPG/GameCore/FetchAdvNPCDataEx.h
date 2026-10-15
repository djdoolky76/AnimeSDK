#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class FetchAdvNPCDataEx; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FETCHADVNPCDATAEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69FFD0)
#define RPG_GAMECORE_FETCHADVNPCDATAEX_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D6A0040)
#define RPG_GAMECORE_FETCHADVNPCDATAEX_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69FE00)

namespace RPG::GameCore
{
	class FetchAdvNPCDataEx : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATAEX_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FetchAdvNPCDataEx* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FetchAdvNPCDataEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATAEX_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FetchAdvNPCDataEx* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FetchAdvNPCDataEx*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FETCHADVNPCDATAEX_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
