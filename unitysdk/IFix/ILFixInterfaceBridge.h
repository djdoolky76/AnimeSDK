#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"
namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }

#define IFIX_ILFIXINTERFACEBRIDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2EF10)
#define IFIX_ILFIXINTERFACEBRIDGE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1EC2E450)
#define IFIX_ILFIXINTERFACEBRIDGE_REFASYNCBUILDERSTARTMETHOD_OFFSET UNITYSDK_OFFSET(0x1EC2F040)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC2EBB0)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC2EA00)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC2E580)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EC2ED60)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EC2E850)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1EC2E730)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC2E330)

namespace IFix
{
	class ILFixInterfaceBridge : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_1; // 0x40
		::System::Int32 methodId_3; // 0x44
		::System::Int32 methodId_4; // 0x48
		::System::Int32 methodId_5; // 0x4C
		::System::Int32 methodId_7; // 0x50
		::System::Int32 methodId_6; // 0x54
		::System::Int32 methodId_2; // 0x58
		::System::Int32 methodId_0; // 0x5C
		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::IFix::Core::VirtualMachine* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_IO_FileInfo__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_IO_FILEINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerable_System_IO_FileInfo__GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_IO_FILEINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void RefAsyncBuilderStartMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_REFASYNCBUILDERSTARTMETHOD_OFFSET))(this);
		}

	};
}
