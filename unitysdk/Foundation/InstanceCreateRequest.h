#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/InstanceCreateRequestStatus.h"
#include "unitysdk/Foundation/InstantiateApiType.h"
#include "unitysdk/Foundation/InstantiationParameters.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class InstancePoolRequest; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }
namespace UnityEngine { template <typename T> class AsyncInstantiateOperation_1; }

#define FOUNDATION_INSTANCECREATEREQUEST_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1EE95A50)
#define FOUNDATION_INSTANCECREATEREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1EE95E40)
#define FOUNDATION_INSTANCECREATEREQUEST_BINDINSTANTIATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EE96080)
#define FOUNDATION_INSTANCECREATEREQUEST_CANCELINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1EE95F60)
#define FOUNDATION_INSTANCECREATEREQUEST_CLEARINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1EE95D10)
#define FOUNDATION_INSTANCECREATEREQUEST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EE95E90)
#define FOUNDATION_INSTANCECREATEREQUEST_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1EE95C80)
#define FOUNDATION_INSTANCECREATEREQUEST_GET_ISCANCELLED_OFFSET UNITYSDK_OFFSET(0x1EE95DE0)
#define FOUNDATION_INSTANCECREATEREQUEST_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1EE95DF0)
#define FOUNDATION_INSTANCECREATEREQUEST_GET_ISINSTANTIATEDONE_OFFSET UNITYSDK_OFFSET(0x1EE95F50)
#define FOUNDATION_INSTANCECREATEREQUEST_GET_ISPENDING_OFFSET UNITYSDK_OFFSET(0x1EE95D90)
#define FOUNDATION_INSTANCECREATEREQUEST_INIT_OFFSET UNITYSDK_OFFSET(0x1EE95B70)
#define FOUNDATION_INSTANCECREATEREQUEST_ISCURRENTINSTANTIATEOPERATION_OFFSET UNITYSDK_OFFSET(0x1EE96210)
#define FOUNDATION_INSTANCECREATEREQUEST_ONINSTANTIATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EE96270)
#define FOUNDATION_INSTANCECREATEREQUEST_TAKEINSTANTIATERESULT_OFFSET UNITYSDK_OFFSET(0x1EE96030)
#define FOUNDATION_INSTANCECREATEREQUEST_UNBINDINSTANTIATECOMPLETED_OFFSET UNITYSDK_OFFSET(0x1EE96150)
#define FOUNDATION_INSTANCECREATEREQUEST_WAITINSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1EE95FB0)
#define FOUNDATION_INSTANCECREATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE962D0)

namespace Foundation
{
	inline static constexpr unsigned int InstanceCreateRequest_TypeDefinitionIndex = 8555;

	class InstanceCreateRequest : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::AsyncOperation*>* instantiateCompleted; // 0x10
		::Foundation::InstantiationParameters Parameters; // 0x18
		::System::Action_1<::UnityEngine::Object*>* Completed; // 0x48
		::UnityEngine::AsyncInstantiateOperation_1<::UnityEngine::Object*>* AsyncInstantiateOperation; // 0x50
		::UnityEngine::Object* InstantiateResult; // 0x58
		::Foundation::InstancePoolRequest* Owner; // 0x60
		::System::Int32 Version; // 0x68
		::Foundation::InstantiateApiType InstantiateType; // 0x6C
		::Foundation::InstanceCreateRequestStatus Status; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST__CTOR_OFFSET))(this);
		}

		static ::Foundation::InstanceCreateRequest* Allocate(::Foundation::InstancePoolRequest* owner, ::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters parameters)
		{
			return ((::Foundation::InstanceCreateRequest*(*)(::Foundation::InstancePoolRequest*, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_ALLOCATE_OFFSET))(owner, completed, parameters);
		}

		static ::System::Void Deallocate(::Foundation::InstanceCreateRequest* request)
		{
			return ((::System::Void(*)(::Foundation::InstanceCreateRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_DEALLOCATE_OFFSET))(request);
		}

		::System::Void Init(::Foundation::InstancePoolRequest* owner, ::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters parameters)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::InstancePoolRequest*, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_INIT_OFFSET))(this, owner, completed, parameters);
		}

		::System::Boolean get_IsPending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_GET_ISPENDING_OFFSET))(this);
		}

		::System::Boolean get_IsCancelled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_GET_ISCANCELLED_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_CLEAR_OFFSET))(this);
		}

		::System::Boolean get_IsInstantiateDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_GET_ISINSTANTIATEDONE_OFFSET))(this);
		}

		::System::Void CancelInstantiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_CANCELINSTANTIATE_OFFSET))(this);
		}

		::System::Void WaitInstantiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_WAITINSTANTIATE_OFFSET))(this);
		}

		::UnityEngine::Object* TakeInstantiateResult()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_TAKEINSTANTIATERESULT_OFFSET))(this);
		}

		::System::Void ClearInstantiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_CLEARINSTANTIATE_OFFSET))(this);
		}

		::System::Void BindInstantiateCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_BINDINSTANTIATECOMPLETED_OFFSET))(this);
		}

		::System::Void UnbindInstantiateCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_UNBINDINSTANTIATECOMPLETED_OFFSET))(this);
		}

		::System::Boolean IsCurrentInstantiateOperation(::UnityEngine::AsyncOperation* operation)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_ISCURRENTINSTANTIATEOPERATION_OFFSET))(this, operation);
		}

		::System::Void OnInstantiateCompleted(::UnityEngine::AsyncOperation* operation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCECREATEREQUEST_ONINSTANTIATECOMPLETED_OFFSET))(this, operation);
		}
	};
}
