#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FHPOPKJDJFO_DECGANKGHLK_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x191C3BA0)
#define FHPOPKJDJFO_DECGANKGHLK__CTOR_OFFSET UNITYSDK_OFFSET(0x191C39A0)

inline static constexpr unsigned int FHPOPKJDJFO_DECGANKGHLK_TypeDefinitionIndex = 78541;

class FHPOPKJDJFO_DECGANKGHLK : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI; // 0x10
	::UnityEngine::RectTransform* GKBJOPJKCLB; // 0x18

	::System::Void _ctor(::UnityEngine::RectTransform* GKBJOPJKCLB, ::UnityEngine::UI::Extension::UILocalizationText* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + FHPOPKJDJFO_DECGANKGHLK__CTOR_OFFSET))(this, GKBJOPJKCLB, FCCLIEJAKLI);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHPOPKJDJFO_DECGANKGHLK_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}
};
