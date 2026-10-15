#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_CTOR_OFFSET UNITYSDK_OFFSET(0xC3C0930)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC3C18F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC3C1E70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC3C1ED0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC3C1E80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3C18E0)

namespace RPG::Client::ActivityAlley
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31>
	class AlleyPackComponent___BeginRotate_d__31 : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackComponent* __4__this; // 0x10
		::System::Object* __2__current; // 0x18
		::System::Single _needRotateAngle_5__3; // 0x20
		::System::Single maxRotateSpeed; // 0x24
		::System::Single _initYaw_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Single _currentDeltaYaw_5__4; // 0x30
		::System::Single targetYaw; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT___BEGINROTATE_D__31_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
