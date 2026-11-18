#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFB1280)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFB12C0)
#define CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1FFB12D0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_YieldPromise___c_TypeDefinitionIndex = 31299;

	class UniTask_YieldPromise___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UniTask_YieldPromise___c_TypeDefinitionIndex)->GetStaticField(0x28180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_YIELDPROMISE___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
