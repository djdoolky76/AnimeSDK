#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_CTOR_OFFSET UNITYSDK_OFFSET(0xD52CAC0)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xD52CD60)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD52CF00)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD52CF60)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xD52CF10)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD52CD50)

namespace RPG::Client
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19>
	class Map3DUtils___SmoothlySetOpacity_d__19 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18
		::System::Single _startTime_5__2; // 0x20
		::System::Int32 __1__state; // 0x24
		::System::Single duration; // 0x28
		::System::Single _startOpacity_5__3; // 0x2C
		::System::Single targetOpacity; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
