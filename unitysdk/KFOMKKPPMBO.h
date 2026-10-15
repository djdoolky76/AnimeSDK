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

#define KFOMKKPPMBO_AAKDGCAPKKB_OFFSET UNITYSDK_OFFSET(0xB3C13E0)
#define KFOMKKPPMBO_AJGKJLIPOON_OFFSET UNITYSDK_OFFSET(0xB3BFC60)
#define KFOMKKPPMBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB3BF560)
#define KFOMKKPPMBO_DECOIHNIMBI_OFFSET UNITYSDK_OFFSET(0xB3C0740)
#define KFOMKKPPMBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3C1A10)
#define KFOMKKPPMBO_DLNHJMDJMNH_OFFSET UNITYSDK_OFFSET(0xB3C1C40)
#define KFOMKKPPMBO_EPHOJOOPHNL_OFFSET UNITYSDK_OFFSET(0xB3C00C0)
#define KFOMKKPPMBO_FJOPMPOMAJH_OFFSET UNITYSDK_OFFSET(0xB3C0CA0)
#define KFOMKKPPMBO_HKKDMPOINPL_OFFSET UNITYSDK_OFFSET(0xB3C21D0)
#define KFOMKKPPMBO_IMMJPJEACGB_OFFSET UNITYSDK_OFFSET(0xB3C0870)
#define KFOMKKPPMBO_JEJMGJFOLOO_OFFSET UNITYSDK_OFFSET(0xB3C0320)
#define KFOMKKPPMBO_KJJKPIDMBPB_OFFSET UNITYSDK_OFFSET(0xB3C1A70)
#define KFOMKKPPMBO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB3C0830)
#define KFOMKKPPMBO_MNIDEOAGKOJ_OFFSET UNITYSDK_OFFSET(0xB3C21E0)
#define KFOMKKPPMBO_NDPMAPIOPMA_OFFSET UNITYSDK_OFFSET(0xB3C1750)
#define KFOMKKPPMBO_NKKDBELBCDO_OFFSET UNITYSDK_OFFSET(0xB3C1DD0)
#define KFOMKKPPMBO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB3C0E30)

inline static constexpr unsigned int KFOMKKPPMBO_TypeDefinitionIndex = 60519;

	class KFOMKKPPMBO : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* FGCHCPFPNBP; // 0x10
		::RPG::Client::ConeSphereTrigger* NIMOCLGFFLE; // 0x18
		::RPG::Client::PartialFlipDeviceComponent* HDDOOONCFPA; // 0x20
		::RPG::Client::EraFlipperCommonConfig* LMAPPLJEBEH; // 0x28
		::RPG::Client::ConeSphereTrigger* LANKKDMNGHG; // 0x30
		::UnityEngine::Transform* MEMMLNBHMHA; // 0x38
		::RPG::Client::RangeLimitCollider* DIJHGLNHBEN; // 0x40
		::System::Action_1<::RPG::Client::PartialFlipDeviceComponent*>* MECKBKLEHAN; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* NICPGBKGLPL; // 0x50
		::UnityEngine::GameObject* BPEEKJFKHNI; // 0x58
		::BCENMJEPKMP KLLFHAKLADI; // 0x60
		::System::Boolean EHIHJNJJANI; // 0x74
		::System::Byte _padding0[0x3];
		::System::Single KJOHCNFLHFH; // 0x78
		::BCENMJEPKMP MBKKMBPHCNI; // 0x7C
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
