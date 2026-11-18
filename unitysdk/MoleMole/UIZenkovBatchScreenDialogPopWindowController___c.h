#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12C09330)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12C09370)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONCLICKCLOSE_B__56_0_OFFSET UNITYSDK_OFFSET(0x12C09380)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONSELLSUCCESS_B__64_0_OFFSET UNITYSDK_OFFSET(0x12C09390)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex = 86788;

	class UIZenkovBatchScreenDialogPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__64_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42400);
		}
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42408);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIZenkovBatchScreenDialogPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x42410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickClose_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONCLICKCLOSE_B__56_0_OFFSET))(this);
		}

		::System::Int32 _OnSellSuccess_b__64_0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__ONSELLSUCCESS_B__64_0_OFFSET))(this, a, b);
		}
	};
}
