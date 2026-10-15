#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJABEBPIGDN;
namespace RPG::Client { class EquipmentItemData; }
namespace System { class Object; }

#define GEDPDEFFMHH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x159CFEC0)
#define GEDPDEFFMHH_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0x159CFDC0)
#define GEDPDEFFMHH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x159CFBF0)
#define GEDPDEFFMHH_CNKEDKJNHOD_OFFSET UNITYSDK_OFFSET(0x159CFB90)
#define GEDPDEFFMHH_CTOR_OFFSET UNITYSDK_OFFSET(0x159CFF20)
#define GEDPDEFFMHH_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0x159CFA00)
#define GEDPDEFFMHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x159CFFC0)
#define GEDPDEFFMHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x159CFF30)
#define GEDPDEFFMHH_FDOKPLIFGJM_OFFSET UNITYSDK_OFFSET(0x159CFE20)
#define GEDPDEFFMHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x159D0080)
#define GEDPDEFFMHH_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x159CFA60)
#define GEDPDEFFMHH_GET_UID_OFFSET UNITYSDK_OFFSET(0x159CFB80)
#define GEDPDEFFMHH_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x159CFCB0)
#define GEDPDEFFMHH_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x159CFD30)
#define GEDPDEFFMHH_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0x159CFC50)

inline static constexpr unsigned int GEDPDEFFMHH_TypeDefinitionIndex = 62725;

	class GEDPDEFFMHH : public ::System::Object
	{
	public:
		::System::UInt32 _UID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 EPGHHDPDFFE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_EPGHHDPDFFE_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_GET_UID_OFFSET))(this);
		}

		::RPG::Client::EquipmentItemData* get_Equipment()
		{
			return ((::RPG::Client::EquipmentItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_GET_EQUIPMENT_OFFSET))(this);
		}

		::System::UInt32 CNKEDKJNHOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_CNKEDKJNHOD_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::UInt32 NGOHCBGKBKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_NGOHCBGKBKN_OFFSET))(this);
		}

		::System::UInt32 JHHECJIODKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_JHHECJIODKO_OFFSET))(this);
		}

		::System::UInt32 NFINIHKKLPK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_NFINIHKKLPK_OFFSET))(this);
		}

		::System::UInt32 CEDHDEKHHFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_CEDHDEKHHFD_OFFSET))(this);
		}

		::System::UInt32 FDOKPLIFGJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_FDOKPLIFGJM_OFFSET))(this);
		}

		static ::GJABEBPIGDN* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GJABEBPIGDN*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean Equals(::GJABEBPIGDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJABEBPIGDN*))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_GETHASHCODE_OFFSET))(this);
		}

	};
