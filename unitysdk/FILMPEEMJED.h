#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FILMPEEMJED;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define FILMPEEMJED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x157A1AD0)
#define FILMPEEMJED_CTOR_OFFSET UNITYSDK_OFFSET(0x157A1AC0)
#define FILMPEEMJED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x157A1970)
#define FILMPEEMJED_EQUALS_OFFSET UNITYSDK_OFFSET(0x157A1870)
#define FILMPEEMJED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x157A1730)
#define FILMPEEMJED_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x157A1370)
#define FILMPEEMJED_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x157A1690)
#define FILMPEEMJED_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x157A15F0)
#define FILMPEEMJED_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x157A15E0)
#define FILMPEEMJED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x157A13A0)
#define FILMPEEMJED__CLONE___OFFSET UNITYSDK_OFFSET(0x157A1A80)

inline static constexpr unsigned int FILMPEEMJED_TypeDefinitionIndex = 49722;

	class FILMPEEMJED : public ::System::Object
	{
	public:
		::System::Void _ctor(::FILMPEEMJED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FILMPEEMJED*))((::PBYTE)hIl2Cpp + FILMPEEMJED_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILMPEEMJED_CTOR_1_OFFSET))(this);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILMPEEMJED_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILMPEEMJED_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + FILMPEEMJED_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::FILMPEEMJED* a1, ::FILMPEEMJED* a2)
		{
			return ((::System::Boolean(*)(::FILMPEEMJED*, ::FILMPEEMJED*))((::PBYTE)hIl2Cpp + FILMPEEMJED_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::FILMPEEMJED* a1, ::FILMPEEMJED* a2)
		{
			return ((::System::Boolean(*)(::FILMPEEMJED*, ::FILMPEEMJED*))((::PBYTE)hIl2Cpp + FILMPEEMJED_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FILMPEEMJED_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FILMPEEMJED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FILMPEEMJED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FILMPEEMJED*))((::PBYTE)hIl2Cpp + FILMPEEMJED_EQUALS_1_OFFSET))(this, a1);
		}

		::FILMPEEMJED* _Clone__()
		{
			return ((::FILMPEEMJED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FILMPEEMJED__CLONE___OFFSET))(this);
		}

	};
