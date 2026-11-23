#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F4E164DE63E7AD99.h"

#define E254008CAAC3C70A_E721874F8CEF553A_OFFSET UNITYSDK_OFFSET(0x21E2FE0)
#define E254008CAAC3C70A_F148CB80B7853B2B_OFFSET UNITYSDK_OFFSET(0x21E3070)
#define E254008CAAC3C70A__CTOR_OFFSET UNITYSDK_OFFSET(0x21E3100)

inline static constexpr unsigned int E254008CAAC3C70A_TypeDefinitionIndex = 8935;

class E254008CAAC3C70A : public ::F4E164DE63E7AD99
{
public:
	static ::E254008CAAC3C70A** StaticGet_F2EC524D6D748B5F()
	{
		return (::E254008CAAC3C70A**)Il2CppClass::FromTypeDefinitionIndex(E254008CAAC3C70A_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void F148CB80B7853B2B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E254008CAAC3C70A_F148CB80B7853B2B_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E254008CAAC3C70A__CTOR_OFFSET))(this);
	}

	::System::Void E721874F8CEF553A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E254008CAAC3C70A_E721874F8CEF553A_OFFSET))(this);
	}
};
