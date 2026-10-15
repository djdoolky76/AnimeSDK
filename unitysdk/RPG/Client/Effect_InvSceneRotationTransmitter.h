#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD35260)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xCD35250)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD35150)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD34D40)
#define RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD34E40)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_InvSceneRotationTransmitter_TypeDefinitionIndex = 70491;

	class Effect_InvSceneRotationTransmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean reverseSceneRotation; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Renderer* JAMDAALMOAL; // 0x20
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x28
		static ::System::Int32* StaticGet_AIBNFJNLLPD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_InvSceneRotationTransmitter")->GetStaticField(0xA5E0);
		}

		static ::System::Int32* StaticGet_BNKGBAGOBEC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "Effect_InvSceneRotationTransmitter")->GetStaticField(0xA5E4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_INVSCENEROTATIONTRANSMITTER_ONDISABLE_OFFSET))(this);
		}

	};
}
