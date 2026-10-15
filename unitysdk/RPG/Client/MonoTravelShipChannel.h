#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::Client { class EntityGameObjectConnection; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_CDEOGOBOFLO_OFFSET UNITYSDK_OFFSET(0xD870790)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD870F70)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_DHOJAJPGCMK_OFFSET UNITYSDK_OFFSET(0xD870150)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_DILOEAADMAO_1_OFFSET UNITYSDK_OFFSET(0xD870DA0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_DILOEAADMAO_OFFSET UNITYSDK_OFFSET(0xD870C50)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0xD86FF40)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_ORIGIN_OFFSET UNITYSDK_OFFSET(0xD86FB60)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P0_OFFSET UNITYSDK_OFFSET(0xD86FDF0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P1_OFFSET UNITYSDK_OFFSET(0xD86FE90)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_IPANNLIMDKE_OFFSET UNITYSDK_OFFSET(0xD8706D0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_LCBAGPNONDB_OFFSET UNITYSDK_OFFSET(0xD870CD0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8700F0)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xD870270)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xD870A10)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERSTAY_OFFSET UNITYSDK_OFFSET(0xD870890)
#define RPG_CLIENT_MONOTRAVELSHIPCHANNEL_PCDDCAGMMDK_OFFSET UNITYSDK_OFFSET(0xD870620)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTravelShipChannel_TypeDefinitionIndex = 68783;

	class MonoTravelShipChannel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::CapsuleCollider* Collider; // 0x18
		::System::Single Duration; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* DynamicDuration; // 0x28
		::System::Single BackDuration; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* BackDynamicDuration; // 0x38
		::System::String* EnterChannelEvent; // 0x40
		::System::String* BackEnterChannelEvent; // 0x48
		::System::String* SelfEnterChannelEvent; // 0x50
		::System::String* SelfBackEnterChannelEvent; // 0x58
		::System::Single BFAAPMPOICA; // 0x60
		::System::Single AEDAHFNPEPL; // 0x64
		::UnityEngine::Vector3 BGNACBGBMHG; // 0x68
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* JBAHHLGEPOF; // 0x78
		::RPG::Client::EntityGameObjectConnection* AIGBJENIMAP; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Origin()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_ORIGIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_P0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P0_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_P1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_P1_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Direction()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerStay(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGERSTAY_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::ValueTuple PCDDCAGMMDK(::UnityEngine::Vector3 a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_PCDDCAGMMDK_OFFSET))(this, a1);
		}

		::System::Boolean LCBAGPNONDB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_LCBAGPNONDB_OFFSET))(this, a1);
		}

		::System::Void DHOJAJPGCMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_DHOJAJPGCMK_OFFSET))(this);
		}

		::System::Single DILOEAADMAO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_DILOEAADMAO_OFFSET))(this, a1);
		}

		::System::Single DILOEAADMAO_1(::System::Boolean a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_DILOEAADMAO_1_OFFSET))(this, a1);
		}

		::System::Boolean IPANNLIMDKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_IPANNLIMDKE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* CDEOGOBOFLO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAVELSHIPCHANNEL_CDEOGOBOFLO_OFFSET))(this);
		}

	};
}
