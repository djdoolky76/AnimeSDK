#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PIIMAKHAMCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194A8510)
#define PIIMAKHAMCJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x194A8440)
#define PIIMAKHAMCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194A82A0)
#define PIIMAKHAMCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x194A8500)

inline static constexpr unsigned int PIIMAKHAMCJ_TypeDefinitionIndex = 77287;

class PIIMAKHAMCJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LOAJCGPLMLC; // 0x18
	::FGCOIBFFCHB* PFNAFELKHHP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JHONJBJPEHD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* LIPJLGMFENK; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LHEJDEMABKF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIMAKHAMCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIIMAKHAMCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIMAKHAMCJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PIIMAKHAMCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
