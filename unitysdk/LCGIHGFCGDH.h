#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class Mono2dMapData; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class ScrollRectEx; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }

#define LCGIHGFCGDH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BB6A00)
#define LCGIHGFCGDH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BB6930)
#define LCGIHGFCGDH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BB66F0)
#define LCGIHGFCGDH__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB69F0)

inline static constexpr unsigned int LCGIHGFCGDH_TypeDefinitionIndex = 60105;

class LCGIHGFCGDH : public ::GIBMJLOJLKD
{
public:
	::MoleMole::Mono2dMapData* JMINOGAOFIL; // 0x18
	::UnityEngine::RectTransform* MIKAKBOEKHD; // 0x20
	::FGCOIBFFCHB* ODALDIOFMPH; // 0x28
	::FILNFMCNCFE* OFOCCHIGAOL; // 0x30
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x38
	::UnityEngine::UI::Extension::UIImgEventTrigger* JDJMHLEIPMA; // 0x40
	::UnityEngine::RectTransform* DLCIIPHOMPP; // 0x48
	::UnityEngine::UI::Extension::ScrollRectEx* OLLEHOJAOGN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGIHGFCGDH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCGIHGFCGDH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCGIHGFCGDH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGIHGFCGDH_KGEBDLGBGNM_OFFSET))(this);
	}
};
