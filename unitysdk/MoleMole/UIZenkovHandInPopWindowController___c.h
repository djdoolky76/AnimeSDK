#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x171C08E0)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x171C0920)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_1_OFFSET UNITYSDK_OFFSET(0x171C0930)
#define MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_3_OFFSET UNITYSDK_OFFSET(0x171C0940)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovHandInPopWindowController___c_TypeDefinitionIndex = 67767;

	class UIZenkovHandInPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__14_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FBD0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FBD8);
		}
		static ::System::Action** StaticGet___9__14_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovHandInPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FBE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_1_OFFSET))(this);
		}

		::System::Void _OnClickAddWishListBtn_b__14_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVHANDINPOPWINDOWCONTROLLER___C__ONCLICKADDWISHLISTBTN_B__14_3_OFFSET))(this);
		}
	};
}
