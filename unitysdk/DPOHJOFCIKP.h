#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPOHJOFCIKP;
class MNBCPGLOMIE;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define DPOHJOFCIKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1265D290)
#define DPOHJOFCIKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1265CA60)
#define DPOHJOFCIKP_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1265D2B0)
#define DPOHJOFCIKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1265CEC0)
#define DPOHJOFCIKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1265D1D0)
#define DPOHJOFCIKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1265D020)
#define DPOHJOFCIKP_GET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0x1265CAA0)
#define DPOHJOFCIKP_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1265CA70)
#define DPOHJOFCIKP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1265CEA0)
#define DPOHJOFCIKP_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1265CE70)
#define DPOHJOFCIKP_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1265CD60)
#define DPOHJOFCIKP_SET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0x1265CAB0)
#define DPOHJOFCIKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1265CAC0)
#define DPOHJOFCIKP__CLONE___OFFSET UNITYSDK_OFFSET(0x1265D230)

inline static constexpr unsigned int DPOHJOFCIKP_TypeDefinitionIndex = 82068;

	class DPOHJOFCIKP : public ::System::Object
	{
	public:
		::MNBCPGLOMIE* _EditResult_k__BackingField; // 0x10
		::System::Void _ctor(::MNBCPGLOMIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::DPOHJOFCIKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DPOHJOFCIKP*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::MNBCPGLOMIE* get_EditResult()
		{
			return ((::MNBCPGLOMIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_GET_EDITRESULT_OFFSET))(this);
		}

		::System::Void set_EditResult(::MNBCPGLOMIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_SET_EDITRESULT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::DPOHJOFCIKP* a1, ::DPOHJOFCIKP* a2)
		{
			return ((::System::Boolean(*)(::DPOHJOFCIKP*, ::DPOHJOFCIKP*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::DPOHJOFCIKP* a1, ::DPOHJOFCIKP* a2)
		{
			return ((::System::Boolean(*)(::DPOHJOFCIKP*, ::DPOHJOFCIKP*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DPOHJOFCIKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPOHJOFCIKP*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_EQUALS_1_OFFSET))(this, a1);
		}

		::DPOHJOFCIKP* _Clone__()
		{
			return ((::DPOHJOFCIKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOHJOFCIKP__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::MNBCPGLOMIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + DPOHJOFCIKP_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
