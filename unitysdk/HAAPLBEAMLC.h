#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class LGINJIKKBJA;
namespace MoleMole { class UIBaseScenePageController; }

#define HAAPLBEAMLC_AHNCANGGHBH_OFFSET UNITYSDK_OFFSET(0x16F1AFC0)
#define HAAPLBEAMLC_GPGPEAKDGMB_OFFSET UNITYSDK_OFFSET(0x16F1BB60)
#define HAAPLBEAMLC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F1AFB0)

inline static constexpr unsigned int HAAPLBEAMLC_TypeDefinitionIndex = 79000;

class HAAPLBEAMLC : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* GHBLGLMKCEJ; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* GHBLGLMKCEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + HAAPLBEAMLC__CTOR_OFFSET))(this, GHBLGLMKCEJ);
	}

	::System::Boolean AHNCANGGHBH(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + HAAPLBEAMLC_AHNCANGGHBH_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Boolean GPGPEAKDGMB(::MoleMole::InputActionEvent MLNBANAGAEE, ::LGINJIKKBJA* FLHCLFCBGOG)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::LGINJIKKBJA*))((::PBYTE)hIl2Cpp + HAAPLBEAMLC_GPGPEAKDGMB_OFFSET))(this, MLNBANAGAEE, FLHCLFCBGOG);
	}
};
