#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GCDPGLAOPMH_DKCHAANFHBJ;
class PFHMELDGPLO;

#define GCDPGLAOPMH_NFAOFGPKGCF_PHPEEDLPLJE_OFFSET UNITYSDK_OFFSET(0x132482A0)
#define GCDPGLAOPMH_NFAOFGPKGCF__CTOR_OFFSET UNITYSDK_OFFSET(0x13248290)

inline static constexpr unsigned int GCDPGLAOPMH_NFAOFGPKGCF_TypeDefinitionIndex = 39799;

class GCDPGLAOPMH_NFAOFGPKGCF : public ::System::Object
{
public:
	::GCDPGLAOPMH_DKCHAANFHBJ* FGBNBFHOKAA; // 0x10
	::System::Int32 HBJOLKHGGDD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDPGLAOPMH_NFAOFGPKGCF__CTOR_OFFSET))(this);
	}

	::System::Boolean PHPEEDLPLJE(::PFHMELDGPLO* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PFHMELDGPLO*))((::PBYTE)hIl2Cpp + GCDPGLAOPMH_NFAOFGPKGCF_PHPEEDLPLJE_OFFSET))(this, PELAJIFDIPN);
	}
};
