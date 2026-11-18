#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"
#include "unitysdk/System/ValueTuple_3.h"

class KHOLLIGHNLK;
namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DC91A00)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC926F0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC91FB0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC928D0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC92370)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC91B30)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DC92190)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DC91DD0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DC91CB0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DC918E0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DC924A0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1DC925C0)
#define IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC92AB0)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_A3F8EAE65BE70128_TypeDefinitionIndex = 93967;

	class ILFixInterfaceBridge_A3F8EAE65BE70128 : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_8; // 0x40
		::System::Int32 methodId_2; // 0x44
		::System::Int32 methodId_0; // 0x48
		::System::Int32 methodId_1; // 0x4C
		::System::Int32 methodId_7; // 0x50
		::System::Int32 methodId_10; // 0x54
		::System::Int32 methodId_5; // 0x58
		::System::Int32 methodId_9; // 0x5C
		::System::Int32 methodId_3; // 0x60
		::System::Int32 methodId_4; // 0x64
		::System::Int32 methodId_11; // 0x68
		::System::Int32 methodId_6; // 0x6C

		::System::Void _ctor(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* methodIdArray, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128__CTOR_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, methodIdArray, virtualMachine);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_MOVENEXT_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32> System_Collections_Generic_IEnumerator__System_StringName_MoleMole_Arcade_BallPit_BallPitHfsmFactoryBaseFactory_System_Int32InstanceId___get_Current()
		{
			return ((::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>* System_Collections_Generic_IEnumerable__System_StringName_MoleMole_Arcade_BallPit_BallPitHfsmFactoryBaseFactory_System_Int32InstanceId___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRINGNAME_MOLEMOLE_ARCADE_BALLPIT_BALLPITHFSMFACTORYBASEFACTORY_SYSTEM_INT32INSTANCEID___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Runtime_CompilerServices_IAsyncStateMachine_MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Runtime_CompilerServices_IAsyncStateMachine_SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET))(this, P0);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_A3F8EAE65BE70128_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}
	};
}
