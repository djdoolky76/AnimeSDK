#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNNNCIPMPKH;
class MEDFLBNBFGD;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define MEDFLBNBFGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB8B68E0)
#define MEDFLBNBFGD_CTOR_OFFSET UNITYSDK_OFFSET(0xB8B60B0)
#define MEDFLBNBFGD_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0xB8B6900)
#define MEDFLBNBFGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB8B6510)
#define MEDFLBNBFGD_EQUALS_OFFSET UNITYSDK_OFFSET(0xB8B6820)
#define MEDFLBNBFGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB8B6670)
#define MEDFLBNBFGD_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB8B60C0)
#define MEDFLBNBFGD_GET_PROTO_OFFSET UNITYSDK_OFFSET(0xB8B60F0)
#define MEDFLBNBFGD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB8B64F0)
#define MEDFLBNBFGD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB8B64C0)
#define MEDFLBNBFGD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB8B63B0)
#define MEDFLBNBFGD_SET_PROTO_OFFSET UNITYSDK_OFFSET(0xB8B6100)
#define MEDFLBNBFGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB8B6110)
#define MEDFLBNBFGD__CLONE___OFFSET UNITYSDK_OFFSET(0xB8B6880)

inline static constexpr unsigned int MEDFLBNBFGD_TypeDefinitionIndex = 80608;

	class MEDFLBNBFGD : public ::System::Object
	{
	public:
		::DNNNCIPMPKH* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::DNNNCIPMPKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNNCIPMPKH*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MEDFLBNBFGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEDFLBNBFGD*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::DNNNCIPMPKH* get_Proto()
		{
			return ((::DNNNCIPMPKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::DNNNCIPMPKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNNCIPMPKH*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::MEDFLBNBFGD* a1, ::MEDFLBNBFGD* a2)
		{
			return ((::System::Boolean(*)(::MEDFLBNBFGD*, ::MEDFLBNBFGD*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::MEDFLBNBFGD* a1, ::MEDFLBNBFGD* a2)
		{
			return ((::System::Boolean(*)(::MEDFLBNBFGD*, ::MEDFLBNBFGD*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEDFLBNBFGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEDFLBNBFGD*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_EQUALS_1_OFFSET))(this, a1);
		}

		::MEDFLBNBFGD* _Clone__()
		{
			return ((::MEDFLBNBFGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDFLBNBFGD__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::DNNNCIPMPKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNNCIPMPKH*))((::PBYTE)hIl2Cpp + MEDFLBNBFGD_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
