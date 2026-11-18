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

#define CEDAEHGCIHJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145B0960)
#define CEDAEHGCIHJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145B0870)
#define CEDAEHGCIHJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145B0610)
#define CEDAEHGCIHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x145B0950)

inline static constexpr unsigned int CEDAEHGCIHJ_TypeDefinitionIndex = 83025;

class CEDAEHGCIHJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* LAHDPGLIHND; // 0x18
	::FGCOIBFFCHB* FCFMELEHEMO; // 0x20
	::UIControllerExtensionData* NHPCCIFGOBF; // 0x28
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x30
	::UnityEngine::GameObject* AHOPIAPKLIH; // 0x38
	::UnityEngine::RectTransform* EHMLMJKEJMM; // 0x40
	::UnityEngine::CanvasGroup* JIHNLAGEDLN; // 0x48
	::UnityEngine::Transform* LBIHJNDFLOI; // 0x50
	::LGINJIKKBJA* JDBDAFFFOJK; // 0x58
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x60
	::UnityEngine::RectTransform* NHGGPNJCKKP; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDAEHGCIHJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEDAEHGCIHJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDAEHGCIHJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CEDAEHGCIHJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
