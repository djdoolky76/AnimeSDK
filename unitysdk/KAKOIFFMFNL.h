#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KAKOIFFMFNL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155D7480)
#define KAKOIFFMFNL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x155D73D0)
#define KAKOIFFMFNL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155D7200)
#define KAKOIFFMFNL__CTOR_OFFSET UNITYSDK_OFFSET(0x155D7470)

inline static constexpr unsigned int KAKOIFFMFNL_TypeDefinitionIndex = 69431;

class KAKOIFFMFNL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NLFEHCFAKNK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKOIFFMFNL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAKOIFFMFNL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKOIFFMFNL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KAKOIFFMFNL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
