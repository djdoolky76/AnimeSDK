#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define INPGNBOBLNF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18713920)
#define INPGNBOBLNF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18713780)
#define INPGNBOBLNF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x187134B0)
#define INPGNBOBLNF__CTOR_OFFSET UNITYSDK_OFFSET(0x18713910)

inline static constexpr unsigned int INPGNBOBLNF_TypeDefinitionIndex = 39479;

class INPGNBOBLNF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::FGCOIBFFCHB* BFCKCCMHGIG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x30
	::UnityEngine::RectTransform* NADFFMLOGKK; // 0x38
	::UnityEngine::Transform* HBOJCKFCOJI; // 0x40
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x48
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x50
	::FGCOIBFFCHB* EKCMLFDCHNP; // 0x58
	::FGCOIBFFCHB* CAONLHMKPCJ; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* GDANPDNHLDC; // 0x68
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x70
	::UnityEngine::Transform* KBHFMOCELCP; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* PHNFFKOFIMI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPGNBOBLNF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INPGNBOBLNF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPGNBOBLNF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + INPGNBOBLNF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
