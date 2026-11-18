#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define EMGCCKNMAOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11CB9930)
#define EMGCCKNMAOP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CB9840)
#define EMGCCKNMAOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CB95E0)
#define EMGCCKNMAOP__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB9920)

inline static constexpr unsigned int EMGCCKNMAOP_TypeDefinitionIndex = 49500;

class EMGCCKNMAOP : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x18
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x20
	::FGCOIBFFCHB* FCFMELEHEMO; // 0x28
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x30
	::UnityEngine::CanvasGroup* LAHDPGLIHND; // 0x38
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x40
	::UnityEngine::CanvasGroup* JIHNLAGEDLN; // 0x48
	::UnityEngine::GameObject* AHOPIAPKLIH; // 0x50
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x58
	::UnityEngine::RectTransform* NHGGPNJCKKP; // 0x60
	::UIControllerExtensionData* NHPCCIFGOBF; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGCCKNMAOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMGCCKNMAOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMGCCKNMAOP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMGCCKNMAOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
