#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HMCEOKFPJKD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE9FCD20)
#define HMCEOKFPJKD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE9FCBE0)
#define HMCEOKFPJKD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE9FC9C0)
#define HMCEOKFPJKD__CTOR_OFFSET UNITYSDK_OFFSET(0xE9FCD10)

inline static constexpr unsigned int HMCEOKFPJKD_TypeDefinitionIndex = 74081;

class HMCEOKFPJKD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CBLOOBFCBJP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DGDFFNHJKJG; // 0x20
	::UnityEngine::Transform* IODBDPOLPKA; // 0x28
	::LGINJIKKBJA* BKBMFOJCMOJ; // 0x30
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AEDNDEIDMEH; // 0x40
	::FGCOIBFFCHB* CGMHPIKJFNB; // 0x48
	::FGCOIBFFCHB* NFCIPDGCFLP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCEOKFPJKD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMCEOKFPJKD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMCEOKFPJKD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMCEOKFPJKD_KGEBDLGBGNM_OFFSET))(this);
	}
};
