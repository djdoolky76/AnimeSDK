#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PBDKGBEMKCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F9B2A0)
#define PBDKGBEMKCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F9B1A0)
#define PBDKGBEMKCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F9AFE0)
#define PBDKGBEMKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F9B290)

inline static constexpr unsigned int PBDKGBEMKCM_TypeDefinitionIndex = 78776;

class PBDKGBEMKCM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* AOOFHEONBNH; // 0x18
	::FGCOIBFFCHB* FOLEHLMBOJB; // 0x20
	::FGCOIBFFCHB* ANPBCLAFCJB; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKGBEMKCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBDKGBEMKCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBDKGBEMKCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKGBEMKCM_KGEBDLGBGNM_OFFSET))(this);
	}
};
