#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGGGPPLICEA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_TABDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x4971C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeTabBtnsWidgetController_TabDef_TypeDefinitionIndex = 38432;

	struct alignas(8) UIBossChallengeTabBtnsWidgetController_TabDef
	{
		::JGGGPPLICEA PlayType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* FadeInClip; // 0x18
		::System::String* FadeOutClip; // 0x20

		::System::Void _ctor(::JGGGPPLICEA playType, ::System::String* fadeIn, ::System::String* fadeOut)
		{
			return ((::System::Void(*)(::PVOID, ::JGGGPPLICEA, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGETABBTNSWIDGETCONTROLLER_TABDEF__CTOR_OFFSET))(this, playType, fadeIn, fadeOut);
		}
	};
}
