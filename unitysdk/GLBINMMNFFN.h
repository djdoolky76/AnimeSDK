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

#define GLBINMMNFFN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15D73CA0)
#define GLBINMMNFFN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15D73B70)
#define GLBINMMNFFN__CTOR_OFFSET UNITYSDK_OFFSET(0x15D73C90)

inline static constexpr unsigned int GLBINMMNFFN_TypeDefinitionIndex = 80454;

class GLBINMMNFFN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ABILMADLNDM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::MoleMole::NotificationBadgeEx* EDGECKDFLFC; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::UI::Extension::UIToggleButton* KHOJKFHFKIJ; // 0x38
	::MonoUITableScrollV2* KKLLNCFHCFI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBINMMNFFN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLBINMMNFFN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLBINMMNFFN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
