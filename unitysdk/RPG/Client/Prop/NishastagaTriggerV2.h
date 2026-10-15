#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/NishastagaTriggerV2_GameState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
class EKFMIDBJDIA;
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_AMEJADBOFOE_OFFSET UNITYSDK_OFFSET(0xDD29820)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_AONFDEMLFAC_OFFSET UNITYSDK_OFFSET(0xDD29D70)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_BHLOCAIENGI_OFFSET UNITYSDK_OFFSET(0xDD29320)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_BNGBLAHKGGD_OFFSET UNITYSDK_OFFSET(0xDD28960)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD2A210)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_CTOR_OFFSET UNITYSDK_OFFSET(0xDD2A180)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDD27140)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD27190)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_FLGNDHEALIH_OFFSET UNITYSDK_OFFSET(0xDD29F40)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_FLHNLFFPHBE_OFFSET UNITYSDK_OFFSET(0xDD28540)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_GET_OWNENTITY_OFFSET UNITYSDK_OFFSET(0xDD27D90)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_HGFLGGAHAKJ_OFFSET UNITYSDK_OFFSET(0xDD27F70)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_HMKMFCBCMAC_OFFSET UNITYSDK_OFFSET(0xDD29430)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_IAHCFAPEIAK_OFFSET UNITYSDK_OFFSET(0xDD29380)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD273F0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_MOGJDBIAHBM_OFFSET UNITYSDK_OFFSET(0xDD29740)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_OJLAMMLLBHN_OFFSET UNITYSDK_OFFSET(0xDD29BC0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD29790)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xDD29B70)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESET_OFFSET UNITYSDK_OFFSET(0xDD26FC0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xDD29A80)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDD26F70)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int NishastagaTriggerV2_TypeDefinitionIndex = 78960;

	class NishastagaTriggerV2 : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single CamDistanceRangeX; // 0x18
		::System::Single CamDistanceRangeY; // 0x1C
		::System::Single CamDistanceRangeZ; // 0x20
		::System::Single TriggerThresold; // 0x24
		::System::Single TriggerItemAlignAngleThresold; // 0x28
		::System::Boolean IsInMatched; // 0x2C
		::System::Boolean IsGameFinished; // 0x2D
		::System::Byte _padding0[0x2];
		::System::Collections::Generic::List_1<::System::String*>* PuzzleGameItemPaths; // 0x30
		::System::String* PuzzleGameModelArtNodePath; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PuzzleGameItems; // 0x40
		::Il2CppArray<::System::Object*>* PuzzleGameItemAttachPoints; // 0x48
		::UnityEngine::Transform* CameraTarget; // 0x50
		::UnityEngine::Transform* TargetCamTrans; // 0x58
		::System::Single MainColorScaleMin; // 0x60
		::System::Single MainColorScaleMax; // 0x64
		::System::Boolean IsAutoAdsorbOn; // 0x68
		::System::Boolean ShowDebug; // 0x69
		::System::Byte _padding1[0x2];
		::System::Single ScreenDiffDistanceX; // 0x6C
		::System::Single ScreenDiffDistanceY; // 0x70
		::System::Single DJOLCDONJKD; // 0x74
		::RPG::Client::Prop::NishastagaTriggerV2_GameState DLNIGFGLPLJ; // 0x78
		::System::Single OOEJMINCGFH; // 0x7C
		::System::Single NFBAKOALGPD; // 0x80
		::System::Single IKDMMJBKOGH; // 0x84
		::System::Single JLPEGDKANKL; // 0x88
		::System::Single _Intensity; // 0x8C
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x90
		::RPG::Client::PipelineCameraEngine* KMJJAHOHANH; // 0x98
		::UnityEngine::Animator* APPGGMLEPLN; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* BDFONEMFCHJ; // 0xA8
		::RPG::GameCore::GameEntity* MNDDDCAFBIO; // 0xB0
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0xB8
		::RPG::GameCore::PropComponent* CLGHBANCIDF; // 0xC0
		::System::UInt32 ECINNPDDDCO; // 0xC8
		::System::UInt32 BNIFMDJJPHM; // 0xCC
		::System::UInt32 AMMGGCGKHLM; // 0xD0
		::System::Boolean NACAGOIKLFA; // 0xD4
		::System::Boolean EGIFKCLEFKK; // 0xD5
		static ::System::String** StaticGet_IFGMPPHODED()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTriggerV2")->GetStaticField(0x44C10);
		}

		static ::System::String** StaticGet_EDBHFLBEFNC()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTriggerV2")->GetStaticField(0x44C18);
		}

		static ::System::String** StaticGet_GEFAMCGHHKH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTriggerV2")->GetStaticField(0x44C20);
		}

		static ::System::String** StaticGet_LBAGIMBMALC()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTriggerV2")->GetStaticField(0x44C28);
		}

		static ::System::String** StaticGet_IJBDFEHKOEE()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTriggerV2")->GetStaticField(0x44C30);
		}

		static ::System::Int32* StaticGet_CMJDEJDJKBO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTriggerV2")->GetStaticField(0x103D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_CCTOR_OFFSET))();
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DESPAWNED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_DISPOSE_OFFSET))(this);
		}

		::System::Void SetItemAttachPoint(::System::Int32 a1, ::RPG::GameCore::PropComponent* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_SETITEMATTACHPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetItemAttachPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_RESETITEMATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Single BNGBLAHKGGD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_BNGBLAHKGGD_OFFSET))(this);
		}

		::System::Boolean BHLOCAIENGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_BHLOCAIENGI_OFFSET))(this);
		}

		::System::Boolean FLHNLFFPHBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_FLHNLFFPHBE_OFFSET))(this);
		}

		::System::Void OJLAMMLLBHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_OJLAMMLLBHN_OFFSET))(this);
		}

		::System::Boolean HGFLGGAHAKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_HGFLGGAHAKJ_OFFSET))(this);
		}

		::System::Void MOGJDBIAHBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_MOGJDBIAHBM_OFFSET))(this);
		}

		::System::Void IAHCFAPEIAK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_IAHCFAPEIAK_OFFSET))(this, a1);
		}

		::System::Void AONFDEMLFAC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_AONFDEMLFAC_OFFSET))(this, a1);
		}

		::System::Void FLGNDHEALIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_FLGNDHEALIH_OFFSET))(this);
		}

		::System::Void HMKMFCBCMAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_HMKMFCBCMAC_OFFSET))(this);
		}

		::System::Void AMEJADBOFOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_AMEJADBOFOE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGERV2_GET_OWNENTITY_OFFSET))(this);
		}

	};
}
