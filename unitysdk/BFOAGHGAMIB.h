#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJABEBPIGDN;
namespace RPG::Client { class EquipmentItemData; }
namespace System { class Object; }

#define BFOAGHGAMIB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB174640)
#define BFOAGHGAMIB_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0xB174550)
#define BFOAGHGAMIB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0xB1743C0)
#define BFOAGHGAMIB_CNKEDKJNHOD_OFFSET UNITYSDK_OFFSET(0xB174370)
#define BFOAGHGAMIB_CTOR_OFFSET UNITYSDK_OFFSET(0xB1746B0)
#define BFOAGHGAMIB_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0xB1742A0)
#define BFOAGHGAMIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB174790)
#define BFOAGHGAMIB_EQUALS_OFFSET UNITYSDK_OFFSET(0xB174700)
#define BFOAGHGAMIB_FDOKPLIFGJM_OFFSET UNITYSDK_OFFSET(0xB1745B0)
#define BFOAGHGAMIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB174850)
#define BFOAGHGAMIB_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0xB174290)
#define BFOAGHGAMIB_GET_UID_OFFSET UNITYSDK_OFFSET(0xB1742F0)
#define BFOAGHGAMIB_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0xB174460)
#define BFOAGHGAMIB_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0xB1744D0)
#define BFOAGHGAMIB_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0xB174410)

	class BFOAGHGAMIB : public ::System::Object
	{
	public:
		::RPG::Client::EquipmentItemData* _Equipment_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::EquipmentItemData* get_Equipment()
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_GET_EQUIPMENT_OFFSET))(this);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_EPGHHDPDFFE_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_GET_UID_OFFSET))(this);
		}

		::System::UInt32 CNKEDKJNHOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_CNKEDKJNHOD_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::UInt32 NGOHCBGKBKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_NGOHCBGKBKN_OFFSET))(this);
		}

		::System::UInt32 JHHECJIODKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_JHHECJIODKO_OFFSET))(this);
		}

		::System::UInt32 NFINIHKKLPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_NFINIHKKLPK_OFFSET))(this);
		}

		::System::UInt32 CEDHDEKHHFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_CEDHDEKHHFD_OFFSET))(this);
		}

		::System::UInt32 FDOKPLIFGJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_FDOKPLIFGJM_OFFSET))(this);
		}

		static ::GJABEBPIGDN* BPLPBPMEODA(::RPG::Client::EquipmentItemData* a1)
		{
			return ((::GJABEBPIGDN*(*)(::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean Equals(::GJABEBPIGDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJABEBPIGDN*))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_GETHASHCODE_OFFSET))(this);
		}

	};
