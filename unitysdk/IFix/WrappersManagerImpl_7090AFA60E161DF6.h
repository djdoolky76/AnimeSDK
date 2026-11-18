#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix { class ILFixDynamicMethodWrapper_7B3FA1C285C11E19; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1F8324C0)
#define IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1F832370)
#define IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1F832400)
#define IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1F832300)
#define IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1F832450)
#define IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8322F0)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_7090AFA60E161DF6_TypeDefinitionIndex = 18568;

	class WrappersManagerImpl_7090AFA60E161DF6 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10

		::System::Void _ctor(::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6__CTOR_OFFSET))(this, virtualMachine);
		}

		static ::IFix::ILFixDynamicMethodWrapper_7B3FA1C285C11E19* GetPatch(::System::Int32 id)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_7B3FA1C285C11E19*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_GETPATCH_OFFSET))(id);
		}

		::System::Delegate* CreateDelegate(::System::Type* type, ::System::Int32 id, ::System::Object* anon)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_CREATEDELEGATE_OFFSET))(this, type, id, anon);
		}

		::System::Object* CreateWrapper(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_CREATEWRAPPER_OFFSET))(this, id);
		}

		::System::Object* InitWrapperArray(::System::Int32 len)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_INITWRAPPERARRAY_OFFSET))(this, len);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* slots, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_7090AFA60E161DF6_CREATEBRIDGE_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, slots, virtualMachine);
		}
	};
}
