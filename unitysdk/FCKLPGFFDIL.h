#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerConfigMono; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define FCKLPGFFDIL_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x14194E40)
#define FCKLPGFFDIL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14194FA0)
#define FCKLPGFFDIL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14194D80)
#define FCKLPGFFDIL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14194BD0)
#define FCKLPGFFDIL_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x14194F00)
#define FCKLPGFFDIL__CTOR_OFFSET UNITYSDK_OFFSET(0x14194EF0)

inline static constexpr unsigned int FCKLPGFFDIL_TypeDefinitionIndex = 64798;

class FCKLPGFFDIL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* ANEEEIBEEPJ; // 0x18
	::UnityEngine::RectTransform* BJHABILAGBA; // 0x20
	::MoleMole::UIQuestionsAnswerConfigMono* AHMFPFACACD; // 0x28
	::UnityEngine::Transform* DAFHGHMNJNG; // 0x30
	::UnityEngine::RectTransform* ENFAGCEBABD; // 0x38
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLPGFFDIL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCKLPGFFDIL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + FCKLPGFFDIL_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + FCKLPGFFDIL_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FCKLPGFFDIL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCKLPGFFDIL_KGEBDLGBGNM_OFFSET))(this);
	}
};
