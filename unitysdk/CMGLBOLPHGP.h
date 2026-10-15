#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMGLBOLPHGP;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define CMGLBOLPHGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xDA32BF0)
#define CMGLBOLPHGP_CTOR_OFFSET UNITYSDK_OFFSET(0xDA32BE0)
#define CMGLBOLPHGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDA32A90)
#define CMGLBOLPHGP_EQUALS_OFFSET UNITYSDK_OFFSET(0xDA32990)
#define CMGLBOLPHGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDA32850)
#define CMGLBOLPHGP_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xDA32490)
#define CMGLBOLPHGP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xDA327B0)
#define CMGLBOLPHGP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xDA32710)
#define CMGLBOLPHGP_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xDA32700)
#define CMGLBOLPHGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDA324C0)
#define CMGLBOLPHGP__CLONE___OFFSET UNITYSDK_OFFSET(0xDA32BA0)

inline static constexpr unsigned int CMGLBOLPHGP_TypeDefinitionIndex = 49724;

	class CMGLBOLPHGP : public ::System::Object
	{
	public:
		::System::Void _ctor(::CMGLBOLPHGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMGLBOLPHGP*))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_CTOR_1_OFFSET))(this);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::CMGLBOLPHGP* a1, ::CMGLBOLPHGP* a2)
		{
			return ((::System::Boolean(*)(::CMGLBOLPHGP*, ::CMGLBOLPHGP*))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::CMGLBOLPHGP* a1, ::CMGLBOLPHGP* a2)
		{
			return ((::System::Boolean(*)(::CMGLBOLPHGP*, ::CMGLBOLPHGP*))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CMGLBOLPHGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CMGLBOLPHGP*))((::PBYTE)hIl2Cpp + CMGLBOLPHGP_EQUALS_1_OFFSET))(this, a1);
		}

		::CMGLBOLPHGP* _Clone__()
		{
			return ((::CMGLBOLPHGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGLBOLPHGP__CLONE___OFFSET))(this);
		}

	};
