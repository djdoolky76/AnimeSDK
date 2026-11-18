#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define DBHAGEFCLBL__CTOR_OFFSET UNITYSDK_OFFSET(0x73C5B0)

inline static constexpr unsigned int DBHAGEFCLBL_TypeDefinitionIndex = 43575;

struct alignas(8) DBHAGEFCLBL
{
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x10
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x18
	::UnityEngine::RectTransform* JLLJPNMPKJA; // 0x20
	::UnityEngine::RectTransform* BHLIFEJDMKK; // 0x28
	::UnityEngine::RectTransform* OBOGDBPJOBK; // 0x30
	::UnityEngine::RectTransform* CGNOCJLHPBE; // 0x38
	::UnityEngine::CanvasGroup* DAGCDFAIHAN; // 0x40
	::UnityEngine::Vector2 BKCLFOHPDHC; // 0x48
	::UnityEngine::Vector2 HLPIGIFNCJM; // 0x50
	::UnityEngine::Vector3 JEJMGCNBMAD; // 0x58
	::System::Single HJAELOJANHE; // 0x64
	::System::Single DABNHDKLAAD; // 0x68
	::System::Boolean PODOGFBIPGF; // 0x6C
	::System::Boolean FELEKFCCMDE; // 0x6D

	::System::Void _ctor(::UnityEngine::RectTransform* HMMMOCJAEOA, ::UnityEngine::RectTransform* IHNGBLNIEIH, ::UnityEngine::RectTransform* AHINOHOOBKD, ::UnityEngine::RectTransform* AAPGKJNMMLA, ::UnityEngine::RectTransform* ACHOOAJIBOD, ::UnityEngine::RectTransform* IKKAMNKOJPG, ::UnityEngine::CanvasGroup* BKLIAPIGFIF, ::UnityEngine::Vector2 KHELDPEJAAK, ::UnityEngine::Vector2 LGADIBABPHP, ::UnityEngine::Vector3 CLMNLPKFBFA, ::System::Single HOGLNHIGBBO, ::System::Single OFCGNDNHJNF, ::System::Boolean FNMKEMIJION, ::System::Boolean KHEGBMLECNL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::CanvasGroup*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DBHAGEFCLBL__CTOR_OFFSET))(this, HMMMOCJAEOA, IHNGBLNIEIH, AHINOHOOBKD, AAPGKJNMMLA, ACHOOAJIBOD, IKKAMNKOJPG, BKLIAPIGFIF, KHELDPEJAAK, LGADIBABPHP, CLMNLPKFBFA, HOGLNHIGBBO, OFCGNDNHJNF, FNMKEMIJION, KHEGBMLECNL);
	}
};
