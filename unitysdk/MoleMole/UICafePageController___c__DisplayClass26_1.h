#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19199200)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_1__ONSHOWDRINKCAFEFINISHED_B__2_OFFSET UNITYSDK_OFFSET(0x19199210)
#define MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_1__ONSHOWDRINKCAFEFINISHED_B__3_OFFSET UNITYSDK_OFFSET(0x19199740)

namespace MoleMole
{
	inline static constexpr unsigned int UICafePageController___c__DisplayClass26_1_TypeDefinitionIndex = 52443;

	template <typename T>
	class UICafePageController___c__DisplayClass26_1 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* __9__3; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Action* onFinish; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnShowDrinkCafeFinished_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_1__ONSHOWDRINKCAFEFINISHED_B__2_OFFSET))(this);
		}

		::System::Void _OnShowDrinkCafeFinished_b__3(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAFEPAGECONTROLLER___C__DISPLAYCLASS26_1__ONSHOWDRINKCAFEFINISHED_B__3_OFFSET))(this, success);
		}
	};
}
