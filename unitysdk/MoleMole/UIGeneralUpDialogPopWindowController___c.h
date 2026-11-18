#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x199C1E80)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x199C1EC0)
#define MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0x199C1ED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralUpDialogPopWindowController___c_TypeDefinitionIndex = 40397;

	class UIGeneralUpDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::HGAJKHIMKJP*>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::HGAJKHIMKJP*>**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralUpDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C1D0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGeneralUpDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C1D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__19_0(::HGAJKHIMKJP* x, ::HGAJKHIMKJP* y)
		{
			return ((::System::Int32(*)(::PVOID, ::HGAJKHIMKJP*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALUPDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__19_0_OFFSET))(this, x, y);
		}
	};
}
