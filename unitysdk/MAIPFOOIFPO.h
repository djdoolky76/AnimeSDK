#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MAIPFOOIFPO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1568DBA0)
#define MAIPFOOIFPO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1568DAA0)
#define MAIPFOOIFPO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1568D8A0)
#define MAIPFOOIFPO__CTOR_OFFSET UNITYSDK_OFFSET(0x1568DB90)

inline static constexpr unsigned int MAIPFOOIFPO_TypeDefinitionIndex = 87754;

class MAIPFOOIFPO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x18
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x20
	::UnityEngine::UI::Extension::UITabButton* JEJJONGBOFJ; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x38
	::FGCOIBFFCHB* MCJDMJHOBJO; // 0x40
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIPFOOIFPO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAIPFOOIFPO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAIPFOOIFPO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAIPFOOIFPO_KGEBDLGBGNM_OFFSET))(this);
	}
};
