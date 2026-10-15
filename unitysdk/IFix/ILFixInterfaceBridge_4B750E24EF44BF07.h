#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"
namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC480F0)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_MOVENEXT_1_OFFSET UNITYSDK_OFFSET(0x1EC47CF0)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC473E0)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_REFASYNCBUILDERSTARTMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC482C0)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_REFAWAITUNSAFEONCOMPLETEMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC48230)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x1EC47E10)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SOFA_CORE_IVISUALTREEELEMENT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC47990)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SOFA_CORE_IVISUALTREEELEMENT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC47510)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC47F40)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC47B40)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC477E0)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EC476C0)
#define IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC472C0)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_4B750E24EF44BF07_TypeDefinitionIndex = 44320;

	class ILFixInterfaceBridge_4B750E24EF44BF07 : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_3; // 0x40
		::System::Int32 methodId_1; // 0x44
		::System::Int32 methodId_8; // 0x48
		::System::Int32 methodId_7; // 0x4C
		::System::Int32 methodId_4; // 0x50
		::System::Int32 methodId_0; // 0x54
		::System::Int32 methodId_5; // 0x58
		::System::Int32 methodId_2; // 0x5C
		::System::Int32 methodId_9; // 0x60
		::System::Int32 methodId_6; // 0x64
		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::IFix::Core::VirtualMachine* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_Sofa_Core_IVisualTreeElement__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SOFA_CORE_IVISUALTREEELEMENT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerable_Sofa_Core_IVisualTreeElement__GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SOFA_CORE_IVISUALTREEELEMENT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void MoveNext_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_MOVENEXT_1_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SETSTATEMACHINE_OFFSET))(this, a1);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void RefAwaitUnsafeOnCompleteMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_REFAWAITUNSAFEONCOMPLETEMETHOD_OFFSET))(this);
		}

		::System::Void RefAsyncBuilderStartMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_4B750E24EF44BF07_REFASYNCBUILDERSTARTMETHOD_OFFSET))(this);
		}

	};
}
