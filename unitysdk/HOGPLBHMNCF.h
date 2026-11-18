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

#define HOGPLBHMNCF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BE13A0)
#define HOGPLBHMNCF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BE1280)
#define HOGPLBHMNCF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BE0FD0)
#define HOGPLBHMNCF__CTOR_OFFSET UNITYSDK_OFFSET(0x15BE1390)

inline static constexpr unsigned int HOGPLBHMNCF_TypeDefinitionIndex = 87969;

class HOGPLBHMNCF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EBPAGMLFKFH; // 0x18
	::FGCOIBFFCHB* CIJAKOOOPNG; // 0x20
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x28
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x30
	::UIControllerExtensionData* GNHHKKAAJAA; // 0x38
	::UnityEngine::Animator* KEMKOKGFIGM; // 0x40
	::FGCOIBFFCHB* LEIGOPHEFHC; // 0x48
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x50
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x58
	::UnityEngine::UI::Text* NMMCKDHAHHH; // 0x60
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x68
	::LGINJIKKBJA* KADDHBOOKAC; // 0x70
	::FGCOIBFFCHB* KAFEDIPPCFO; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPLBHMNCF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOGPLBHMNCF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGPLBHMNCF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOGPLBHMNCF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
