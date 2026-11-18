#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define AFJKKMKAPBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144D6CE0)
#define AFJKKMKAPBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144D6B80)
#define AFJKKMKAPBI__CTOR_OFFSET UNITYSDK_OFFSET(0x144D6CD0)

inline static constexpr unsigned int AFJKKMKAPBI_TypeDefinitionIndex = 42086;

class AFJKKMKAPBI : public ::GIBMJLOJLKD
{
public:
	::MoleMole::NotificationBadgeEx* EDGECKDFLFC; // 0x18
	::MonoUITableScrollV2* KKLLNCFHCFI; // 0x20
	::UnityEngine::RectTransform* FPDIJKAKIJE; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* ABILMADLNDM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::UnityEngine::UI::Extension::UIToggleButton* KHOJKFHFKIJ; // 0x48
	::UnityEngine::RectTransform* OECLNMAKJLP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFJKKMKAPBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFJKKMKAPBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AFJKKMKAPBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
