#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class BundleObjectInstanceRequest; }

#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB05320)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB053C0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB05420)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DB053D0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DB05310)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB05300)

namespace Foundation
{
	inline static constexpr unsigned int BundleObjectInstanceRequest__WaitForUnloadAsync_d__15_TypeDefinitionIndex = 7840;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
	class BundleObjectInstanceRequest__WaitForUnloadAsync_d__15 : public ::System::Object
	{
	public:
		::Foundation::BundleObjectInstanceRequest* __4__this; // 0x10
		::System::Single __2__current; // 0x18
		::System::Int32 __1__state; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__WAITFORUNLOADASYNC_D__15_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
