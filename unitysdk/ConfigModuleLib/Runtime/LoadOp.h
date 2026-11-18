#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpStatus.h"
#include "unitysdk/System/Object.h"

namespace ConfigModuleLib::Runtime { class ConfigModule; }
namespace System { class Action; }
namespace System { class Type; }

#define CONFIGMODULELIB_RUNTIME_LOADOP_ADDCOMPLETECALLBACK_OFFSET UNITYSDK_OFFSET(0x1EF02D50)
#define CONFIGMODULELIB_RUNTIME_LOADOP_ADDRESOLVEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1EF02E10)
#define CONFIGMODULELIB_RUNTIME_LOADOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF02BC0)
#define CONFIGMODULELIB_RUNTIME_LOADOP_FINISH_OFFSET UNITYSDK_OFFSET(0x1EF02C50)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1EF02880)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1EF027F0)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISFAILED_OFFSET UNITYSDK_OFFSET(0x1EF02860)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1EF02870)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISRESOLVED_OFFSET UNITYSDK_OFFSET(0x1EF02740)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1EF02890)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x1EF02760)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1EF02840)
#define CONFIGMODULELIB_RUNTIME_LOADOP_GET_TOTAL_OFFSET UNITYSDK_OFFSET(0x1EF02750)
#define CONFIGMODULELIB_RUNTIME_LOADOP_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x1EF029B0)
#define CONFIGMODULELIB_RUNTIME_LOADOP_NOTIFYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1EF02F60)
#define CONFIGMODULELIB_RUNTIME_LOADOP_NOTIFYRESOLVED_OFFSET UNITYSDK_OFFSET(0x1EF02F00)
#define CONFIGMODULELIB_RUNTIME_LOADOP_ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF02700)
#define CONFIGMODULELIB_RUNTIME_LOADOP_ONFINISH_OFFSET UNITYSDK_OFFSET(0x1EF026C0)
#define CONFIGMODULELIB_RUNTIME_LOADOP_ONSTART_OFFSET UNITYSDK_OFFSET(0x1EF02680)
#define CONFIGMODULELIB_RUNTIME_LOADOP_SET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1EF028A0)
#define CONFIGMODULELIB_RUNTIME_LOADOP_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1EF02850)
#define CONFIGMODULELIB_RUNTIME_LOADOP_WAITFORCOMPLETION_OFFSET UNITYSDK_OFFSET(0x1EF02A30)
#define CONFIGMODULELIB_RUNTIME_LOADOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF028B0)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOp_TypeDefinitionIndex = 8627;

	class LoadOp : public ::System::Object
	{
	public:
		::System::Action* _onResolvedNotify; // 0x10
		::System::Action* _onComplete; // 0x18
		::System::Type* _OwnerType_k__BackingField; // 0x20
		::ConfigModuleLib::Runtime::LoadOpStatus _Status_k__BackingField; // 0x28

		::System::Void _ctor(::ConfigModuleLib::Runtime::ConfigModule* owner)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::ConfigModule*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP__CTOR_OFFSET))(this, owner);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_ONSTART_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_ONFINISH_OFFSET))(this);
		}

		::System::Void OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_ONDISPOSE_OFFSET))(this);
		}

		::System::Boolean get_IsResolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISRESOLVED_OFFSET))(this);
		}

		::System::Int32 get_Total()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_TOTAL_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_PROGRESS_OFFSET))(this);
		}

		::ConfigModuleLib::Runtime::LoadOpStatus get_Status()
		{
			return ((::ConfigModuleLib::Runtime::LoadOpStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::ConfigModuleLib::Runtime::LoadOpStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadOpStatus))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISFAILED_OFFSET))(this);
		}

		::System::Boolean get_IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Type* get_OwnerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_GET_OWNERTYPE_OFFSET))(this);
		}

		::System::Void set_OwnerType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_SET_OWNERTYPE_OFFSET))(this, value);
		}

		::System::Void LoadAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_LOADASYNC_OFFSET))(this);
		}

		::System::Boolean WaitForCompletion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_WAITFORCOMPLETION_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_DISPOSE_OFFSET))(this);
		}

		::System::Void AddCompleteCallback(::System::Action* onComplete)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_ADDCOMPLETECALLBACK_OFFSET))(this, onComplete);
		}

		::System::Void AddResolvedCallback(::System::Action* onResolved)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_ADDRESOLVEDCALLBACK_OFFSET))(this, onResolved);
		}

		::System::Void NotifyResolved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_NOTIFYRESOLVED_OFFSET))(this);
		}

		::System::Void Finish(::System::Boolean failed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_FINISH_OFFSET))(this, failed);
		}

		::System::Void NotifyComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOP_NOTIFYCOMPLETE_OFFSET))(this);
		}
	};
}
