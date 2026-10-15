#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::GameCore { class IdleLiveEquipSlotRow; }
namespace System { class String; }

#define INPDCDFPKON_CTOR_OFFSET UNITYSDK_OFFSET(0x164F88F0)
#define INPDCDFPKON_GET_EQUIP_OFFSET UNITYSDK_OFFSET(0x164F88C0)
#define INPDCDFPKON_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0x164F88E0)
#define INPDCDFPKON_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x164F88B0)
#define INPDCDFPKON_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0x164F8920)
#define INPDCDFPKON_MLNGAKHBJMI_OFFSET UNITYSDK_OFFSET(0x164F8970)
#define INPDCDFPKON_SET_EQUIP_OFFSET UNITYSDK_OFFSET(0x164F88D0)

	class INPDCDFPKON : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _Equip_k__BackingField; // 0x10
		::System::String* NDKFOEHAIED; // 0x18
		::System::UInt32 _SlotId_k__BackingField; // 0x20
		::System::UInt32 IPONDHMHDBI; // 0x24
		::RPG::Client::TextID _Title_k__BackingField; // 0x28
		::System::Void _ctor(::RPG::GameCore::IdleLiveEquipSlotRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveEquipSlotRow*))((::PBYTE)hIl2Cpp + INPDCDFPKON_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDCDFPKON_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* get_Equip()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDCDFPKON_GET_EQUIP_OFFSET))(this);
		}

		::System::Void set_Equip(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + INPDCDFPKON_SET_EQUIP_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDCDFPKON_GET_SLOTID_OFFSET))(this);
		}

		::System::Void HGGABIEGFJB(::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData*))((::PBYTE)hIl2Cpp + INPDCDFPKON_HGGABIEGFJB_OFFSET))(this, a1);
		}

		::System::String* MLNGAKHBJMI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPDCDFPKON_MLNGAKHBJMI_OFFSET))(this);
		}

	};
