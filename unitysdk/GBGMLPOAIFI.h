#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBGMLPOAIFI;
class NOEGOMIJDAH;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define GBGMLPOAIFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B87E9D0)
#define GBGMLPOAIFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1B87E1A0)
#define GBGMLPOAIFI_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1B87E9F0)
#define GBGMLPOAIFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B87E600)
#define GBGMLPOAIFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B87E910)
#define GBGMLPOAIFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B87E760)
#define GBGMLPOAIFI_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B87E1B0)
#define GBGMLPOAIFI_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1B87E1E0)
#define GBGMLPOAIFI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B87E5E0)
#define GBGMLPOAIFI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B87E5B0)
#define GBGMLPOAIFI_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B87E4A0)
#define GBGMLPOAIFI_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x1B87E1F0)
#define GBGMLPOAIFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B87E200)
#define GBGMLPOAIFI__CLONE___OFFSET UNITYSDK_OFFSET(0x1B87E970)

inline static constexpr unsigned int GBGMLPOAIFI_TypeDefinitionIndex = 84842;

	class GBGMLPOAIFI : public ::System::Object
	{
	public:
		::NOEGOMIJDAH* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::NOEGOMIJDAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOEGOMIJDAH*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::GBGMLPOAIFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBGMLPOAIFI*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::NOEGOMIJDAH* get_Proto()
		{
			return ((::NOEGOMIJDAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::NOEGOMIJDAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOEGOMIJDAH*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::GBGMLPOAIFI* a1, ::GBGMLPOAIFI* a2)
		{
			return ((::System::Boolean(*)(::GBGMLPOAIFI*, ::GBGMLPOAIFI*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::GBGMLPOAIFI* a1, ::GBGMLPOAIFI* a2)
		{
			return ((::System::Boolean(*)(::GBGMLPOAIFI*, ::GBGMLPOAIFI*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBGMLPOAIFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBGMLPOAIFI*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_EQUALS_1_OFFSET))(this, a1);
		}

		::GBGMLPOAIFI* _Clone__()
		{
			return ((::GBGMLPOAIFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBGMLPOAIFI__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::NOEGOMIJDAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOEGOMIJDAH*))((::PBYTE)hIl2Cpp + GBGMLPOAIFI_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
