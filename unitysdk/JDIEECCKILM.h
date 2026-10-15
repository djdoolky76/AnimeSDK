#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDIEECCKILM;
class PPGFKFIAAHL;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define JDIEECCKILM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x165BDC30)
#define JDIEECCKILM_CTOR_OFFSET UNITYSDK_OFFSET(0x165BD400)
#define JDIEECCKILM_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x165BDC50)
#define JDIEECCKILM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x165BD860)
#define JDIEECCKILM_EQUALS_OFFSET UNITYSDK_OFFSET(0x165BDB70)
#define JDIEECCKILM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x165BD9C0)
#define JDIEECCKILM_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x165BD410)
#define JDIEECCKILM_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x165BD440)
#define JDIEECCKILM_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x165BD840)
#define JDIEECCKILM_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x165BD810)
#define JDIEECCKILM_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x165BD700)
#define JDIEECCKILM_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x165BD450)
#define JDIEECCKILM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x165BD460)
#define JDIEECCKILM__CLONE___OFFSET UNITYSDK_OFFSET(0x165BDBD0)

inline static constexpr unsigned int JDIEECCKILM_TypeDefinitionIndex = 80607;

	class JDIEECCKILM : public ::System::Object
	{
	public:
		::PPGFKFIAAHL* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::PPGFKFIAAHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGFKFIAAHL*))((::PBYTE)hIl2Cpp + JDIEECCKILM_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::JDIEECCKILM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDIEECCKILM*))((::PBYTE)hIl2Cpp + JDIEECCKILM_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIEECCKILM_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::PPGFKFIAAHL* get_Proto()
		{
			return ((::PPGFKFIAAHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIEECCKILM_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::PPGFKFIAAHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGFKFIAAHL*))((::PBYTE)hIl2Cpp + JDIEECCKILM_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIEECCKILM_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + JDIEECCKILM_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::JDIEECCKILM* a1, ::JDIEECCKILM* a2)
		{
			return ((::System::Boolean(*)(::JDIEECCKILM*, ::JDIEECCKILM*))((::PBYTE)hIl2Cpp + JDIEECCKILM_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::JDIEECCKILM* a1, ::JDIEECCKILM* a2)
		{
			return ((::System::Boolean(*)(::JDIEECCKILM*, ::JDIEECCKILM*))((::PBYTE)hIl2Cpp + JDIEECCKILM_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIEECCKILM_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDIEECCKILM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDIEECCKILM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDIEECCKILM*))((::PBYTE)hIl2Cpp + JDIEECCKILM_EQUALS_1_OFFSET))(this, a1);
		}

		::JDIEECCKILM* _Clone__()
		{
			return ((::JDIEECCKILM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIEECCKILM__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::PPGFKFIAAHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGFKFIAAHL*))((::PBYTE)hIl2Cpp + JDIEECCKILM_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
