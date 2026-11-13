#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNNNCIPMPKH;
class MEDFLBNBFGD;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define MEDFLBNBFGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x183F8500)
#define MEDFLBNBFGD_CTOR_OFFSET UNITYSDK_OFFSET(0x183F7CD0)
#define MEDFLBNBFGD_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x183F8520)
#define MEDFLBNBFGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x183F8130)
#define MEDFLBNBFGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x183F8440)
#define MEDFLBNBFGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x183F8290)
#define MEDFLBNBFGD_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x183F7CE0)
#define MEDFLBNBFGD_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x183F7D10)
#define MEDFLBNBFGD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x183F8110)
#define MEDFLBNBFGD_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x183F80E0)
#define MEDFLBNBFGD_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x183F7FD0)
#define MEDFLBNBFGD_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x183F7D20)
#define MEDFLBNBFGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x183F7D30)
#define MEDFLBNBFGD__CLONE___OFFSET UNITYSDK_OFFSET(0x183F84A0)

inline static constexpr unsigned int MEDFLBNBFGD_TypeDefinitionIndex = 83388;

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
