#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebPictureBookPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAD310)
#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__SCHEDULEPLAYPENDINGROWANIMATIONS_B__0_OFFSET UNITYSDK_OFFSET(0x16EADBE0)
#define MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__SCHEDULEPLAYPENDINGROWANIMATIONS_B__1_OFFSET UNITYSDK_OFFSET(0x16EADD60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebPictureBookPopWindowController___c__DisplayClass34_0_TypeDefinitionIndex = 51603;

	class UIBangbooMicroWebPictureBookPopWindowController___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Action* refreshHandler; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* pending; // 0x18
		::System::Action* __9__1; // 0x20
		::MoleMole::UIBangbooMicroWebPictureBookPopWindowController* __4__this; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
		}

		::System::Void _SchedulePlayPendingRowAnimations_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__SCHEDULEPLAYPENDINGROWANIMATIONS_B__0_OFFSET))(this);
		}

		::System::Void _SchedulePlayPendingRowAnimations_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBPICTUREBOOKPOPWINDOWCONTROLLER___C__DISPLAYCLASS34_0__SCHEDULEPLAYPENDINGROWANIMATIONS_B__1_OFFSET))(this);
		}
	};
}
