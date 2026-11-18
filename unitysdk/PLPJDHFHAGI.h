#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PLPJDHFHAGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D9D42C0)
#define PLPJDHFHAGI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1D9D4230)
#define PLPJDHFHAGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D9D4080)
#define PLPJDHFHAGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D42B0)

inline static constexpr unsigned int PLPJDHFHAGI_TypeDefinitionIndex = 59091;

class PLPJDHFHAGI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::MoleMole::NotificationBadgeEx* HFCOKPBMGGA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MFPDNAIGFLG; // 0x28
	::UnityEngine::GameObject* MKKBLIFPING; // 0x30
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJDHFHAGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLPJDHFHAGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PLPJDHFHAGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJDHFHAGI_KGEBDLGBGNM_OFFSET))(this);
	}
};
