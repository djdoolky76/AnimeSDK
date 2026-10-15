#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14A4E0)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14A520)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C__CREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1F14A590)
#define CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F14A530)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_NextFramePromise___c_TypeDefinitionIndex = 38231;

	class UniTask_NextFramePromise___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x46E10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x46E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__11_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_NEXTFRAMEPROMISE___C__CREATE_B__11_0_OFFSET))(this, a1);
		}

	};
}
