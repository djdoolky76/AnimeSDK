#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class AirshipBirdAudio; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_AIRSHIPBIRD_AANLCPCOMDL_OFFSET UNITYSDK_OFFSET(0x1B2F0A50)
#define RPG_CLIENT_AIRSHIPBIRD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B2F0930)
#define RPG_CLIENT_AIRSHIPBIRD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F1C70)
#define RPG_CLIENT_AIRSHIPBIRD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2F1BF0)
#define RPG_CLIENT_AIRSHIPBIRD_DGJFMGBEDAC_OFFSET UNITYSDK_OFFSET(0x1B2F0FC0)
#define RPG_CLIENT_AIRSHIPBIRD_DISSOLVE_OFFSET UNITYSDK_OFFSET(0x1B2EFC80)
#define RPG_CLIENT_AIRSHIPBIRD_FCLNNMANAMH_OFFSET UNITYSDK_OFFSET(0x1B2F1680)
#define RPG_CLIENT_AIRSHIPBIRD_HGGDPIMBDEE_OFFSET UNITYSDK_OFFSET(0x1B2F1790)
#define RPG_CLIENT_AIRSHIPBIRD_LOADCARGO_OFFSET UNITYSDK_OFFSET(0x1B2EFD20)
#define RPG_CLIENT_AIRSHIPBIRD_LOADMODEL_OFFSET UNITYSDK_OFFSET(0x1B2F0360)
#define RPG_CLIENT_AIRSHIPBIRD_OKMHLHEMECP_OFFSET UNITYSDK_OFFSET(0x1B2F1BA0)
#define RPG_CLIENT_AIRSHIPBIRD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B2F0A00)
#define RPG_CLIENT_AIRSHIPBIRD_PLAYSTOPANIM_OFFSET UNITYSDK_OFFSET(0x1B2F02A0)
#define RPG_CLIENT_AIRSHIPBIRD_RELEASEARTMODEL_OFFSET UNITYSDK_OFFSET(0x1B2F0630)
#define RPG_CLIENT_AIRSHIPBIRD_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1B2F08A0)
#define RPG_CLIENT_AIRSHIPBIRD_TICK_OFFSET UNITYSDK_OFFSET(0x1B2EFC20)
#define RPG_CLIENT_AIRSHIPBIRD_UNLOADCARGO_OFFSET UNITYSDK_OFFSET(0x1B2EFFA0)
#define RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_0_OFFSET UNITYSDK_OFFSET(0x1B2F1CB0)
#define RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_1_OFFSET UNITYSDK_OFFSET(0x1B2F1CC0)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_0_OFFSET UNITYSDK_OFFSET(0x1B2F1D10)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_1_OFFSET UNITYSDK_OFFSET(0x1B2F1D20)
#define RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_2_OFFSET UNITYSDK_OFFSET(0x1B2F1D30)

namespace RPG::Client
{
	inline static constexpr unsigned int AirshipBird_TypeDefinitionIndex = 61079;

	class AirshipBird : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* prefabPath; // 0x18
		::UnityEngine::Vector3 prefabPositionOffset; // 0x20
		::UnityEngine::Vector3 prefabRotationOffset; // 0x2C
		::System::String* cargoPrefabPath; // 0x38
		::UnityEngine::Vector3 cargoPositionOffset; // 0x40
		::UnityEngine::Vector3 cargoRotationOffset; // 0x4C
		::System::String* cargoEffectPath; // 0x58
		::System::Single flyStopDistance; // 0x60
		::System::Byte _padding0[0x4];
		::System::String* flyStopAnimName; // 0x68
		::System::Single dissolveTime; // 0x70
		::System::Single dissolveWaitTime; // 0x74
		::System::Single maxMoveSpeed; // 0x78
		::System::Single maxAcceleration; // 0x7C
		::System::Single maxDeceleration; // 0x80
		::System::Single maxRotationSpeed; // 0x84
		::UnityEngine::Vector3 colliderCenter; // 0x88
		::System::Byte _padding1[0x4];
		::RPG::Client::AirshipBirdAudio* HJJMJLCIFNC; // 0x98
		::RPG::Client::BaseShaderPropertyTransition* KNBIKJLEHMH; // 0xA0
		::UnityEngine::GameObject* PGKENBMKDKA; // 0xA8
		::UnityEngine::Animator* APPGGMLEPLN; // 0xB0
		::System::Single ALLMMMCIHNO; // 0xB8
		::System::Byte _padding2[0x4];
		::UnityEngine::GameObject* GGGEGGMNIGL; // 0xC0
		::System::Single AGCLGPJHEJB; // 0xC8
		::System::Single OBJJIELNFLP; // 0xCC
		::System::Boolean IOGNJIGJDOB; // 0xD0
		::System::Byte _padding3[0x7];
		::RPG::Client::OpenWorld::StreamingItemData* ILPCBBGKDHM; // 0xD8
		::RPG::Client::OpenWorld::StreamingItemData* JNEGBKLBOAH; // 0xE0
		::RPG::Client::Stage* PKLNPNKEJOO; // 0xE8
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_ABLCIDHJJKK()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("RPG.Client", "AirshipBird")->GetStaticField(0x4F8A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_CCTOR_OFFSET))();
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dissolve(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_DISSOLVE_OFFSET))(this, a1);
		}

		::System::Void LoadCargo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_LOADCARGO_OFFSET))(this);
		}

		::System::Void UnloadCargo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_UNLOADCARGO_OFFSET))(this);
		}

		::System::Void PlayStopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_PLAYSTOPANIM_OFFSET))(this);
		}

		::System::Void LoadModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_LOADMODEL_OFFSET))(this);
		}

		::System::Void ReleaseArtModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_RELEASEARTMODEL_OFFSET))(this);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_SETTIMESCALE_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_ONDESTROY_OFFSET))(this);
		}

		::System::Void AANLCPCOMDL(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_AANLCPCOMDL_OFFSET))(this, a1);
		}

		::System::Void DGJFMGBEDAC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_DGJFMGBEDAC_OFFSET))(this, a1);
		}

		::System::Void FCLNNMANAMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_FCLNNMANAMH_OFFSET))(this);
		}

		::System::Void HGGDPIMBDEE(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_HGGDPIMBDEE_OFFSET))(this, a1);
		}

		::System::Void OKMHLHEMECP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD_OKMHLHEMECP_OFFSET))(this);
		}

		::System::Void _LoadCargo_b__31_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_0_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadCargo_b__31_1(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADCARGO_B__31_1_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadModel_b__34_0(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_0_OFFSET))(this, a1, a2);
		}

		::System::Void _LoadModel_b__34_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _LoadModel_b__34_2(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRSHIPBIRD__LOADMODEL_B__34_2_OFFSET))(this, a1, a2);
		}

	};
}
