#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A65A2E103B4AF1B3_F5628F8349D4A8A6_A7B5C68BBDB5F498_OFFSET UNITYSDK_OFFSET(0x39F9730)
#define A65A2E103B4AF1B3_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39FEB50)
#define A65A2E103B4AF1B3_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A65A2E103B4AF1B3_F5628F8349D4A8A6_TypeDefinitionIndex = 11910;

class A65A2E103B4AF1B3_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A65A2E103B4AF1B3_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A65A2E103B4AF1B3_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A65A2E103B4AF1B3_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::String*>** StaticGet_E5BCDA41FCBD4483()
	{
		return (::System::Action_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(A65A2E103B4AF1B3_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A7B5C68BBDB5F498(::System::String* BF71E8A841DD560B)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_F5628F8349D4A8A6_A7B5C68BBDB5F498_OFFSET))(this, BF71E8A841DD560B);
	}
};
