#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemDisplaySortNewRow; }

#define RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D768540)
#define RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D768350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemDisplaySortNewRow_TypeDefinitionIndex = 13888;

	class ItemDisplaySortNewRow : public ::System::Object
	{
	public:
		::System::UInt32 Rank; // 0x10
		::System::UInt32 ID; // 0x14
		::RPG::GameCore::ItemDisplaySortType Type; // 0x18
		::System::Int32 SortID; // 0x1C
		::System::UInt32 Param; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemDisplaySortNewRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMDISPLAYSORTNEWROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
