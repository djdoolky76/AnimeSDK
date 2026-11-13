#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IFix { class ILFixDynamicMethodWrapper_C3D7DCE6375B6BBE; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x19F3D170)
#define IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x19F3D080)
#define IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x19F3D110)
#define IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CTOR_OFFSET UNITYSDK_OFFSET(0x19F3CFF0)
#define IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_GETPATCH_OFFSET UNITYSDK_OFFSET(0x19F3D000)
#define IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x19F3D140)
#define IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x19F3D040)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_CCB8589C94D0AD9B_TypeDefinitionIndex = 85209;

	class WrappersManagerImpl_CCB8589C94D0AD9B : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10
		::System::Void _ctor(::IFix::Core::VirtualMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CTOR_OFFSET))(this, a1);
		}

		static ::IFix::ILFixDynamicMethodWrapper_C3D7DCE6375B6BBE* GetPatch(::System::Int32 a1)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_C3D7DCE6375B6BBE*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_GETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_ISPATCHED_OFFSET))(a1);
		}

		::System::Delegate* CreateDelegate(::System::Type* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CREATEDELEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* CreateWrapper(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CREATEWRAPPER_OFFSET))(this, a1);
		}

		::System::Object* InitWrapperArray(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_INITWRAPPERARRAY_OFFSET))(this, a1);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::IFix::Core::VirtualMachine* a6)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_CCB8589C94D0AD9B_CREATEBRIDGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
}
