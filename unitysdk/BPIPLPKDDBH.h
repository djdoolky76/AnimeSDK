#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define BPIPLPKDDBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F125B00)
#define BPIPLPKDDBH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1F1259E0)
#define BPIPLPKDDBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F125730)
#define BPIPLPKDDBH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F125AF0)

inline static constexpr unsigned int BPIPLPKDDBH_TypeDefinitionIndex = 95126;

class BPIPLPKDDBH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x18
	::LGINJIKKBJA* KADDHBOOKAC; // 0x20
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x38
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x40
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x48
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x50
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x58
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x60
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x68
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x70
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIPLPKDDBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIPLPKDDBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPIPLPKDDBH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BPIPLPKDDBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
