#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F14AC00)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F14AC40)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CREATE_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F14ACB0)
#define CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F14AC50)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WaitForEndOfFramePromise___c_TypeDefinitionIndex = 38233;

	class UniTask_WaitForEndOfFramePromise___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x47000);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x47008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}

		::System::Void _Create_b__10_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WAITFORENDOFFRAMEPROMISE___C__CREATE_B__10_0_OFFSET))(this, a1);
		}

	};
}
