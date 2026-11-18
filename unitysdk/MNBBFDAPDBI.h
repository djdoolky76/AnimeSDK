#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MBLOFOMFNPC;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MNBBFDAPDBI_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x131A5810)
#define MNBBFDAPDBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x131A5B50)
#define MNBBFDAPDBI_GABGAGLEEGM_OFFSET UNITYSDK_OFFSET(0x131A55A0)
#define MNBBFDAPDBI_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x131A5A60)
#define MNBBFDAPDBI_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x131A5940)
#define MNBBFDAPDBI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x131A56F0)
#define MNBBFDAPDBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x131A5280)
#define MNBBFDAPDBI__CTOR_OFFSET UNITYSDK_OFFSET(0x131A5800)

inline static constexpr unsigned int MNBBFDAPDBI_TypeDefinitionIndex = 58600;

class MNBBFDAPDBI : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* JLOCCIIAHOD; // 0x18
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* JCLGPAMLEHP; // 0x30
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x38
	::UnityEngine::RectTransform* GOLJOENEOBE; // 0x40
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x48
	::UnityEngine::GameObject* NBHINBHPNNJ; // 0x50
	::UnityEngine::Animation* DFIPCHJDKKC; // 0x58
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* LCOPBPLKHLN; // 0x60
	::LGINJIKKBJA* JDDJCJDJMLP; // 0x68
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x70
	::FGCOIBFFCHB* HLALDFILOKN; // 0x78
	::UnityEngine::RectTransform* CAGPFFPFFMC; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* ICBLKBNCAGB; // 0x88
	::FGCOIBFFCHB* EFBGPHHBEFM; // 0x90
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBBFDAPDBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNBBFDAPDBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNBBFDAPDBI_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNBBFDAPDBI_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ(::MBLOFOMFNPC* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::MBLOFOMFNPC*))((::PBYTE)hIl2Cpp + MNBBFDAPDBI_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* GABGAGLEEGM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNBBFDAPDBI_GABGAGLEEGM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	static ::MNBBFDAPDBI* KDGMEFEJMGJ_1(::MBLOFOMFNPC* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::MNBBFDAPDBI*(*)(::MBLOFOMFNPC*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNBBFDAPDBI_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNBBFDAPDBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
