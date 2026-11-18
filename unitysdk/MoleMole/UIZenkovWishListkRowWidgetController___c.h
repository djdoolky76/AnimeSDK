#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__BINDREOPENWAREHOUSE_B__17_0_OFFSET UNITYSDK_OFFSET(0x12869EF0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12869EA0)
#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12869EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController___c_TypeDefinitionIndex = 75757;

	class UIZenkovWishListkRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__17_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWishListkRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C840);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovWishListkRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x3C848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _BindReopenWarehouse_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER___C__BINDREOPENWAREHOUSE_B__17_0_OFFSET))(this);
		}
	};
}
