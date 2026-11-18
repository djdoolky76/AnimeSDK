#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRABExpTopTipsPopWindowController; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1679C570)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1679C8C0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1679C920)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1679C8D0)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1679C560)
#define MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1679C550)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABExpTopTipsPopWindowController__PlayExpThenClose_d__15_TypeDefinitionIndex = 74534;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	class UIRABExpTopTipsPopWindowController__PlayExpThenClose_d__15 : public ::System::Object
	{
	public:
		::MoleMole::UIRABExpTopTipsPopWindowController* __4__this; // 0x10
		::System::Collections::Generic::IEnumerator_1<::System::Single>* _seq_5__2; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single __2__current; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABEXPTOPTIPSPOPWINDOWCONTROLLER__PLAYEXPTHENCLOSE_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
