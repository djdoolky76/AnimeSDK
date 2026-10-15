#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"
namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }

#define IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_CTOR_OFFSET UNITYSDK_OFFSET(0x1F635F40)
#define IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F635990)
#define IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_REFASYNCBUILDERSTARTMETHOD_OFFSET UNITYSDK_OFFSET(0x1F636040)
#define IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F635AC0)
#define IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F635D90)
#define IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F635C70)
#define IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F635870)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_8F6055A13A4CB158_TypeDefinitionIndex = 44988;

	class ILFixInterfaceBridge_8F6055A13A4CB158 : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_2; // 0x40
		::System::Int32 methodId_4; // 0x44
		::System::Int32 methodId_0; // 0x48
		::System::Int32 methodId_1; // 0x4C
		::System::Int32 methodId_3; // 0x50
		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::IFix::Core::VirtualMachine* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void RefAsyncBuilderStartMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_8F6055A13A4CB158_REFASYNCBUILDERSTARTMETHOD_OFFSET))(this);
		}

	};
}
