#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix { class ILFixDynamicMethodWrapper_E25916C97E932268; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1FC44C20)
#define IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1FC44AD0)
#define IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1FC44B60)
#define IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1FC37C80)
#define IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1FC44BB0)
#define IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC44AC0)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_9FCF341A6F348838_TypeDefinitionIndex = 34040;

	class WrappersManagerImpl_9FCF341A6F348838 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838__CTOR_OFFSET))(this, virtualMachine);
		}

		static ::IFix::ILFixDynamicMethodWrapper_E25916C97E932268* GetPatch(::System::Int32 id)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_E25916C97E932268*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_GETPATCH_OFFSET))(id);
		}

		::System::Delegate* CreateDelegate(::System::Type* type, ::System::Int32 id, ::System::Object* anon)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_CREATEDELEGATE_OFFSET))(this, type, id, anon);
		}

		::System::Object* CreateWrapper(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_CREATEWRAPPER_OFFSET))(this, id);
		}

		::System::Object* InitWrapperArray(::System::Int32 len)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_INITWRAPPERARRAY_OFFSET))(this, len);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* slots, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_9FCF341A6F348838_CREATEBRIDGE_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, slots, virtualMachine);
		}
	};
}
