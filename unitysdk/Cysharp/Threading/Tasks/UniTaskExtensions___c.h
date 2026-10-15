#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { class Task; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1245E0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F124620)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASTASK_B__35_0_OFFSET UNITYSDK_OFFSET(0x1F1247B0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASUNITASK_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F124630)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__FORGET_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F1249B0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions___c_TypeDefinitionIndex = 38410;

	class UniTaskExtensions___c : public ::System::Object
	{
	public:
		static ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>** StaticGet___9__33_0()
		{
			return (::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x3A700);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x3A708);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x3A710);
		}

		static ::System::Action_1<::System::Object*>** StaticGet___9__48_0()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>c")->GetStaticField(0x3A718);
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
