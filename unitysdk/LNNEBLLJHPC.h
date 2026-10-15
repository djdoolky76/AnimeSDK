#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define LNNEBLLJHPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1B380)
#define LNNEBLLJHPC_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1B440)
#define LNNEBLLJHPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B410)
#define LNNEBLLJHPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3D0)
#define LNNEBLLJHPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B3C0)
#define LNNEBLLJHPC_GET_ID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define LNNEBLLJHPC_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1D30)
#define LNNEBLLJHPC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB7E9390)
#define LNNEBLLJHPC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB7E9350)
#define LNNEBLLJHPC_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B3A0)
#define LNNEBLLJHPC_SET_ID_OFFSET UNITYSDK_OFFSET(0xACF0)
#define LNNEBLLJHPC_SET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x94B0)
#define LNNEBLLJHPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B390)

inline static constexpr unsigned int LNNEBLLJHPC_TypeDefinitionIndex = 51970;

	struct alignas(4) LNNEBLLJHPC
	{
		::APCGKBOPGJL _PrototypeIdentifier_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_CTOR_OFFSET))(this, a1, a2);
		}

		::APCGKBOPGJL get_PrototypeIdentifier()
		{
			return ((::APCGKBOPGJL(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_PrototypeIdentifier(::APCGKBOPGJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_SET_PROTOTYPEIDENTIFIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_SET_ID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::LNNEBLLJHPC a1, ::LNNEBLLJHPC a2)
		{
			return ((::System::Boolean(*)(::LNNEBLLJHPC, ::LNNEBLLJHPC))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::LNNEBLLJHPC a1, ::LNNEBLLJHPC a2)
		{
			return ((::System::Boolean(*)(::LNNEBLLJHPC, ::LNNEBLLJHPC))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::LNNEBLLJHPC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNNEBLLJHPC))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::APCGKBOPGJL a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::APCGKBOPGJL, ::System::UInt32))((::PBYTE)hIl2Cpp + LNNEBLLJHPC_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
