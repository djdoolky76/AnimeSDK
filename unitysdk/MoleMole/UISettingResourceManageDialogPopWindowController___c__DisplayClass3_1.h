#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFLGDJEMLAF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x167C55F0)
#define MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__ONUIINIT_B__4_OFFSET UNITYSDK_OFFSET(0x167C5600)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingResourceManageDialogPopWindowController___c__DisplayClass3_1_TypeDefinitionIndex = 48220;

	template <typename T>
	class UISettingResourceManageDialogPopWindowController___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* affectedTitleIds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__4(::CFLGDJEMLAF* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::CFLGDJEMLAF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGRESOURCEMANAGEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS3_1__ONUIINIT_B__4_OFFSET))(this, itemData);
		}
	};
}
