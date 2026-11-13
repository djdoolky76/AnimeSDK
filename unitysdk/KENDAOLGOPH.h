#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KENDAOLGOPH;
class MNBCPGLOMIE;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define KENDAOLGOPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B5E2870)
#define KENDAOLGOPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5E2040)
#define KENDAOLGOPH_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x1B5E2890)
#define KENDAOLGOPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B5E24A0)
#define KENDAOLGOPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B5E27B0)
#define KENDAOLGOPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B5E2600)
#define KENDAOLGOPH_GET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0x1B5E2080)
#define KENDAOLGOPH_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1B5E2050)
#define KENDAOLGOPH_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B5E2480)
#define KENDAOLGOPH_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B5E2450)
#define KENDAOLGOPH_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x1B5E2340)
#define KENDAOLGOPH_SET_EDITRESULT_OFFSET UNITYSDK_OFFSET(0x1B5E2090)
#define KENDAOLGOPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B5E20A0)
#define KENDAOLGOPH__CLONE___OFFSET UNITYSDK_OFFSET(0x1B5E2810)

inline static constexpr unsigned int KENDAOLGOPH_TypeDefinitionIndex = 84940;

	class KENDAOLGOPH : public ::System::Object
	{
	public:
		::MNBCPGLOMIE* _EditResult_k__BackingField; // 0x10
		::System::Void _ctor(::MNBCPGLOMIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::KENDAOLGOPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KENDAOLGOPH*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_CTOR_1_OFFSET))(this, a1);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENDAOLGOPH_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::MNBCPGLOMIE* get_EditResult()
		{
			return ((::MNBCPGLOMIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENDAOLGOPH_GET_EDITRESULT_OFFSET))(this);
		}

		::System::Void set_EditResult(::MNBCPGLOMIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_SET_EDITRESULT_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENDAOLGOPH_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::KENDAOLGOPH* a1, ::KENDAOLGOPH* a2)
		{
			return ((::System::Boolean(*)(::KENDAOLGOPH*, ::KENDAOLGOPH*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::KENDAOLGOPH* a1, ::KENDAOLGOPH* a2)
		{
			return ((::System::Boolean(*)(::KENDAOLGOPH*, ::KENDAOLGOPH*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KENDAOLGOPH_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KENDAOLGOPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KENDAOLGOPH*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_EQUALS_1_OFFSET))(this, a1);
		}

		::KENDAOLGOPH* _Clone__()
		{
			return ((::KENDAOLGOPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KENDAOLGOPH__CLONE___OFFSET))(this);
		}

		::System::Void Deconstruct(::MNBCPGLOMIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBCPGLOMIE*))((::PBYTE)hIl2Cpp + KENDAOLGOPH_DECONSTRUCT_OFFSET))(this, a1);
		}

	};
