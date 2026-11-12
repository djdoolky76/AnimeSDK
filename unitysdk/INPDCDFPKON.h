#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::GameCore { class IdleLiveEquipSlotRow; }
namespace System { class String; }

#define INPDCDFPKON_CTOR_OFFSET UNITYSDK_OFFSET(0xB829D70)
#define INPDCDFPKON_GET_EQUIP_OFFSET UNITYSDK_OFFSET(0xB829D40)
#define INPDCDFPKON_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xB829D60)
#define INPDCDFPKON_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xB829D30)
#define INPDCDFPKON_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0xB829DB0)
#define INPDCDFPKON_MLNGAKHBJMI_OFFSET UNITYSDK_OFFSET(0xB829E00)
#define INPDCDFPKON_SET_EQUIP_OFFSET UNITYSDK_OFFSET(0xB829D50)

inline static constexpr unsigned int INPDCDFPKON_TypeDefinitionIndex = 77550;

	class INPDCDFPKON : public ::System::Object
	{
	public:
		::System::String* NDKFOEHAIED; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* _Equip_k__BackingField; // 0x18
		::RPG::Client::TextID _Title_k__BackingField; // 0x20
		::System::UInt32 _SlotId_k__BackingField; // 0x30
		::System::UInt32 IPONDHMHDBI; // 0x34
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
