#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRepairPopWindowController; }

#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x166C47C0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x166C4A60)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x166C4AC0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x166C4A70)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166C47B0)
#define MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x166C47A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepairPopWindowController__WarmupShaderAfterRepair_d__15_TypeDefinitionIndex = 61446;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	class UIRepairPopWindowController__WarmupShaderAfterRepair_d__15 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::MoleMole::UIRepairPopWindowController* __4__this; // 0x18
		::System::Int32 __1__state; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPAIRPOPWINDOWCONTROLLER__WARMUPSHADERAFTERREPAIR_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
