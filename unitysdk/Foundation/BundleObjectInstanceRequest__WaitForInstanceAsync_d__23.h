#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class BundleObjectInstanceRequest; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AssetBundleInstanceRequest; }
namespace UnityEngine { class Object; }

#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18A6B990)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18A6BB10)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18A6BB70)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18A6BB20)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A6B980)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6B970)

namespace Foundation
{
	inline static constexpr unsigned int BundleObjectInstanceRequest__WaitForInstanceAsync_d__23_TypeDefinitionIndex = 7841;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class BundleObjectInstanceRequest__WaitForInstanceAsync_d__23 : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Object*>* completed; // 0x10
		::Foundation::BundleObjectInstanceRequest* __4__this; // 0x18
		::UnityEngine::AssetBundleInstanceRequest* req; // 0x20
		::System::Single __2__current; // 0x28
		::System::Int32 __1__state; // 0x2C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORINSTANCEASYNC_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
