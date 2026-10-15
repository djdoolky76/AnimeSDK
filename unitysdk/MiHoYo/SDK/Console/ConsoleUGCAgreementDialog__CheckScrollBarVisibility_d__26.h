#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console { class ConsoleUGCAgreementDialog; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Scrollbar; }

#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC93920)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1BC94180)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BC94540)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1BC945A0)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1BC94550)
#define MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC94170)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleUGCAgreementDialog__CheckScrollBarVisibility_d__26_TypeDefinitionIndex = 8963;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26>
	class ConsoleUGCAgreementDialog__CheckScrollBarVisibility_d__26 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleUGCAgreementDialog* __4__this; // 0x10
		::UnityEngine::GameObject* _obj_5__1; // 0x18
		::System::Object* __2__current; // 0x20
		::UnityEngine::UI::Scrollbar* _scrollBar_5__2; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEUGCAGREEMENTDIALOG__CHECKSCROLLBARVISIBILITY_D__26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
