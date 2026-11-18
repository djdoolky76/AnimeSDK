#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define PNGDMNBIKPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9F7B10)
#define PNGDMNBIKPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9F7A10)
#define PNGDMNBIKPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F7B00)

inline static constexpr unsigned int PNGDMNBIKPP_TypeDefinitionIndex = 91643;

class PNGDMNBIKPP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButton* FNMOJAPJAJI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x28
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGDMNBIKPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGDMNBIKPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGDMNBIKPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
