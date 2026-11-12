#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/EventTriggerType.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_ADDTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA2B9D0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA2D290)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET UNITYSDK_OFFSET(0xDA2BE20)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0xDA2BD70)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDSWITHNAMES_OFFSET UNITYSDK_OFFSET(0xDA2CDB0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_1_OFFSET UNITYSDK_OFFSET(0xDA2C320)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_OFFSET UNITYSDK_OFFSET(0xDA2BED0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTRENDERCHILDWITHNAME_OFFSET UNITYSDK_OFFSET(0xDA2C710)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_REMOVEALLTRIGGER_OFFSET UNITYSDK_OFFSET(0xDA2BC20)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET UNITYSDK_OFFSET(0xDA2B7C0)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0xDA2B680)
#define RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0xDA2B720)

namespace RPG::Client
{
	inline static constexpr unsigned int GameObjectExtensions_TypeDefinitionIndex = 74857;

	class GameObjectExtensions : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Transform*>** StaticGet__transformCache()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Transform*>**)UnitySDK::FromName("RPG.Client", "GameObjectExtensions")->GetStaticField(0x6A390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_CCTOR_OFFSET))();
		}

		static ::System::Void SafeSetActive(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetLightWeightActive(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetActiveByScale(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AddTrigger(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::EventTriggerType a2, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::EventTriggerType, ::UnityEngine::Events::UnityAction_1<::UnityEngine::EventSystems::BaseEventData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_ADDTRIGGER_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveAllTrigger(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_REMOVEALLTRIGGER_OFFSET))(a1);
		}

		static ::System::Void DestroyChildren(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDREN_OFFSET))(a1);
		}

		static ::System::Void DestroyChildrenImmediate(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* FindFirstChildWithName(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* FindFirstChildWithName_1(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDWITHNAME_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Renderer* FindFirstRenderChildWithName(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::UnityEngine::Renderer*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTRENDERCHILDWITHNAME_OFFSET))(a1, a2);
		}

		static ::System::Void FindFirstChildsWithNames(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEOBJECTEXTENSIONS_FINDFIRSTCHILDSWITHNAMES_OFFSET))(a1, a2, a3);
		}

	};
}
