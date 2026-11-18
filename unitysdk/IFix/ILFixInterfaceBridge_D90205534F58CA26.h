#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F0183D0)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F0185B0)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F017D50)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1F0181F0)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F017A50)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F017920)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F017C30)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F017E80)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F017FA0)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1F0180C0)
#define IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26__CTOR_OFFSET UNITYSDK_OFFSET(0x1F018790)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_D90205534F58CA26_TypeDefinitionIndex = 36096;

	class ILFixInterfaceBridge_D90205534F58CA26 : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_6; // 0x40
		::System::Int32 methodId_1; // 0x44
		::System::Int32 methodId_3; // 0x48
		::System::Int32 methodId_7; // 0x4C
		::System::Int32 methodId_5; // 0x50
		::System::Int32 methodId_0; // 0x54
		::System::Int32 methodId_8; // 0x58
		::System::Int32 methodId_2; // 0x5C
		::System::Int32 methodId_4; // 0x60
		::System::Int32 methodId_9; // 0x64

		::System::Void _ctor(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* methodIdArray, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26__CTOR_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, methodIdArray, virtualMachine);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Void System_Runtime_CompilerServices_IAsyncStateMachine_MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Runtime_CompilerServices_IAsyncStateMachine_SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET))(this, P0);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_D90205534F58CA26_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}
	};
}
