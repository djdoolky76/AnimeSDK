#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
namespace System { template <typename T> class Action_1; }

#define A4A22B4B38196DDF_F5628F8349D4A8A6_A912826519ACB8B0_OFFSET UNITYSDK_OFFSET(0x173B560)
#define A4A22B4B38196DDF_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BDF0)
#define A4A22B4B38196DDF_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A4A22B4B38196DDF_F5628F8349D4A8A6_TypeDefinitionIndex = 717;

class A4A22B4B38196DDF_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A4A22B4B38196DDF_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A4A22B4B38196DDF_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A4A22B4B38196DDF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::AB642D1382756991*>** StaticGet_BD38FA80B668E0D5()
	{
		return (::System::Action_1<::AB642D1382756991*>**)Il2CppClass::FromTypeDefinitionIndex(A4A22B4B38196DDF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A4A22B4B38196DDF_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4A22B4B38196DDF_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void A912826519ACB8B0(::AB642D1382756991* E38FD399E4DFEF27)
	{
		return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + A4A22B4B38196DDF_F5628F8349D4A8A6_A912826519ACB8B0_OFFSET))(this, E38FD399E4DFEF27);
	}
};
