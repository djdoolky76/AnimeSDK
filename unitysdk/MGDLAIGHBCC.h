#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MGDLAIGHBCC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D844B0)
#define MGDLAIGHBCC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D84340)
#define MGDLAIGHBCC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D84070)
#define MGDLAIGHBCC__CTOR_OFFSET UNITYSDK_OFFSET(0x12D844A0)

inline static constexpr unsigned int MGDLAIGHBCC_TypeDefinitionIndex = 47109;

class MGDLAIGHBCC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MEAEOHBLPGD; // 0x18
	::LGINJIKKBJA* JLBIILKNNKP; // 0x20
	::UnityEngine::RectTransform* LKDMCFBEPLH; // 0x28
	::LGINJIKKBJA* CHAMBKDGKFB; // 0x30
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JCCGNAPEJEI; // 0x48
	::FGCOIBFFCHB* GDHOIEHEBFI; // 0x50
	::LGINJIKKBJA* BKDDKDMILCA; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* OPOFFCJAHMH; // 0x60
	::UnityEngine::RectTransform* INDDBMCIKAA; // 0x68
	::FGCOIBFFCHB* CPNJKFNFMEN; // 0x70
	::MonoUITableScrollV2* MMJCBBOAPHH; // 0x78
	::UnityEngine::RectTransform* NIOGMLCJNKM; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDLAIGHBCC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGDLAIGHBCC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGDLAIGHBCC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGDLAIGHBCC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
