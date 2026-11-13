#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBPOKKNFOKM;
class JJFKMEJGOAG;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define JJFKMEJGOAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1742D4D0)
#define JJFKMEJGOAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1742CCA0)
#define JJFKMEJGOAG_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1742D4F0)
#define JJFKMEJGOAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1742D100)
#define JJFKMEJGOAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1742D410)
#define JJFKMEJGOAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1742D260)
#define JJFKMEJGOAG_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1742CCB0)
#define JJFKMEJGOAG_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1742CCE0)
#define JJFKMEJGOAG_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1742D0E0)
#define JJFKMEJGOAG_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1742D0B0)
#define JJFKMEJGOAG_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1742CFA0)
#define JJFKMEJGOAG_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x1742CCF0)
#define JJFKMEJGOAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1742CD00)
#define JJFKMEJGOAG__CLONE___OFFSET UNITYSDK_OFFSET(0x1742D470)

inline static constexpr unsigned int JJFKMEJGOAG_TypeDefinitionIndex = 84844;

	class JJFKMEJGOAG : public ::System::Object
	{
	public:
		::JBPOKKNFOKM* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::JBPOKKNFOKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::JJFKMEJGOAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJFKMEJGOAG*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::JBPOKKNFOKM* get_Proto()
		{
			return ((::JBPOKKNFOKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::JBPOKKNFOKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::JJFKMEJGOAG* a1, ::JJFKMEJGOAG* a2)
		{
			return ((::System::Boolean(*)(::JJFKMEJGOAG*, ::JJFKMEJGOAG*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::JJFKMEJGOAG* a1, ::JJFKMEJGOAG* a2)
		{
			return ((::System::Boolean(*)(::JJFKMEJGOAG*, ::JJFKMEJGOAG*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJFKMEJGOAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJFKMEJGOAG*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_EQUALS_1_OFFSET))(this, a1);
		}

		::JJFKMEJGOAG* _Clone__()
		{
			return ((::JJFKMEJGOAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFKMEJGOAG__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::JBPOKKNFOKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBPOKKNFOKM*))((::PBYTE)hIl2Cpp + JJFKMEJGOAG_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
