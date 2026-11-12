#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class DisableUIPostProcessBehaviour_FNKPGGMPEGD; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CHANGEUIRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xD690880)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xD691330)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD690C80)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD690820)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_PKBPPCPPIKD_OFFSET UNITYSDK_OFFSET(0xD691050)
#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_REVERTUIRENDERQUEUE_OFFSET UNITYSDK_OFFSET(0xD690CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int DisableUIPostProcessBehaviour_TypeDefinitionIndex = 74840;

	class DisableUIPostProcessBehaviour : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UI::Graphic*, ::System::Object*>* CKCDLOOEGPF; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* KIMCMPCIGDK; // 0x20
		::System::Boolean BAAKGHHFBNL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_ONDESTROY_OFFSET))(this);
		}

		::System::Void ChangeUIRenderQueue(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_CHANGEUIRENDERQUEUE_OFFSET))(this, a1);
		}

		::System::Void RevertUIRenderQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_REVERTUIRENDERQUEUE_OFFSET))(this);
		}

		::RPG::Client::DisableUIPostProcessBehaviour_FNKPGGMPEGD* PKBPPCPPIKD(::UnityEngine::Material* a1)
		{
			return ((::RPG::Client::DisableUIPostProcessBehaviour_FNKPGGMPEGD*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_PKBPPCPPIKD_OFFSET))(this, a1);
		}

	};
}
