#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FCKLPGFFDIL;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerConfigMono; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CMAACEOOKAD_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x15A0C600)
#define CMAACEOOKAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15A0C560)
#define CMAACEOOKAD_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x15A0C4B0)
#define CMAACEOOKAD_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x15A0C300)
#define CMAACEOOKAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15A0C270)
#define CMAACEOOKAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15A0C0C0)
#define CMAACEOOKAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15A0C2F0)

inline static constexpr unsigned int CMAACEOOKAD_TypeDefinitionIndex = 82510;

class CMAACEOOKAD : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MoleMole::UIQuestionsAnswerConfigMono* AHMFPFACACD; // 0x18
	::UnityEngine::RectTransform* ENFAGCEBABD; // 0x20
	::UnityEngine::RectTransform* BJHABILAGBA; // 0x28
	::UnityEngine::Transform* DAFHGHMNJNG; // 0x30
	::UnityEngine::CanvasGroup* ANEEEIBEEPJ; // 0x38
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMAACEOOKAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMAACEOOKAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::CMAACEOOKAD* KDGMEFEJMGJ(::FCKLPGFFDIL* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::CMAACEOOKAD*(*)(::FCKLPGFFDIL*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMAACEOOKAD_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMAACEOOKAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMAACEOOKAD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ_1(::FCKLPGFFDIL* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FCKLPGFFDIL*))((::PBYTE)hIl2Cpp + CMAACEOOKAD_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CMAACEOOKAD_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
