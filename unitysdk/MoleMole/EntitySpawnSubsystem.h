#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHELLEGKALM.h"
#include "unitysdk/MLGOKCHMCPO.h"
#include "unitysdk/MoleMole/EntitySpawnSubsystem_GridCoord.h"
#include "unitysdk/BNHPDBDCOAJ.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class ANAKBKOHGEB;
namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnBundle; }
namespace MoleMole { class EntitySpawnSubsystem_EntitySpawnRequest; }
namespace MoleMole { class EntitySpawnSubsystem_WorkingQueue; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T1, typename T2> class CNKGGMABMGE_2;

#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUESTWITHENTITYGRIDDELAY_OFFSET UNITYSDK_OFFSET(0x1A7B4E10)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUEST_OFFSET UNITYSDK_OFFSET(0x1A7B4D40)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A7B3C80)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDSYNCREQUEST_OFFSET UNITYSDK_OFFSET(0x1A7B4530)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDWORKINGREQUESTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7B5B20)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCELREQUEST_OFFSET UNITYSDK_OFFSET(0x1A7B5680)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCEL_OFFSET UNITYSDK_OFFSET(0x1A7B5140)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CONFIRMVIEWOBJECTBUNDLEVALID_OFFSET UNITYSDK_OFFSET(0x1A7B6CF0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A7B36B0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A7B5C90)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_REGISTERBUNDLEREQUEST_OFFSET UNITYSDK_OFFSET(0x1A7B5990)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_SPAWN_OFFSET UNITYSDK_OFFSET(0x1A7B43A0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYPROCESSREQUESTWITHBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A7B6570)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYSTARTWORKINGCOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A7B5B90)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM_UPDATEDELAYCREATIONSETTING_OFFSET UNITYSDK_OFFSET(0x1A7B7000)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B7B10)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM__TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_OFFSET UNITYSDK_OFFSET(0x1A7B6520)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A7B7CC0)
#define MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A7B7D50)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySpawnSubsystem_TypeDefinitionIndex = 87039;

	class EntitySpawnSubsystem
	{
	public:
		// static const ::System::Single MinGridSize; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _relatedEntityRequestBundle; // 0x10
		::MoleMole::EntitySpawnSubsystem_WorkingQueue* _workingRequests; // 0x18
		::CNKGGMABMGE_2<::System::Object*, ::System::Object*>* _waitingRequests; // 0x20
		::System::Boolean _isDelayCreateEntityEnabled; // 0x28
		::System::Boolean _isEntityGridDisabled; // 0x29
		::System::Boolean _coroutineFlag; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Single _createInterval; // 0x2C
		::MoleMole::EntitySpawnSubsystem_GridCoord _playerGridCoord; // 0x30
		::System::Single _gridSize; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Boolean AddBundle(::System::Collections::Generic::IList_1<::System::UInt32>* ridBundle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDBUNDLE_OFFSET))(this, ridBundle);
		}

		::System::Void Spawn(::Foundation::ViewObject::ViewObjectHandle vo, ::ANAKBKOHGEB* creator, ::System::Int32 priority, ::MLGOKCHMCPO policy, ::System::Action_1<::MoleMole::EntityHandle>* onComplete, ::BNHPDBDCOAJ& handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle, ::ANAKBKOHGEB*, ::System::Int32, ::MLGOKCHMCPO, ::System::Action_1<::MoleMole::EntityHandle>*, ::BNHPDBDCOAJ&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_SPAWN_OFFSET))(this, vo, creator, priority, policy, onComplete, handle);
		}

		::System::Void Cancel(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request, ::BHELLEGKALM cancelSource)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*, ::BHELLEGKALM))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCEL_OFFSET))(this, request, cancelSource);
		}

		::System::Void CancelRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request, ::BHELLEGKALM cancelSource)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*, ::BHELLEGKALM))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CANCELREQUEST_OFFSET))(this, request, cancelSource);
		}

		::System::Boolean RegisterBundleRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request, ::MoleMole::EntitySpawnSubsystem_EntitySpawnBundle*& bundle)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*, ::MoleMole::EntitySpawnSubsystem_EntitySpawnBundle*&))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_REGISTERBUNDLEREQUEST_OFFSET))(this, request, bundle);
		}

		::System::Void AddSyncRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDSYNCREQUEST_OFFSET))(this, request);
		}

		::System::Void AddAsyncRequest(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUEST_OFFSET))(this, request);
		}

		::System::Void AddAsyncRequestWithEntityGridDelay(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDASYNCREQUESTWITHENTITYGRIDDELAY_OFFSET))(this, request);
		}

		::System::Void AddWorkingRequestInternal(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ADDWORKINGREQUESTINTERNAL_OFFSET))(this, request);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void TryStartWorkingCoroutine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYSTARTWORKINGCOROUTINE_OFFSET))(this);
		}

		::System::Boolean TryProcessRequestWithBundle(::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest* request)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntitySpawnSubsystem_EntitySpawnRequest*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_TRYPROCESSREQUESTWITHBUNDLE_OFFSET))(this, request);
		}

		::System::Void ConfirmViewObjectBundleValid(::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_CONFIRMVIEWOBJECTBUNDLEVALID_OFFSET))(this, handle);
		}

		::System::Void UpdateDelayCreationSetting(::System::Single gridSize, ::System::Single creationInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM_UPDATEDELAYCREATIONSETTING_OFFSET))(this, gridSize, creationInterval);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _TryStartWorkingCoroutine_g__SpawnEntity_25_0()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM__TRYSTARTWORKINGCOROUTINE_G__SPAWNENTITY_25_0_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPAWNSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
