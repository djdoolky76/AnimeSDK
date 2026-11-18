#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IJJEMHJAKHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF876A80)
#define IJJEMHJAKHF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF8769F0)
#define IJJEMHJAKHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF8767C0)
#define IJJEMHJAKHF__CTOR_OFFSET UNITYSDK_OFFSET(0xF876A70)

inline static constexpr unsigned int IJJEMHJAKHF_TypeDefinitionIndex = 76893;

class IJJEMHJAKHF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::RectTransform* ONNACDHFNGA; // 0x20
	::UnityEngine::RectTransform* KKOJIGEFPBM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ILGLHIEJNEL; // 0x30
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x38
	::UnityEngine::RectTransform* OPHDDAOKGCC; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJOCLLEIAGE; // 0x48
	::GCIMMDDIFBJ* HPEMBKHMDLE; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DGJNCIFBOJN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJEMHJAKHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJJEMHJAKHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJJEMHJAKHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJJEMHJAKHF_KGEBDLGBGNM_OFFSET))(this);
	}
};
