#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FBFLHJBIGFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xBB31BD0)
#define FBFLHJBIGFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xBB31AB0)
#define FBFLHJBIGFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xBB31890)
#define FBFLHJBIGFH__CTOR_OFFSET UNITYSDK_OFFSET(0xBB31BC0)

inline static constexpr unsigned int FBFLHJBIGFH_TypeDefinitionIndex = 49206;

class FBFLHJBIGFH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EBGGJKEIFIO; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* MFLOGCBCLBC; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::FGCOIBFFCHB* DAHIDMJBGIL; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFLHJBIGFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBFLHJBIGFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFLHJBIGFH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBFLHJBIGFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
