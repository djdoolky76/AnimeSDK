#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlacementType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCHANGEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D16CBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipChangeEvent_TypeDefinitionIndex = 66489;

	class GridFightEquipChangeEvent : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* DisplayRole; // 0x10
		::RPG::Client::GridFightRole* ChangedRole; // 0x18
		::System::Boolean FromXianzhou; // 0x20
		::System::Boolean FromAugment; // 0x21
		::System::Boolean IsNewEquip; // 0x22
		::System::Byte _padding0[0x1];
		::RPG::Client::GridFightPlacementType PlacementType; // 0x24
		::System::UInt32 PlacementIndex; // 0x28
		::System::Int32 AddEquipIndex; // 0x2C
		::System::UInt32 EquipID; // 0x30
		::System::Int32 Rank; // 0x34
		::System::UInt32 PosIndex; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCHANGEEVENT_CTOR_OFFSET))(this);
		}

	};
}
