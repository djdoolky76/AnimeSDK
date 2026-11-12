#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EILMEGELLLJ;
class NMLOHFBGMAI;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define NMLOHFBGMAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC575B10)
#define NMLOHFBGMAI_CTOR_OFFSET UNITYSDK_OFFSET(0xC5752E0)
#define NMLOHFBGMAI_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xC575B30)
#define NMLOHFBGMAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC575740)
#define NMLOHFBGMAI_EQUALS_OFFSET UNITYSDK_OFFSET(0xC575A50)
#define NMLOHFBGMAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC5758A0)
#define NMLOHFBGMAI_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xC5752F0)
#define NMLOHFBGMAI_GET_PROTO_OFFSET UNITYSDK_OFFSET(0xC575320)
#define NMLOHFBGMAI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC575720)
#define NMLOHFBGMAI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC5756F0)
#define NMLOHFBGMAI_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC5755E0)
#define NMLOHFBGMAI_SET_PROTO_OFFSET UNITYSDK_OFFSET(0xC575330)
#define NMLOHFBGMAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC575340)
#define NMLOHFBGMAI__CLONE___OFFSET UNITYSDK_OFFSET(0xC575AB0)

inline static constexpr unsigned int NMLOHFBGMAI_TypeDefinitionIndex = 83386;

	class NMLOHFBGMAI : public ::System::Object
	{
	public:
		::EILMEGELLLJ* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::EILMEGELLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILMEGELLLJ*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::NMLOHFBGMAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMLOHFBGMAI*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::EILMEGELLLJ* get_Proto()
		{
			return ((::EILMEGELLLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::EILMEGELLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILMEGELLLJ*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::NMLOHFBGMAI* a1, ::NMLOHFBGMAI* a2)
		{
			return ((::System::Boolean(*)(::NMLOHFBGMAI*, ::NMLOHFBGMAI*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::NMLOHFBGMAI* a1, ::NMLOHFBGMAI* a2)
		{
			return ((::System::Boolean(*)(::NMLOHFBGMAI*, ::NMLOHFBGMAI*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMLOHFBGMAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMLOHFBGMAI*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_EQUALS_1_OFFSET))(this, a1);
		}

		::NMLOHFBGMAI* _Clone__()
		{
			return ((::NMLOHFBGMAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMLOHFBGMAI__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::EILMEGELLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EILMEGELLLJ*))((::PBYTE)hIl2Cpp + NMLOHFBGMAI_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
