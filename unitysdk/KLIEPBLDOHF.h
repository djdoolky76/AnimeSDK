#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLIEPBLDOHF;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define KLIEPBLDOHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBD75D70)
#define KLIEPBLDOHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD75880)
#define KLIEPBLDOHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBD75B10)
#define KLIEPBLDOHF_EQUALS_OFFSET UNITYSDK_OFFSET(0xBD75C70)
#define KLIEPBLDOHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xBD75B80)
#define KLIEPBLDOHF_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xBD75890)
#define KLIEPBLDOHF_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xBD75A90)
#define KLIEPBLDOHF_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xBD75A10)
#define KLIEPBLDOHF_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xBD75A00)
#define KLIEPBLDOHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBD758C0)
#define KLIEPBLDOHF__CLONE___OFFSET UNITYSDK_OFFSET(0xBD75D30)

inline static constexpr unsigned int KLIEPBLDOHF_TypeDefinitionIndex = 84842;

	class KLIEPBLDOHF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLIEPBLDOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIEPBLDOHF*))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::KLIEPBLDOHF* a1, ::KLIEPBLDOHF* a2)
		{
			return ((::System::Boolean(*)(::KLIEPBLDOHF*, ::KLIEPBLDOHF*))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::KLIEPBLDOHF* a1, ::KLIEPBLDOHF* a2)
		{
			return ((::System::Boolean(*)(::KLIEPBLDOHF*, ::KLIEPBLDOHF*))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLIEPBLDOHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLIEPBLDOHF*))((::PBYTE)hIl2Cpp + KLIEPBLDOHF_EQUALS_1_OFFSET))(this, a1);
		}

		::KLIEPBLDOHF* _Clone__()
		{
			return ((::KLIEPBLDOHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIEPBLDOHF__CLONE___OFFSET))(this);
		}

	};
