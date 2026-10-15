#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_UNITASK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F145060)
#define CYSHARP_THREADING_TASKS_UNITASK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1450A0)
#define CYSHARP_THREADING_TASKS_UNITASK___C___CCTOR_B__201_0_OFFSET UNITYSDK_OFFSET(0x1F1450B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask___c_TypeDefinitionIndex = 38336;

	class UniTask___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x46100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C_CTOR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask __cctor_b__201_0()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK___C___CCTOR_B__201_0_OFFSET))(this);
		}

	};
}
