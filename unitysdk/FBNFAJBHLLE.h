#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UISlider; }

#define FBNFAJBHLLE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F5A100)
#define FBNFAJBHLLE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F5A000)
#define FBNFAJBHLLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F5A0F0)

inline static constexpr unsigned int FBNFAJBHLLE_TypeDefinitionIndex = 65516;

class FBNFAJBHLLE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CPFKCJLIHKF; // 0x18
	::MoleMole::NotificationBadgeEx* JFDOOELFAOA; // 0x20
	::UnityEngine::UI::Extension::UISlider* EGAGEFLKHHA; // 0x28
	::UnityEngine::UI::Text* JHGGHHOJDPF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNFAJBHLLE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBNFAJBHLLE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBNFAJBHLLE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
