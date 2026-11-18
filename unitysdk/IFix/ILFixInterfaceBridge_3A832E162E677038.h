#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_MOVENEXT_1_OFFSET UNITYSDK_OFFSET(0x1D26F1E0)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1D26EF90)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_REFAWAITUNSAFEONCOMPLETEMETHOD_OFFSET UNITYSDK_OFFSET(0x1D26FEE0)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1D26F0B0)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D26FB00)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D26F310)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D26F7F0)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D26F920)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D26F610)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1D26F4F0)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D26F0C0)
#define IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038__CTOR_OFFSET UNITYSDK_OFFSET(0x1D26FCE0)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_3A832E162E677038_TypeDefinitionIndex = 26683;

	class ILFixInterfaceBridge_3A832E162E677038 : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_7; // 0x40
		::System::Int32 methodId_6; // 0x44
		::System::Int32 methodId_3; // 0x48
		::System::Int32 methodId_5; // 0x4C
		::System::Int32 methodId_8; // 0x50
		::System::Int32 methodId_2; // 0x54
		::System::Int32 methodId_9; // 0x58
		::System::Int32 methodId_0; // 0x5C
		::System::Int32 methodId_4; // 0x60
		::System::Int32 methodId_1; // 0x64

		::System::Void _ctor(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* methodIdArray, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038__CTOR_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, methodIdArray, virtualMachine);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SETSTATEMACHINE_OFFSET))(this, P0);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_MOVENEXT_1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Void RefAwaitUnsafeOnCompleteMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_3A832E162E677038_REFAWAITUNSAFEONCOMPLETEMETHOD_OFFSET))(this);
		}
	};
}
