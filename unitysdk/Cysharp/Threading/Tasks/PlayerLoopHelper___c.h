#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LowLevel/PlayerLoopSystem.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE68D0)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE6910)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__INSERTUNITASKSYNCHRONIZATIONCONTEXT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1FFE6920)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__INSERTUNITASKSYNCHRONIZATIONCONTEXT_B__21_1_OFFSET UNITYSDK_OFFSET(0x1FFE6960)
#define CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__INSERTUNITASKSYNCHRONIZATIONCONTEXT_B__21_2_OFFSET UNITYSDK_OFFSET(0x1FFE69E0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int PlayerLoopHelper___c_TypeDefinitionIndex = 31286;

	class PlayerLoopHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Boolean>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::UnityEngine::LowLevel::PlayerLoopSystem, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper___c_TypeDefinitionIndex)->GetStaticField(0x283C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper___c_TypeDefinitionIndex)->GetStaticField(0x283C8);
		}
		static ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>** StaticGet___9__21_2()
		{
			return (::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper___c_TypeDefinitionIndex)->GetStaticField(0x283D0);
		}
		static ::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>** StaticGet___9__21_1()
		{
			return (::System::Predicate_1<::UnityEngine::LowLevel::PlayerLoopSystem>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopHelper___c_TypeDefinitionIndex)->GetStaticField(0x283D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _InsertUniTaskSynchronizationContext_b__21_0(::UnityEngine::LowLevel::PlayerLoopSystem ls)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__INSERTUNITASKSYNCHRONIZATIONCONTEXT_B__21_0_OFFSET))(this, ls);
		}

		::System::Boolean _InsertUniTaskSynchronizationContext_b__21_1(::UnityEngine::LowLevel::PlayerLoopSystem x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__INSERTUNITASKSYNCHRONIZATIONCONTEXT_B__21_1_OFFSET))(this, x);
		}

		::System::Boolean _InsertUniTaskSynchronizationContext_b__21_2(::UnityEngine::LowLevel::PlayerLoopSystem x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::LowLevel::PlayerLoopSystem))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_PLAYERLOOPHELPER___C__INSERTUNITASKSYNCHRONIZATIONCONTEXT_B__21_2_OFFSET))(this, x);
		}
	};
}
