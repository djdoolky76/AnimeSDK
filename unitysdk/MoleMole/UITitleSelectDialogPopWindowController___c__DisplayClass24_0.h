#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13BBC540)
#define MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__ONUPDATEMEDALDATA_B__1_OFFSET UNITYSDK_OFFSET(0x13BBC550)

namespace MoleMole
{
	inline static constexpr unsigned int UITitleSelectDialogPopWindowController___c__DisplayClass24_0_TypeDefinitionIndex = 79081;

	class UITitleSelectDialogPopWindowController___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Int32>* validFrameIDSet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnUpdateMedalData_b__1(::System::Int32 frameID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITITLESELECTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS24_0__ONUPDATEMEDALDATA_B__1_OFFSET))(this, frameID);
		}
	};
}
