#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define JLFAKFNAMKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1558A7B0)
#define JLFAKFNAMKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1558A6C0)
#define JLFAKFNAMKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1558A4F0)
#define JLFAKFNAMKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1558A7A0)

inline static constexpr unsigned int JLFAKFNAMKE_TypeDefinitionIndex = 57327;

class JLFAKFNAMKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GGMJGKKMLLF; // 0x18
	::UnityEngine::GameObject* HMPNHFMMJBE; // 0x20
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x28
	::FGCOIBFFCHB* MMNGBDNIJKP; // 0x30
	::UnityEngine::UI::Extension::UIButtonEx* KHOJKFHFKIJ; // 0x38
	::FGCOIBFFCHB* DLONPENKLAH; // 0x40
	::UnityEngine::GameObject* HPDMBJFALNM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFAKFNAMKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLFAKFNAMKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLFAKFNAMKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFAKFNAMKE_KGEBDLGBGNM_OFFSET))(this);
	}
};
