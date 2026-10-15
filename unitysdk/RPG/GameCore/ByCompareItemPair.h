#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareItemPair; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREITEMPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48C1B0)
#define RPG_GAMECORE_BYCOMPAREITEMPAIR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48C1C0)
#define RPG_GAMECORE_BYCOMPAREITEMPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48C090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareItemPair_TypeDefinitionIndex = 21092;

	class ByCompareItemPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 ItemNum; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareItemPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareItemPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareItemPair* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareItemPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREITEMPAIR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
