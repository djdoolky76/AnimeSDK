#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCENMJEPKMP.h"
#include "unitysdk/RPG/Client/ConeSphereTrigger_TriggerPattern.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class ConeSphereTrigger; }
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class FlipDevicePoint; }
namespace RPG::Client { class PartialFlipDeviceComponent; }
namespace RPG::Client { class RangeLimitCollider; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KFOMKKPPMBO_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0xB3C82E0)
#define KFOMKKPPMBO_AJGKJLIPOON_OFFSET UNITYSDK_OFFSET(0xB3C6DF0)
#define KFOMKKPPMBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3C67A0)
#define KFOMKKPPMBO_DECOIHNIMBI_OFFSET UNITYSDK_OFFSET(0xB3C7830)
#define KFOMKKPPMBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3C8920)
#define KFOMKKPPMBO_DLNHJMDJMNH_OFFSET UNITYSDK_OFFSET(0xB3C8B50)
#define KFOMKKPPMBO_EPHOJOOPHNL_OFFSET UNITYSDK_OFFSET(0xB3C71B0)
#define KFOMKKPPMBO_FJOPMPOMAJH_OFFSET UNITYSDK_OFFSET(0xB3C7C20)
#define KFOMKKPPMBO_HKKDMPOINPL_OFFSET UNITYSDK_OFFSET(0xB3C90F0)
#define KFOMKKPPMBO_IMMJPJEACGB_OFFSET UNITYSDK_OFFSET(0xB3C7960)
#define KFOMKKPPMBO_JEJMGJFOLOO_OFFSET UNITYSDK_OFFSET(0xB3C7410)
#define KFOMKKPPMBO_KJJKPIDMBPB_OFFSET UNITYSDK_OFFSET(0xB3C8980)
#define KFOMKKPPMBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3C7920)
#define KFOMKKPPMBO_MNIDEOAGKOJ_OFFSET UNITYSDK_OFFSET(0xB3C9100)
#define KFOMKKPPMBO_NDPMAPIOPMA_OFFSET UNITYSDK_OFFSET(0xB3C8650)
#define KFOMKKPPMBO_NKKDBELBCDO_OFFSET UNITYSDK_OFFSET(0xB3C8CE0)
#define KFOMKKPPMBO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB3C7D20)

inline static constexpr unsigned int KFOMKKPPMBO_TypeDefinitionIndex = 60519;

	class KFOMKKPPMBO : public ::System::Object
	{
	public:
		::RPG::Client::EraFlipperCommonConfig* LMAPPLJEBEH; // 0x10
		::RPG::Client::RangeLimitCollider* DIJHGLNHBEN; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* NICPGBKGLPL; // 0x20
		::UnityEngine::Transform* MEMMLNBHMHA; // 0x28
		::System::Action* MECKBKLEHAN; // 0x30
		::RPG::Client::ConeSphereTrigger* NIMOCLGFFLE; // 0x38
		::RPG::Client::PartialFlipDeviceComponent* HDDOOONCFPA; // 0x40
		::RPG::Client::ConeSphereTrigger* LANKKDMNGHG; // 0x48
		::UnityEngine::GameObject* FGCHCPFPNBP; // 0x50
		::UnityEngine::GameObject* BPEEKJFKHNI; // 0x58
		::System::Single KJOHCNFLHFH; // 0x60
		::BCENMJEPKMP MBKKMBPHCNI; // 0x64
		::BCENMJEPKMP KLLFHAKLADI; // 0x78
		::System::Boolean EHIHJNJJANI; // 0x8C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 DFCODJGJOEH; // 0x90
		::System::Void _ctor(::RPG::Client::EraFlipperCommonConfig* a1, ::RPG::Client::PartialFlipDeviceComponent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*, ::RPG::Client::PartialFlipDeviceComponent*))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean JEJMGJFOLOO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_JEJMGJFOLOO_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void IMMJPJEACGB(::RPG::Client::FlipDevicePoint* a1, ::RPG::Client::FlipDevicePoint* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*, ::System::Action*))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_IMMJPJEACGB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FJOPMPOMAJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_FJOPMPOMAJH_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::BCENMJEPKMP AJGKJLIPOON()
		{
			return ((::BCENMJEPKMP(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_AJGKJLIPOON_OFFSET))(this);
		}

		::System::Void AAKDGCAPKKB(::UnityEngine::Collider* a1, ::RPG::Client::ConeSphereTrigger_TriggerPattern a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::RPG::Client::ConeSphereTrigger_TriggerPattern))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_AAKDGCAPKKB_OFFSET))(this, a1, a2);
		}

		::System::Void NDPMAPIOPMA(::UnityEngine::Collider* a1, ::RPG::Client::ConeSphereTrigger_TriggerPattern a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::RPG::Client::ConeSphereTrigger_TriggerPattern))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_NDPMAPIOPMA_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_DISPOSE_OFFSET))(this);
		}

		::System::Void KJJKPIDMBPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_KJJKPIDMBPB_OFFSET))(this);
		}

		::System::Void DLNHJMDJMNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_DLNHJMDJMNH_OFFSET))(this);
		}

		::System::Void NKKDBELBCDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_NKKDBELBCDO_OFFSET))(this);
		}

		::UnityEngine::GameObject* HKKDMPOINPL()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_HKKDMPOINPL_OFFSET))(this);
		}

		::System::Void EPHOJOOPHNL(::BCENMJEPKMP a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCENMJEPKMP))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_EPHOJOOPHNL_OFFSET))(this, a1);
		}

		::System::Boolean MNIDEOAGKOJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_MNIDEOAGKOJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 DECOIHNIMBI()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_DECOIHNIMBI_OFFSET))(this);
		}

	};
