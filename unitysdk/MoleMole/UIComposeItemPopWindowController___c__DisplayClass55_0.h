#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIComposeItemPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1598CBA0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0x1598CBB0)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SENDDATA_B__1_OFFSET UNITYSDK_OFFSET(0x1598CD90)
#define MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SENDDATA_B__2_OFFSET UNITYSDK_OFFSET(0x1598CF70)

namespace MoleMole
{
	inline static constexpr unsigned int UIComposeItemPopWindowController___c__DisplayClass55_0_TypeDefinitionIndex = 49885;

	class UIComposeItemPopWindowController___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::MoleMole::UIComposeItemPopWindowController* __4__this; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SENDDATA_B__0_OFFSET))(this);
		}

		::System::Void _SendData_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SENDDATA_B__1_OFFSET))(this);
		}

		::System::Void _SendData_b__2(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* itemDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPOSEITEMPOPWINDOWCONTROLLER___C__DISPLAYCLASS55_0__SENDDATA_B__2_OFFSET))(this, itemDataList);
		}
	};
}
