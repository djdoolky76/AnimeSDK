#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IFix::Core { class ThreadStackInfo; }
namespace System { class LocalDataStoreSlot; }
namespace System { class Object; }

#define IFIX_CORE_THREADSTACKINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9D0B50)
#define IFIX_CORE_THREADSTACKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BE960)
#define IFIX_CORE_THREADSTACKINFO_GET_STACK_OFFSET UNITYSDK_OFFSET(0x1B9B9BD0)

namespace IFix::Core
{
	inline static constexpr unsigned int ThreadStackInfo_TypeDefinitionIndex = 7132;

	class ThreadStackInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* ManagedStack; // 0x10
		::PVOID UnmanagedStack; // 0x18
		::System::IntPtr unmanagedStackHandler; // 0x20
		::System::IntPtr evaluationStackHandler; // 0x28
		static ::System::LocalDataStoreSlot** StaticGet_localSlot()
		{
			return (::System::LocalDataStoreSlot**)UnitySDK::FromName("IFix.Core", "ThreadStackInfo")->GetStaticField(0x560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_THREADSTACKINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_THREADSTACKINFO_CCTOR_OFFSET))();
		}

		static ::IFix::Core::ThreadStackInfo* get_Stack()
		{
			return ((::IFix::Core::ThreadStackInfo*(*)())((::PBYTE)hIl2Cpp + IFIX_CORE_THREADSTACKINFO_GET_STACK_OFFSET))();
		}

	};
}
