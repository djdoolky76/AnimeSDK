#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PadType.h"
#include "unitysdk/RPG/Client/Prop/PadsCameraStatus.h"
#include "unitysdk/RPG/Client/Prop/PadsPuzzleSettleType.h"
#include "unitysdk/RPG/Client/Prop/PadsStatus.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client::Prop { class PadsPuzzlePadBase; }
namespace RPG::Client::Prop { class PadsPuzzleTransportPad; }
namespace RPG::Client::Prop { class PadsPuzzleTriggerPad; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ANIKINIPPGI_OFFSET UNITYSDK_OFFSET(0xDD5DA20)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_BOOHNKLDILL_OFFSET UNITYSDK_OFFSET(0xDD604B0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_BPBEDFCGPBN_OFFSET UNITYSDK_OFFSET(0xDD5FF20)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xDD5D4F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CCIACIMIGBH_1_OFFSET UNITYSDK_OFFSET(0xDD5DEC0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CCIACIMIGBH_OFFSET UNITYSDK_OFFSET(0xDD60DD0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD61E80)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD61D00)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DDGDNBALMHP_OFFSET UNITYSDK_OFFSET(0xDD61130)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DDOKIKDHJLK_OFFSET UNITYSDK_OFFSET(0xDD60950)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DEFAKBNJHCM_OFFSET UNITYSDK_OFFSET(0xDD61AB0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DHOJJBHLEHK_OFFSET UNITYSDK_OFFSET(0xDD5D8F0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD5EA10)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_DMCIDGBIEOB_OFFSET UNITYSDK_OFFSET(0xDD61850)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_FEIHGKFLMGL_OFFSET UNITYSDK_OFFSET(0xDD60FD0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_GET_PADSCAMERASTATUS_OFFSET UNITYSDK_OFFSET(0xDD61CF0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_GLJNGMHJMKD_OFFSET UNITYSDK_OFFSET(0xDD5D810)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_GLNPHBHJMNJ_OFFSET UNITYSDK_OFFSET(0xDD5D330)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_IHCCLGAJLON_OFFSET UNITYSDK_OFFSET(0xDD602E0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_IMHPNPGFKBM_OFFSET UNITYSDK_OFFSET(0xDD5FAF0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD5C760)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD5E9C0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0xDD61390)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPOUTCOLLIDERCHANGE_OFFSET UNITYSDK_OFFSET(0xDD61690)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONIAEMIOPFH_1_OFFSET UNITYSDK_OFFSET(0xDD60B40)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONIAEMIOPFH_OFFSET UNITYSDK_OFFSET(0xDD5E3D0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORTCALLBACK_OFFSET UNITYSDK_OFFSET(0xDD5E330)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORT_OFFSET UNITYSDK_OFFSET(0xDD5E270)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PKGLLCODHEP_OFFSET UNITYSDK_OFFSET(0xDD5D610)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORTINSTANT_OFFSET UNITYSDK_OFFSET(0xDD5E080)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORT_OFFSET UNITYSDK_OFFSET(0xDD5DD90)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESET_OFFSET UNITYSDK_OFFSET(0xDD5DC20)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESETTLE_OFFSET UNITYSDK_OFFSET(0xDD5D530)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESUCCEED_OFFSET UNITYSDK_OFFSET(0xDD5DAE0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_REGISTERCOLLIDER_OFFSET UNITYSDK_OFFSET(0xDD5E1B0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_SDKREPORT_OFFSET UNITYSDK_OFFSET(0xDD5E700)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD5CCF0)
#define RPG_CLIENT_PROP_PADSPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD5F110)

namespace RPG::Client::Prop
{
	class PadsPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::UnityEngine::Transform* FailAnchor; // 0x48
		::UnityEngine::Transform* StartPad; // 0x50
		::RPG::Client::Prop::PadsStatus status; // 0x58
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::Client::Prop::PadsPuzzlePadBase*>* OBJGBJBNDNG; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* LNONPPFBGMB; // 0x68
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::RPG::Client::Prop::PadsPuzzleTriggerPad*>* PCLEJIICLBH; // 0x70
		::Cinemachine::CinemachineVirtualCamera* CAOIHMBPCHA; // 0x78
		::Cinemachine::CinemachineFreeLook* JJHLJEAKHJL; // 0x80
		::Cinemachine::CinemachineBrain* HLBHLCLAKLB; // 0x88
		::RPG::Client::PipelineCameraEngine* NLNILKDMABL; // 0x90
		::RPG::Client::AdventurePhase* FPILJLGACHP; // 0x98
		::RPG::Client::Prop::PadsPuzzleTransportPad* GIJLPKMOAGJ; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PadsPuzzleTriggerPad*>* ANKMPFKEDIJ; // 0xA8
		::RPG::Client::Prop::PadsCameraStatus IDFDIEPFHML; // 0xB0
		::System::Int32 HDLANOKEMBL; // 0xB4
		::System::Single KNDKNLLAJLB; // 0xB8
		::System::Boolean GFEECMGFNLB; // 0xBC
		::System::Boolean FJLHEAHNKMO; // 0xBD
		::System::Byte _padding1[0x2];
		::System::Int32 HGAHFGMDDKC; // 0xC0
		static ::System::String** StaticGet_CJDIFCBFIAB()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "PadsPuzzleBoard")->GetStaticField(0x5A890);
		}

		static ::System::Single* StaticGet_PCBDDHALGNA()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "PadsPuzzleBoard")->GetStaticField(0x13CE0);
		}

		static ::System::Int32* StaticGet_ADADCANABMK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "PadsPuzzleBoard")->GetStaticField(0x13CE4);
		}

		static ::System::Int32* StaticGet_IIIHFJFMPIH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "PadsPuzzleBoard")->GetStaticField(0x13CE8);
		}

		static ::System::Single* StaticGet_PLPLDKPNNBP()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "PadsPuzzleBoard")->GetStaticField(0x13CEC);
		}

		static ::System::Single* StaticGet_OKPEGNGLACH()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "PadsPuzzleBoard")->GetStaticField(0x13CF0);
		}

		static ::System::Single* StaticGet_HDCAOKHGOMC()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "PadsPuzzleBoard")->GetStaticField(0x13CF4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Void PuzzleSettle(::RPG::Client::Prop::PadsPuzzleSettleType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleSettleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESETTLE_OFFSET))(this, a1);
		}

		::System::Void PuzzleSucceed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLESUCCEED_OFFSET))(this);
		}

		::System::Void PuzzleReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESET_OFFSET))(this);
		}

		::System::Void PuzzleResetTeleport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORT_OFFSET))(this);
		}

		::System::Void PuzzleResetTeleportInstant()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PUZZLERESETTELEPORTINSTANT_OFFSET))(this);
		}

		::System::Void RegisterCollider(::UnityEngine::Collider* a1, ::RPG::Client::Prop::PadsPuzzleTriggerPad* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::RPG::Client::Prop::PadsPuzzleTriggerPad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_REGISTERCOLLIDER_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransport(::RPG::Client::Prop::PadsPuzzleTransportPad* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleTransportPad*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORT_OFFSET))(this, a1);
		}

		::System::Void OnTransportCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONTRANSPORTCALLBACK_OFFSET))(this);
		}

		::System::Void SDKReport(::System::Int32 a1, ::RPG::Client::Prop::PadType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Prop::PadType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_SDKREPORT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void ONIAEMIOPFH(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONIAEMIOPFH_OFFSET))(this, a1, a2);
		}

		::System::Void ONIAEMIOPFH_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONIAEMIOPFH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CCIACIMIGBH(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_CCIACIMIGBH_OFFSET))(this, a1, a2);
		}

		::System::Void CCIACIMIGBH_1(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_CCIACIMIGBH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BOOHNKLDILL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_BOOHNKLDILL_OFFSET))(this);
		}

		::System::Void DDOKIKDHJLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_DDOKIKDHJLK_OFFSET))(this);
		}

		::System::Void FEIHGKFLMGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_FEIHGKFLMGL_OFFSET))(this, a1);
		}

		::System::Void DDGDNBALMHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_DDGDNBALMHP_OFFSET))(this, a1);
		}

		::System::Void OnCharacterStepOnColliderChange(::RPG::Client::Prop::PadsPuzzleTriggerPad* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleTriggerPad*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPONCOLLIDERCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnCharacterStepOutColliderChange(::RPG::Client::Prop::PadsPuzzleTriggerPad* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsPuzzleTriggerPad*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ONCHARACTERSTEPOUTCOLLIDERCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Void IHCCLGAJLON(::RPG::Client::Prop::PadsCameraStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PadsCameraStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_IHCCLGAJLON_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PadsPuzzleSettleType BPBEDFCGPBN()
		{
			return ((::RPG::Client::Prop::PadsPuzzleSettleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_BPBEDFCGPBN_OFFSET))(this);
		}

		::System::UInt32 GLNPHBHJMNJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_GLNPHBHJMNJ_OFFSET))(this);
		}

		::System::Void IMHPNPGFKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_IMHPNPGFKBM_OFFSET))(this);
		}

		::System::Void DMCIDGBIEOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_DMCIDGBIEOB_OFFSET))(this);
		}

		::System::Void DEFAKBNJHCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_DEFAKBNJHCM_OFFSET))(this);
		}

		::System::Void PKGLLCODHEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_PKGLLCODHEP_OFFSET))(this);
		}

		::System::Void GLJNGMHJMKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_GLJNGMHJMKD_OFFSET))(this);
		}

		::System::Void ANIKINIPPGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_ANIKINIPPGI_OFFSET))(this);
		}

		::System::Void DHOJJBHLEHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_DHOJJBHLEHK_OFFSET))(this);
		}

		::RPG::Client::Prop::PadsCameraStatus get_PadsCameraStatus()
		{
			return ((::RPG::Client::Prop::PadsCameraStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PADSPUZZLEBOARD_GET_PADSCAMERASTATUS_OFFSET))(this);
		}

	};
}
