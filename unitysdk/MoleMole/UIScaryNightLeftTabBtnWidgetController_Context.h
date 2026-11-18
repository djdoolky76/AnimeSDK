#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class IBENDELLLAO;
namespace System { class String; }

#define MOLEMOLE_UISCARYNIGHTLEFTTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x169003F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightLeftTabBtnWidgetController_Context_TypeDefinitionIndex = 86001;

	class UIScaryNightLeftTabBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IBENDELLLAO* RedSignNode; // 0x28
		::System::String* NameKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTLEFTTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
