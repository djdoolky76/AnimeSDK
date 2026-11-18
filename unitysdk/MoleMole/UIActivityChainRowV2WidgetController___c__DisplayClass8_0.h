#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class KOIDMLPJGML;
class PLDJFGCHMKK;

#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BEE260)
#define MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x14BEE270)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityChainRowV2WidgetController___c__DisplayClass8_0_TypeDefinitionIndex = 42421;

	class UIActivityChainRowV2WidgetController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::AOJKLCGGPAK* task; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::KOIDMLPJGML* _OnScrollItemUpdate_b__0(::PLDJFGCHMKK* x)
		{
			return ((::KOIDMLPJGML*(*)(::PVOID, ::PLDJFGCHMKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINROWV2WIDGETCONTROLLER___C__DISPLAYCLASS8_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this, x);
		}
	};
}
