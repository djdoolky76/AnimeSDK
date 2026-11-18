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

#define BGAHDJCIHGM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1866D3F0)
#define BGAHDJCIHGM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1866D250)
#define BGAHDJCIHGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1866CF80)
#define BGAHDJCIHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1866D3E0)

inline static constexpr unsigned int BGAHDJCIHGM_TypeDefinitionIndex = 79193;

class BGAHDJCIHGM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CAONLHMKPCJ; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::RectTransform* NADFFMLOGKK; // 0x30
	::UnityEngine::Transform* KBHFMOCELCP; // 0x38
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x40
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* PHNFFKOFIMI; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* GDANPDNHLDC; // 0x58
	::FGCOIBFFCHB* EKCMLFDCHNP; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BIGMAIMFEOB; // 0x68
	::UnityEngine::Transform* HBOJCKFCOJI; // 0x70
	::UnityEngine::UI::Extension::UITimeWidget* EAFAECECFFH; // 0x78
	::FGCOIBFFCHB* BFCKCCMHGIG; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAHDJCIHGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGAHDJCIHGM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGAHDJCIHGM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGAHDJCIHGM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
