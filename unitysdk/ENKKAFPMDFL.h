#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENKKAFPMDFL;
class MGFJDLIBABO;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define ENKKAFPMDFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x155A5F20)
#define ENKKAFPMDFL_CTOR_OFFSET UNITYSDK_OFFSET(0x155A56F0)
#define ENKKAFPMDFL_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x155A5F40)
#define ENKKAFPMDFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x155A5B50)
#define ENKKAFPMDFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x155A5E60)
#define ENKKAFPMDFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x155A5CB0)
#define ENKKAFPMDFL_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x155A5700)
#define ENKKAFPMDFL_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x155A5730)
#define ENKKAFPMDFL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x155A5B30)
#define ENKKAFPMDFL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x155A5B00)
#define ENKKAFPMDFL_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x155A59F0)
#define ENKKAFPMDFL_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x155A5740)
#define ENKKAFPMDFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x155A5750)
#define ENKKAFPMDFL__CLONE___OFFSET UNITYSDK_OFFSET(0x155A5EC0)

inline static constexpr unsigned int ENKKAFPMDFL_TypeDefinitionIndex = 82065;

	class ENKKAFPMDFL : public ::System::Object
	{
	public:
		::MGFJDLIBABO* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::MGFJDLIBABO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGFJDLIBABO*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::ENKKAFPMDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENKKAFPMDFL*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::MGFJDLIBABO* get_Proto()
		{
			return ((::MGFJDLIBABO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::MGFJDLIBABO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGFJDLIBABO*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::ENKKAFPMDFL* a1, ::ENKKAFPMDFL* a2)
		{
			return ((::System::Boolean(*)(::ENKKAFPMDFL*, ::ENKKAFPMDFL*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::ENKKAFPMDFL* a1, ::ENKKAFPMDFL* a2)
		{
			return ((::System::Boolean(*)(::ENKKAFPMDFL*, ::ENKKAFPMDFL*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENKKAFPMDFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENKKAFPMDFL*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_EQUALS_1_OFFSET))(this, a1);
		}

		::ENKKAFPMDFL* _Clone__()
		{
			return ((::ENKKAFPMDFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENKKAFPMDFL__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::MGFJDLIBABO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGFJDLIBABO*))((::PBYTE)hIl2Cpp + ENKKAFPMDFL_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
