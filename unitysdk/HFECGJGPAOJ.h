#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class ELOBFJJKFKJ;
class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define HFECGJGPAOJ_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x17A43B40)
#define HFECGJGPAOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A43C70)
#define HFECGJGPAOJ_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x17A43E00)
#define HFECGJGPAOJ_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x17A43D10)
#define HFECGJGPAOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A43A70)
#define HFECGJGPAOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A43800)
#define HFECGJGPAOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17A43B30)

inline static constexpr unsigned int HFECGJGPAOJ_TypeDefinitionIndex = 56161;

class HFECGJGPAOJ : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x18
	::UnityEngine::UI::Extension::UITabButton* DEJCPNPHCLA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HDKKJDHAEDK; // 0x28
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MAPANCFKJHK; // 0x38
	::UnityEngine::GameObject* OGDHHANGGIG; // 0x40
	::UnityEngine::RectTransform* FNPKKNIAOCI; // 0x48
	::FGCOIBFFCHB* IPCOIFBOEPA; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* OIGGKFHCPHA; // 0x60
	::MoleMole::NotificationBadge* JFDOOELFAOA; // 0x68
	::UnityEngine::RectTransform* FBDMDGMCPOA; // 0x70
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGJGPAOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFECGJGPAOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFECGJGPAOJ_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFECGJGPAOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::HFECGJGPAOJ* KDGMEFEJMGJ(::ELOBFJJKFKJ* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::HFECGJGPAOJ*(*)(::ELOBFJJKFKJ*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFECGJGPAOJ_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFECGJGPAOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ_1(::ELOBFJJKFKJ* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::ELOBFJJKFKJ*))((::PBYTE)hIl2Cpp + HFECGJGPAOJ_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
