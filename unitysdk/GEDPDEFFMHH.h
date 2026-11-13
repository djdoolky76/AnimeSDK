#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJABEBPIGDN;
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class EquipmentItemData; }
namespace System { class Object; }

#define GEDPDEFFMHH_AKHHHEFPFJP_OFFSET UNITYSDK_OFFSET(0x17CD26B0)
#define GEDPDEFFMHH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17CD2710)
#define GEDPDEFFMHH_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0x17CD2650)
#define GEDPDEFFMHH_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x17CD2480)
#define GEDPDEFFMHH_CNKEDKJNHOD_OFFSET UNITYSDK_OFFSET(0x17CD2420)
#define GEDPDEFFMHH_CTOR_OFFSET UNITYSDK_OFFSET(0x17CD2770)
#define GEDPDEFFMHH_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0x17CD2290)
#define GEDPDEFFMHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17CD2810)
#define GEDPDEFFMHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x17CD2780)
#define GEDPDEFFMHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17CD28D0)
#define GEDPDEFFMHH_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x17CD22F0)
#define GEDPDEFFMHH_GET_UID_OFFSET UNITYSDK_OFFSET(0x17CD2410)
#define GEDPDEFFMHH_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x17CD2540)
#define GEDPDEFFMHH_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x17CD25C0)
#define GEDPDEFFMHH_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0x17CD24E0)

inline static constexpr unsigned int GEDPDEFFMHH_TypeDefinitionIndex = 64159;

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

		::RPG::AvatarSystem::AvatarPath* AKHHHEFPFJP()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEDPDEFFMHH_AKHHHEFPFJP_OFFSET))(this);
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
