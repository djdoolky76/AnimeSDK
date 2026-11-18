#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMFAHGEFDFJ;

#define HDJBHFAKBJC_MJNNDOPDJFM_COMPARE_OFFSET UNITYSDK_OFFSET(0x17A3F5A0)
#define HDJBHFAKBJC_MJNNDOPDJFM__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A3F690)
#define HDJBHFAKBJC_MJNNDOPDJFM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A3F680)

inline static constexpr unsigned int HDJBHFAKBJC_MJNNDOPDJFM_TypeDefinitionIndex = 76671;

class HDJBHFAKBJC_MJNNDOPDJFM : public ::System::Object
{
public:
	static ::HDJBHFAKBJC_MJNNDOPDJFM** StaticGet_DDGNFJDLOKA()
	{
		return (::HDJBHFAKBJC_MJNNDOPDJFM**)Il2CppClass::FromTypeDefinitionIndex(HDJBHFAKBJC_MJNNDOPDJFM_TypeDefinitionIndex)->GetStaticField(0x46430);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDJBHFAKBJC_MJNNDOPDJFM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDJBHFAKBJC_MJNNDOPDJFM__CCTOR_OFFSET))();
	}

	::System::Int32 Compare(::AMFAHGEFDFJ* HAAEBCOBKFF, ::AMFAHGEFDFJ* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::PVOID, ::AMFAHGEFDFJ*, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + HDJBHFAKBJC_MJNNDOPDJFM_COMPARE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
