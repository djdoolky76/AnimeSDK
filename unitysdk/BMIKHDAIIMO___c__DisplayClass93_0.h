#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMIKHDAIIMO;
class HPKACEPPPCA;
namespace RPG::Client { class MonoRenderPerfOptIndicator; }
namespace RPG::Client { class PolymerEffectControllBase; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define BMIKHDAIIMO___C__DISPLAYCLASS93_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC73B310)
#define BMIKHDAIIMO___C__DISPLAYCLASS93_0__INSTANCERENDERSTUB_B__0_OFFSET UNITYSDK_OFFSET(0xC73B320)
#define BMIKHDAIIMO___C__DISPLAYCLASS93_0__INSTANCERENDERSTUB_B__1_OFFSET UNITYSDK_OFFSET(0xC73B4E0)
#define BMIKHDAIIMO___C__DISPLAYCLASS93_0__INSTANCERENDERSTUB_B__2_OFFSET UNITYSDK_OFFSET(0xC73B7F0)

inline static constexpr unsigned int BMIKHDAIIMO___c__DisplayClass93_0_TypeDefinitionIndex = 76007;

	class BMIKHDAIIMO___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animator* animator; // 0x10
		::BMIKHDAIIMO* __4__this; // 0x18
		::UnityEngine::GameObject* instObj; // 0x20
		::RPG::Client::MonoRenderPerfOptIndicator* monoRenderPerfOptIndicator; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PolymerEffectControllBase*>* effectController; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS93_0_CTOR_OFFSET))(this);
		}

		::System::Void _InstanceRenderStub_b__0(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS93_0__INSTANCERENDERSTUB_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _InstanceRenderStub_b__1(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS93_0__INSTANCERENDERSTUB_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _InstanceRenderStub_b__2(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + BMIKHDAIIMO___C__DISPLAYCLASS93_0__INSTANCERENDERSTUB_B__2_OFFSET))(this, a1);
		}

	};
