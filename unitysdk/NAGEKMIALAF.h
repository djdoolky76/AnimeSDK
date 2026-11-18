#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NAGEKMIALAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13EC9F70)
#define NAGEKMIALAF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13EC9E80)
#define NAGEKMIALAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13EC9CA0)
#define NAGEKMIALAF__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC9F60)

inline static constexpr unsigned int NAGEKMIALAF_TypeDefinitionIndex = 68821;

class NAGEKMIALAF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PBNOPGCPMAP; // 0x18
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x20
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x28
	::UnityEngine::GameObject* OABNNOILBPO; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KAKFJLCDEAL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGEKMIALAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAGEKMIALAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGEKMIALAF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAGEKMIALAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
