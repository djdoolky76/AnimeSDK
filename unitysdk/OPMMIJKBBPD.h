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

#define OPMMIJKBBPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178A90C0)
#define OPMMIJKBBPD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178A8FA0)
#define OPMMIJKBBPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178A8CF0)
#define OPMMIJKBBPD__CTOR_OFFSET UNITYSDK_OFFSET(0x178A90B0)

inline static constexpr unsigned int OPMMIJKBBPD_TypeDefinitionIndex = 74602;

class OPMMIJKBBPD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x20
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x38
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x40
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x48
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x50
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x58
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x60
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x68
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x70
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMMIJKBBPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPMMIJKBBPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPMMIJKBBPD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPMMIJKBBPD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
