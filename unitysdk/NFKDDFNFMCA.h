#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define NFKDDFNFMCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115896A0)
#define NFKDDFNFMCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11589590)
#define NFKDDFNFMCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11589390)
#define NFKDDFNFMCA__CTOR_OFFSET UNITYSDK_OFFSET(0x11589690)

inline static constexpr unsigned int NFKDDFNFMCA_TypeDefinitionIndex = 50402;

class NFKDDFNFMCA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KFDOBMKJEPI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EAALMIAIGJH; // 0x20
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x28
	::LGINJIKKBJA* MAPJABKIKLD; // 0x30
	::FGCOIBFFCHB* MDKJDDANKMP; // 0x38
	::UnityEngine::RectTransform* ADOMBENGNJF; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKDDFNFMCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFKDDFNFMCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFKDDFNFMCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKDDFNFMCA_KGEBDLGBGNM_OFFSET))(this);
	}
};
