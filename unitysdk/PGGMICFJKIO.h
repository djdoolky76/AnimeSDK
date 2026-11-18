#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/PONEGOPCLPF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

namespace MoleMole { class UIBaseScenePageController; }

#define PGGMICFJKIO_ANKOFPBAAAC_OFFSET UNITYSDK_OFFSET(0x14B9B710)
#define PGGMICFJKIO_EBMLDLIHPEM_OFFSET UNITYSDK_OFFSET(0x14B9B780)
#define PGGMICFJKIO_KNEEFKIPDOF_OFFSET UNITYSDK_OFFSET(0x14B9B2D0)
#define PGGMICFJKIO__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9B2C0)

inline static constexpr unsigned int PGGMICFJKIO_TypeDefinitionIndex = 74735;

class PGGMICFJKIO : public ::System::Object
{
public:
	::MoleMole::UIBaseScenePageController* KGAHIGELGJF; // 0x10

	::System::Void _ctor(::MoleMole::UIBaseScenePageController* JGFKBBFIPJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseScenePageController*))((::PBYTE)hIl2Cpp + PGGMICFJKIO__CTOR_OFFSET))(this, JGFKBBFIPJF);
	}

	::System::Boolean KNEEFKIPDOF(::MoleMole::InputActionEvent MLNBANAGAEE, ::PONEGOPCLPF LGEOOBHMAPF, ::MoleMole::InputLogicEventType JJEDBONHOKI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent, ::PONEGOPCLPF, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + PGGMICFJKIO_KNEEFKIPDOF_OFFSET))(this, MLNBANAGAEE, LGEOOBHMAPF, JJEDBONHOKI);
	}

	::System::Boolean EBMLDLIHPEM(::System::Boolean AIJIDAJJDMH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGGMICFJKIO_EBMLDLIHPEM_OFFSET))(this, AIJIDAJJDMH);
	}

	::System::Boolean ANKOFPBAAAC(::PONEGOPCLPF LGEOOBHMAPF)
	{
		return ((::System::Boolean(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + PGGMICFJKIO_ANKOFPBAAAC_OFFSET))(this, LGEOOBHMAPF);
	}
};
