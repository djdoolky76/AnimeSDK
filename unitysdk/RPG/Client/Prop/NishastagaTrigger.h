#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
class EKFMIDBJDIA;
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_AMEJADBOFOE_OFFSET UNITYSDK_OFFSET(0xDD30430)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_BHLOCAIENGI_OFFSET UNITYSDK_OFFSET(0xDD2FFE0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_BNGBLAHKGGD_OFFSET UNITYSDK_OFFSET(0xDD2F610)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD30EA0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDD30DC0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xDD2DD90)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD2DDE0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_FLGNDHEALIH_OFFSET UNITYSDK_OFFSET(0xDD30B80)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_FLHNLFFPHBE_OFFSET UNITYSDK_OFFSET(0xDD2F1F0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_GET_OWNENTITY_OFFSET UNITYSDK_OFFSET(0xDD2EAA0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_HGFLGGAHAKJ_OFFSET UNITYSDK_OFFSET(0xDD2EB50)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_HMKMFCBCMAC_OFFSET UNITYSDK_OFFSET(0xDD30040)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_KIGKKADGFCC_OFFSET UNITYSDK_OFFSET(0xDD309D0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDD2E020)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_MOGJDBIAHBM_OFFSET UNITYSDK_OFFSET(0xDD30350)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_OJLAMMLLBHN_OFFSET UNITYSDK_OFFSET(0xDD307D0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD303A0)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xDD30780)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESET_OFFSET UNITYSDK_OFFSET(0xDD2DC10)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_SETITEMATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xDD30690)
#define RPG_CLIENT_PROP_NISHASTAGATRIGGER_SPAWNED_OFFSET UNITYSDK_OFFSET(0xDD2DBC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int NishastagaTrigger_TypeDefinitionIndex = 78959;

	class NishastagaTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single CamDistanceRangeX; // 0x18
		::System::Single CamDistanceRangeY; // 0x1C
		::System::Single CamDistanceRangeZ; // 0x20
		::System::Single TriggerThresold; // 0x24
		::System::Single TriggerItemAlignAngleThresold; // 0x28
		::System::Boolean IsInMatched; // 0x2C
		::System::Byte _padding0[0x3];
		::System::String* SuccessTriggerCustomString; // 0x30
		::System::String* MatchedTriggerCustomString; // 0x38
		::System::String* UnMatchedTriggerCustomString; // 0x40
		::System::Boolean IsGameFinished; // 0x48
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::System::String*>* PuzzleGameItemPaths; // 0x50
		::System::String* PuzzleGameModelArtNodePath; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* PuzzleGameItems; // 0x60
		::Il2CppArray<::System::Object*>* PuzzleGameItemAttachPoints; // 0x68
		::UnityEngine::Transform* CameraTarget; // 0x70
		::UnityEngine::Transform* TargetCamTrans; // 0x78
		::System::Single MainColorScaleMin; // 0x80
		::System::Single MainColorScaleMax; // 0x84
		::System::Boolean IsAutoAdsorbOn; // 0x88
		::System::Boolean ShowDebug; // 0x89
		::System::Byte _padding2[0x2];
		::System::Single ScreenDiffDistanceX; // 0x8C
		::System::Single ScreenDiffDistanceY; // 0x90
		::System::Single DJOLCDONJKD; // 0x94
		::System::Single OOEJMINCGFH; // 0x98
		::System::Single NFBAKOALGPD; // 0x9C
		::System::Single IKDMMJBKOGH; // 0xA0
		::System::Single JLPEGDKANKL; // 0xA4
		::System::Boolean CBGKGGJPOEJ; // 0xA8
		::System::Byte _padding3[0x3];
		::System::Single _Intensity; // 0xAC
		::System::Boolean _IsGameStart; // 0xB0
		::System::Byte _padding4[0x7];
		::RPG::Client::PipelineCameraEngine* KMJJAHOHANH; // 0xB8
		::UnityEngine::Animator* APPGGMLEPLN; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* BDFONEMFCHJ; // 0xC8
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0xD0
		::RPG::GameCore::PropComponent* CLGHBANCIDF; // 0xD8
		::System::UInt32 BNIFMDJJPHM; // 0xE0
		::System::UInt32 AMMGGCGKHLM; // 0xE4
		::System::Boolean NACAGOIKLFA; // 0xE8
		::System::Boolean EGIFKCLEFKK; // 0xE9
		static ::System::String** StaticGet_EDBHFLBEFNC()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTrigger")->GetStaticField(0x58440);
		}

		static ::System::Int32* StaticGet_CMJDEJDJKBO()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "NishastagaTrigger")->GetStaticField(0x13760);
		}

		// static const ::System::String* JAMPCFEILOE; // 0x0
		// static const ::System::String* GLGLHLKFLIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_CCTOR_OFFSET))();
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_DESPAWNED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetItemAttachPoint(::System::Int32 a1, ::RPG::GameCore::PropComponent* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::PropComponent*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_SETITEMATTACHPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetItemAttachPoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_RESETITEMATTACHPOINT_OFFSET))(this, a1);
		}

		::System::Single BNGBLAHKGGD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_BNGBLAHKGGD_OFFSET))(this);
		}

		::System::Boolean BHLOCAIENGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_BHLOCAIENGI_OFFSET))(this);
		}

		::System::Boolean FLHNLFFPHBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_FLHNLFFPHBE_OFFSET))(this);
		}

		::System::Void OJLAMMLLBHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_OJLAMMLLBHN_OFFSET))(this);
		}

		::System::Boolean HGFLGGAHAKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_HGFLGGAHAKJ_OFFSET))(this);
		}

		::System::Void MOGJDBIAHBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_MOGJDBIAHBM_OFFSET))(this);
		}

		::System::Void KIGKKADGFCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_KIGKKADGFCC_OFFSET))(this, a1);
		}

		::System::Void FLGNDHEALIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_FLGNDHEALIH_OFFSET))(this);
		}

		::System::Void HMKMFCBCMAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_HMKMFCBCMAC_OFFSET))(this);
		}

		::System::Void AMEJADBOFOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_AMEJADBOFOE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_NISHASTAGATRIGGER_GET_OWNENTITY_OFFSET))(this);
		}

	};
}
