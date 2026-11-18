#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ED8BE30)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED8C430)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED8C970)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED8CED0)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED8BF60)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED8C7F0)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED8D0B0)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED8CB50)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ED8C610)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1ED8C250)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1ED8C130)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ED8BD10)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1ED8CC80)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1ED8CDA0)
#define IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED8D290)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_7C6B965F12E62A68_TypeDefinitionIndex = 94901;

	class ILFixInterfaceBridge_7C6B965F12E62A68 : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_11; // 0x40
		::System::Int32 methodId_5; // 0x44
		::System::Int32 methodId_12; // 0x48
		::System::Int32 methodId_2; // 0x4C
		::System::Int32 methodId_3; // 0x50
		::System::Int32 methodId_9; // 0x54
		::System::Int32 methodId_13; // 0x58
		::System::Int32 methodId_7; // 0x5C
		::System::Int32 methodId_6; // 0x60
		::System::Int32 methodId_4; // 0x64
		::System::Int32 methodId_0; // 0x68
		::System::Int32 methodId_8; // 0x6C
		::System::Int32 methodId_10; // 0x70
		::System::Int32 methodId_1; // 0x74

		::System::Void _ctor(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* methodIdArray, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68__CTOR_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, methodIdArray, virtualMachine);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_MOVENEXT_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_System_Int32___get_Current()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_System_Int32___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_INT32___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*> System_Collections_Generic_IEnumerator_Sirenix_OdinInspector_ValueDropdownItem_System_String___get_Current()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>* System_Collections_Generic_IEnumerable_Sirenix_OdinInspector_ValueDropdownItem_System_String___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SIRENIX_ODININSPECTOR_VALUEDROPDOWNITEM_SYSTEM_STRING___GETENUMERATOR_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Runtime_CompilerServices_IAsyncStateMachine_MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_MOVENEXT_OFFSET))(this);
		}

		::System::Void System_Runtime_CompilerServices_IAsyncStateMachine_SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_RUNTIME_COMPILERSERVICES_IASYNCSTATEMACHINE_SETSTATEMACHINE_OFFSET))(this, P0);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_7C6B965F12E62A68_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}
	};
}
