#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOHBEPCMHMC.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/UIRoleInfoBasicChildWindowController_ESortScoreLevel.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18892AD0)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18892B10)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_0_OFFSET UNITYSDK_OFFSET(0x18892B20)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_1_OFFSET UNITYSDK_OFFSET(0x18892B30)
#define MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_2_OFFSET UNITYSDK_OFFSET(0x18892B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex = 59534;

	class UIRoleInfoBasicChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AD20);
		}
		static ::System::Func_2<::System::Object*, ::System::Single>** StaticGet___9__51_2()
		{
			return (::System::Func_2<::System::Object*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AD28);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AD30);
		}
		static ::System::Func_2<::System::Object*, ::OOHBEPCMHMC>** StaticGet___9__51_1()
		{
			return (::System::Func_2<::System::Object*, ::OOHBEPCMHMC>**)Il2CppClass::FromTypeDefinitionIndex(UIRoleInfoBasicChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4AD38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitAvatarScoreDialog_b__51_0(::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel item)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_0_OFFSET))(this, item);
		}

		::OOHBEPCMHMC _InitAvatarScoreDialog_b__51_1(::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel item)
		{
			return ((::OOHBEPCMHMC(*)(::PVOID, ::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_1_OFFSET))(this, item);
		}

		::System::Single _InitAvatarScoreDialog_b__51_2(::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel item)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::UIRoleInfoBasicChildWindowController_ESortScoreLevel))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOBASICCHILDWINDOWCONTROLLER___C__INITAVATARSCOREDIALOG_B__51_2_OFFSET))(this, item);
		}
	};
}
