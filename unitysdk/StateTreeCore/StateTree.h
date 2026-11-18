#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/CompactStateTreeState.h"
#include "unitysdk/StateTreeCore/CompactStateTreeTransition.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataDesc.h"
#include "unitysdk/StateTreeCore/StateTreeInstanceData.h"
#include "unitysdk/StateTreeCore/StateTreePropertyBindings.h"
#include "unitysdk/UnrealTypes/FInstancedPropertyBag.h"
#include "unitysdk/UnrealTypes/FInstancedStructContainer.h"
#include "unitysdk/UnrealTypes/NativeStructList_1.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/StateTreeCore/StateTreeStateHandle.h"
#include "unitysdk/UnrealTypes/FObjectInitializer.h"
#include "unitysdk/UnrealTypes/RawPtr_1.h"
#include "unitysdk/UnrealTypes/ReadOnlyRawPtr_1.h"

namespace StateTreeCore { class StateTreeSchema; }
namespace System::Threading { template <typename T> class ThreadLocal_1; }
namespace UnrealTypes { template <typename T> class ManagedStruct_1; }

#define STATETREECORE_STATETREE_CONSTRUCTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FDFBEA0)
#define STATETREECORE_STATETREE_DISPOSEGENIMPL_OFFSET UNITYSDK_OFFSET(0x1FDFBF20)
#define STATETREECORE_STATETREE_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1FDFC0E0)
#define STATETREECORE_STATETREE_DISPOSEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1FDFC140)
#define STATETREECORE_STATETREE_GETSHAREDINSTANCEDATA_OFFSET UNITYSDK_OFFSET(0x1FDF9BB0)
#define STATETREECORE_STATETREE_GETSTATEFROMHANDLE_OFFSET UNITYSDK_OFFSET(0x1FDF9C10)
#define STATETREECORE_STATETREE_GET_ISREADYTORUN_OFFSET UNITYSDK_OFFSET(0x1FDF9B90)
#define STATETREECORE_STATETREE_INITIALIZEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1FDFBBE0)
#define STATETREECORE_STATETREE_LINK_OFFSET UNITYSDK_OFFSET(0x1FDF9C90)
#define STATETREECORE_STATETREE_PATCHBINDINGS_OFFSET UNITYSDK_OFFSET(0x1FDFA000)
#define STATETREECORE_STATETREE_RESETLINKED_OFFSET UNITYSDK_OFFSET(0x1FDF9FF0)
#define STATETREECORE_STATETREE__CONSTRUCTINTERNAL_B__26_0_OFFSET UNITYSDK_OFFSET(0x1FDFC2B0)
#define STATETREECORE_STATETREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDFBB50)

namespace StateTreeCore
{
	inline static constexpr unsigned int StateTree_TypeDefinitionIndex = 30955;

	class StateTree : public ::UnrealTypes::Object
	{
	public:
		::StateTreeCore::StateTreeSchema* Schema; // 0x38
		::System::Threading::ThreadLocal_1<::UnrealTypes::ManagedStruct_1<::StateTreeCore::StateTreeInstanceData>*>* _perThreadSharedInstanceData; // 0x40
		::UnrealTypes::NativeStructList_1<::StateTreeCore::CompactStateTreeTransition> Transitions; // 0x48
		::System::Byte _padding0[0x10];
		::System::Boolean HasGlobalTransitionTasks; // 0x60
		::System::Boolean _isLinked; // 0x61
		::System::UInt16 NumContextData; // 0x62
		::System::UInt16 NumGlobalInstanceData; // 0x64
		::System::Byte _padding1[0x2];
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExternalDataDesc> ExternalDataDescs; // 0x68
		::System::Byte _padding2[0x10];
		::System::UInt16 GlobalTasksBegin; // 0x80
		::System::UInt16 GlobalTasksNum; // 0x82
		::System::Byte _padding3[0x4];
		::UnrealTypes::FInstancedStructContainer Nodes; // 0x88
		::UnrealTypes::NativeStructList_1<::StateTreeCore::StateTreeExternalDataDesc> ContextDataDescs; // 0xA0
		::System::Byte _padding4[0x10];
		::StateTreeCore::StateTreeInstanceData SharedInstanceData; // 0xB8
		::StateTreeCore::StateTreePropertyBindings PropertyBindings; // 0x178
		::StateTreeCore::StateTreeInstanceData DefaultInstanceData; // 0x228
		::UnrealTypes::FInstancedPropertyBag Parameters; // 0x2E8
		::UnrealTypes::NativeStructList_1<::StateTreeCore::CompactStateTreeState> States; // 0x300

		::System::Void _ctor(::UnrealTypes::FObjectInitializer& initializer)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::FObjectInitializer&))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE__CTOR_OFFSET))(this, initializer);
		}

		::System::Boolean get_IsReadyToRun()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GET_ISREADYTORUN_OFFSET))(this);
		}

		::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData> GetSharedInstanceData()
		{
			return ((::UnrealTypes::RawPtr_1<::StateTreeCore::StateTreeInstanceData>(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GETSHAREDINSTANCEDATA_OFFSET))(this);
		}

		::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::CompactStateTreeState> GetStateFromHandle(::StateTreeCore::StateTreeStateHandle stateHandle)
		{
			return ((::UnrealTypes::ReadOnlyRawPtr_1<::StateTreeCore::CompactStateTreeState>(*)(::PVOID, ::StateTreeCore::StateTreeStateHandle))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_GETSTATEFROMHANDLE_OFFSET))(this, stateHandle);
		}

		::System::Boolean Link()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_LINK_OFFSET))(this);
		}

		::System::Boolean PatchBindings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_PATCHBINDINGS_OFFSET))(this);
		}

		::System::Void ResetLinked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_RESETLINKED_OFFSET))(this);
		}

		::System::Void InitializeProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_INITIALIZEPROPERTIES_OFFSET))(this);
		}

		::System::Void ConstructInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_CONSTRUCTINTERNAL_OFFSET))(this);
		}

		::System::Void DisposeGenImpl(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_DISPOSEGENIMPL_OFFSET))(this, disposing);
		}

		::System::Void DisposeProperties(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_DISPOSEPROPERTIES_OFFSET))(this, disposing);
		}

		::System::Void DisposeInternal(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE_DISPOSEINTERNAL_OFFSET))(this, disposing);
		}

		::UnrealTypes::ManagedStruct_1<::StateTreeCore::StateTreeInstanceData>* _ConstructInternal_b__26_0()
		{
			return ((::UnrealTypes::ManagedStruct_1<::StateTreeCore::StateTreeInstanceData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREECORE_STATETREE__CONSTRUCTINTERNAL_B__26_0_OFFSET))(this);
		}
	};
}
