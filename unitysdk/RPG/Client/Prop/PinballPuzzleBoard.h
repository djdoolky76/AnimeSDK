#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChessDirection.h"
#include "unitysdk/RPG/Client/Prop/PinballCameraAnchorConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPageProxy_PinballPageHintState.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleControlMode.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CECCNCOACPK;
class DBMDNNBIOAI;
class EFLAJBMKAAH;
class EPJOHKOLHEI;
class GHFJNJBJMBH;
class KGNMHBFIJEI;
class NOHKOODINEJ;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class VirtualCursor; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Prop { class PinballPageProxy; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_AFHAOBFCHCK_OFFSET UNITYSDK_OFFSET(0xDD7ADD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_AIEKFBDOKJF_OFFSET UNITYSDK_OFFSET(0xDD7BB70)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_AONENGDIJFI_OFFSET UNITYSDK_OFFSET(0xDD71DB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_APKPFLMOCOL_OFFSET UNITYSDK_OFFSET(0xDD76F50)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BELNNBOIEHC_OFFSET UNITYSDK_OFFSET(0xDD7A3D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BJALPBHOEAI_OFFSET UNITYSDK_OFFSET(0xDD7AC80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BMGDGKHEJHO_OFFSET UNITYSDK_OFFSET(0xDD7CBB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BNJFJNPBBBF_OFFSET UNITYSDK_OFFSET(0xDD76960)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANACTIVEPLATE_OFFSET UNITYSDK_OFFSET(0xDD784E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xDD73FD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CCFNNBGDDLP_OFFSET UNITYSDK_OFFSET(0xDD7CFB0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CHCGJJLHHMJ_OFFSET UNITYSDK_OFFSET(0xDD78630)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CKJOPHMNIMB_OFFSET UNITYSDK_OFFSET(0xDD78B90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CLGNAHCALFO_OFFSET UNITYSDK_OFFSET(0xDD78530)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDD7D7D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DAFHJFOBHPM_OFFSET UNITYSDK_OFFSET(0xDD73CE0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD73160)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ECEGFBEAJHO_OFFSET UNITYSDK_OFFSET(0xDD7BA30)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_EDGEDFLDLIG_OFFSET UNITYSDK_OFFSET(0xDD7C9B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_EHHGNFNKIKK_OFFSET UNITYSDK_OFFSET(0xDD73B60)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_EKOAOPBPNBK_OFFSET UNITYSDK_OFFSET(0xDD7B050)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ENDPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDD7BF20)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_FCNFGPPFBCL_OFFSET UNITYSDK_OFFSET(0xDD7C670)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_FMDPCEGDOPP_OFFSET UNITYSDK_OFFSET(0xDD7C8E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_FOIFJIIMLIJ_OFFSET UNITYSDK_OFFSET(0xDD78F70)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GBJNMPHLCDC_OFFSET UNITYSDK_OFFSET(0xDD775F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GCHPJANDIGF_OFFSET UNITYSDK_OFFSET(0xDD71C80)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GETPINBALLITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xDD75500)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_CURRENTSELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xDD70C00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_OWNERTRANS_OFFSET UNITYSDK_OFFSET(0xDD7D7A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PINBALLITEMS_DEBUG_OFFSET UNITYSDK_OFFSET(0xDD7D7B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PLATEREMAINCOUNT_OFFSET UNITYSDK_OFFSET(0xDD7D7C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GJICBMOBOEG_OFFSET UNITYSDK_OFFSET(0xDD742E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HBDGPBEILHN_OFFSET UNITYSDK_OFFSET(0xDD7CC10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HBHHOGFPOHF_OFFSET UNITYSDK_OFFSET(0xDD78B00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HDEANJANFPO_OFFSET UNITYSDK_OFFSET(0xDD73F00)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HHBAJPKDJHK_OFFSET UNITYSDK_OFFSET(0xDD7CC70)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HLNHJONGBJC_OFFSET UNITYSDK_OFFSET(0xDD769D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HOKJNIMIENP_OFFSET UNITYSDK_OFFSET(0xDD79570)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IACFJOOKFPO_OFFSET UNITYSDK_OFFSET(0xDD7CE90)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IDECLCFKHPF_OFFSET UNITYSDK_OFFSET(0xDD75740)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IFEIPKPHNCC_OFFSET UNITYSDK_OFFSET(0xDD76EA0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IIKLMCENGAP_OFFSET UNITYSDK_OFFSET(0xDD7A620)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IJLJLKOJAHF_OFFSET UNITYSDK_OFFSET(0xDD75230)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ILIDOMMOGHI_OFFSET UNITYSDK_OFFSET(0xDD73630)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ILIENHINKJF_OFFSET UNITYSDK_OFFSET(0xDD7C7E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xDD72CF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPINBALL_OFFSET UNITYSDK_OFFSET(0xDD72440)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD723B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDD74010)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_JLBOFCEPHOI_OFFSET UNITYSDK_OFFSET(0xDD74C10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_JLKACMOEKMM_OFFSET UNITYSDK_OFFSET(0xDD74930)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KCLJAOPDKMN_OFFSET UNITYSDK_OFFSET(0xDD790E0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KECPJBNHCNO_OFFSET UNITYSDK_OFFSET(0xDD77580)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KGAJOBHIKIB_OFFSET UNITYSDK_OFFSET(0xDD7ACD0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KONMMKFFEPP_OFFSET UNITYSDK_OFFSET(0xDD7D190)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KPIPOLHOBJO_OFFSET UNITYSDK_OFFSET(0xDD7AF50)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD74330)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LAUNCH_OFFSET UNITYSDK_OFFSET(0xDD7A5D0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MFNBDDBJGNE_OFFSET UNITYSDK_OFFSET(0xDD78EA0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MJJPLCLFKMH_OFFSET UNITYSDK_OFFSET(0xDD790A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MLEPLFFMFJL_OFFSET UNITYSDK_OFFSET(0xDD77890)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MNDBGGMHEHL_OFFSET UNITYSDK_OFFSET(0xDD79610)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_NBJMLDOFBJH_OFFSET UNITYSDK_OFFSET(0xDD78EF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_NOILEDADCLA_OFFSET UNITYSDK_OFFSET(0xDD78960)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONINTERACTSTATION_OFFSET UNITYSDK_OFFSET(0xDD75580)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTEND_OFFSET UNITYSDK_OFFSET(0xDD74280)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTSTART_OFFSET UNITYSDK_OFFSET(0xDD78380)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEACTIVE_OFFSET UNITYSDK_OFFSET(0xDD783C0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEDEACTIVE_OFFSET UNITYSDK_OFFSET(0xDD78450)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PBKEAIKPKDM_OFFSET UNITYSDK_OFFSET(0xDD7CB10)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PEFGFFJDIHJ_OFFSET UNITYSDK_OFFSET(0xDD75FF0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLCONFIGPOSTOMATRIXPOS_OFFSET UNITYSDK_OFFSET(0xDD754A0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLDEBUG_SELECTPINBALLITEM_OFFSET UNITYSDK_OFFSET(0xDD71650)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINGKJKJHEP_OFFSET UNITYSDK_OFFSET(0xDD73030)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_REPORTINTERACTPLATE_OFFSET UNITYSDK_OFFSET(0xDD7D1F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD74050)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPINBALLCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDD76110)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPLAYERCONTROLMODE_OFFSET UNITYSDK_OFFSET(0xDD761B0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_SWITCHCURRENTGAMEMODE_OFFSET UNITYSDK_OFFSET(0xDD756F0)
#define RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDD74530)

namespace RPG::Client::Prop
{
	class PinballPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Int32 TotalCount; // 0x48
		::UnityEngine::Vector2Int MatrixSize; // 0x4C
		::System::Single Interval; // 0x54
		::Il2CppArray<::RPG::Client::Prop::PinballPuzzleItemConfig>* MatrixConfigs; // 0x58
		::System::Single LaunchSpeed; // 0x60
		::System::Single BlendInTime; // 0x64
		::UnityEngine::AnimationCurve* FovCurve; // 0x68
		::System::Single CurveMaxFov; // 0x70
		::System::Byte _padding0[0x4];
		::System::String* StationAttachPoint; // 0x78
		::System::String* PlateAttachPoint; // 0x80
		::System::String* BlockAttachPoint; // 0x88
		::System::String* LaunchFailToast; // 0x90
		::System::String* OpenPlateFailToast; // 0x98
		::UnityEngine::Vector3 LaunchCameraFollowOffset; // 0xA0
		::UnityEngine::Vector3 LaunchCameraRotationOffset; // 0xAC
		::System::Single LaunchCameraBlendTime; // 0xB8
		::System::Single LaunchByPercent; // 0xBC
		::Il2CppArray<::RPG::Client::Prop::PinballCameraAnchorConfig>* PinballCameraAnchorConfigs; // 0xC0
		::System::String* StationTriggerName; // 0xC8
		::System::Single EnterStationCameraBlendTime; // 0xD0
		::System::Single EnterStationMoveDelay; // 0xD4
		::System::Single EnterStationMoveDuration; // 0xD8
		::System::Single ExitStationMoveDelay; // 0xDC
		::System::Single EnterStationHidePlayerDelay; // 0xE0
		::System::Single ExitStationShowPlayerDelay; // 0xE4
		::System::String* StationEntranceAttachPoint; // 0xE8
		::Il2CppArray<::UnityEngine::Vector3>* EnterStationCurveControlPoint; // 0xF0
		::System::String* EnterStationSwitchInEffectPath; // 0xF8
		::System::String* ExitStationSwitchOutEffectPath; // 0x100
		::System::String* EnterStationFollowEffectPath; // 0x108
		::System::String* START_PUZZLE_CONTROL_MODE_TEXT; // 0x110
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FAAMDCHJFCG; // 0x118
		::System::Int32 IOLGINMLMPG; // 0x120
		::System::Byte _padding1[0x4];
		::System::String* FCBPFFFCNKD; // 0x128
		::System::Int32 KOFMJAGFCCN; // 0x130
		::System::Int32 FPICKBDAHNI; // 0x134
		::System::Int32 CKONCOJBLFK; // 0x138
		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState FNOOKLFCHMP; // 0x13C
		::System::Int32 PPMHACHJHDM; // 0x140
		::System::Int32 OEEJEOOPEMN; // 0x144
		::System::Collections::Generic::List_1<::EFLAJBMKAAH*>* DCKHPCOIINI; // 0x148
		::System::Object* BILNGLCPKPL; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* BMOILCKLJKP; // 0x158
		::RPG::GameCore::PropComponent* FEOOACOCPCN; // 0x160
		::UnityEngine::Transform* PDGDCPLEPFC; // 0x168
		::RPG::Client::Prop::PinballPageProxy* LCHFDIMKOPC; // 0x170
		::KGNMHBFIJEI* EFBHGFKIGAL; // 0x178
		::KGNMHBFIJEI* FCNGFGHNFKJ; // 0x180
		::RPG::Client::Prop::PinballPuzzleControlMode DKPILNDEIFK; // 0x188
		::System::Int32 OGKHJELJFAL; // 0x18C
		::System::Int32 IBCJGBNABJK; // 0x190
		::System::Int32 IDHEAAJDAHD; // 0x194
		::System::Int32 JDBMBIENDEJ; // 0x198
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* HKDNKPFCOPJ; // 0x1A0
		::System::Collections::Generic::List_1<::EPJOHKOLHEI*>* MCPCLAHENKP; // 0x1A8
		::GHFJNJBJMBH* OECKBKJLPEB; // 0x1B0
		::System::Collections::Generic::List_1<::System::String*>* OADEENPOBPG; // 0x1B8
		::System::Collections::Generic::List_1<::System::Object*>* IIMDHNCIHIL; // 0x1C0
		::UnityEngine::EventSystems::PointerEventData* AFFCBLEDOKJ; // 0x1C8
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* AFJKCFFMLHC; // 0x1D0
		::System::Int32 NKLBDPACBID; // 0x1D8
		::System::Byte _padding3[0x4];
		::RPG::Client::MonoEffect* DOHONNCMDEK; // 0x1E0
		::RPG::Client::MonoEffect* MALFOOKKLMO; // 0x1E8
		::RPG::Client::MonoEffect* MGFNGFFLCDM; // 0x1F0
		::DBMDNNBIOAI* IBFLJNIJBDE; // 0x1F8
		::DBMDNNBIOAI* MLEOHJPCFBL; // 0x200
		::DBMDNNBIOAI* ONAHCEMBBHB; // 0x208
		::DBMDNNBIOAI* LDNJDFGCPIN; // 0x210
		::NOHKOODINEJ* NMHINBKPOFN; // 0x218
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BNLNNKBFJAL; // 0x220
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::RPG::Client::Prop::PinballCameraAnchorConfig>* IGLBHFMELCG; // 0x228
		::CECCNCOACPK* BHNCILOLMFB; // 0x230
		::System::Boolean AGLMFKHDHCJ; // 0x238
		::System::Boolean PMMNGNJMOJP; // 0x239
		::System::Byte _padding4[0x2];
		::System::Int32 JIBJKHCJFBJ; // 0x23C
		::System::Int32 HHJKKIMFJAI; // 0x240
		::System::Boolean DOGCAGFGPKL; // 0x244
		::System::Boolean JGJJBDFAFIN; // 0x245
		::System::Byte _padding5[0x2];
		::RPG::Client::VirtualCursor* GNGEFFIBCMO; // 0x248
		::UnityEngine::Transform* DJMFKNOIPCP; // 0x250
		::System::Boolean LHONFPDDIDK; // 0x258
		::System::Byte _padding6[0x7];
		::UnityEngine::Coroutine* AJAGBEEBACC; // 0x260
		// static const ::System::String* NNODGCJAECN; // 0x0
		// static const ::System::String* GHPNLJMPKHH; // 0x0
		// static const ::System::String* AHANHNDHGGG; // 0x0
		// static const ::System::String* LOAGLGKPKNE; // 0x0
		// static const ::System::String* ICHLLKDDPDM; // 0x0
		// static const ::System::String* BMBGCHFKIEN; // 0x0
		// static const ::System::String* EDPFLCFKFMJ; // 0x0
		// static const ::System::String* MFDJLKONJFC; // 0x0
		// static const ::System::String* BHFCBELHFON; // 0x0
		// static const ::System::String* PHFDALIHLHE; // 0x0
		// static const ::System::String* ECELFJPDFHL; // 0x0
		// static const ::System::String* KMEGJFNHAKB; // 0x0
		// static const ::System::String* PAJNAJNLPIG; // 0x0
		// static const ::System::String* FGPNJAKKLLF; // 0x0
		// static const ::System::String* ANOHCFKNFMC; // 0x0
		// static const ::System::String* DAIANGHGOLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void PinballDebug_SelectPinballItem(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLDEBUG_SELECTPINBALLITEM_OFFSET))(this, a1);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void GJICBMOBOEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GJICBMOBOEG_OFFSET))(this, a1);
		}

		::System::Void LateUpdatePuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LATEUPDATEPUZZLE_OFFSET))(this, a1);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void InitPinball()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITPINBALL_OFFSET))(this);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_INITOPTIONS_OFFSET))(this);
		}

		::System::Void PINGKJKJHEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINGKJKJHEP_OFFSET))(this);
		}

		::EFLAJBMKAAH* GetPinballItemByIndex(::System::Int32 a1)
		{
			return ((::EFLAJBMKAAH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GETPINBALLITEMBYINDEX_OFFSET))(this, a1);
		}

		::System::Void PinballConfigPosToMatrixPos(::UnityEngine::Vector2Int a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PINBALLCONFIGPOSTOMATRIXPOS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnInteractStation(::EFLAJBMKAAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFLAJBMKAAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONINTERACTSTATION_OFFSET))(this, a1);
		}

		::System::Void StartPinballControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPINBALLCONTROLMODE_OFFSET))(this);
		}

		::System::Void StartPlayerControlMode(::EFLAJBMKAAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFLAJBMKAAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_STARTPLAYERCONTROLMODE_OFFSET))(this, a1);
		}

		::System::Void SwitchCurrentGameMode(::RPG::Client::Prop::PinballPuzzleControlMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleControlMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_SWITCHCURRENTGAMEMODE_OFFSET))(this, a1);
		}

		::System::Void OnPinballItemInteractStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTSTART_OFFSET))(this);
		}

		::System::Void OnPinballItemInteractEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPINBALLITEMINTERACTEND_OFFSET))(this);
		}

		::System::Void OnPlateActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEACTIVE_OFFSET))(this);
		}

		::System::Void OnPlateDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ONPLATEDEACTIVE_OFFSET))(this);
		}

		::System::Boolean CanActivePlate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CANACTIVEPLATE_OFFSET))(this);
		}

		::System::Int32 JLBOFCEPHOI(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_JLBOFCEPHOI_OFFSET))(this, a1, a2);
		}

		::System::Void CHCGJJLHHMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CHCGJJLHHMJ_OFFSET))(this);
		}

		::System::Void HBHHOGFPOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HBHHOGFPOHF_OFFSET))(this);
		}

		::System::Void GBJNMPHLCDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GBJNMPHLCDC_OFFSET))(this);
		}

		::System::Void DAFHJFOBHPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_DAFHJFOBHPM_OFFSET))(this);
		}

		::System::Void NOILEDADCLA(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_NOILEDADCLA_OFFSET))(this, a1);
		}

		::System::Void MFNBDDBJGNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MFNBDDBJGNE_OFFSET))(this, a1);
		}

		::System::Void NBJMLDOFBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_NBJMLDOFBJH_OFFSET))(this);
		}

		::System::Void CKJOPHMNIMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CKJOPHMNIMB_OFFSET))(this);
		}

		::System::Void FOIFJIIMLIJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_FOIFJIIMLIJ_OFFSET))(this, a1);
		}

		::System::Void MJJPLCLFKMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MJJPLCLFKMH_OFFSET))(this);
		}

		::System::Void IFEIPKPHNCC(::RPG::Client::Prop::PinballPageProxy_PinballPageHintState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPageProxy_PinballPageHintState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IFEIPKPHNCC_OFFSET))(this, a1);
		}

		::System::Void BNJFJNPBBBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BNJFJNPBBBF_OFFSET))(this);
		}

		::EFLAJBMKAAH* IJLJLKOJAHF(::RPG::Client::Prop::PinballPuzzleItemConfig a1)
		{
			return ((::EFLAJBMKAAH*(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IJLJLKOJAHF_OFFSET))(this, a1);
		}

		::System::Void KCLJAOPDKMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KCLJAOPDKMN_OFFSET))(this);
		}

		::System::Void GCHPJANDIGF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GCHPJANDIGF_OFFSET))(this, a1);
		}

		::System::Boolean CLGNAHCALFO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CLGNAHCALFO_OFFSET))(this, a1);
		}

		::System::Void AONENGDIJFI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_AONENGDIJFI_OFFSET))(this, a1);
		}

		::System::Void BELNNBOIEHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BELNNBOIEHC_OFFSET))(this);
		}

		::System::Void Launch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_LAUNCH_OFFSET))(this);
		}

		::System::Void BJALPBHOEAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BJALPBHOEAI_OFFSET))(this);
		}

		::System::Void KGAJOBHIKIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KGAJOBHIKIB_OFFSET))(this, a1);
		}

		::System::Void AFHAOBFCHCK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_AFHAOBFCHCK_OFFSET))(this, a1);
		}

		::System::Void KPIPOLHOBJO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KPIPOLHOBJO_OFFSET))(this, a1);
		}

		::System::Boolean IIKLMCENGAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IIKLMCENGAP_OFFSET))(this);
		}

		::System::Void ECEGFBEAJHO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ECEGFBEAJHO_OFFSET))(this, a1);
		}

		::System::Void AIEKFBDOKJF(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_AIEKFBDOKJF_OFFSET))(this, a1, a2);
		}

		::System::Void JLKACMOEKMM(::System::UInt32 a1, ::System::Single a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_JLKACMOEKMM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndPinballControlMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ENDPINBALLCONTROLMODE_OFFSET))(this);
		}

		::System::Void FCNFGPPFBCL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_FCNFGPPFBCL_OFFSET))(this, a1);
		}

		::System::Void ILIENHINKJF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ILIENHINKJF_OFFSET))(this, a1);
		}

		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState HLNHJONGBJC(::RPG::Client::Prop::ChessDirection a1)
		{
			return ((::RPG::Client::Prop::PinballPageProxy_PinballPageHintState(*)(::PVOID, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HLNHJONGBJC_OFFSET))(this, a1);
		}

		::System::Void PEFGFFJDIHJ(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::PuzzleCustomEvent a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PEFGFFJDIHJ_OFFSET))(this, a1, a2);
		}

		::System::Void MLEPLFFMFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MLEPLFFMFJL_OFFSET))(this);
		}

		::System::Void HDEANJANFPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HDEANJANFPO_OFFSET))(this);
		}

		::System::Boolean FMDPCEGDOPP(::EFLAJBMKAAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EFLAJBMKAAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_FMDPCEGDOPP_OFFSET))(this, a1);
		}

		::EPJOHKOLHEI* EKOAOPBPNBK(::System::Boolean a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Boolean a4, ::RPG::Client::Prop::ChessDirection a5)
		{
			return ((::EPJOHKOLHEI*(*)(::PVOID, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3, ::System::Boolean, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_EKOAOPBPNBK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void BMGDGKHEJHO(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_BMGDGKHEJHO_OFFSET))(this, a1, a2);
		}

		::System::Void HBDGPBEILHN(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HBDGPBEILHN_OFFSET))(this, a1, a2);
		}

		::System::Void PBKEAIKPKDM(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_PBKEAIKPKDM_OFFSET))(this, a1);
		}

		::System::Void IDECLCFKHPF(::EFLAJBMKAAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFLAJBMKAAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IDECLCFKHPF_OFFSET))(this, a1);
		}

		::System::Void MNDBGGMHEHL(::EFLAJBMKAAH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFLAJBMKAAH*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_MNDBGGMHEHL_OFFSET))(this, a1, a2);
		}

		::System::Void IACFJOOKFPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_IACFJOOKFPO_OFFSET))(this);
		}

		::System::Void KECPJBNHCNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KECPJBNHCNO_OFFSET))(this);
		}

		::System::Void CCFNNBGDDLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_CCFNNBGDDLP_OFFSET))(this);
		}

		::System::Void EHHGNFNKIKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_EHHGNFNKIKK_OFFSET))(this);
		}

		::System::Int32 EDGEDFLDLIG(::System::Int32 a1, ::System::Int32 a2, ::RPG::Client::Prop::ChessDirection a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::RPG::Client::Prop::ChessDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_EDGEDFLDLIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KONMMKFFEPP(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_KONMMKFFEPP_OFFSET))(this, a1, a2);
		}

		::System::Void HOKJNIMIENP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HOKJNIMIENP_OFFSET))(this, a1);
		}

		::System::Void APKPFLMOCOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_APKPFLMOCOL_OFFSET))(this);
		}

		::System::Void ReportInteractPlate(::System::Int32 a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_REPORTINTERACTPLATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ILIDOMMOGHI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_ILIDOMMOGHI_OFFSET))(this, a1);
		}

		::System::Void HHBAJPKDJHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_HHBAJPKDJHK_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_OwnerTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_OWNERTRANS_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CurrentSelectPinballItem()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_CURRENTSELECTPINBALLITEM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::EFLAJBMKAAH*>* get_PinballItems_Debug()
		{
			return ((::System::Collections::Generic::List_1<::EFLAJBMKAAH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PINBALLITEMS_DEBUG_OFFSET))(this);
		}

		::System::Int32 get_PlateRemainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPUZZLEBOARD_GET_PLATEREMAINCOUNT_OFFSET))(this);
		}

	};
}
