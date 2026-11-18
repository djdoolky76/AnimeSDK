#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18F25490)
#define MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_1__REFRESHVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x18F254A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_1_TypeDefinitionIndex = 91653;

	template <typename T>
	class UIHollowDevelopBagDialogPopWindowController___c__DisplayClass31_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 selectIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_1__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__0(::UnityEngine::GameObject* go, ::System::Int32 id2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEVELOPBAGDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS31_1__REFRESHVIEW_B__0_OFFSET))(this, go, id2);
		}
	};
}
