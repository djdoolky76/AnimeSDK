#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadCustomList; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18F254F0)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__REFRESHVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x18F25500)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_2_TypeDefinitionIndex = 91660;

	template <typename T1, typename T2>
	class UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_2 : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadCustomList* customlist; // 0x10
		::System::Object* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_2__REFRESHVIEW_B__1_OFFSET))(this);
		}
	};
}
