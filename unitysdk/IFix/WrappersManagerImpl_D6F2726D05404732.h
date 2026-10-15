#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IFix { class ILFixDynamicMethodWrapper_86CAB1E2B05F7098; }
namespace IFix::Core { class AnonymousStorey; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Delegate; }
namespace System { class Object; }
namespace System { class Type; }

#define IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CREATEBRIDGE_OFFSET UNITYSDK_OFFSET(0x1F6083B0)
#define IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CREATEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1F6082C0)
#define IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CREATEWRAPPER_OFFSET UNITYSDK_OFFSET(0x1F608350)
#define IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CTOR_OFFSET UNITYSDK_OFFSET(0x1F608270)
#define IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_GETPATCH_OFFSET UNITYSDK_OFFSET(0x1F5D7C30)
#define IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_INITWRAPPERARRAY_OFFSET UNITYSDK_OFFSET(0x1F608380)
#define IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_ISPATCHED_OFFSET UNITYSDK_OFFSET(0x1F608280)

namespace IFix
{
	inline static constexpr unsigned int WrappersManagerImpl_D6F2726D05404732_TypeDefinitionIndex = 44989;

	class WrappersManagerImpl_D6F2726D05404732 : public ::System::Object
	{
	public:
		::IFix::Core::VirtualMachine* virtualMachine; // 0x10
		::System::Void _ctor(::IFix::Core::VirtualMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CTOR_OFFSET))(this, a1);
		}

		static ::IFix::ILFixDynamicMethodWrapper_86CAB1E2B05F7098* GetPatch(::System::Int32 a1)
		{
			return ((::IFix::ILFixDynamicMethodWrapper_86CAB1E2B05F7098*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_GETPATCH_OFFSET))(a1);
		}

		static ::System::Boolean IsPatched(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_ISPATCHED_OFFSET))(a1);
		}

		::System::Delegate* CreateDelegate(::System::Type* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Type*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CREATEDELEGATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* CreateWrapper(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CREATEWRAPPER_OFFSET))(this, a1);
		}

		::System::Object* InitWrapperArray(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_INITWRAPPERARRAY_OFFSET))(this, a1);
		}

		::IFix::Core::AnonymousStorey* CreateBridge(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::IFix::Core::VirtualMachine* a6)
		{
			return ((::IFix::Core::AnonymousStorey*(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_WRAPPERSMANAGERIMPL_D6F2726D05404732_CREATEBRIDGE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
}
