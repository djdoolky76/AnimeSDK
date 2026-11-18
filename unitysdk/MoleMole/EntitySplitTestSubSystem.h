#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AKKABHFPDHG;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7B8160)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_INIT_OFFSET UNITYSDK_OFFSET(0x1A7B7DE0)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A7B8330)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_STARTEFFECT_OFFSET UNITYSDK_OFFSET(0x1A7B8E20)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7B8EC0)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__INIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x1A7B8FE0)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__INIT_B__7_1_OFFSET UNITYSDK_OFFSET(0x1A7B9240)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__INIT_B__7_2_OFFSET UNITYSDK_OFFSET(0x1A7B9570)
#define MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A7B96C0)

namespace MoleMole
{
	inline static constexpr unsigned int EntitySplitTestSubSystem_TypeDefinitionIndex = 59554;

	class EntitySplitTestSubSystem
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _lives; // 0x10
		::AKKABHFPDHG* _monsterCache; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _appendDatas; // 0x20
		::System::Threading::CancellationTokenSource* _cancellationTokenSource; // 0x28
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* _effectCache; // 0x30
		::System::Single _curKillInterval; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid StartEffect(::UnityEngine::Vector3 position)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM_STARTEFFECT_OFFSET))(this, position);
		}

		::System::Void _Init_b__7_0(::MoleMole::EntityHandle e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__INIT_B__7_0_OFFSET))(this, e);
		}

		::System::Void _Init_b__7_1(::MoleMole::EntityHandle e)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__INIT_B__7_1_OFFSET))(this, e);
		}

		::System::Void _Init_b__7_2(::Foundation::AssetPath path, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM__INIT_B__7_2_OFFSET))(this, path, go);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ENTITYSPLITTESTSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
