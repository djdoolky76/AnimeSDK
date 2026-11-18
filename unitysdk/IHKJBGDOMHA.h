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

#define IHKJBGDOMHA_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0xEBD90E0)
#define IHKJBGDOMHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEBD9470)
#define IHKJBGDOMHA_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0xEBD93C0)
#define IHKJBGDOMHA_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0xEBD9210)
#define IHKJBGDOMHA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xEBD9050)
#define IHKJBGDOMHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEBD8EA0)
#define IHKJBGDOMHA__CTOR_OFFSET UNITYSDK_OFFSET(0xEBD90D0)

inline static constexpr unsigned int IHKJBGDOMHA_TypeDefinitionIndex = 77650;

class IHKJBGDOMHA : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::RectTransform* BJHABILAGBA; // 0x18
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x20
	::MoleMole::UIQuestionsAnswerConfigMono* AHMFPFACACD; // 0x28
	::UnityEngine::RectTransform* ENFAGCEBABD; // 0x30
	::UnityEngine::Transform* DAFHGHMNJNG; // 0x38
	::UnityEngine::CanvasGroup* ANEEEIBEEPJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKJBGDOMHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHKJBGDOMHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHKJBGDOMHA_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKJBGDOMHA_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::IHKJBGDOMHA* KDGMEFEJMGJ(::FCKLPGFFDIL* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::IHKJBGDOMHA*(*)(::FCKLPGFFDIL*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHKJBGDOMHA_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHKJBGDOMHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ_1(::FCKLPGFFDIL* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FCKLPGFFDIL*))((::PBYTE)hIl2Cpp + IHKJBGDOMHA_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
