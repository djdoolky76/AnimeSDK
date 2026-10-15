#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/MLFCEMNDFDM.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define AHHNGJGLOKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71F0)
#define AHHNGJGLOKA_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1C72F0)
#define AHHNGJGLOKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C72C0)
#define AHHNGJGLOKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C7270)
#define AHHNGJGLOKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C7260)
#define AHHNGJGLOKA_GET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1690)
#define AHHNGJGLOKA_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xF7560)
#define AHHNGJGLOKA_GET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE620)
#define AHHNGJGLOKA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xEB81BA0)
#define AHHNGJGLOKA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xEB81B60)
#define AHHNGJGLOKA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1C7240)
#define AHHNGJGLOKA_SET_INSTANCEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C7220)
#define AHHNGJGLOKA_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1C7210)
#define AHHNGJGLOKA_SET_ROLEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAF40)
#define AHHNGJGLOKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C7230)

	struct alignas(4) AHHNGJGLOKA
	{
		::DNFDBKCPBNM _RoleIdentifier_k__BackingField; // 0x10
		::APCGKBOPGJL _PrototypeIdentifier_k__BackingField; // 0x14
		::MLFCEMNDFDM _InstanceIdentifier_k__BackingField; // 0x1C
		::System::Void _ctor(::DNFDBKCPBNM a1, ::APCGKBOPGJL a2, ::MLFCEMNDFDM a3)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::APCGKBOPGJL, ::MLFCEMNDFDM))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::DNFDBKCPBNM get_RoleIdentifier()
		{
			return ((::DNFDBKCPBNM(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_GET_ROLEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_RoleIdentifier(::DNFDBKCPBNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_SET_ROLEIDENTIFIER_OFFSET))(this, a1);
		}

		::APCGKBOPGJL get_PrototypeIdentifier()
		{
			return ((::APCGKBOPGJL(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_PrototypeIdentifier(::APCGKBOPGJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
		}

		::MLFCEMNDFDM get_InstanceIdentifier()
		{
			return ((::MLFCEMNDFDM(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_GET_INSTANCEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_InstanceIdentifier(::MLFCEMNDFDM a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLFCEMNDFDM))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_SET_INSTANCEIDENTIFIER_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::AHHNGJGLOKA a1, ::AHHNGJGLOKA a2)
		{
			return ((::System::Boolean(*)(::AHHNGJGLOKA, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::AHHNGJGLOKA a1, ::AHHNGJGLOKA a2)
		{
			return ((::System::Boolean(*)(::AHHNGJGLOKA, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::AHHNGJGLOKA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::DNFDBKCPBNM a1, ::APCGKBOPGJL a2, ::MLFCEMNDFDM a3)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::APCGKBOPGJL, ::MLFCEMNDFDM))((::PBYTE)hIl2Cpp + AHHNGJGLOKA_DECONSTRUCT_OFFSET))(this, a1, a2, a3);
		}

	};
