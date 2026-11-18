#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MPFOEALOODA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1274E340)
#define MPFOEALOODA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1274E2B0)
#define MPFOEALOODA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1274E100)
#define MPFOEALOODA__CTOR_OFFSET UNITYSDK_OFFSET(0x1274E330)

inline static constexpr unsigned int MPFOEALOODA_TypeDefinitionIndex = 86050;

class MPFOEALOODA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MMNNLOMMNGL; // 0x18
	::UnityEngine::GameObject* OBEMLOACGAF; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::GCIMMDDIFBJ* PDACHPLBKIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFOEALOODA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPFOEALOODA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFOEALOODA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPFOEALOODA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
