#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }
namespace System::Threading::Tasks { class Task; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F152180)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1521C0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASTASK_B__35_0_OFFSET UNITYSDK_OFFSET(0x1F152350)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASUNITASK_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F1521D0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__FORGET_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F152550)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions___c_TypeDefinitionIndex = 38410;

	class UniTaskExtensions___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__33_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x48460);
		}

		static ::System::Action** StaticGet___9__48_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x48468);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x48470);
		}

		static ::System::Action** StaticGet___9__35_0()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x48478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C_CTOR_OFFSET))(this);
		}

		::System::Void _AsUniTask_b__33_0(::System::Threading::Tasks::Task* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASUNITASK_B__33_0_OFFSET))(this, a1, a2);
		}

		::System::Void _AsTask_b__35_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASTASK_B__35_0_OFFSET))(this, a1);
		}

		::System::Void _Forget_b__48_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__FORGET_B__48_0_OFFSET))(this, a1);
		}

	};
}
