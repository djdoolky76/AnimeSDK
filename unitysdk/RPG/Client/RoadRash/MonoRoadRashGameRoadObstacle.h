#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashObstaclePhysicsImpactConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashObstacleTriggerEffectConfig.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GHMGGIHEHJE;
class KPDKCEAFBHI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_BIND_OFFSET UNITYSDK_OFFSET(0xDEE0660)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_CFMBFBNEDDP_OFFSET UNITYSDK_OFFSET(0xDEE13E0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0xDEE06B0)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_CTOR_OFFSET UNITYSDK_OFFSET(0xDEE1440)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_DDILDINKMLI_OFFSET UNITYSDK_OFFSET(0xDEE1390)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEE0E10)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_FHCCKIOMIBL_OFFSET UNITYSDK_OFFSET(0xDEE0900)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xDEE0640)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_GET_TRIGGERED_OFFSET UNITYSDK_OFFSET(0xDEE0630)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_GKGAEBJMHKG_OFFSET UNITYSDK_OFFSET(0xDEE0F40)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_NDNCGLEAGMA_OFFSET UNITYSDK_OFFSET(0xDEE0840)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_ONATTACKED_OFFSET UNITYSDK_OFFSET(0xDEE0B70)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_ONTRIGGERED_OFFSET UNITYSDK_OFFSET(0xDEE0740)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xDEE0E80)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_PAMFIGAPHJB_OFFSET UNITYSDK_OFFSET(0xDEE0990)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0xDEE0650)
#define RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDEE0CF0)

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int MonoRoadRashGameRoadObstacle_TypeDefinitionIndex = 75868;

	class MonoRoadRashGameRoadObstacle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Collider* Collider; // 0x18
		::System::Boolean TriggerOnce; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single RecoverCooldown; // 0x24
		::System::Boolean CanTriggerWhileFalling; // 0x28
		::System::Boolean IsBadSituation; // 0x29
		::System::Byte _padding1[0x6];
		::RPG::Client::RoadRash::RoadRashObstacleTriggerEffectConfig TriggerEffectConfig; // 0x30
		::RPG::Client::RoadRash::RoadRashObstaclePhysicsImpactConfig PhysicsImpactConfig; // 0x58
		::KPDKCEAFBHI* _Services_k__BackingField; // 0x78
		::System::Boolean MFGHMLJJNIG; // 0x80
		::System::Boolean GIIFJCPAHGA; // 0x81
		::System::Byte _padding2[0x2];
		::System::Single ODICHPBBIBO; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_CTOR_OFFSET))(this);
		}

		::System::Boolean get_Triggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_GET_TRIGGERED_OFFSET))(this);
		}

		::KPDKCEAFBHI* get_Services()
		{
			return ((::KPDKCEAFBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_GET_SERVICES_OFFSET))(this);
		}

		::System::Void set_Services(::KPDKCEAFBHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_SET_SERVICES_OFFSET))(this, a1);
		}

		::System::Void Bind(::KPDKCEAFBHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_BIND_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Boolean OnTriggered(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_ONTRIGGERED_OFFSET))(this, a1);
		}

		static ::System::Boolean NDNCGLEAGMA(::GHMGGIHEHJE* a1)
		{
			return ((::System::Boolean(*)(::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_NDNCGLEAGMA_OFFSET))(a1);
		}

		::System::Void OnAttacked(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_ONATTACKED_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_UPDATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Boolean FHCCKIOMIBL(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_FHCCKIOMIBL_OFFSET))(this, a1);
		}

		::System::Void GKGAEBJMHKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_GKGAEBJMHKG_OFFSET))(this);
		}

		::System::Void PAMFIGAPHJB(::GHMGGIHEHJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_PAMFIGAPHJB_OFFSET))(this, a1);
		}

		::System::Void DDILDINKMLI(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_DDILDINKMLI_OFFSET))(this, a1);
		}

		::System::Void CFMBFBNEDDP(::GHMGGIHEHJE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::GHMGGIHEHJE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASH_MONOROADRASHGAMEROADOBSTACLE_CFMBFBNEDDP_OFFSET))(this, a1, a2);
		}

	};
}
