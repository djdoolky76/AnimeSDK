#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIKICHNEPKE;
class MKMEPOHGPMN;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define MKMEPOHGPMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B90C480)
#define MKMEPOHGPMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B90BC50)
#define MKMEPOHGPMN_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1B90C4A0)
#define MKMEPOHGPMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B90C0B0)
#define MKMEPOHGPMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B90C3C0)
#define MKMEPOHGPMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B90C210)
#define MKMEPOHGPMN_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B90BC60)
#define MKMEPOHGPMN_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1B90BC90)
#define MKMEPOHGPMN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B90C090)
#define MKMEPOHGPMN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B90C060)
#define MKMEPOHGPMN_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B90BF50)
#define MKMEPOHGPMN_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x1B90BCA0)
#define MKMEPOHGPMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B90BCB0)
#define MKMEPOHGPMN__CLONE___OFFSET UNITYSDK_OFFSET(0x1B90C420)

inline static constexpr unsigned int MKMEPOHGPMN_TypeDefinitionIndex = 83389;

	class MKMEPOHGPMN : public ::System::Object
	{
	public:
		::AIKICHNEPKE* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::AIKICHNEPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKICHNEPKE*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MKMEPOHGPMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKMEPOHGPMN*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::AIKICHNEPKE* get_Proto()
		{
			return ((::AIKICHNEPKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::AIKICHNEPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKICHNEPKE*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::MKMEPOHGPMN* a1, ::MKMEPOHGPMN* a2)
		{
			return ((::System::Boolean(*)(::MKMEPOHGPMN*, ::MKMEPOHGPMN*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::MKMEPOHGPMN* a1, ::MKMEPOHGPMN* a2)
		{
			return ((::System::Boolean(*)(::MKMEPOHGPMN*, ::MKMEPOHGPMN*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKMEPOHGPMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKMEPOHGPMN*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_EQUALS_1_OFFSET))(this, a1);
		}

		::MKMEPOHGPMN* _Clone__()
		{
			return ((::MKMEPOHGPMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKMEPOHGPMN__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::AIKICHNEPKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIKICHNEPKE*))((::PBYTE)hIl2Cpp + MKMEPOHGPMN_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
