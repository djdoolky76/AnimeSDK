#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class MonoUIColorCollection; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MGGFABNBOEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17D258E0)
#define MGGFABNBOEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17D25850)
#define MGGFABNBOEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17D25640)
#define MGGFABNBOEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D258D0)

inline static constexpr unsigned int MGGFABNBOEB_TypeDefinitionIndex = 92753;

class MGGFABNBOEB : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* JEKCEMEPJJF; // 0x18
	::MoleMole::MonoUIColorCollection* PPCNNJIAFKJ; // 0x20
	::MoleMole::MonoUIColorCollection* PFAICKKBAAL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EICJEGMKLJJ; // 0x30
	::MoleMole::MonoUIColorCollection* BLEANPMCFMB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BPIFDAGCBCI; // 0x40
	::FGCOIBFFCHB* IGKGMPMNFCL; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* BFHDHAPPEJM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFABNBOEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGGFABNBOEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGGFABNBOEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGGFABNBOEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
