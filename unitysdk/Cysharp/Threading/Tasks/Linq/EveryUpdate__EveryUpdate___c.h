#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0FE390)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0FE3D0)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F0FE3E0)

namespace Cysharp::Threading::Tasks::Linq
{
	class EveryUpdate__EveryUpdate___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c")->GetStaticField(0x1120);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c")->GetStaticField(0x1128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C_CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__4_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C___CTOR_B__4_0_OFFSET))(this, a1);
		}

	};
}
