#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OKKKDFPJMHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A67A20)
#define OKKKDFPJMHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A67970)
#define OKKKDFPJMHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A67710)
#define OKKKDFPJMHK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A67A10)

inline static constexpr unsigned int OKKKDFPJMHK_TypeDefinitionIndex = 91472;

class OKKKDFPJMHK : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x18
	::UnityEngine::GameObject* JNLLAKJAPOJ; // 0x20
	::FGCOIBFFCHB* BGABOFECPBN; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* NLJJFFKFCIE; // 0x38
	::UnityEngine::RectTransform* CPEAPHIJELH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NCNHAKIJNHK; // 0x48
	::UnityEngine::Transform* PDACHPLBKIE; // 0x50
	::UnityEngine::Transform* ILOOKLIPDIF; // 0x58
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x60
	::UnityEngine::Transform* MNGLDNDCCIE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKKDFPJMHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKKKDFPJMHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKKDFPJMHK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKKKDFPJMHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
