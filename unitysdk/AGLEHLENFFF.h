#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define AGLEHLENFFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12CF19A0)
#define AGLEHLENFFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12CF1870)
#define AGLEHLENFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x12CF1990)

inline static constexpr unsigned int AGLEHLENFFF_TypeDefinitionIndex = 64353;

class AGLEHLENFFF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButton* FNMOJAPJAJI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::UI::Text* EAFMPPKOHNM; // 0x28
	::MoleMole::NotificationBadge* HFCOKPBMGGA; // 0x30
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x38
	::UnityEngine::UI::Text* EBLOKCDOAEN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGLEHLENFFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGLEHLENFFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGLEHLENFFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
