#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FAKLNMJEGOJ;
class IFOHGNLIAKH;
namespace MoleMole { class UIBangkovResultPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19190000)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x19190010)
#define MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x19190040)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovResultPopWindowController___c__DisplayClass21_0_TypeDefinitionIndex = 56382;

	class UIBangkovResultPopWindowController___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::FAKLNMJEGOJ* item; // 0x10
		::MoleMole::UIBangkovResultPopWindowController* __4__this; // 0x18
		::System::Action_1<::IFOHGNLIAKH*>* __9__1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshItemView_b__0(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__0_OFFSET))(this, ctrl);
		}

		::System::Void _RefreshItemView_b__1(::IFOHGNLIAKH* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::IFOHGNLIAKH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVRESULTPOPWINDOWCONTROLLER___C__DISPLAYCLASS21_0__REFRESHITEMVIEW_B__1_OFFSET))(this, ctrl);
		}
	};
}
