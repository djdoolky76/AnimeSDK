#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CountToModifierMapRangeItem; }

#define RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E03A0)
#define RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E0230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CountToModifierMapRangeItem_TypeDefinitionIndex = 16064;

	class CountToModifierMapRangeItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MinValue; // 0x10
		::System::UInt32 MaxValue; // 0x14
		::System::UInt32 ModifierID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CountToModifierMapRangeItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CountToModifierMapRangeItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COUNTTOMODIFIERMAPRANGEITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
