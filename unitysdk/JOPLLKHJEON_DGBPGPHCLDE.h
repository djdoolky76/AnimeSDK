#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JOPLLKHJEON_DGBPGPHCLDE__CTOR_OFFSET UNITYSDK_OFFSET(0x13AE5550)

inline static constexpr unsigned int JOPLLKHJEON_DGBPGPHCLDE_TypeDefinitionIndex = 62009;

class JOPLLKHJEON_DGBPGPHCLDE : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* NGHLLDAJJJE; // 0x10
	::MoleMole::MonoGamepadModule* MLOGBJPPCKD; // 0x18
	::System::Int32 IIDDDBHDBGM; // 0x20

	::System::Void _ctor(::MoleMole::MonoGamepadModule* MLOGBJPPCKD, ::System::Int32 IIDDDBHDBGM, ::UnityEngine::UI::Extension::UILocalizationText* NGHLLDAJJJE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + JOPLLKHJEON_DGBPGPHCLDE__CTOR_OFFSET))(this, MLOGBJPPCKD, IIDDDBHDBGM, NGHLLDAJJJE);
	}
};
