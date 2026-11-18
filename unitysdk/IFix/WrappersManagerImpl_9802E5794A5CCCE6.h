#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix { class ILFixDynamicMethodWrapper_CDE0A0390DBBAF3A; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1E56C720)
#define IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E56C5D0)
#define IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1E56C660)
#define IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1E554C10)
#define IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1E56C6B0)
#define IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6__CTOR_OFFSET UNITYSDK_OFFSET(0x1E56C5C0)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_9802E5794A5CCCE6_TypeDefinitionIndex = 95283;

	class WrappersManagerImpl_9802E5794A5CCCE6 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6__CTOR_OFFSET))(this, virtualMachine);
		}

		static ::IFix::ILFixDynamicMethodWrapper_CDE0A0390DBBAF3A* GetPatch(::System::Int32 id)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_CDE0A0390DBBAF3A*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_GETPATCH_OFFSET))(id);
		}

		::System::Delegate* CreateDelegate(::System::Type* type, ::System::Int32 id, ::System::Object* anon)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_CREATEDELEGATE_OFFSET))(this, type, id, anon);
		}

		::System::Object* CreateWrapper(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_CREATEWRAPPER_OFFSET))(this, id);
		}

		::System::Object* InitWrapperArray(::System::Int32 len)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_INITWRAPPERARRAY_OFFSET))(this, len);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* slots, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9802E5794A5CCCE6_CREATEBRIDGE_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, slots, virtualMachine);
		}
	};
}
