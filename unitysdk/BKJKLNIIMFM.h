#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJKLNIIMFM;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define BKJKLNIIMFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBA56CF0)
#define BKJKLNIIMFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA56CE0)
#define BKJKLNIIMFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBA56B90)
#define BKJKLNIIMFM_EQUALS_OFFSET UNITYSDK_OFFSET(0xBA56A90)
#define BKJKLNIIMFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBA56950)
#define BKJKLNIIMFM_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xBA56590)
#define BKJKLNIIMFM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBA568B0)
#define BKJKLNIIMFM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBA56810)
#define BKJKLNIIMFM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xBA56800)
#define BKJKLNIIMFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA565C0)
#define BKJKLNIIMFM__CLONE___OFFSET UNITYSDK_OFFSET(0xBA56CA0)

inline static constexpr unsigned int BKJKLNIIMFM_TypeDefinitionIndex = 49723;

	class BKJKLNIIMFM : public ::System::Object
	{
	public:
		::System::Void _ctor(::BKJKLNIIMFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKJKLNIIMFM*))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_CTOR_1_OFFSET))(this);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::BKJKLNIIMFM* a1, ::BKJKLNIIMFM* a2)
		{
			return ((::System::Boolean(*)(::BKJKLNIIMFM*, ::BKJKLNIIMFM*))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::BKJKLNIIMFM* a1, ::BKJKLNIIMFM* a2)
		{
			return ((::System::Boolean(*)(::BKJKLNIIMFM*, ::BKJKLNIIMFM*))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKJKLNIIMFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKJKLNIIMFM*))((::PBYTE)hIl2Cpp + BKJKLNIIMFM_EQUALS_1_OFFSET))(this, a1);
		}

		::BKJKLNIIMFM* _Clone__()
		{
			return ((::BKJKLNIIMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJKLNIIMFM__CLONE___OFFSET))(this);
		}

	};
