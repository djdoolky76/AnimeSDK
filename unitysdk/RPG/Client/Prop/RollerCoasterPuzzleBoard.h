#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGKIBIPPMOO.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/Prop/RollerCoasterPuzzleBoard_InitializationPhase.h"
#include "unitysdk/RPG/Client/Prop/RollerCoasterPuzzleBoard_RidePhase.h"
#include "unitysdk/FFBPHKOLDBM.h"
#include "unitysdk/OAPDNDPPBKP.h"
class BOKPPKAHPIP;
class CFDHJMFAGCK;
class CMLIOLLFLOC;
class IIMEBHGNNKP;
class KNKLCMFLDIB;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::Prop { class RollerCoasterMoveSettings; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_AFJENLAOHDM_OFFSET UNITYSDK_OFFSET(0xE7F2660)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_AHOJKPNJCJF_OFFSET UNITYSDK_OFFSET(0xE7F1DF0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BAENABJDIMO_OFFSET UNITYSDK_OFFSET(0xE7F1150)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BFJKACNFIMM_OFFSET UNITYSDK_OFFSET(0xE7F45A0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BMENJGABPFM_OFFSET UNITYSDK_OFFSET(0xE7F2C70)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BPGIHBOCCHC_OFFSET UNITYSDK_OFFSET(0xE7F3BA0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET UNITYSDK_OFFSET(0xE7EF200)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_CIANNOFDFKA_OFFSET UNITYSDK_OFFSET(0xE7F4890)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xE7F4A70)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_DFLBBCJJEKJ_OFFSET UNITYSDK_OFFSET(0xE7F1880)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE7F28F0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_DPHIABCPHEF_OFFSET UNITYSDK_OFFSET(0xE7F0610)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EALIGIBPPPB_OFFSET UNITYSDK_OFFSET(0xE7F0E90)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EBCDAGECEDG_OFFSET UNITYSDK_OFFSET(0xE7F37D0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EFLIJELKNCH_OFFSET UNITYSDK_OFFSET(0xE7F4400)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EJLKEGBONJG_OFFSET UNITYSDK_OFFSET(0xE7F4130)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FCMPJCOIIPF_OFFSET UNITYSDK_OFFSET(0xE7F2EF0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FGIAKJGOFKM_OFFSET UNITYSDK_OFFSET(0xE7F1BB0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FHCOACGDCAE_OFFSET UNITYSDK_OFFSET(0xE7EFDE0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FINDCOASTERATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xE7F2700)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FNFFOEGCAFK_OFFSET UNITYSDK_OFFSET(0xE7F42D0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FORCETRANSITIONSTART_OFFSET UNITYSDK_OFFSET(0xE7F23D0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_COASTERINSTANCE_OFFSET UNITYSDK_OFFSET(0xE7F2860)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_COASTERPROP_OFFSET UNITYSDK_OFFSET(0xE7F4A50)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_ISRUNACTIVE_OFFSET UNITYSDK_OFFSET(0xE7EF300)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_ISSKIPPING_OFFSET UNITYSDK_OFFSET(0xE7EF350)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_MOVECONTROLLER_OFFSET UNITYSDK_OFFSET(0xE7F4A60)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GHAHACLENIA_OFFSET UNITYSDK_OFFSET(0xE7EF7B0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GJIENLJDNGA_OFFSET UNITYSDK_OFFSET(0xE7F49F0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GLELFFKHDMA_OFFSET UNITYSDK_OFFSET(0xE7F3410)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_IAIFNMGJJIE_OFFSET UNITYSDK_OFFSET(0xE7F1580)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_IDENNPENNCK_OFFSET UNITYSDK_OFFSET(0xE7F1D90)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xE7EF360)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_INITROLLERCOASTER_OFFSET UNITYSDK_OFFSET(0xE7F02A0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_INMFMFPMMOC_OFFSET UNITYSDK_OFFSET(0xE7F30E0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_ISENABLEPUZZLEUI_OFFSET UNITYSDK_OFFSET(0xE7EF1C0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xE7EF240)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_ISPUZZLESTART_OFFSET UNITYSDK_OFFSET(0xE7EF290)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JHAOHCBJANK_OFFSET UNITYSDK_OFFSET(0xE7F00F0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JHICOPLKLCM_OFFSET UNITYSDK_OFFSET(0xE7F4940)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JLBKGOLLFKJ_OFFSET UNITYSDK_OFFSET(0xE7F1040)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JOCEFAPEFMO_OFFSET UNITYSDK_OFFSET(0xE7F3890)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JOKADBKJIGO_OFFSET UNITYSDK_OFFSET(0xE7F4680)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_KGKKINHGCCB_OFFSET UNITYSDK_OFFSET(0xE7F2CE0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_KPIELJDNCJO_OFFSET UNITYSDK_OFFSET(0xE7F2FB0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LAAGODFOAHB_OFFSET UNITYSDK_OFFSET(0xE7F1C90)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LAFODEEIMNH_OFFSET UNITYSDK_OFFSET(0xE7EF8D0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE7EF9C0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LHMPCPADBDK_OFFSET UNITYSDK_OFFSET(0xE7F33B0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LJCFGOANDOM_OFFSET UNITYSDK_OFFSET(0xE7F44C0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_MEEBAJJGJMK_OFFSET UNITYSDK_OFFSET(0xE7F1D30)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NBOKLDLFAMB_OFFSET UNITYSDK_OFFSET(0xE7F13A0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NHDFEPDLAHE_OFFSET UNITYSDK_OFFSET(0xE7F3E10)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NJJBDBOCJOD_OFFSET UNITYSDK_OFFSET(0xE7F32B0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NLEIACLIKCH_OFFSET UNITYSDK_OFFSET(0xE7F40E0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NOTIFYTRANSITIONFINISH_OFFSET UNITYSDK_OFFSET(0xE7F2030)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NPIEODLGCBN_OFFSET UNITYSDK_OFFSET(0xE7F3820)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_OBAEKAFHENH_OFFSET UNITYSDK_OFFSET(0xE7F0970)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_OKNPDNPMBCL_OFFSET UNITYSDK_OFFSET(0xE7F47A0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_OPENSKIPUI_OFFSET UNITYSDK_OFFSET(0xE7F3730)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PLHPNHLOALJ_OFFSET UNITYSDK_OFFSET(0xE7F0D40)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PLMGPMMHDIK_OFFSET UNITYSDK_OFFSET(0xE7F1420)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PNDJPLDDDDB_OFFSET UNITYSDK_OFFSET(0xE7F2E70)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PPHPLNPKJLH_OFFSET UNITYSDK_OFFSET(0xE7F4000)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_RESUMEREGIONUPDATE_OFFSET UNITYSDK_OFFSET(0xE7F2100)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SETCOASTERTONEXTTRACKSTART_OFFSET UNITYSDK_OFFSET(0xE7F2180)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SETMOVEPAUSED_OFFSET UNITYSDK_OFFSET(0xE7F1EB0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SETTRACKVISIBLE_OFFSET UNITYSDK_OFFSET(0xE7F2340)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SHOWFIRSTTRACK_OFFSET UNITYSDK_OFFSET(0xE7F2250)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SKIPTOEND_OFFSET UNITYSDK_OFFSET(0xE7F1920)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xE7EFA40)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_STARTRUN_OFFSET UNITYSDK_OFFSET(0xE7EFAF0)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_STOPRUN_OFFSET UNITYSDK_OFFSET(0xE7EFE30)
#define RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xE7EF930)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RollerCoasterPuzzleBoard_TypeDefinitionIndex = 81561;

	class RollerCoasterPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::UnityEngine::Transform* RuntimeInstanceRoot; // 0x48
		::System::Boolean SetRuntimeInstanceRootToWorldOrigin; // 0x50
		::System::Boolean SkipBoarding; // 0x51
		::System::Byte _padding0[0x6];
		::System::String* BoardingSwitchInEffectPath; // 0x58
		::System::String* ExitSwitchOutEffectPath; // 0x60
		::System::String* TeleportEffectPath; // 0x68
		::System::String* RouteBgCurveEffectPath; // 0x70
		::System::Single RouteBgCurveEffectSpeedLevel1; // 0x78
		::System::Single RouteBgCurveEffectSpeedLevel2; // 0x7C
		::System::Single RouteBgCurveEffectSpeedLevel3; // 0x80
		::System::Byte _padding1[0x4];
		::System::String* BoardingAttachPointName; // 0x88
		::System::String* ExitAttachPointName; // 0x90
		::System::Single FlightBezierHeight; // 0x98
		::System::Single BoardingFlightDuration; // 0x9C
		::System::Single BoardingEffectFinishDelay; // 0xA0
		::System::Single ExitFlightDuration; // 0xA4
		::System::Single ExitCameraBlendTime; // 0xA8
		::System::Single ExitPlayerShowDelay; // 0xAC
		::System::Single ExitEffectFinishDelay; // 0xB0
		::System::Byte _padding2[0x4];
		::RPG::Client::Prop::RollerCoasterMoveSettings* MoveSettings; // 0xB8
		::RPG::GameCore::GameEntity* EBFGLACAFOG; // 0xC0
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BAJCKCFMEPA; // 0xC8
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* HDFENCCGEEG; // 0xD0
		::System::Collections::Generic::List_1<::OGKIBIPPMOO>* MHAPIABEDNI; // 0xD8
		::System::Boolean FHDNAKCBEOC; // 0xE0
		::System::Boolean AMICIILAHBK; // 0xE1
		::System::Byte _padding3[0x6];
		::KNKLCMFLDIB* MPHLNNJGIAE; // 0xE8
		::CFDHJMFAGCK* HPFKIINIEHB; // 0xF0
		::BOKPPKAHPIP* LHKMEAFLNBB; // 0xF8
		::CMLIOLLFLOC* IJPIHJKEPKE; // 0x100
		::IIMEBHGNNKP* CONIDCGICDD; // 0x108
		::RPG::Client::Stage* JPCOHNBJBHI; // 0x110
		::RPG::Client::Stage* AKIIFDMHLGM; // 0x118
		::System::Boolean NNOCNCHKGPA; // 0x120
		::System::Byte _padding4[0x3];
		::RPG::Client::Prop::RollerCoasterPuzzleBoard_InitializationPhase BOMBCEBBEDH; // 0x124
		::RPG::Client::Prop::RollerCoasterPuzzleBoard_RidePhase HCJIBDPHIJD; // 0x128
		::System::Boolean AOFCFOPJKIN; // 0x12C
		::System::Boolean LHLPLHKLNLG; // 0x12D
		::System::Boolean HEFLLPFJJHO; // 0x12E
		::System::Boolean BBJAPOOMHKI; // 0x12F
		::System::Boolean FKJEMAPOJEJ; // 0x130
		::System::Byte _padding5[0x3];
		::System::Int32 NOBKCJEGOCN; // 0x134
		::RPG::GameCore::AnchorInfo* DIBAGBONGID; // 0x138
		::System::Boolean PMNBLDFOJJO; // 0x140
		::System::Boolean PIHEOLCNINH; // 0x141
		::System::Boolean NLMCCFMOGML; // 0x142
		::System::Boolean FOJOCLGAEGG; // 0x143
		::System::Boolean KPIGAAFJPEM; // 0x144
		::System::Byte _padding6[0x3];
		::RPG::Client::LuaUIController* OCIOPIIIPPN; // 0x148
		// static const ::System::String* FAHMOLCEAGC; // 0x0
		// static const ::System::String* IIGHCACHCEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Boolean IsEnablePuzzleUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_ISENABLEPUZZLEUI_OFFSET))(this);
		}

		::System::Boolean CanPuzzleUnload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_CANPUZZLEUNLOAD_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Boolean IsPuzzleStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_ISPUZZLESTART_OFFSET))(this);
		}

		::System::Boolean get_IsRunActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_ISRUNACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsSkipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_ISSKIPPING_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LATEUPDATE_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void FHCOACGDCAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FHCOACGDCAE_OFFSET))(this);
		}

		::System::Boolean InitRollerCoaster(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::System::Collections::Generic::IReadOnlyList_1<::FFBPHKOLDBM>* a3, ::System::Boolean a4, ::RPG::GameCore::LevelAreaManager* a5, ::RPG::GameCore::AnchorInfo* a6, ::OAPDNDPPBKP a7, ::OAPDNDPPBKP a8, ::Il2CppArray<::System::String*>* a9, ::System::Boolean a10, ::System::Boolean a11, ::System::Boolean a12, ::System::Single a13, ::System::Single a14, ::System::Single a15, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a16, ::System::Collections::Generic::IReadOnlyList_1<::OGKIBIPPMOO>* a17)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::FFBPHKOLDBM>*, ::System::Boolean, ::RPG::GameCore::LevelAreaManager*, ::RPG::GameCore::AnchorInfo*, ::OAPDNDPPBKP, ::OAPDNDPPBKP, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::IReadOnlyList_1<::OGKIBIPPMOO>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_INITROLLERCOASTER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
		}

		::System::Void StartRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_STARTRUN_OFFSET))(this);
		}

		::System::Boolean SkipToEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SKIPTOEND_OFFSET))(this);
		}

		::System::Void StopRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_STOPRUN_OFFSET))(this);
		}

		::System::Boolean SetMovePaused(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SETMOVEPAUSED_OFFSET))(this, a1);
		}

		::System::Boolean NotifyTransitionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NOTIFYTRANSITIONFINISH_OFFSET))(this);
		}

		::System::Boolean ResumeRegionUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_RESUMEREGIONUPDATE_OFFSET))(this);
		}

		::System::Boolean SetCoasterToNextTrackStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SETCOASTERTONEXTTRACKSTART_OFFSET))(this);
		}

		::System::Boolean ShowFirstTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SHOWFIRSTTRACK_OFFSET))(this);
		}

		::System::Boolean SetTrackVisible(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_SETTRACKVISIBLE_OFFSET))(this, a1);
		}

		::System::Boolean ForceTransitionStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FORCETRANSITIONSTART_OFFSET))(this);
		}

		::System::Void AFJENLAOHDM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_AFJENLAOHDM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* FindCoasterAttachPoint(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FINDCOASTERATTACHPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_CoasterInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_COASTERINSTANCE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PLHPNHLOALJ(::RPG::GameCore::LevelAreaManager* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelAreaManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PLHPNHLOALJ_OFFSET))(this, a1);
		}

		::System::Boolean EALIGIBPPPB(::System::Collections::Generic::IReadOnlyList_1<::FFBPHKOLDBM>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::FFBPHKOLDBM>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EALIGIBPPPB_OFFSET))(this, a1);
		}

		::System::Void KGKKINHGCCB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_KGKKINHGCCB_OFFSET))(this, a1);
		}

		::System::Void PNDJPLDDDDB(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PNDJPLDDDDB_OFFSET))(this, a1, a2);
		}

		::System::Void FCMPJCOIIPF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FCMPJCOIIPF_OFFSET))(this, a1);
		}

		::System::Void BMENJGABPFM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BMENJGABPFM_OFFSET))(this, a1);
		}

		::System::Void KPIELJDNCJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_KPIELJDNCJO_OFFSET))(this);
		}

		::System::Void INMFMFPMMOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_INMFMFPMMOC_OFFSET))(this);
		}

		::System::Void LHMPCPADBDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LHMPCPADBDK_OFFSET))(this);
		}

		::System::Void NJJBDBOCJOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NJJBDBOCJOD_OFFSET))(this);
		}

		::System::Void GLELFFKHDMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GLELFFKHDMA_OFFSET))(this);
		}

		::System::Boolean OpenSkipUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_OPENSKIPUI_OFFSET))(this);
		}

		::System::Void MEEBAJJGJMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_MEEBAJJGJMK_OFFSET))(this);
		}

		::System::Void DFLBBCJJEKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_DFLBBCJJEKJ_OFFSET))(this);
		}

		::System::Void LAAGODFOAHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LAAGODFOAHB_OFFSET))(this);
		}

		::System::Void EBCDAGECEDG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EBCDAGECEDG_OFFSET))(this, a1);
		}

		::System::Void NPIEODLGCBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NPIEODLGCBN_OFFSET))(this);
		}

		::System::Boolean BPGIHBOCCHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BPGIHBOCCHC_OFFSET))(this);
		}

		::System::Void NHDFEPDLAHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NHDFEPDLAHE_OFFSET))(this);
		}

		::System::Void FGIAKJGOFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FGIAKJGOFKM_OFFSET))(this);
		}

		::System::Void JOCEFAPEFMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JOCEFAPEFMO_OFFSET))(this);
		}

		::System::Void PPHPLNPKJLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PPHPLNPKJLH_OFFSET))(this);
		}

		::System::Void PLMGPMMHDIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_PLMGPMMHDIK_OFFSET))(this, a1);
		}

		::System::Void NLEIACLIKCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NLEIACLIKCH_OFFSET))(this);
		}

		::System::Void JHAOHCBJANK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JHAOHCBJANK_OFFSET))(this);
		}

		::System::Void DPHIABCPHEF(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_DPHIABCPHEF_OFFSET))(this, a1);
		}

		::System::Void JLBKGOLLFKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JLBKGOLLFKJ_OFFSET))(this);
		}

		::System::Void EJLKEGBONJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EJLKEGBONJG_OFFSET))(this);
		}

		::System::Void OBAEKAFHENH(::System::Collections::Generic::IReadOnlyList_1<::OGKIBIPPMOO>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::OGKIBIPPMOO>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_OBAEKAFHENH_OFFSET))(this, a1);
		}

		::System::Void NBOKLDLFAMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_NBOKLDLFAMB_OFFSET))(this);
		}

		::System::Void IDENNPENNCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_IDENNPENNCK_OFFSET))(this);
		}

		::System::Void LJCFGOANDOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LJCFGOANDOM_OFFSET))(this);
		}

		::System::Void BFJKACNFIMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BFJKACNFIMM_OFFSET))(this);
		}

		::System::Void JOKADBKJIGO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JOKADBKJIGO_OFFSET))(this, a1);
		}

		::System::Void JHICOPLKLCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_JHICOPLKLCM_OFFSET))(this, a1);
		}

		::System::Void FNFFOEGCAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_FNFFOEGCAFK_OFFSET))(this);
		}

		::System::Void OKNPDNPMBCL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_OKNPDNPMBCL_OFFSET))(this, a1);
		}

		::System::Void EFLIJELKNCH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_EFLIJELKNCH_OFFSET))(this, a1);
		}

		::System::Void CIANNOFDFKA(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_CIANNOFDFKA_OFFSET))(this, a1, a2);
		}

		::System::Void AHOJKPNJCJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_AHOJKPNJCJF_OFFSET))(this);
		}

		::System::Void BAENABJDIMO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_BAENABJDIMO_OFFSET))(this, a1);
		}

		::System::Void IAIFNMGJJIE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_IAIFNMGJJIE_OFFSET))(this, a1);
		}

		::System::Void GHAHACLENIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GHAHACLENIA_OFFSET))(this);
		}

		::UnityEngine::Transform* LAFODEEIMNH()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_LAFODEEIMNH_OFFSET))(this);
		}

		::System::Single GJIENLJDNGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GJIENLJDNGA_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_CoasterProp()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_COASTERPROP_OFFSET))(this);
		}

		::IIMEBHGNNKP* get_MoveController()
		{
			return ((::IIMEBHGNNKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROLLERCOASTERPUZZLEBOARD_GET_MOVECONTROLLER_OFFSET))(this);
		}

	};
}
