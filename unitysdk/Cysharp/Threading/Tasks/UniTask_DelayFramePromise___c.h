#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x20017110)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x20017150)
#define CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x20017160)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_DelayFramePromise___c_TypeDefinitionIndex = 31305;

	class UniTask_DelayFramePromise___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UniTask_DelayFramePromise___c_TypeDefinitionIndex)->GetStaticField(0x28380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_DELAYFRAMEPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
