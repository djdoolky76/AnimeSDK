#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IFix { class ILFixDynamicMethodWrapper_CB1CFEA20B2146A2; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1DD3BAD0)
#define IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1DD3B9E0)
#define IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1DD3BA70)
#define IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3B950)
#define IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1DD3B960)
#define IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1DD3BAA0)
#define IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1DD3B9A0)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_0719DF39D8081BA1_TypeDefinitionIndex = 44888;

	class WrappersManagerImpl_0719DF39D8081BA1 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10
		::System::Void _ctor(::IFix::Core::VirtualMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CTOR_OFFSET))(this, a1);
		}

		static ::IFix::ILFixDynamicMethodWrapper_CB1CFEA20B2146A2* GetPatch(::System::Int32 a1)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_CB1CFEA20B2146A2*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_GETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_ISPATCHED_OFFSET))(a1);
		}

		::System::Delegate* CreateDelegate(::System::Type* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CREATEDELEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* CreateWrapper(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CREATEWRAPPER_OFFSET))(this, a1);
		}

		::System::Object* InitWrapperArray(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_INITWRAPPERARRAY_OFFSET))(this, a1);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::IFix::Core::VirtualMachine* a6)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_0719DF39D8081BA1_CREATEBRIDGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
}
