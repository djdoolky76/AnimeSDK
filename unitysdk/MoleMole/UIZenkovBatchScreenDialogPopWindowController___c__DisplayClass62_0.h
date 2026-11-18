#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class FMHDMLBDIJC;
namespace MoleMole { class UIZenkovBatchScreenDialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16719E80)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__EXECUTESPLITSTHENSALE_B__0_OFFSET UNITYSDK_OFFSET(0x16719E90)
#define MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__EXECUTESPLITSTHENSALE_B__1_OFFSET UNITYSDK_OFFSET(0x1671A040)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBatchScreenDialogPopWindowController___c__DisplayClass62_0_TypeDefinitionIndex = 86787;

	class UIZenkovBatchScreenDialogPopWindowController___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovBatchScreenDialogPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::HashSet_1<::FMHDMLBDIJC*>* before; // 0x18
		::System::Collections::Generic::List_1<::FMHDMLBDIJC*>* saleIndices; // 0x20
		::System::Collections::Generic::List_1<::System::ValueTuple_3<::FMHDMLBDIJC*, ::System::Int32, ::System::Int32>>* splitRequests; // 0x28
		::System::Int32 itemId; // 0x30
		::System::Int32 splitIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteSplitsThenSale_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__EXECUTESPLITSTHENSALE_B__0_OFFSET))(this);
		}

		::System::Void _ExecuteSplitsThenSale_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBATCHSCREENDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS62_0__EXECUTESPLITSTHENSALE_B__1_OFFSET))(this);
		}
	};
}
