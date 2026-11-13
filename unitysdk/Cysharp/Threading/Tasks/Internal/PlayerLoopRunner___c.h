#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F164280)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1642B0)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1F1642C0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PlayerLoopRunner___c_TypeDefinitionIndex = 39591;

	class PlayerLoopRunner___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "<>c")->GetStaticField(0x32830);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "<>c")->GetStaticField(0x32838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__9_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C___CTOR_B__9_0_OFFSET))(this, a1);
		}

	};
}
