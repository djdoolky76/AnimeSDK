#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CDPHJIKAJEM;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A13BBE0)
#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A13BC20)
#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__ONSELECTBTNCLICKED_B__22_1_OFFSET UNITYSDK_OFFSET(0x1A13BDC0)
#define MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x1A13BC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex = 40187;

	class UIArcadeMenuShopChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__22_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EC90);
		}
		static ::System::Comparison_1<::CDPHJIKAJEM*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::CDPHJIKAJEM*>**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3EC98);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIArcadeMenuShopChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3ECA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__18_0(::CDPHJIKAJEM* a, ::CDPHJIKAJEM* b)
		{
			return ((::System::Int32(*)(::PVOID, ::CDPHJIKAJEM*, ::CDPHJIKAJEM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET))(this, a, b);
		}

		::System::Void _OnSelectBtnClicked_b__22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEMENUSHOPCHILDWINDOWCONTROLLER___C__ONSELECTBTNCLICKED_B__22_1_OFFSET))(this);
		}
	};
}
