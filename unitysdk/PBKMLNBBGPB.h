#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PBKMLNBBGPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17312570)
#define PBKMLNBBGPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x173124C0)
#define PBKMLNBBGPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17312310)
#define PBKMLNBBGPB__CTOR_OFFSET UNITYSDK_OFFSET(0x17312560)

inline static constexpr unsigned int PBKMLNBBGPB_TypeDefinitionIndex = 82354;

class PBKMLNBBGPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AJOMDPDKPMP; // 0x18
	::LGINJIKKBJA* IIEKFEDDDCM; // 0x20
	::FGCOIBFFCHB* ICNKLEIKJIN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKMLNBBGPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBKMLNBBGPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBKMLNBBGPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBKMLNBBGPB_KGEBDLGBGNM_OFFSET))(this);
	}
};
