#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E559750)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E559790)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C__CREATE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1E559800)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E5597A0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayFramePromise___c_TypeDefinitionIndex = 39164;

	class UniTask_DelayFramePromise___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__13_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x37D30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x37D38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__13_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C__CREATE_B__13_0_OFFSET))(this, a1);
		}

	};
}
