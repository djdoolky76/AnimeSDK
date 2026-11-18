#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/SemaphoreRights.h"
#include "unitysdk/System/Threading/Semaphore_OpenExistingResult.h"
#include "unitysdk/System/Threading/WaitHandle.h"

namespace Microsoft::Win32::SafeHandles { class SafeWaitHandle; }
namespace System { class String; }
namespace System::Security::AccessControl { class SemaphoreSecurity; }

#define SYSTEM_THREADING_SEMAPHORE_CREATESEMAPHORE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D94EF40)
#define SYSTEM_THREADING_SEMAPHORE_GETACCESSCONTROL_OFFSET UNITYSDK_OFFSET(0x1D94F560)
#define SYSTEM_THREADING_SEMAPHORE_OPENEXISTINGWORKER_OFFSET UNITYSDK_OFFSET(0x1D94F2E0)
#define SYSTEM_THREADING_SEMAPHORE_OPENEXISTING_1_OFFSET UNITYSDK_OFFSET(0x1D94F2A0)
#define SYSTEM_THREADING_SEMAPHORE_OPENEXISTING_OFFSET UNITYSDK_OFFSET(0x1D94F260)
#define SYSTEM_THREADING_SEMAPHORE_OPENSEMAPHORE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D94F650)
#define SYSTEM_THREADING_SEMAPHORE_RELEASESEMAPHORE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1D94F540)
#define SYSTEM_THREADING_SEMAPHORE_RELEASE_1_OFFSET UNITYSDK_OFFSET(0x1D94F460)
#define SYSTEM_THREADING_SEMAPHORE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D94F450)
#define SYSTEM_THREADING_SEMAPHORE_SETACCESSCONTROL_OFFSET UNITYSDK_OFFSET(0x1D94F5D0)
#define SYSTEM_THREADING_SEMAPHORE_TRYOPENEXISTING_1_OFFSET UNITYSDK_OFFSET(0x1D94F440)
#define SYSTEM_THREADING_SEMAPHORE_TRYOPENEXISTING_OFFSET UNITYSDK_OFFSET(0x1D94F430)
#define SYSTEM_THREADING_SEMAPHORE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D94ECA0)
#define SYSTEM_THREADING_SEMAPHORE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D94EF50)
#define SYSTEM_THREADING_SEMAPHORE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D94EF70)
#define SYSTEM_THREADING_SEMAPHORE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1D94F210)
#define SYSTEM_THREADING_SEMAPHORE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D94EC90)

namespace System::Threading
{
	inline static constexpr unsigned int Semaphore_TypeDefinitionIndex = 2708;

	class Semaphore : public ::System::Threading::WaitHandle
	{
	public:
		// static const ::System::Int32 MAX_PATH = 0x104; // 0x0

		::System::Void _ctor(::System::Int32 initialCount, ::System::Int32 maximumCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE__CTOR_OFFSET))(this, initialCount, maximumCount);
		}

		::System::Void _ctor_1(::System::Int32 initialCount, ::System::Int32 maximumCount, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE__CTOR_1_OFFSET))(this, initialCount, maximumCount, name);
		}

		::System::Void _ctor_2(::System::Int32 initialCount, ::System::Int32 maximumCount, ::System::String* name, ::System::Boolean& createdNew)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE__CTOR_2_OFFSET))(this, initialCount, maximumCount, name, createdNew);
		}

		::System::Void _ctor_3(::System::Int32 initialCount, ::System::Int32 maximumCount, ::System::String* name, ::System::Boolean& createdNew, ::System::Security::AccessControl::SemaphoreSecurity* semaphoreSecurity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean&, ::System::Security::AccessControl::SemaphoreSecurity*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE__CTOR_3_OFFSET))(this, initialCount, maximumCount, name, createdNew, semaphoreSecurity);
		}

		::System::Void _ctor_4(::Microsoft::Win32::SafeHandles::SafeWaitHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeWaitHandle*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE__CTOR_4_OFFSET))(this, handle);
		}

		static ::System::Threading::Semaphore* OpenExisting(::System::String* name)
		{
			return ((::System::Threading::Semaphore*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_OPENEXISTING_OFFSET))(name);
		}

		static ::System::Threading::Semaphore* OpenExisting_1(::System::String* name, ::System::Security::AccessControl::SemaphoreRights rights)
		{
			return ((::System::Threading::Semaphore*(*)(::System::String*, ::System::Security::AccessControl::SemaphoreRights))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_OPENEXISTING_1_OFFSET))(name, rights);
		}

		static ::System::Boolean TryOpenExisting(::System::String* name, ::System::Threading::Semaphore*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Threading::Semaphore*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_TRYOPENEXISTING_OFFSET))(name, result);
		}

		static ::System::Boolean TryOpenExisting_1(::System::String* name, ::System::Security::AccessControl::SemaphoreRights rights, ::System::Threading::Semaphore*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Security::AccessControl::SemaphoreRights, ::System::Threading::Semaphore*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_TRYOPENEXISTING_1_OFFSET))(name, rights, result);
		}

		static ::System::Threading::Semaphore_OpenExistingResult OpenExistingWorker(::System::String* name, ::System::Security::AccessControl::SemaphoreRights rights, ::System::Threading::Semaphore*& result)
		{
			return ((::System::Threading::Semaphore_OpenExistingResult(*)(::System::String*, ::System::Security::AccessControl::SemaphoreRights, ::System::Threading::Semaphore*&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_OPENEXISTINGWORKER_OFFSET))(name, rights, result);
		}

		::System::Int32 Release()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_RELEASE_OFFSET))(this);
		}

		::System::Int32 Release_1(::System::Int32 releaseCount)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_RELEASE_1_OFFSET))(this, releaseCount);
		}

		::System::Security::AccessControl::SemaphoreSecurity* GetAccessControl()
		{
			return ((::System::Security::AccessControl::SemaphoreSecurity*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_GETACCESSCONTROL_OFFSET))(this);
		}

		::System::Void SetAccessControl(::System::Security::AccessControl::SemaphoreSecurity* semaphoreSecurity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SemaphoreSecurity*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_SETACCESSCONTROL_OFFSET))(this, semaphoreSecurity);
		}

		static ::System::IntPtr CreateSemaphore_internal(::System::Int32 initialCount, ::System::Int32 maximumCount, ::System::String* name, ::System::Int32& errorCode)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::Int32, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_CREATESEMAPHORE_INTERNAL_OFFSET))(initialCount, maximumCount, name, errorCode);
		}

		static ::System::Boolean ReleaseSemaphore_internal(::System::IntPtr handle, ::System::Int32 releaseCount, ::System::Int32& previousCount)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_RELEASESEMAPHORE_INTERNAL_OFFSET))(handle, releaseCount, previousCount);
		}

		static ::System::IntPtr OpenSemaphore_internal(::System::String* name, ::System::Security::AccessControl::SemaphoreRights rights, ::System::Int32& errorCode)
		{
			return ((::System::IntPtr(*)(::System::String*, ::System::Security::AccessControl::SemaphoreRights, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_SEMAPHORE_OPENSEMAPHORE_INTERNAL_OFFSET))(name, rights, errorCode);
		}
	};
}
