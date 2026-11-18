#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALMODBCIIJC;

#define CKGGAHFEGNB_HBPCBDKDLLD_HGGPOHOFKMD_OFFSET UNITYSDK_OFFSET(0x13269650)
#define CKGGAHFEGNB_HBPCBDKDLLD__CTOR_OFFSET UNITYSDK_OFFSET(0x13269640)

inline static constexpr unsigned int CKGGAHFEGNB_HBPCBDKDLLD_TypeDefinitionIndex = 82855;

class CKGGAHFEGNB_HBPCBDKDLLD : public ::System::Object
{
public:
	::System::Int32 NACGJJKHEJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKGGAHFEGNB_HBPCBDKDLLD__CTOR_OFFSET))(this);
	}

	::System::Boolean HGGPOHOFKMD(::ALMODBCIIJC* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::ALMODBCIIJC*))((::PBYTE)hIl2Cpp + CKGGAHFEGNB_HBPCBDKDLLD_HGGPOHOFKMD_OFFSET))(this, PELAJIFDIPN);
	}
};
