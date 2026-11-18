#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class POEMJBHLPAD;
namespace MoleMole { class MonoGuideItemConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BDKEKAAJNOG_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x14383AC0)
#define BDKEKAAJNOG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14383A20)
#define BDKEKAAJNOG_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x14383930)
#define BDKEKAAJNOG_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x14383840)
#define BDKEKAAJNOG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x143837B0)
#define BDKEKAAJNOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14383550)
#define BDKEKAAJNOG__CTOR_OFFSET UNITYSDK_OFFSET(0x14383830)

inline static constexpr unsigned int BDKEKAAJNOG_TypeDefinitionIndex = 52091;

class BDKEKAAJNOG : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::RectTransform* MCCNMLNMCJF; // 0x18
	::UnityEngine::CanvasGroup* OCKENNPJMHL; // 0x20
	::MoleMole::MonoGuideItemConfig* DFMKILICPFB; // 0x28
	::UnityEngine::RectTransform* GKLEIMGLOGA; // 0x30
	::GCIMMDDIFBJ* NJNAACMKEBD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KIKKEBAHHOA; // 0x40
	::UnityEngine::Transform* FMJEJOOLKCK; // 0x48
	::GCIMMDDIFBJ* AOKJEGNBALI; // 0x50
	::UnityEngine::UI::Text* HLCMIEKCKAP; // 0x58
	::UnityEngine::RectTransform* EMDOIDLAFDB; // 0x60
	::FGCOIBFFCHB* LOELDBNKAKF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKEKAAJNOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDKEKAAJNOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::BDKEKAAJNOG* KDGMEFEJMGJ(::POEMJBHLPAD* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::BDKEKAAJNOG*(*)(::POEMJBHLPAD*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDKEKAAJNOG_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::POEMJBHLPAD* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::POEMJBHLPAD*))((::PBYTE)hIl2Cpp + BDKEKAAJNOG_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKEKAAJNOG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDKEKAAJNOG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDKEKAAJNOG_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
