#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MBLOFOMFNPC_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x15922860)
#define MBLOFOMFNPC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15922980)
#define MBLOFOMFNPC_GABGAGLEEGM_OFFSET UNITYSDK_OFFSET(0x15922610)
#define MBLOFOMFNPC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15922760)
#define MBLOFOMFNPC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159222F0)
#define MBLOFOMFNPC_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x159228E0)
#define MBLOFOMFNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x159228D0)

inline static constexpr unsigned int MBLOFOMFNPC_TypeDefinitionIndex = 68030;

class MBLOFOMFNPC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JCLGPAMLEHP; // 0x18
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x20
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* ICBLKBNCAGB; // 0x30
	::FGCOIBFFCHB* EFBGPHHBEFM; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* LCOPBPLKHLN; // 0x40
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x48
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x50
	::FGCOIBFFCHB* HLALDFILOKN; // 0x58
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x60
	::LGINJIKKBJA* JDDJCJDJMLP; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* JLOCCIIAHOD; // 0x70
	::UnityEngine::GameObject* NBHINBHPNNJ; // 0x78
	::UnityEngine::Animation* DFIPCHJDKKC; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x88
	::UnityEngine::RectTransform* CAGPFFPFFMC; // 0x90
	::UnityEngine::RectTransform* GOLJOENEOBE; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLOFOMFNPC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBLOFOMFNPC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + MBLOFOMFNPC_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* GABGAGLEEGM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBLOFOMFNPC_GABGAGLEEGM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + MBLOFOMFNPC_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBLOFOMFNPC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLOFOMFNPC_KGEBDLGBGNM_OFFSET))(this);
	}
};
