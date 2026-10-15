#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOKOFFJDGFA;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Transform; }

#define BOKOFFJDGFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC1945D0)
#define BOKOFFJDGFA_CTOR_OFFSET UNITYSDK_OFFSET(0xC1945B0)
#define BOKOFFJDGFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xC194340)
#define BOKOFFJDGFA_EQUALS_OFFSET UNITYSDK_OFFSET(0xC194240)
#define BOKOFFJDGFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xC194040)
#define BOKOFFJDGFA_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xC193B80)
#define BOKOFFJDGFA_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC193FA0)
#define BOKOFFJDGFA_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC193F00)
#define BOKOFFJDGFA_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xC193DF0)
#define BOKOFFJDGFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC193BB0)
#define BOKOFFJDGFA__CLONE___OFFSET UNITYSDK_OFFSET(0xC194550)

inline static constexpr unsigned int BOKOFFJDGFA_TypeDefinitionIndex = 49725;

	class BOKOFFJDGFA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::System::Void _ctor(::BOKOFFJDGFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOKOFFJDGFA*))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_CTOR_1_OFFSET))(this);
		}

		::System::Type* get_EqualityContract()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_GET_EQUALITYCONTRACT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_TOSTRING_OFFSET))(this);
		}

		::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_PRINTMEMBERS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::BOKOFFJDGFA* a1, ::BOKOFFJDGFA* a2)
		{
			return ((::System::Boolean(*)(::BOKOFFJDGFA*, ::BOKOFFJDGFA*))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::BOKOFFJDGFA* a1, ::BOKOFFJDGFA* a2)
		{
			return ((::System::Boolean(*)(::BOKOFFJDGFA*, ::BOKOFFJDGFA*))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOKOFFJDGFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOKOFFJDGFA*))((::PBYTE)hIl2Cpp + BOKOFFJDGFA_EQUALS_1_OFFSET))(this, a1);
		}

		::BOKOFFJDGFA* _Clone__()
		{
			return ((::BOKOFFJDGFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOKOFFJDGFA__CLONE___OFFSET))(this);
		}

	};
