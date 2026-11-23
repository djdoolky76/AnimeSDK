#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E08A082FFF7F8B5C.h"

#define E2D254AFFBABE8C6_E721874F8CEF553A_OFFSET UNITYSDK_OFFSET(0x24DA580)
#define E2D254AFFBABE8C6_F148CB80B7853B2B_OFFSET UNITYSDK_OFFSET(0x24DA610)
#define E2D254AFFBABE8C6__CTOR_OFFSET UNITYSDK_OFFSET(0x24DA6A0)

inline static constexpr unsigned int E2D254AFFBABE8C6_TypeDefinitionIndex = 5042;

class E2D254AFFBABE8C6 : public ::E08A082FFF7F8B5C
{
public:
	static ::E2D254AFFBABE8C6** StaticGet_F2EC524D6D748B5F()
	{
		return (::E2D254AFFBABE8C6**)Il2CppClass::FromTypeDefinitionIndex(E2D254AFFBABE8C6_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void F148CB80B7853B2B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2D254AFFBABE8C6_F148CB80B7853B2B_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2D254AFFBABE8C6__CTOR_OFFSET))(this);
	}

	::System::Void E721874F8CEF553A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E2D254AFFBABE8C6_E721874F8CEF553A_OFFSET))(this);
	}
};
