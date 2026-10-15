#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBCKKEDGIKN;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define KBCKKEDGIKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB2E8C80)
#define KBCKKEDGIKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB2E8790)
#define KBCKKEDGIKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB2E8A20)
#define KBCKKEDGIKN_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2E8B80)
#define KBCKKEDGIKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2E8A90)
#define KBCKKEDGIKN_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB2E87A0)
#define KBCKKEDGIKN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB2E89A0)
#define KBCKKEDGIKN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB2E8920)
#define KBCKKEDGIKN_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB2E8910)
#define KBCKKEDGIKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB2E87D0)
#define KBCKKEDGIKN__CLONE___OFFSET UNITYSDK_OFFSET(0xB2E8C40)

inline static constexpr unsigned int KBCKKEDGIKN_TypeDefinitionIndex = 82064;

	class KBCKKEDGIKN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBCKKEDGIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBCKKEDGIKN*))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::KBCKKEDGIKN* a1, ::KBCKKEDGIKN* a2)
		{
			return ((::System::Boolean(*)(::KBCKKEDGIKN*, ::KBCKKEDGIKN*))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::KBCKKEDGIKN* a1, ::KBCKKEDGIKN* a2)
		{
			return ((::System::Boolean(*)(::KBCKKEDGIKN*, ::KBCKKEDGIKN*))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBCKKEDGIKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBCKKEDGIKN*))((::PBYTE)hIl2Cpp + KBCKKEDGIKN_EQUALS_1_OFFSET))(this, a1);
		}

		::KBCKKEDGIKN* _Clone__()
		{
			return ((::KBCKKEDGIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBCKKEDGIKN__CLONE___OFFSET))(this);
		}

	};
