#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJFANDEAJNN;
class KNLJDBNOPKD;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define GJFANDEAJNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15A59B30)
#define GJFANDEAJNN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A59300)
#define GJFANDEAJNN_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x15A59B50)
#define GJFANDEAJNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15A59760)
#define GJFANDEAJNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x15A59A70)
#define GJFANDEAJNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15A598C0)
#define GJFANDEAJNN_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x15A59310)
#define GJFANDEAJNN_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x15A59340)
#define GJFANDEAJNN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15A59740)
#define GJFANDEAJNN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15A59710)
#define GJFANDEAJNN_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x15A59600)
#define GJFANDEAJNN_SET_PROTO_OFFSET UNITYSDK_OFFSET(0x15A59350)
#define GJFANDEAJNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A59360)
#define GJFANDEAJNN__CLONE___OFFSET UNITYSDK_OFFSET(0x15A59AD0)

inline static constexpr unsigned int GJFANDEAJNN_TypeDefinitionIndex = 80606;

	class GJFANDEAJNN : public ::System::Object
	{
	public:
		::KNLJDBNOPKD* _Proto_k__BackingField; // 0x10
		::System::Void _ctor(::KNLJDBNOPKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNLJDBNOPKD*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::GJFANDEAJNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJFANDEAJNN*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFANDEAJNN_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::KNLJDBNOPKD* get_Proto()
		{
			return ((::KNLJDBNOPKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFANDEAJNN_GET_PROTO_OFFSET))(this);
		}

		::System::Void set_Proto(::KNLJDBNOPKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNLJDBNOPKD*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_SET_PROTO_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFANDEAJNN_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::GJFANDEAJNN* a1, ::GJFANDEAJNN* a2)
		{
			return ((::System::Boolean(*)(::GJFANDEAJNN*, ::GJFANDEAJNN*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::GJFANDEAJNN* a1, ::GJFANDEAJNN* a2)
		{
			return ((::System::Boolean(*)(::GJFANDEAJNN*, ::GJFANDEAJNN*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFANDEAJNN_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJFANDEAJNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJFANDEAJNN*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_EQUALS_1_OFFSET))(this, a1);
		}

		::GJFANDEAJNN* _Clone__()
		{
			return ((::GJFANDEAJNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJFANDEAJNN__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::KNLJDBNOPKD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNLJDBNOPKD*))((::PBYTE)hIl2Cpp + GJFANDEAJNN_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
