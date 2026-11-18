#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHACHBDIBED.h"
#include "unitysdk/MoleMole/SocialPostSizeType.h"
#include "unitysdk/System/Object.h"

class AICPGKGMMEH;
class EHOFPPJJMDM;

#define DJHIOIDLGMB_KMAJJIMHCLN_OFFSET UNITYSDK_OFFSET(0x19414D30)
#define DJHIOIDLGMB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19414CE0)
#define DJHIOIDLGMB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19414BE0)
#define DJHIOIDLGMB__CTOR_OFFSET UNITYSDK_OFFSET(0x19414B10)

inline static constexpr unsigned int DJHIOIDLGMB_TypeDefinitionIndex = 62795;

class DJHIOIDLGMB : public ::System::Object
{
public:
	::EHOFPPJJMDM* DOLKACJANKA; // 0x10
	::MoleMole::SocialPostSizeType AIAPNPJLKFL; // 0x18
	::AHACHBDIBED MGMDLMBEDJF; // 0x1C

	::System::Void _ctor(::AHACHBDIBED MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::AHACHBDIBED))((::PBYTE)hIl2Cpp + DJHIOIDLGMB__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void _ctor_1(::AHACHBDIBED MGMDLMBEDJF, ::EHOFPPJJMDM* NJFEFKPAOPI)
	{
		return ((::System::Void(*)(::PVOID, ::AHACHBDIBED, ::EHOFPPJJMDM*))((::PBYTE)hIl2Cpp + DJHIOIDLGMB__CTOR_1_OFFSET))(this, MGMDLMBEDJF, NJFEFKPAOPI);
	}

	::AICPGKGMMEH* PPIFNHNGCGO()
	{
		return ((::AICPGKGMMEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHIOIDLGMB_PPIFNHNGCGO_OFFSET))(this);
	}

	::AHACHBDIBED KMAJJIMHCLN()
	{
		return ((::AHACHBDIBED(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHIOIDLGMB_KMAJJIMHCLN_OFFSET))(this);
	}
};
