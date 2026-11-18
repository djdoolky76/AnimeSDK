#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define LFEFPFPNONF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15658CF0)
#define LFEFPFPNONF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15658BB0)
#define LFEFPFPNONF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15658960)
#define LFEFPFPNONF__CTOR_OFFSET UNITYSDK_OFFSET(0x15658CE0)

inline static constexpr unsigned int LFEFPFPNONF_TypeDefinitionIndex = 56085;

class LFEFPFPNONF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::FGCOIBFFCHB* GFIPBLEEAIP; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIconCardRarityWidgetController*>* MPPIKJIFCIA; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::FGCOIBFFCHB* GDHMNMHFKHM; // 0x38
	::FGCOIBFFCHB* GLFLILHNBCM; // 0x40
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFPFPNONF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFEFPFPNONF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFEFPFPNONF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFEFPFPNONF_KGEBDLGBGNM_OFFSET))(this);
	}
};
