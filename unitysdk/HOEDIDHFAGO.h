#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HOEDIDHFAGO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140C88A0)
#define HOEDIDHFAGO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140C87D0)
#define HOEDIDHFAGO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140C8630)
#define HOEDIDHFAGO__CTOR_OFFSET UNITYSDK_OFFSET(0x140C8890)

inline static constexpr unsigned int HOEDIDHFAGO_TypeDefinitionIndex = 74545;

class HOEDIDHFAGO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* HLJMMLMNFDG; // 0x18
	::UnityEngine::RectTransform* PPGOGGMDMGF; // 0x20
	::FGCOIBFFCHB* PANIPOHEHCI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x30
	::UnityEngine::Animation* KMPIDMGPFIH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEDIDHFAGO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOEDIDHFAGO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEDIDHFAGO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOEDIDHFAGO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
