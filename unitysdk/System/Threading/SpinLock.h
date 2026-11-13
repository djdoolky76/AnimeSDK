#pragma once
#include "unitysdk/unitysdk.h"

#define SYSTEM_THREADING_SPINLOCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8FE120)
#define SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTERWITHTHREADTRACKING_OFFSET UNITYSDK_OFFSET(0x3EF6780)
#define SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTER_OFFSET UNITYSDK_OFFSET(0x3EF6710)
#define SYSTEM_THREADING_SPINLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x3EF6600)
#define SYSTEM_THREADING_SPINLOCK_DECREMENTWAITERS_OFFSET UNITYSDK_OFFSET(0x3EF6720)
#define SYSTEM_THREADING_SPINLOCK_ENTER_OFFSET UNITYSDK_OFFSET(0x3EF6620)
#define SYSTEM_THREADING_SPINLOCK_EXITSLOWPATH_OFFSET UNITYSDK_OFFSET(0x3EF68B0)
#define SYSTEM_THREADING_SPINLOCK_EXIT_1_OFFSET UNITYSDK_OFFSET(0x3EF6810)
#define SYSTEM_THREADING_SPINLOCK_EXIT_OFFSET UNITYSDK_OFFSET(0x3EF6790)
#define SYSTEM_THREADING_SPINLOCK_GET_ISHELDBYCURRENTTHREAD_OFFSET UNITYSDK_OFFSET(0x3EF6940)
#define SYSTEM_THREADING_SPINLOCK_GET_ISTHREADOWNERTRACKINGENABLED_OFFSET UNITYSDK_OFFSET(0x3EF6950)
#define SYSTEM_THREADING_SPINLOCK_TRYENTER_OFFSET UNITYSDK_OFFSET(0x3EF6690)

namespace System::Threading
{
	inline static constexpr unsigned int SpinLock_TypeDefinitionIndex = 812;

	struct alignas(4) SpinLock
	{
		::System::Int32 m_owner; // 0x10
		static ::System::Int32* StaticGet_MAXIMUM_WAITERS()
		{
			return (::System::Int32*)UnitySDK::FromName("System.Threading", "SpinLock")->GetStaticField(0x5600);
		}

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CCTOR_OFFSET))();
		}

		::System::Void Enter(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_ENTER_OFFSET))(this, a1);
		}

		::System::Void TryEnter(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_TRYENTER_OFFSET))(this, a1, a2);
		}

		::System::Void ContinueTryEnter(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTER_OFFSET))(this, a1, a2);
		}

		::System::Void DecrementWaiters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_DECREMENTWAITERS_OFFSET))(this);
		}

		::System::Void ContinueTryEnterWithThreadTracking(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_CONTINUETRYENTERWITHTHREADTRACKING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_EXIT_OFFSET))(this);
		}

		::System::Void Exit_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_EXIT_1_OFFSET))(this, a1);
		}

		::System::Void ExitSlowPath(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_EXITSLOWPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHeldByCurrentThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_GET_ISHELDBYCURRENTTHREAD_OFFSET))(this);
		}

		::System::Boolean get_IsThreadOwnerTrackingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SPINLOCK_GET_ISTHREADOWNERTRACKINGENABLED_OFFSET))(this);
		}

	};
}
