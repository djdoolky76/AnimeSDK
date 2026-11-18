#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ANPJANGHICC;
namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175F5D80)
#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175F5DC0)
#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET UNITYSDK_OFFSET(0x175F5DD0)
#define MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__TAKEALLREWARDS_B__12_0_OFFSET UNITYSDK_OFFSET(0x175F6200)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex = 85972;

	class UIInterKnotNewsDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45030);
		}
		static ::System::Action** StaticGet___9__12_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45038);
		}
		static ::System::Comparison_1<::ANPJANGHICC*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::ANPJANGHICC*>**)Il2CppClass::FromTypeDefinitionIndex(UIInterKnotNewsDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x45040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RefreshView_b__10_0(::ANPJANGHICC* a, ::ANPJANGHICC* b)
		{
			return ((::System::Int32(*)(::PVOID, ::ANPJANGHICC*, ::ANPJANGHICC*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__REFRESHVIEW_B__10_0_OFFSET))(this, a, b);
		}

		::System::Void _TakeAllRewards_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSDIALOGPOPWINDOWCONTROLLER___C__TAKEALLREWARDS_B__12_0_OFFSET))(this);
		}
	};
}
