#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define AJFLDMIBLCI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16FF2E50)
#define AJFLDMIBLCI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16FF2CD0)
#define AJFLDMIBLCI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16FF29C0)
#define AJFLDMIBLCI__CTOR_OFFSET UNITYSDK_OFFSET(0x16FF2E40)

inline static constexpr unsigned int AJFLDMIBLCI_TypeDefinitionIndex = 84737;

class AJFLDMIBLCI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HHCFGKALBBA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GDANPDNHLDC; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EACMHIOKPFF; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x38
	::MoleMole::MonoGamepadCustomList* EGPANKKMDML; // 0x40
	::FGCOIBFFCHB* EKCMLFDCHNP; // 0x48
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x50
	::UnityEngine::Transform* KBHFMOCELCP; // 0x58
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x60
	::FGCOIBFFCHB* BFCKCCMHGIG; // 0x68
	::UnityEngine::Transform* HBOJCKFCOJI; // 0x70
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* FEFHJAJBBOH; // 0x80
	::UnityEngine::RectTransform* NADFFMLOGKK; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* PHNFFKOFIMI; // 0x90
	::FGCOIBFFCHB* CAONLHMKPCJ; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFLDMIBLCI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJFLDMIBLCI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AJFLDMIBLCI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJFLDMIBLCI_KGEBDLGBGNM_OFFSET))(this);
	}
};
