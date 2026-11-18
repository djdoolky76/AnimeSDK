#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS216_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16719B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController___c__DisplayClass216_0_TypeDefinitionIndex = 91344;

	class UIZenkovBagPopWindowController___c__DisplayClass216_0 : public ::System::Object
	{
	public:
		::MonoUITableScrollV2* scrollView; // 0x10
		::MoleMole::MonoGamepadModule* checkModule; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS216_0__CTOR_OFFSET))(this);
		}
	};
}
