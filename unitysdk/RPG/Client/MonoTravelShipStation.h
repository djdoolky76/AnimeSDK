#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ANKKFGAFOBE_OFFSET UNITYSDK_OFFSET(0xD86A780)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_BNAMHJBFCBI_OFFSET UNITYSDK_OFFSET(0xD869DC0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_CDEOGOBOFLO_OFFSET UNITYSDK_OFFSET(0xD86A830)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_CTOR_OFFSET UNITYSDK_OFFSET(0xD86A9B0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_EKMHEABCPMD_OFFSET UNITYSDK_OFFSET(0xD869E40)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_FHPIJGDNPBN_OFFSET UNITYSDK_OFFSET(0xD869790)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_GANPMIMAPKJ_OFFSET UNITYSDK_OFFSET(0xD869AB0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_GET_COLLIDERCENTER_OFFSET UNITYSDK_OFFSET(0xD86A4F0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ISLOOKAT_OFFSET UNITYSDK_OFFSET(0xD86A030)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_KMMKHBFCDDJ_OFFSET UNITYSDK_OFFSET(0xD86A8B0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD8695A0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8693F0)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD869960)
#define RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xD869C70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipStation_TypeDefinitionIndex = 68786;

	class MonoTravelShipStation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* Origin; // 0x18
		::UnityEngine::SphereCollider* Collider; // 0x20
		::System::Single EventRadiusRatioForTrigger; // 0x28
		::System::Byte _padding0[0x4];
		::System::String* EventName; // 0x30
		::System::Boolean PJKNAOEINHH; // 0x38
		static ::System::Int32* StaticGet_EGPEAPDBPPJ()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "MonoTravelShipStation")->GetStaticField(0x150B0);
		}

		// static const ::System::Object DockQuestID; // 0x0
		// static const ::System::Object LookForwardDot; // 0x0
		// static const ::System::Object EventRadiusRatio; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void BNAMHJBFCBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_BNAMHJBFCBI_OFFSET))(this, a1);
		}

		::System::Void GANPMIMAPKJ(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_GANPMIMAPKJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsLookAt(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ISLOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_ColliderCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_GET_COLLIDERCENTER_OFFSET))(this);
		}

		::System::Void ANKKFGAFOBE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_ANKKFGAFOBE_OFFSET))(this, a1);
		}

		::System::Void FHPIJGDNPBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_FHPIJGDNPBN_OFFSET))(this, a1);
		}

		::System::Void KMMKHBFCDDJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_KMMKHBFCDDJ_OFFSET))(this, a1);
		}

		::System::Void EKMHEABCPMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_EKMHEABCPMD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CDEOGOBOFLO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPSTATION_CDEOGOBOFLO_OFFSET))(this);
		}

	};
}
