#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDLPKIGOKHH;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x147FE7F0)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x147FE830)
#define MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__92_0_OFFSET UNITYSDK_OFFSET(0x147FE840)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleDialogPopWindowController___c_TypeDefinitionIndex = 42929;

	class UIRecycleDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x451F0);
		}
		static ::System::Comparison_1<::LDLPKIGOKHH*>** StaticGet___9__92_0()
		{
			return (::System::Comparison_1<::LDLPKIGOKHH*>**)Il2CppClass::FromTypeDefinitionIndex(UIRecycleDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x451F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshItemsPreview_b__92_0(::LDLPKIGOKHH* a, ::LDLPKIGOKHH* b)
		{
			return ((::System::Int32(*)(::PVOID, ::LDLPKIGOKHH*, ::LDLPKIGOKHH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLEDIALOGPOPWINDOWCONTROLLER___C__REFRESHITEMSPREVIEW_B__92_0_OFFSET))(this, a, b);
		}
	};
}
