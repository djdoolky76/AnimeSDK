#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix { class ILFixDynamicMethodWrapper_0B6EE6E4ECEA4557; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1A9A0FD0)
#define IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1A9A0E80)
#define IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1A9A0F10)
#define IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1A9A0E10)
#define IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1A9A0F60)
#define IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9A0E00)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_BE17A174E21EEDC0_TypeDefinitionIndex = 26009;

	class WrappersManagerImpl_BE17A174E21EEDC0 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0__CTOR_OFFSET))(this, virtualMachine);
		}

		static ::IFix::ILFixDynamicMethodWrapper_0B6EE6E4ECEA4557* GetPatch(::System::Int32 id)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_0B6EE6E4ECEA4557*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_GETPATCH_OFFSET))(id);
		}

		::System::Delegate* CreateDelegate(::System::Type* type, ::System::Int32 id, ::System::Object* anon)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_CREATEDELEGATE_OFFSET))(this, type, id, anon);
		}

		::System::Object* CreateWrapper(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_CREATEWRAPPER_OFFSET))(this, id);
		}

		::System::Object* InitWrapperArray(::System::Int32 len)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_INITWRAPPERARRAY_OFFSET))(this, len);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* slots, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_BE17A174E21EEDC0_CREATEBRIDGE_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, slots, virtualMachine);
		}
	};
}
