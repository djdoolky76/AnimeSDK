#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_CEKPKGCGKGA_ACOCIGEJKFE_OFFSET UNITYSDK_OFFSET(0xE15E2B0)
#define OKEIICNPAMA_CEKPKGCGKGA_DJAMEDNIDIG_OFFSET UNITYSDK_OFFSET(0xE15E2C0)
#define OKEIICNPAMA_CEKPKGCGKGA__CTOR_OFFSET UNITYSDK_OFFSET(0xE15E2A0)

inline static constexpr unsigned int OKEIICNPAMA_CEKPKGCGKGA_TypeDefinitionIndex = 87992;

class OKEIICNPAMA_CEKPKGCGKGA : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CEKPKGCGKGA__CTOR_OFFSET))(this);
	}

	::System::Void ACOCIGEJKFE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CEKPKGCGKGA_ACOCIGEJKFE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DJAMEDNIDIG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CEKPKGCGKGA_DJAMEDNIDIG_OFFSET))(this, PIIPCLCCOIG);
	}
};
