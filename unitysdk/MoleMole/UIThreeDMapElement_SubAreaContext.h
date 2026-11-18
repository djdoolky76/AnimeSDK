#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext_EPointLockType.h"
#include "unitysdk/OLPPOJJADDO.h"

namespace MoleMole { class UIUrbanMapPointGroupWidgetContext; }
namespace System { class Object; }

#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1055BAA0)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1055BA10)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETPOINTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1055B120)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1055A370)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1055AA80)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x1055B170)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1055BBB0)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1055BC10)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETPOINTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1055BC20)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1055BC30)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1055BD10)
#define MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x1055BDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIThreeDMapElement_SubAreaContext_TypeDefinitionIndex = 63056;

	class UIThreeDMapElement_SubAreaContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::System::Int32 TargetSection; // 0x58
		::System::Int32 TargetLayerIndex; // 0x5C
		::System::Int32 TargetFloor; // 0x60
		::System::Int32 IndexInList; // 0x64
		::System::Int32 FromLayerIndex; // 0x68
		::System::Int32 FromSection; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT__CTOR_OFFSET))(this);
		}

		::OLPPOJJADDO GetWorldPosition()
		{
			return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ISUNLOCK_OFFSET))(this);
		}

		::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType GetPointLockType()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_GETPOINTLOCKTYPE_OFFSET))(this);
		}

		::System::Void OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* fromGroupContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_ONSHOWPANEL_OFFSET))(this, fromGroupContext);
		}

		::System::Boolean Equals(::MoleMole::UIThreeDMapElement_SubAreaContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIThreeDMapElement_SubAreaContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType __base_GetPointLockType()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETPOINTLOCKTYPE_OFFSET))(this);
		}

		::OLPPOJJADDO __base_GetWorldPosition()
		{
			return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean __base_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ISUNLOCK_OFFSET))(this);
		}

		::System::Void __base_OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_SUBAREACONTEXT___BASE_ONSHOWPANEL_OFFSET))(this, P0);
		}
	};
}
