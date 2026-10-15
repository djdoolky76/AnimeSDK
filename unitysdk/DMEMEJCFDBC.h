#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMEMEJCFDBC;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define DMEMEJCFDBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0xFEBDBB0)
#define DMEMEJCFDBC_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBDBA0)
#define DMEMEJCFDBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xFEBDA80)
#define DMEMEJCFDBC_EQUALS_OFFSET UNITYSDK_OFFSET(0xFEBD990)
#define DMEMEJCFDBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xFEBD850)
#define DMEMEJCFDBC_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xFEBD490)
#define DMEMEJCFDBC_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xFEBD7B0)
#define DMEMEJCFDBC_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xFEBD710)
#define DMEMEJCFDBC_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xFEBD700)
#define DMEMEJCFDBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFEBD4C0)
#define DMEMEJCFDBC__CLONE___OFFSET UNITYSDK_OFFSET(0xFEBDB90)

inline static constexpr unsigned int DMEMEJCFDBC_TypeDefinitionIndex = 80605;

	class DMEMEJCFDBC : public ::System::Object
	{
	public:
		::System::Void _ctor(::DMEMEJCFDBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMEMEJCFDBC*))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_CTOR_1_OFFSET))(this);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::DMEMEJCFDBC* a1, ::DMEMEJCFDBC* a2)
		{
			return ((::System::Boolean(*)(::DMEMEJCFDBC*, ::DMEMEJCFDBC*))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::DMEMEJCFDBC* a1, ::DMEMEJCFDBC* a2)
		{
			return ((::System::Boolean(*)(::DMEMEJCFDBC*, ::DMEMEJCFDBC*))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMEMEJCFDBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMEMEJCFDBC*))((::PBYTE)hIl2Cpp + DMEMEJCFDBC_EQUALS_1_OFFSET))(this, a1);
		}

		::DMEMEJCFDBC* _Clone__()
		{
			return ((::DMEMEJCFDBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEMEJCFDBC__CLONE___OFFSET))(this);
		}

	};
