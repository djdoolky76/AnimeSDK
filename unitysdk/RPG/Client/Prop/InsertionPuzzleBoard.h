#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEKEOHJKJNA.h"
#include "unitysdk/NBCAOOBFHEA.h"
#include "unitysdk/RPG/Client/Prop/BlockScreenHexPuzzle.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DPLLFKALLIN;
class NEOCEOCDEAF;
namespace RPG::Client::Prop { class InsertionPuzzleItem; }
namespace RPG::Client::Prop { class InteractPuzzleItemBase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ACAOFGHJGCK_OFFSET UNITYSDK_OFFSET(0xDCF6260)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ADHCIACKHHO_OFFSET UNITYSDK_OFFSET(0xDCF0B80)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_AMEJADBOFOE_OFFSET UNITYSDK_OFFSET(0xDCF1BC0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCF8F80)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCF8D10)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCF15F0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DMMHNBBBGAG_OFFSET UNITYSDK_OFFSET(0xDCF6E50)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DPEGKBOBIJF_OFFSET UNITYSDK_OFFSET(0xDCF6F10)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_EXIT_OFFSET UNITYSDK_OFFSET(0xDCF6800)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FFKJKJCAJPK_OFFSET UNITYSDK_OFFSET(0xDCF7BB0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FFMHCECDLBO_OFFSET UNITYSDK_OFFSET(0xDCF80D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FLGNDHEALIH_OFFSET UNITYSDK_OFFSET(0xDCF0F10)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FLIENACFGGO_OFFSET UNITYSDK_OFFSET(0xDCF8320)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_GDKLJNPCLAP_OFFSET UNITYSDK_OFFSET(0xDCF7C50)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_GJLPIAKNMND_OFFSET UNITYSDK_OFFSET(0xDCF7820)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_HBBBGCOALBJ_OFFSET UNITYSDK_OFFSET(0xDCF8C20)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_HMKMFCBCMAC_OFFSET UNITYSDK_OFFSET(0xDCF59B0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITBOARD_OFFSET UNITYSDK_OFFSET(0xDCEEA20)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMSPOSITION_OFFSET UNITYSDK_OFFSET(0xDCEF460)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDCEECA0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCEE640)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDCF15A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_KDDBBOAGCNP_OFFSET UNITYSDK_OFFSET(0xDCF7660)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_KEECGBIFEHN_OFFSET UNITYSDK_OFFSET(0xDCF7A60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_LFJGACJLKMB_OFFSET UNITYSDK_OFFSET(0xDCF6090)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_LHGMNNFJONB_OFFSET UNITYSDK_OFFSET(0xDCF0C50)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_MCIOLMPKPHH_OFFSET UNITYSDK_OFFSET(0xDCF53B0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_MLALGKDGFKL_OFFSET UNITYSDK_OFFSET(0xDCF3000)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_NDAFNFLHMKP_OFFSET UNITYSDK_OFFSET(0xDCF8B30)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_NDEPFKACAAD_OFFSET UNITYSDK_OFFSET(0xDCF5510)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_OAKAIPNEHEG_OFFSET UNITYSDK_OFFSET(0xDCF6480)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_OIGDECCCHJJ_OFFSET UNITYSDK_OFFSET(0xDCF5480)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONCLICKEMPTY_OFFSET UNITYSDK_OFFSET(0xDCF3490)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDCF39E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONHOVERITEM_OFFSET UNITYSDK_OFFSET(0xDCF36D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET UNITYSDK_OFFSET(0xDCF6900)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET UNITYSDK_OFFSET(0xDCF69A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATEANTICLOCKWISE_OFFSET UNITYSDK_OFFSET(0xDCF6C70)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATECLOCKWISE_OFFSET UNITYSDK_OFFSET(0xDCF6D20)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET UNITYSDK_OFFSET(0xDCF6BE0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYSWITCHTOJOYSTICK_OFFSET UNITYSDK_OFFSET(0xDCF6DD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERRESTART_OFFSET UNITYSDK_OFFSET(0xDCF11F0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERROTATEAROUNDCENTER_OFFSET UNITYSDK_OFFSET(0xDCF25D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERSELECTAROUNDCENTER_OFFSET UNITYSDK_OFFSET(0xDCF3560)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLBHHCEOFOP_OFFSET UNITYSDK_OFFSET(0xDCF3C00)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PPJMFFLAEOI_OFFSET UNITYSDK_OFFSET(0xDCF79E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHCURSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xDCF48A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHINSERTIONMATCHSTATE_OFFSET UNITYSDK_OFFSET(0xDCF7320)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHTRANSFERITEMMATERIALS_OFFSET UNITYSDK_OFFSET(0xDCEF720)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCF1180)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RETREAT_OFFSET UNITYSDK_OFFSET(0xDCF6380)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDCF0670)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_TRANSFERCURRENTINSERTIONITEM_OFFSET UNITYSDK_OFFSET(0xDCF5DD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCF1E40)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__PLAYERRESTART_B__16_0_OFFSET UNITYSDK_OFFSET(0xDCF8FC0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleBoard_TypeDefinitionIndex = 78623;

	class InsertionPuzzleBoard : public ::RPG::Client::Prop::BlockScreenHexPuzzle
	{
	public:
		::UnityEngine::Transform* BoardRoot; // 0xF0
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0xF8
		::UnityEngine::AnimationCurve* RevertSpeedCurve; // 0x100
		::UnityEngine::GameObject* TransferEffectPrefab; // 0x108
		::System::Single RotateDuration; // 0x110
		::System::Single RevertDuration; // 0x114
		::System::Single StartPuzzleScaleDuration; // 0x118
		::System::Single FinishPerformDuration; // 0x11C
		::System::Single AMHGNPIEJBL; // 0x120
		::System::Byte _padding0[0x4];
		::System::String* OnInsertionPuzzleResetCustomEventString; // 0x128
		::System::String* SuccessEffect; // 0x130
		::System::String* EvInsertionSuccess; // 0x138
		::System::String* EvInsertionMove; // 0x140
		::System::String* EvInsertionMatch; // 0x148
		::System::String* EvInsertionBlock; // 0x150
		::System::String* EvInsertionMissMatch; // 0x158
		::System::String* EvInsertionTeleport; // 0x160
		::System::String* EvInsertionClick; // 0x168
		::System::Boolean IsGameStarted; // 0x170
		::System::Boolean BJGPMNHEOCE; // 0x171
		::System::Byte _padding1[0x2];
		::System::Int32 DFMNNJIHGBG; // 0x174
		::System::Int32 GJGNELGEAHJ; // 0x178
		::System::Single MINONPAGGNM; // 0x17C
		::RPG::GameCore::PropComponent* CLGHBANCIDF; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* GCIKKMGIPIO; // 0x188
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllSortedTargets; // 0x190
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllInsertions; // 0x198
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllObstacles; // 0x1A0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllBoards; // 0x1A8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* _AllTransfers; // 0x1B0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* KGBKLAPGFMN; // 0x1B8
		::RPG::Client::Prop::InsertionPuzzleItem* IGJFHCJPMHJ; // 0x1C0
		::RPG::Client::Prop::InsertionPuzzleItem* LBHICGEJMFJ; // 0x1C8
		::RPG::Client::Prop::InsertionPuzzleItem* PMDHDCPKHNE; // 0x1D0
		::NBCAOOBFHEA AHKAPKHIGNF; // 0x1D8
		::UnityEngine::Vector2 MLKKADCAMJH; // 0x1E0
		::Il2CppArray<::NBCAOOBFHEA>* GNKPNFHJCJH; // 0x1E8
		::System::Collections::Generic::Stack_1<::BEKEOHJKJNA>* IBDOFMHKNFF; // 0x1F0
		::BEKEOHJKJNA BMCMHLNHKMN; // 0x1F8
		::System::Single PGMIOKKLHIE; // 0x218
		::System::Byte _padding2[0x4];
		::NEOCEOCDEAF* LBAJPEHBGGD; // 0x220
		::System::Int32 DPEJKAFCFEJ; // 0x228
		::System::Boolean GKLMPOMMHNH; // 0x22C
		::System::Byte _padding3[0x3];
		::System::Int32 GEBKEABCMHJ; // 0x230
		::System::Boolean DAJJJKKPDEL; // 0x234
		::System::Byte _padding4[0x3];
		::System::Int32 AMMGGCGKHLM; // 0x238
		static ::System::String** StaticGet_EDBHFLBEFNC()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "InsertionPuzzleBoard")->GetStaticField(0x41810);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void OnClickEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONCLICKEMPTY_OFFSET))(this);
		}

		::System::Void OnHoverItem(::RPG::Client::Prop::InteractPuzzleItemBase* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InteractPuzzleItemBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONHOVERITEM_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITBOARD_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void InitItemsPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_INITITEMSPOSITION_OFFSET))(this);
		}

		::System::Void PlayerSelectAroundCenter(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERSELECTAROUNDCENTER_OFFSET))(this, a1);
		}

		::System::Void PlayerRotateAroundCenter(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERROTATEAROUNDCENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TransferCurrentInsertionItem(::RPG::Client::Prop::InsertionPuzzleItem* a1, ::DPLLFKALLIN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*, ::DPLLFKALLIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_TRANSFERCURRENTINSERTIONITEM_OFFSET))(this, a1, a2);
		}

		::System::Void Retreat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_RETREAT_OFFSET))(this);
		}

		::System::Void PlayerRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLAYERRESTART_OFFSET))(this);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_EXIT_OFFSET))(this);
		}

		::System::Void OnNotifyClickExit(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickReset(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKRESET_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickUndo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKUNDO_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickRotateAntiClockwise(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATEANTICLOCKWISE_OFFSET))(this, a1);
		}

		::System::Void OnNotifyClickRotateClockwise(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYCLICKROTATECLOCKWISE_OFFSET))(this, a1);
		}

		::System::Void OnNotifySwitchToJoyStick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ONNOTIFYSWITCHTOJOYSTICK_OFFSET))(this, a1);
		}

		::System::Void ADHCIACKHHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ADHCIACKHHO_OFFSET))(this);
		}

		::System::Void RefreshCurSelectState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHCURSELECTSTATE_OFFSET))(this, a1);
		}

		::System::Void RefreshTransferItemMaterials()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHTRANSFERITEMMATERIALS_OFFSET))(this);
		}

		::System::Void RefreshInsertionMatchState(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_REFRESHINSERTIONMATCHSTATE_OFFSET))(this, a1);
		}

		::System::Void LHGMNNFJONB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_LHGMNNFJONB_OFFSET))(this);
		}

		::System::Void FLGNDHEALIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FLGNDHEALIH_OFFSET))(this);
		}

		::System::Void HMKMFCBCMAC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_HMKMFCBCMAC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AMEJADBOFOE(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_AMEJADBOFOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PPJMFFLAEOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PPJMFFLAEOI_OFFSET))(this);
		}

		::System::Void MLALGKDGFKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_MLALGKDGFKL_OFFSET))(this);
		}

		::System::Void FFKJKJCAJPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FFKJKJCAJPK_OFFSET))(this);
		}

		::System::Void GDKLJNPCLAP(::RPG::Client::Prop::InsertionPuzzleItem* a1, ::DPLLFKALLIN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*, ::DPLLFKALLIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_GDKLJNPCLAP_OFFSET))(this, a1, a2);
		}

		::System::Void OAKAIPNEHEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_OAKAIPNEHEG_OFFSET))(this);
		}

		::System::Void FFMHCECDLBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FFMHCECDLBO_OFFSET))(this);
		}

		::System::Void FLIENACFGGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_FLIENACFGGO_OFFSET))(this);
		}

		::System::Boolean KDDBBOAGCNP(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_KDDBBOAGCNP_OFFSET))(this, a1);
		}

		::System::Boolean GJLPIAKNMND(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_GJLPIAKNMND_OFFSET))(this, a1);
		}

		::System::Boolean KEECGBIFEHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_KEECGBIFEHN_OFFSET))(this);
		}

		::System::Boolean NDEPFKACAAD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_NDEPFKACAAD_OFFSET))(this, a1, a2);
		}

		::System::Void PLBHHCEOFOP(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_PLBHHCEOFOP_OFFSET))(this, a1, a2, a3, a4);
		}

		::NBCAOOBFHEA MCIOLMPKPHH(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2, ::System::Boolean a3)
		{
			return ((::NBCAOOBFHEA(*)(::PVOID, ::NBCAOOBFHEA, ::NBCAOOBFHEA, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_MCIOLMPKPHH_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Prop::InsertionPuzzleItem* LFJGACJLKMB(::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::RPG::Client::Prop::InsertionPuzzleItem*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_LFJGACJLKMB_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Prop::InsertionPuzzleItem* DMMHNBBBGAG(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::InsertionPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DMMHNBBBGAG_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* DPEGKBOBIJF(::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::InsertionPuzzleItem*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_DPEGKBOBIJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 NDAFNFLHMKP(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::NBCAOOBFHEA, ::NBCAOOBFHEA, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_NDAFNFLHMKP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 HBBBGCOALBJ(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::NBCAOOBFHEA, ::NBCAOOBFHEA, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_HBBBGCOALBJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OIGDECCCHJJ(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBCAOOBFHEA, ::NBCAOOBFHEA, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_OIGDECCCHJJ_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Prop::InsertionPuzzleItem* ACAOFGHJGCK(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::RPG::Client::Prop::InsertionPuzzleItem*(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD_ACAOFGHJGCK_OFFSET))(this, a1);
		}

		::System::Void _PlayerRestart_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEBOARD__PLAYERRESTART_B__16_0_OFFSET))(this);
		}

	};
}
