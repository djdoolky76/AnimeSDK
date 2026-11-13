#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJABEBPIGDN;
namespace RPG::AvatarSystem { class AvatarPath; }
namespace RPG::Client { class EquipmentItemData; }
namespace System { class Object; }

#define BFOAGHGAMIB_AKHHHEFPFJP_OFFSET UNITYSDK_OFFSET(0x151B17D0)
#define BFOAGHGAMIB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x151B1820)
#define BFOAGHGAMIB_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0x151B1770)
#define BFOAGHGAMIB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x151B15E0)
#define BFOAGHGAMIB_CNKEDKJNHOD_OFFSET UNITYSDK_OFFSET(0x151B1590)
#define BFOAGHGAMIB_CTOR_OFFSET UNITYSDK_OFFSET(0x151B1890)
#define BFOAGHGAMIB_EPGHHDPDFFE_OFFSET UNITYSDK_OFFSET(0x151B14C0)
#define BFOAGHGAMIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x151B1970)
#define BFOAGHGAMIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x151B18E0)
#define BFOAGHGAMIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x151B1A30)
#define BFOAGHGAMIB_GET_EQUIPMENT_OFFSET UNITYSDK_OFFSET(0x151B14B0)
#define BFOAGHGAMIB_GET_UID_OFFSET UNITYSDK_OFFSET(0x151B1510)
#define BFOAGHGAMIB_JHHECJIODKO_OFFSET UNITYSDK_OFFSET(0x151B1680)
#define BFOAGHGAMIB_NFINIHKKLPK_OFFSET UNITYSDK_OFFSET(0x151B16F0)
#define BFOAGHGAMIB_NGOHCBGKBKN_OFFSET UNITYSDK_OFFSET(0x151B1630)

inline static constexpr unsigned int BFOAGHGAMIB_TypeDefinitionIndex = 64158;

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

		::RPG::AvatarSystem::AvatarPath* AKHHHEFPFJP()
		{
			return ((::RPG::AvatarSystem::AvatarPath*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFOAGHGAMIB_AKHHHEFPFJP_OFFSET))(this);
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
