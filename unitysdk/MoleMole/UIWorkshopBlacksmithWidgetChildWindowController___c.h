#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDLPKIGOKHH;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14E40D90)
#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14E40DD0)
#define MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__65_0_OFFSET UNITYSDK_OFFSET(0x14E40DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopBlacksmithWidgetChildWindowController___c_TypeDefinitionIndex = 70927;

	class UIWorkshopBlacksmithWidgetChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIWorkshopBlacksmithWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C7D0);
		}
		static ::System::Comparison_1<::LDLPKIGOKHH*>** StaticGet___9__65_0()
		{
			return (::System::Comparison_1<::LDLPKIGOKHH*>**)Il2CppClass::FromTypeDefinitionIndex(UIWorkshopBlacksmithWidgetChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C7D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshItemsPreview_b__65_0(::LDLPKIGOKHH* a, ::LDLPKIGOKHH* b)
		{
			return ((::System::Int32(*)(::PVOID, ::LDLPKIGOKHH*, ::LDLPKIGOKHH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPBLACKSMITHWIDGETCHILDWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__65_0_OFFSET))(this, a, b);
		}
	};
}
