#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define EPNPLENDIND_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1237F850)
#define EPNPLENDIND_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1237F750)
#define EPNPLENDIND_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1237F530)
#define EPNPLENDIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1237F840)

inline static constexpr unsigned int EPNPLENDIND_TypeDefinitionIndex = 60642;

class EPNPLENDIND : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x18
	::UnityEngine::RectTransform* MGJHBBLNDJB; // 0x20
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x28
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x30
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x48
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x50
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNPLENDIND__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPNPLENDIND_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPNPLENDIND_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPNPLENDIND_KGEBDLGBGNM_OFFSET))(this);
	}
};
