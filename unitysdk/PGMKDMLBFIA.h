#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define PGMKDMLBFIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178C9520)
#define PGMKDMLBFIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178C9410)
#define PGMKDMLBFIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178C9260)
#define PGMKDMLBFIA__CTOR_OFFSET UNITYSDK_OFFSET(0x178C9510)

inline static constexpr unsigned int PGMKDMLBFIA_TypeDefinitionIndex = 57629;

class PGMKDMLBFIA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* IBLLDGNDIKO; // 0x18
	::FGCOIBFFCHB* DHHKKNFGKBF; // 0x20
	::FGCOIBFFCHB* ELHONMPCIGE; // 0x28
	::FGCOIBFFCHB* GKFBBAMJOKK; // 0x30
	::UnityEngine::RectTransform* NKKENFOHLNH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMKDMLBFIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGMKDMLBFIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGMKDMLBFIA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGMKDMLBFIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
