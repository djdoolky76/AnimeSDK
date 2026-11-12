#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirlineSubwayWay_DoorSide.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AANLCPCOMDL_OFFSET UNITYSDK_OFFSET(0xEBF9620)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xEBF8790)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBF98E0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_CTOR_OFFSET UNITYSDK_OFFSET(0xEBF9880)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_FCLNNMANAMH_OFFSET UNITYSDK_OFFSET(0xEBF9760)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xEBF8940)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0xEBF8C10)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET UNITYSDK_OFFSET(0xEBF90F0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET UNITYSDK_OFFSET(0xEBF9320)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xEBF93F0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET UNITYSDK_OFFSET(0xEBF8E10)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xEBF94C0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET UNITYSDK_OFFSET(0xEBF9570)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_0_OFFSET UNITYSDK_OFFSET(0xEBF9940)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_1_OFFSET UNITYSDK_OFFSET(0xEBF9950)

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubway_TypeDefinitionIndex = 85073;

	class AirshipSubway : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::Il2CppArray<::System::Object*>* initEffectConfigs; // 0x38
		::Il2CppArray<::System::Object*>* startupEffectConfigs; // 0x40
		::Il2CppArray<::System::Object*>* arrivedEffectConfigs; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Animator*>* OKDDLBMAMDJ; // 0x50
		::UnityEngine::GameObject* GKNBCPMJHMN; // 0x58
		::RPG::Client::OpenWorld::StreamingItemData* AMHMBBBIEIM; // 0x60
		::RPG::Client::Stage* PKLNPNKEJOO; // 0x68
		::System::Boolean CLDFKDDMFOC; // 0x70
		::System::Byte _padding0[0x3];
		::RPG::Client::Subway::AirlineSubwayWay_DoorSide LGLGGNNGDBM; // 0x74
		static ::System::Int32* StaticGet_LCOJCBNILNL()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Subway", "AirshipSubway")->GetStaticField(0x3170);
		}

		static ::System::Int32* StaticGet_KLDIJBMOGPC()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Subway", "AirshipSubway")->GetStaticField(0x3174);
		}

		static ::System::Int32* StaticGet_NPDNEEPHEKN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Subway", "AirshipSubway")->GetStaticField(0x3178);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETUP_OFFSET))(this);
		}

		::System::Void ReleaseArtModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_RELEASEARTMODEL_OFFSET))(this);
		}

		::System::Void SetDoorState(::System::Boolean a1, ::RPG::Client::Subway::AirlineSubwayWay_DoorSide a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Subway::AirlineSubwayWay_DoorSide))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETDOORSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetMoveState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETMOVESTATE_OFFSET))(this, a1);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_SETTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void TriggerArrivedEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERARRIVEDEFFECTS_OFFSET))(this);
		}

		::System::Void TriggerStartupEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_TRIGGERSTARTUPEFFECT_OFFSET))(this);
		}

		::System::Void AANLCPCOMDL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_AANLCPCOMDL_OFFSET))(this, a1);
		}

		::System::Void FCLNNMANAMH(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY_FCLNNMANAMH_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__17_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_0_OFFSET))(this, a1, a2);
		}

		::System::Void _Setup_b__17_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAY__SETUP_B__17_1_OFFSET))(this, a1, a2, a3);
		}

	};
}
