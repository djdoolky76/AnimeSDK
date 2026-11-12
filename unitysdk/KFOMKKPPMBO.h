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
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KFOMKKPPMBO_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0xBC58010)
#define KFOMKKPPMBO_AJGKJLIPOON_OFFSET UNITYSDK_OFFSET(0xBC56AE0)
#define KFOMKKPPMBO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC56480)
#define KFOMKKPPMBO_DECOIHNIMBI_OFFSET UNITYSDK_OFFSET(0xBC57530)
#define KFOMKKPPMBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC58650)
#define KFOMKKPPMBO_DLNHJMDJMNH_OFFSET UNITYSDK_OFFSET(0xBC58880)
#define KFOMKKPPMBO_EPHOJOOPHNL_OFFSET UNITYSDK_OFFSET(0xBC56EB0)
#define KFOMKKPPMBO_FJOPMPOMAJH_OFFSET UNITYSDK_OFFSET(0xBC57930)
#define KFOMKKPPMBO_HKKDMPOINPL_OFFSET UNITYSDK_OFFSET(0xBC58E10)
#define KFOMKKPPMBO_IMMJPJEACGB_OFFSET UNITYSDK_OFFSET(0xBC57670)
#define KFOMKKPPMBO_JEJMGJFOLOO_OFFSET UNITYSDK_OFFSET(0xBC57110)
#define KFOMKKPPMBO_KJJKPIDMBPB_OFFSET UNITYSDK_OFFSET(0xBC586B0)
#define KFOMKKPPMBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC57630)
#define KFOMKKPPMBO_MNIDEOAGKOJ_OFFSET UNITYSDK_OFFSET(0xBC58E20)
#define KFOMKKPPMBO_NDPMAPIOPMA_OFFSET UNITYSDK_OFFSET(0xBC58380)
#define KFOMKKPPMBO_NKKDBELBCDO_OFFSET UNITYSDK_OFFSET(0xBC58A10)
#define KFOMKKPPMBO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBC57A40)

inline static constexpr unsigned int KFOMKKPPMBO_TypeDefinitionIndex = 61808;

	class KFOMKKPPMBO : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MEMMLNBHMHA; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* NICPGBKGLPL; // 0x18
		::RPG::Client::EraFlipperCommonConfig* LMAPPLJEBEH; // 0x20
		::RPG::Client::ConeSphereTrigger* NIMOCLGFFLE; // 0x28
		::RPG::Client::RangeLimitCollider* DIJHGLNHBEN; // 0x30
		::RPG::Client::PartialFlipDeviceComponent* HDDOOONCFPA; // 0x38
		::UnityEngine::GameObject* FGCHCPFPNBP; // 0x40
		::System::Action_1<::RPG::Client::PartialFlipDeviceComponent*>* MECKBKLEHAN; // 0x48
		::UnityEngine::GameObject* BPEEKJFKHNI; // 0x50
		::RPG::Client::ConeSphereTrigger* LANKKDMNGHG; // 0x58
		::BCENMJEPKMP KLLFHAKLADI; // 0x60
		::UnityEngine::Vector3 DFCODJGJOEH; // 0x74
		::BCENMJEPKMP MBKKMBPHCNI; // 0x80
		::System::Single KJOHCNFLHFH; // 0x94
		::System::Boolean EHIHJNJJANI; // 0x98
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

		::System::Void IMMJPJEACGB(::RPG::Client::FlipDevicePoint* a1, ::RPG::Client::FlipDevicePoint* a2, ::System::Action_1<::RPG::Client::PartialFlipDeviceComponent*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FlipDevicePoint*, ::RPG::Client::FlipDevicePoint*, ::System::Action_1<::RPG::Client::PartialFlipDeviceComponent*>*))((::PBYTE)hIl2Cpp + KFOMKKPPMBO_IMMJPJEACGB_OFFSET))(this, a1, a2, a3);
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
