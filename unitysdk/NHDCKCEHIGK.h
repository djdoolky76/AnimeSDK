#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define NHDCKCEHIGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12102930)
#define NHDCKCEHIGK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12102830)
#define NHDCKCEHIGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12102610)
#define NHDCKCEHIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x12102920)

inline static constexpr unsigned int NHDCKCEHIGK_TypeDefinitionIndex = 46491;

class NHDCKCEHIGK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x18
	::FGCOIBFFCHB* HBPKENOFMAC; // 0x20
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x28
	::FGCOIBFFCHB* CNNMIMLHPPG; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x40
	::UnityEngine::RectTransform* NEMJJKIFGJM; // 0x48
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x50
	::FGCOIBFFCHB* GDHMNMHFKHM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDCKCEHIGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHDCKCEHIGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHDCKCEHIGK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHDCKCEHIGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
