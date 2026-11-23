#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F4E164DE63E7AD99.h"

#define E1E63EF8274DC16A_E721874F8CEF553A_OFFSET UNITYSDK_OFFSET(0x1EC6290)
#define E1E63EF8274DC16A_F148CB80B7853B2B_OFFSET UNITYSDK_OFFSET(0x1EC6320)
#define E1E63EF8274DC16A__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC63B0)

inline static constexpr unsigned int E1E63EF8274DC16A_TypeDefinitionIndex = 7354;

class E1E63EF8274DC16A : public ::F4E164DE63E7AD99
{
public:
	static ::E1E63EF8274DC16A** StaticGet_F2EC524D6D748B5F()
	{
		return (::E1E63EF8274DC16A**)Il2CppClass::FromTypeDefinitionIndex(E1E63EF8274DC16A_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void F148CB80B7853B2B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1E63EF8274DC16A_F148CB80B7853B2B_OFFSET))(this);
	}

	::System::Void E721874F8CEF553A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1E63EF8274DC16A_E721874F8CEF553A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1E63EF8274DC16A__CTOR_OFFSET))(this);
	}
};
