#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class KEIIDJNOFOH;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KMCMDLJJGMI_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x17666B50)
#define KMCMDLJJGMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17666C80)
#define KMCMDLJJGMI_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x17666A20)
#define KMCMDLJJGMI_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x17666930)
#define KMCMDLJJGMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17666780)
#define KMCMDLJJGMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17666440)
#define KMCMDLJJGMI__CTOR_OFFSET UNITYSDK_OFFSET(0x17666920)

inline static constexpr unsigned int KMCMDLJJGMI_TypeDefinitionIndex = 60906;

class KMCMDLJJGMI : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::FGCOIBFFCHB* BDIKCEFFEGC; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* FKNFCJILFCI; // 0x20
	::FGCOIBFFCHB* HFEHDHCNJHB; // 0x28
	::FGCOIBFFCHB* EKALLFMNALD; // 0x30
	::UnityEngine::RectTransform* KCPCLPKAOGG; // 0x38
	::FGCOIBFFCHB* HFAFFNLNAJE; // 0x40
	::FGCOIBFFCHB* NHCBDGIKIDI; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AHILJDPDLKF; // 0x50
	::FGCOIBFFCHB* GHALAAHHEDJ; // 0x58
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x60
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x68
	::UnityEngine::RectTransform* OPMIDGCFJDF; // 0x70
	::UnityEngine::RectTransform* KOBLNDABOLK; // 0x78
	::FGCOIBFFCHB* OJIOGJBAKKO; // 0x80
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x88
	::UnityEngine::RectTransform* ENOHLIOIADA; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* NNACFHKFMDE; // 0x98
	::FGCOIBFFCHB* DIBGKEBPEDB; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCMDLJJGMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMCMDLJJGMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::KMCMDLJJGMI* KDGMEFEJMGJ(::KEIIDJNOFOH* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::KMCMDLJJGMI*(*)(::KEIIDJNOFOH*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMCMDLJJGMI_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMCMDLJJGMI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ_1(::KEIIDJNOFOH* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::KEIIDJNOFOH*))((::PBYTE)hIl2Cpp + KMCMDLJJGMI_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMCMDLJJGMI_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KMCMDLJJGMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
