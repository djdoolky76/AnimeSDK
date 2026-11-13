#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55E590)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55E5D0)
#define CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1E55E5E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAllPromise___c_TypeDefinitionIndex = 39226;

	class UniTask_WhenAllPromise___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x38660);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x38668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__3_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASK_WHENALLPROMISE___C___CTOR_B__3_0_OFFSET))(this, a1);
		}

	};
}
