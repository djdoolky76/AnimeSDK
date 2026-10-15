#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class COKICPIHPAC;
namespace RPG::Client { class FABRIK; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHARACTERTAILIK_CLEAR_OFFSET UNITYSDK_OFFSET(0xCA1BEC0)
#define RPG_CLIENT_CHARACTERTAILIK_COMPARETO_OFFSET UNITYSDK_OFFSET(0xCA1C960)
#define RPG_CLIENT_CHARACTERTAILIK_CTOR_OFFSET UNITYSDK_OFFSET(0xCA1CB20)
#define RPG_CLIENT_CHARACTERTAILIK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xCA1CA90)
#define RPG_CLIENT_CHARACTERTAILIK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCA1BFC0)
#define RPG_CLIENT_CHARACTERTAILIK_NGKHBODDJAA_OFFSET UNITYSDK_OFFSET(0xCA1CAA0)
#define RPG_CLIENT_CHARACTERTAILIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCA1BF60)
#define RPG_CLIENT_CHARACTERTAILIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCA1BF00)
#define RPG_CLIENT_CHARACTERTAILIK_PROCESS_OFFSET UNITYSDK_OFFSET(0xCA1C010)

namespace RPG::Client
{
	inline static constexpr unsigned int CharacterTailIK_TypeDefinitionIndex = 68386;

	class CharacterTailIK : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::FABRIK* mainIK; // 0x18
		::UnityEngine::Transform* detectPoint; // 0x20
		::UnityEngine::LayerMask detectLayers; // 0x28
		::System::Single detectUpOffset; // 0x2C
		::System::Single detectProxyOffset; // 0x30
		::System::Single movePlaneRatio; // 0x34
		::System::Single maxMovePlaneDistance; // 0x38
		::UnityEngine::Vector3 AJEGEMCEGEB; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_CLEAR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_LATEUPDATE_OFFSET))(this);
		}

		::System::Int32 CompareTo(::COKICPIHPAC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::COKICPIHPAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void Process(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_PROCESS_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* NGKHBODDJAA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERTAILIK_NGKHBODDJAA_OFFSET))(this);
		}

	};
}
