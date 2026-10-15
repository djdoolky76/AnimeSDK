#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFELIBKIOKE;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define BFELIBKIOKE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB161B00)
#define BFELIBKIOKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB161AF0)
#define BFELIBKIOKE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB161890)
#define BFELIBKIOKE_EQUALS_OFFSET UNITYSDK_OFFSET(0xB1619F0)
#define BFELIBKIOKE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB161900)
#define BFELIBKIOKE_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB161610)
#define BFELIBKIOKE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB161810)
#define BFELIBKIOKE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB161790)
#define BFELIBKIOKE_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB161780)
#define BFELIBKIOKE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB161640)
#define BFELIBKIOKE__CLONE___OFFSET UNITYSDK_OFFSET(0xB161AB0)

	class BFELIBKIOKE : public ::System::Object
	{
	public:
		::System::Void _ctor(::BFELIBKIOKE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFELIBKIOKE*))((::PBYTE)hIl2Cpp + BFELIBKIOKE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFELIBKIOKE_CTOR_1_OFFSET))(this);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFELIBKIOKE_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFELIBKIOKE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + BFELIBKIOKE_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::BFELIBKIOKE* a1, ::BFELIBKIOKE* a2)
		{
			return ((::System::Boolean(*)(::BFELIBKIOKE*, ::BFELIBKIOKE*))((::PBYTE)hIl2Cpp + BFELIBKIOKE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::BFELIBKIOKE* a1, ::BFELIBKIOKE* a2)
		{
			return ((::System::Boolean(*)(::BFELIBKIOKE*, ::BFELIBKIOKE*))((::PBYTE)hIl2Cpp + BFELIBKIOKE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFELIBKIOKE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFELIBKIOKE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFELIBKIOKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFELIBKIOKE*))((::PBYTE)hIl2Cpp + BFELIBKIOKE_EQUALS_1_OFFSET))(this, a1);
		}

		::BFELIBKIOKE* _Clone__()
		{
			return ((::BFELIBKIOKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFELIBKIOKE__CLONE___OFFSET))(this);
		}

	};
