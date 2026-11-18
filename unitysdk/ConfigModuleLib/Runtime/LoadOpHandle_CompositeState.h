#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_ADDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1DB01C40)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_GET_ALLLOADED_OFFSET UNITYSDK_OFFSET(0x1DB01A20)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1DB01A00)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_GET_ISRESOLVED_OFFSET UNITYSDK_OFFSET(0x1DB01A10)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_NOTIFYCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DB01BA0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_ONCHILDCOMPLETE_OFFSET UNITYSDK_OFFSET(0x1DB01AC0)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_ONCHILDRESOLVED_OFFSET UNITYSDK_OFFSET(0x1DB01A80)
#define CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB019F0)

namespace ConfigModuleLib::Runtime
{
	inline static constexpr unsigned int LoadOpHandle_CompositeState_TypeDefinitionIndex = 8373;

	class LoadOpHandle_CompositeState : public ::System::Object
	{
	public:
		::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>* _onComplete; // 0x10
		::ConfigModuleLib::Runtime::LoadOpHandle Self; // 0x18
		::System::Int32 _pendingResolveCount; // 0x30
		::System::Int32 _pendingCount; // 0x34
		::System::Int32 _failedCount; // 0x38

		::System::Void _ctor(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE__CTOR_OFFSET))(this, count);
		}

		::System::Boolean get_IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_GET_ISDONE_OFFSET))(this);
		}

		::System::Boolean get_IsResolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_GET_ISRESOLVED_OFFSET))(this);
		}

		::System::Boolean get_AllLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_GET_ALLLOADED_OFFSET))(this);
		}

		::System::Void OnChildResolved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_ONCHILDRESOLVED_OFFSET))(this);
		}

		::System::Void OnChildComplete(::System::Boolean loaded)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_ONCHILDCOMPLETE_OFFSET))(this, loaded);
		}

		::System::Void NotifyComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_NOTIFYCOMPLETE_OFFSET))(this);
		}

		::System::Void AddCallback(::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::ConfigModuleLib::Runtime::LoadOpHandle>*))((::PBYTE)hIl2Cpp + CONFIGMODULELIB_RUNTIME_LOADOPHANDLE_COMPOSITESTATE_ADDCALLBACK_OFFSET))(this, callback);
		}
	};
}
