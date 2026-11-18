#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix { class ILFixDynamicMethodWrapper_FF6659FE4968B18C; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1FEA7000)
#define IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1FEA6EB0)
#define IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1FEA6F40)
#define IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1FEA6A90)
#define IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1FEA6F90)
#define IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEA6EA0)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_8D8577B3540D18C6_TypeDefinitionIndex = 94928;

	class WrappersManagerImpl_8D8577B3540D18C6 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6__CTOR_OFFSET))(this, virtualMachine);
		}

		static ::IFix::ILFixDynamicMethodWrapper_FF6659FE4968B18C* GetPatch(::System::Int32 id)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_FF6659FE4968B18C*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_GETPATCH_OFFSET))(id);
		}

		::System::Delegate* CreateDelegate(::System::Type* type, ::System::Int32 id, ::System::Object* anon)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_CREATEDELEGATE_OFFSET))(this, type, id, anon);
		}

		::System::Object* CreateWrapper(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_CREATEWRAPPER_OFFSET))(this, id);
		}

		::System::Object* InitWrapperArray(::System::Int32 len)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_INITWRAPPERARRAY_OFFSET))(this, len);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* slots, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_8D8577B3540D18C6_CREATEBRIDGE_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, slots, virtualMachine);
		}
	};
}
