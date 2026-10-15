#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Threading { class WaitCallback; }

#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C14E960)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C14E9A0)
#define SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__THROWASYNCIFNECESSARY_B__17_0_OFFSET UNITYSDK_OFFSET(0x1C14E9B0)

namespace System::Threading::Tasks
{
	class AwaitTaskContinuation___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x20560);
		}

		static ::System::Threading::WaitCallback** StaticGet___9__17_0()
		{
			return (::System::Threading::WaitCallback**)UnitySDK::FromName("System.Threading.Tasks", "<>c")->GetStaticField(0x20568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C_CTOR_OFFSET))(this);
		}

		::System::Void _ThrowAsyncIfNecessary_b__17_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_TASKS_AWAITTASKCONTINUATION___C__THROWASYNCIFNECESSARY_B__17_0_OFFSET))(this, a1);
		}

	};
}
