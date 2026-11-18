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

#define BEGHDBCKGDO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13622D10)
#define BEGHDBCKGDO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13622C10)
#define BEGHDBCKGDO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x136229C0)
#define BEGHDBCKGDO__CTOR_OFFSET UNITYSDK_OFFSET(0x13622D00)

inline static constexpr unsigned int BEGHDBCKGDO_TypeDefinitionIndex = 69163;

class BEGHDBCKGDO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::MoleMole::NotificationBadgeEx* FLANDOHPICD; // 0x30
	::UnityEngine::GameObject* MJMHFKFBMGD; // 0x38
	::UnityEngine::UI::Extension::UIToggleButton* HJDAMCBKNEI; // 0x40
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x48
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x50
	::UnityEngine::RectTransform* MDKJDDANKMP; // 0x58
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x60
	::UnityEngine::RectTransform* MGJHBBLNDJB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGHDBCKGDO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BEGHDBCKGDO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGHDBCKGDO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BEGHDBCKGDO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
