#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ACCNCELACKF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12CD5840)
#define ACCNCELACKF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12CD5740)
#define ACCNCELACKF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12CD5450)
#define ACCNCELACKF__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD5830)

inline static constexpr unsigned int ACCNCELACKF_TypeDefinitionIndex = 57028;

class ACCNCELACKF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EGBCJIJPKGC; // 0x18
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x20
	::UnityEngine::GameObject* IKELGABMBGM; // 0x28
	::UnityEngine::GameObject* NKOKAFLOJCM; // 0x30
	::LGINJIKKBJA* OBBONADPABF; // 0x38
	::FGCOIBFFCHB* EEOCCAKAGML; // 0x40
	::FGCOIBFFCHB* KMIEIECBCDH; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* ICCBAJHBIKB; // 0x50
	::UnityEngine::GameObject* JMOHEIBFKBH; // 0x58
	::UnityEngine::GameObject* OPCECCKANEK; // 0x60
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x68
	::UnityEngine::GameObject* CONBBLDCMED; // 0x70
	::UnityEngine::GameObject* IBKNIMBCAGF; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x80
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x88
	::UnityEngine::GameObject* IOFPLDADPMJ; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCNCELACKF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACCNCELACKF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACCNCELACKF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCNCELACKF_KGEBDLGBGNM_OFFSET))(this);
	}
};
