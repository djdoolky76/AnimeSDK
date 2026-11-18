#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define DNICHECMCEE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132A3A90)
#define DNICHECMCEE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132A39A0)
#define DNICHECMCEE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132A3810)
#define DNICHECMCEE__CTOR_OFFSET UNITYSDK_OFFSET(0x132A3A80)

inline static constexpr unsigned int DNICHECMCEE_TypeDefinitionIndex = 44177;

class DNICHECMCEE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* NBMDKBLPHGF; // 0x18
	::FGCOIBFFCHB* CLEHPAGPMCN; // 0x20
	::UnityEngine::Transform* AFPJBIDBILN; // 0x28
	::UnityEngine::Transform* IGKPPOEHCHE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNICHECMCEE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNICHECMCEE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DNICHECMCEE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNICHECMCEE_KGEBDLGBGNM_OFFSET))(this);
	}
};
