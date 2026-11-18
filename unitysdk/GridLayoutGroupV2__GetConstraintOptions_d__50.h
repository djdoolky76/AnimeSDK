#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15F43B50)
#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_UI_GRIDLAYOUTGROUP_CONSTRAINT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F43CD0)
#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_UI_GRIDLAYOUTGROUP_CONSTRAINT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F43C10)
#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F43D40)
#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15F43C80)
#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15F43C30)
#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F43B40)
#define GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50__CTOR_OFFSET UNITYSDK_OFFSET(0x15F43B20)

inline static constexpr unsigned int GridLayoutGroupV2__GetConstraintOptions_d__50_TypeDefinitionIndex = 49544;

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50>
class GridLayoutGroupV2__GetConstraintOptions_d__50 : public ::System::Object
{
public:
	::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Object*> __2__current; // 0x10
	::System::Byte _padding0[0x10];
	::System::Int32 __l__initialThreadId; // 0x28
	::System::Int32 __1__state; // 0x2C

	::System::Void _ctor(::System::Int32 __1__state)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50__CTOR_OFFSET))(this, __1__state);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_MOVENEXT_OFFSET))(this);
	}

	::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Object*> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_UnityEngine_UI_GridLayoutGroup_Constraint___get_Current()
	{
		return ((::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_UI_GRIDLAYOUTGROUP_CONSTRAINT___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Object*>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_UnityEngine_UI_GridLayoutGroup_Constraint___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_UNITYENGINE_UI_GRIDLAYOUTGROUP_CONSTRAINT___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GRIDLAYOUTGROUPV2__GETCONSTRAINTOPTIONS_D__50_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
