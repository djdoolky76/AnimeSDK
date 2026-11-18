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

#define EOJPBGBONEG_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x10F4CB30)
#define EOJPBGBONEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10F4CA90)
#define EOJPBGBONEG_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x10F4C9E0)
#define EOJPBGBONEG_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x10F4C830)
#define EOJPBGBONEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10F4C7A0)
#define EOJPBGBONEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10F4C5F0)
#define EOJPBGBONEG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F4C820)

inline static constexpr unsigned int EOJPBGBONEG_TypeDefinitionIndex = 45387;

class EOJPBGBONEG : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MoleMole::UIQuestionsAnswerConfigMono* AHMFPFACACD; // 0x18
	::UnityEngine::CanvasGroup* ANEEEIBEEPJ; // 0x20
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x28
	::UnityEngine::RectTransform* BJHABILAGBA; // 0x30
	::UnityEngine::RectTransform* ENFAGCEBABD; // 0x38
	::UnityEngine::Transform* DAFHGHMNJNG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJPBGBONEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOJPBGBONEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::EOJPBGBONEG* KDGMEFEJMGJ(::FCKLPGFFDIL* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::EOJPBGBONEG*(*)(::FCKLPGFFDIL*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOJPBGBONEG_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::FCKLPGFFDIL* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FCKLPGFFDIL*))((::PBYTE)hIl2Cpp + EOJPBGBONEG_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOJPBGBONEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EOJPBGBONEG_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOJPBGBONEG_KGEBDLGBGNM_OFFSET))(this);
	}
};
