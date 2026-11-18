#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class AsyncOperation; }
namespace System::Threading { class SynchronizationContext; }

#define SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_CREATEOPERATION_OFFSET UNITYSDK_OFFSET(0x1CFA4800)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_GET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CFA48D0)
#define SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_SET_SYNCHRONIZATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x1CFA4930)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AsyncOperationManager_TypeDefinitionIndex = 2813;

	class AsyncOperationManager : public ::System::Object
	{
	public:
		static ::System::ComponentModel::AsyncOperation* CreateOperation(::System::Object* userSuppliedState)
		{
			return ((::System::ComponentModel::AsyncOperation*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_CREATEOPERATION_OFFSET))(userSuppliedState);
		}

		static ::System::Threading::SynchronizationContext* get_SynchronizationContext()
		{
			return ((::System::Threading::SynchronizationContext*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_GET_SYNCHRONIZATIONCONTEXT_OFFSET))();
		}

		static ::System::Void set_SynchronizationContext(::System::Threading::SynchronizationContext* value)
		{
			return ((::System::Void(*)(::System::Threading::SynchronizationContext*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ASYNCOPERATIONMANAGER_SET_SYNCHRONIZATIONCONTEXT_OFFSET))(value);
		}
	};
}
