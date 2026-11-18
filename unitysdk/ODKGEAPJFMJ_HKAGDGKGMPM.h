#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;

#define ODKGEAPJFMJ_HKAGDGKGMPM_COMPARE_OFFSET UNITYSDK_OFFSET(0x15FD45E0)
#define ODKGEAPJFMJ_HKAGDGKGMPM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FD4680)
#define ODKGEAPJFMJ_HKAGDGKGMPM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD4670)

inline static constexpr unsigned int ODKGEAPJFMJ_HKAGDGKGMPM_TypeDefinitionIndex = 67700;

class ODKGEAPJFMJ_HKAGDGKGMPM : public ::System::Object
{
public:
	static ::ODKGEAPJFMJ_HKAGDGKGMPM** StaticGet_DDGNFJDLOKA()
	{
		return (::ODKGEAPJFMJ_HKAGDGKGMPM**)Il2CppClass::FromTypeDefinitionIndex(ODKGEAPJFMJ_HKAGDGKGMPM_TypeDefinitionIndex)->GetStaticField(0x310B0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKGEAPJFMJ_HKAGDGKGMPM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODKGEAPJFMJ_HKAGDGKGMPM__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::AMFAHGEFDFJ* HAAEBCOBKFF, ::AMFAHGEFDFJ* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::AMFAHGEFDFJ*, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + ODKGEAPJFMJ_HKAGDGKGMPM_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
