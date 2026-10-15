#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIPMNNAHIFP.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define APCGKBOPGJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x111F0)
#define APCGKBOPGJL_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define APCGKBOPGJL_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13B40)
#define APCGKBOPGJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2E7D8E0)
#define APCGKBOPGJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x2E7D8B0)
#define APCGKBOPGJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2E7D8A0)
#define APCGKBOPGJL_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xFE70)
#define APCGKBOPGJL_GET_SPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE620)
#define APCGKBOPGJL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15BA4E80)
#define APCGKBOPGJL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15BA4E60)
#define APCGKBOPGJL_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x2E7D880)
#define APCGKBOPGJL_SET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0xFE80)
#define APCGKBOPGJL_SET_SPECIFICPATHIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xAF40)
#define APCGKBOPGJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E7D870)

inline static constexpr unsigned int APCGKBOPGJL_TypeDefinitionIndex = 51968;

	struct alignas(4) APCGKBOPGJL
	{
		::OIPMNNAHIFP _SpecificPathIdentifier_k__BackingField; // 0x10
		::System::UInt32 _EnhancedID_k__BackingField; // 0x14
		::System::Void _ctor(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + APCGKBOPGJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + APCGKBOPGJL_CTOR_1_OFFSET))(this, a1, a2);
		}

		::OIPMNNAHIFP get_SpecificPathIdentifier()
		{
			return ((::OIPMNNAHIFP(*)(::PVOID))((::PBYTE)hIl2Cpp + APCGKBOPGJL_GET_SPECIFICPATHIDENTIFIER_OFFSET))(this);
		}

		::System::Void set_SpecificPathIdentifier(::OIPMNNAHIFP a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + APCGKBOPGJL_SET_SPECIFICPATHIDENTIFIER_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCGKBOPGJL_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Void set_EnhancedID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCGKBOPGJL_SET_ENHANCEDID_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCGKBOPGJL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + APCGKBOPGJL_PRINTMEMBERS_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean op_Inequality(::APCGKBOPGJL a1, ::APCGKBOPGJL a2)
		{
			return ((::System::Boolean(*)(::APCGKBOPGJL, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + APCGKBOPGJL_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Equality(::APCGKBOPGJL a1, ::APCGKBOPGJL a2)
		{
			return ((::System::Boolean(*)(::APCGKBOPGJL, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + APCGKBOPGJL_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + APCGKBOPGJL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCGKBOPGJL_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::APCGKBOPGJL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + APCGKBOPGJL_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Void Deconstruct(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + APCGKBOPGJL_DECONSTRUCT_OFFSET))(this, a1, a2);
		}

	};
