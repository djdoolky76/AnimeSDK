#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define A99E611D68D1D7A4_F5628F8349D4A8A6_B19B5F5D353670E8_OFFSET UNITYSDK_OFFSET(0x3A5B2D0)
#define A99E611D68D1D7A4_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A5D660)
#define A99E611D68D1D7A4_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A99E611D68D1D7A4_F5628F8349D4A8A6_TypeDefinitionIndex = 12984;

class A99E611D68D1D7A4_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::A99E611D68D1D7A4_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::A99E611D68D1D7A4_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(A99E611D68D1D7A4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action** StaticGet_BCB5776C6392BCE4()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(A99E611D68D1D7A4_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Void B19B5F5D353670E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A99E611D68D1D7A4_F5628F8349D4A8A6_B19B5F5D353670E8_OFFSET))(this);
	}
};
