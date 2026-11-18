#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PJJPBGEDDIN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C65FBA0)
#define PJJPBGEDDIN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C65FA90)
#define PJJPBGEDDIN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C65F8A0)
#define PJJPBGEDDIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C65FB90)

inline static constexpr unsigned int PJJPBGEDDIN_TypeDefinitionIndex = 82420;

class PJJPBGEDDIN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x18
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x20
	::FGCOIBFFCHB* NFCIPDGCFLP; // 0x28
	::FGCOIBFFCHB* CBLOOBFCBJP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::UnityEngine::Transform* IODBDPOLPKA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJPBGEDDIN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJJPBGEDDIN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJPBGEDDIN_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJJPBGEDDIN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
