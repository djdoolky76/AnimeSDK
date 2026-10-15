#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F110340)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F110380)
#define CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C___CTOR_B__11_0_OFFSET UNITYSDK_OFFSET(0x1F110390)

namespace Cysharp::Threading::Tasks::Linq
{
	class Timer__Timer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c")->GetStaticField(0x11B0);
		}

		static ::System::Action** StaticGet___9__11_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c")->GetStaticField(0x11B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__11_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_TIMER__TIMER___C___CTOR_B__11_0_OFFSET))(this, a1);
		}

	};
}
