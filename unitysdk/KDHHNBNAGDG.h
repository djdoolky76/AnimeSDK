#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define KDHHNBNAGDG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A4BF970)
#define KDHHNBNAGDG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A4BF890)
#define KDHHNBNAGDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BF960)

inline static constexpr unsigned int KDHHNBNAGDG_TypeDefinitionIndex = 71939;

class KDHHNBNAGDG : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadge* BHHKPPEFJKH; // 0x18
	::UnityEngine::UI::Extension::UITabButton* KHOJKFHFKIJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHHNBNAGDG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDHHNBNAGDG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDHHNBNAGDG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
