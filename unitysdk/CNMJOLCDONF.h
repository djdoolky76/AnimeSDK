#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CNMJOLCDONF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E160D0)
#define CNMJOLCDONF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E16020)
#define CNMJOLCDONF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E15E30)
#define CNMJOLCDONF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E160C0)

inline static constexpr unsigned int CNMJOLCDONF_TypeDefinitionIndex = 72597;

class CNMJOLCDONF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::RectTransform* JLIMOLHLFAK; // 0x30
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x38
	::UnityEngine::RectTransform* MCGPPADHCLJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x48
	::UnityEngine::UI::Extension::UITabButton* HJIHNMPIEJL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMJOLCDONF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNMJOLCDONF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNMJOLCDONF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNMJOLCDONF_KGEBDLGBGNM_OFFSET))(this);
	}
};
