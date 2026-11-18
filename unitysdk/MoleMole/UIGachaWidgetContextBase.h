#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OEOKKPFJCHO;
class PGPEKBONDHI;
namespace System { class Action; }

#define MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1893AE10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaWidgetContextBase_TypeDefinitionIndex = 70449;

	class UIGachaWidgetContextBase : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OEOKKPFJCHO* UIConfig; // 0x28
		::System::Action* clickPreview; // 0x30
		::PGPEKBONDHI* Gacha; // 0x38

		::System::Void _ctor(::PGPEKBONDHI* gacha, ::OEOKKPFJCHO* uiConfig)
		{
			return ((::System::Void(*)(::PVOID, ::PGPEKBONDHI*, ::OEOKKPFJCHO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAWIDGETCONTEXTBASE__CTOR_OFFSET))(this, gacha, uiConfig);
		}
	};
}
