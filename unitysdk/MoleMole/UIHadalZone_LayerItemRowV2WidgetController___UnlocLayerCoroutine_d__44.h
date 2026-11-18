#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHadalZone_LayerItemRowV2WidgetController; }

#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1768B060)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1768B530)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1768B590)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1768B540)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1768B050)
#define MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44__CTOR_OFFSET UNITYSDK_OFFSET(0x1768B040)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LayerItemRowV2WidgetController___UnlocLayerCoroutine_d__44_TypeDefinitionIndex = 65583;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44>
	class UIHadalZone_LayerItemRowV2WidgetController___UnlocLayerCoroutine_d__44 : public ::System::Object
	{
	public:
		::MoleMole::UIHadalZone_LayerItemRowV2WidgetController* __4__this; // 0x10
		::System::Object* __8__1; // 0x18
		::System::Int32 __1__state; // 0x20
		::System::Single __2__current; // 0x24
		::System::Int32 _max_wait_5__2; // 0x28
		::System::Single _start_5__3; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LAYERITEMROWV2WIDGETCONTROLLER___UNLOCLAYERCOROUTINE_D__44_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
