#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace RPG::Client::Prop { class WormCompassBlockGridData; }
namespace RPG::Client::Prop { class WormCompassFinishRoute; }
namespace RPG::Client::Prop { class WormCompassItemGridData; }
namespace RPG::Client::Prop { class WormCompassPuzzleBlock; }
namespace RPG::Client::Prop { class WormCompassPuzzleItem; }
namespace RPG::Client::Prop { class WormCompassPuzzleItemBase; }
namespace RPG::Client::Prop { class WormCompassPuzzleRingController; }
namespace RPG::Client::Prop { class WormCompassPuzzleTreasureBox; }
namespace RPG::Client::Prop { class WormCompassPuzzleWormAvatar; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ABLMNAIGGIJ_OFFSET UNITYSDK_OFFSET(0xDDEB530)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_AEEODHOLLLC_OFFSET UNITYSDK_OFFSET(0xDDEBDC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_BMILLNAEHKK_OFFSET UNITYSDK_OFFSET(0xDDE73C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CANCELSELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xDDEBA30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDECFC0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CLBKBPIDINN_OFFSET UNITYSDK_OFFSET(0xDDEAEA0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0xDDECC40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDECE40)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDE7D10)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DJOMDIEEOFN_OFFSET UNITYSDK_OFFSET(0xDDE7620)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DMKONGHDOFP_OFFSET UNITYSDK_OFFSET(0xDDEC890)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_EGBCHDILHJG_OFFSET UNITYSDK_OFFSET(0xDDE3620)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETEFFECTPARAMS_OFFSET UNITYSDK_OFFSET(0xDDE3200)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETFINISHTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xDDEACE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETITEM_OFFSET UNITYSDK_OFFSET(0xDDEA7C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIBLOCK_OFFSET UNITYSDK_OFFSET(0xDDEAA60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIITEM_OFFSET UNITYSDK_OFFSET(0xDDEA910)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETROUTEFINISH_OFFSET UNITYSDK_OFFSET(0xDDEAC90)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETSELECTEFFECTPATH_OFFSET UNITYSDK_OFFSET(0xDDE2430)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xDDE89E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_HIDEALLSHOWITEMS_OFFSET UNITYSDK_OFFSET(0xDDE7850)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_IBLICJOFKBE_OFFSET UNITYSDK_OFFSET(0xDDE57F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDE2490)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISBLOCK_OFFSET UNITYSDK_OFFSET(0xDDEABB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDDE90B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISTREASUREBOX_OFFSET UNITYSDK_OFFSET(0xDDE8900)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_JFNOKBKOFBG_OFFSET UNITYSDK_OFFSET(0xDDEA770)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_JNNMDDIDGKE_OFFSET UNITYSDK_OFFSET(0xDDE2C30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_KMLEOAJNMLG_OFFSET UNITYSDK_OFFSET(0xDDE7E70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_MDEHCJBPHBP_OFFSET UNITYSDK_OFFSET(0xDDEAD30)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_MGCGCLOBCGF_OFFSET UNITYSDK_OFFSET(0xDDE6A90)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCELCLICK_OFFSET UNITYSDK_OFFSET(0xDDEC6F0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCEL_OFFSET UNITYSDK_OFFSET(0xDDEB8C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDDEC900)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONLEFT_OFFSET UNITYSDK_OFFSET(0xDDEAF00)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONRIGHT_OFFSET UNITYSDK_OFFSET(0xDDEB130)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONLEFTROTATION_OFFSET UNITYSDK_OFFSET(0xDDEB360)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRESETCLICK_OFFSET UNITYSDK_OFFSET(0xDDEC640)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRIGHTROTATION_OFFSET UNITYSDK_OFFSET(0xDDEB410)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONSTARTBTN_OFFSET UNITYSDK_OFFSET(0xDDEB4C0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_PFLIKMPCGDF_OFFSET UNITYSDK_OFFSET(0xDDE5920)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDE8FB0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ROTATERING_OFFSET UNITYSDK_OFFSET(0xDDEA170)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_SELECTEFFECT_OFFSET UNITYSDK_OFFSET(0xDDEC460)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDE58D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDE9100)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__INITPUZZLE_B__47_0_OFFSET UNITYSDK_OFFSET(0xDDED1B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleBoard_TypeDefinitionIndex = 78926;

	class WormCompassPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Int32 Row; // 0x48
		::System::Int32 Col; // 0x4C
		::UnityEngine::GameObject* ItemPrefab; // 0x50
		::UnityEngine::GameObject* BlockPrefab; // 0x58
		::UnityEngine::GameObject* RingPrefab; // 0x60
		::UnityEngine::GameObject* AvatarPrefab; // 0x68
		::UnityEngine::GameObject* TreasureBoxPrefab; // 0x70
		::UnityEngine::GameObject* ConfirmButton; // 0x78
		::RPG::Client::Prop::WormCompassItemGridData* Items; // 0x80
		::RPG::Client::Prop::WormCompassBlockGridData* Blocks; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassFinishRoute*>* FinishRoutes; // 0x90
		::System::String* SavedGroupPropertyName; // 0x98
		::System::String* StartScanEffectPath; // 0xA0
		::RPG::Client::TriggerEffectParams* BLIHEJNLKCE; // 0xA8
		::System::String* SelectingEffectPath; // 0xB0
		::System::String* NightSelectingEffectPath; // 0xB8
		::RPG::Client::TriggerEffectParams* OCFPGMMCNEL; // 0xC0
		::RPG::Client::MonoEffect* PLEJLCBFGPK; // 0xC8
		::System::Boolean IsDayPuzzle; // 0xD0
		::System::Byte _padding0[0x3];
		::System::Single ItemDelayShowAfterScan; // 0xD4
		::RPG::GameCore::DynamicString* RouteReadyEvent; // 0xD8
		::System::Single RouteFinishDelay; // 0xE0
		::System::Single FadeOutDelay; // 0xE4
		::System::Single JDFOMKLAHHH; // 0xE8
		::System::Boolean BCJOKIAACGL; // 0xEC
		::System::Boolean PEBIGEKMOIO; // 0xED
		::System::Byte _padding1[0x2];
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleRingController*>* MMMACKMEMOM; // 0xF0
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* LDBLEDBFCIP; // 0xF8
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleBlock*>* FBGDOJMIFAA; // 0x100
		::RPG::Client::Prop::WormCompassPuzzleWormAvatar* MLFLPFMLKNF; // 0x108
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleTreasureBox*>* LILKJIOAGND; // 0x110
		::System::Int32 JBNMNBCIFEP; // 0x118
		::System::Boolean GNELNOEHDOJ; // 0x11C
		::System::Boolean APBGMHOKGFP; // 0x11D
		::System::Boolean AGOJGCEPLCB; // 0x11E
		::System::Boolean MHLHNOLKFNE; // 0x11F
		::System::Boolean EBKJLMIMDNF; // 0x120
		::System::Byte _padding2[0x7];
		::RPG::Client::Prop::WormCompassFinishRoute* FFHFMJDCKFE; // 0x128
		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GFJELPEPEBC; // 0x130
		::UnityEngine::UI::Image* IGHDBONJEEP; // 0x138
		::RPG::Client::Prop::WormCompassPuzzleItem* StartPoint; // 0x140
		::RPG::Client::Prop::WormCompassPuzzleItem* EndPoint; // 0x148
		::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* LMFPAPJFGJL; // 0x150
		::System::Int32 AAEOFPCBKBI; // 0x158
		::System::Int32 EIMFHKCHCGE; // 0x15C
		::System::Int32 NNCAJLGKKAK; // 0x160
		::System::Byte _padding3[0x4];
		::System::String* FJOFBMCPCLM; // 0x168
		::System::Int32 ABDINKCBNJM; // 0x170
		static ::RPG::Client::Prop::WormCompassPuzzleWormAvatar** StaticGet_GlobalAvatar()
		{
			return (::RPG::Client::Prop::WormCompassPuzzleWormAvatar**)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x5FBC0);
		}

		static ::System::String** StaticGet__GameKey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x5FBC8);
		}

		static ::System::String** StaticGet__RouteStartSoundEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x5FBD0);
		}

		static ::System::String** StaticGet__PuzzleFinishSoundEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x5FBD8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FIIICPCKMGM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x5FBE0);
		}

		static ::System::String** StaticGet__RouteStopSoundEvent()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x5FBE8);
		}

		static ::Il2CppArray<::System::String*>** StaticGet__SelectRingSoundEvent()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x5FBF0);
		}

		static ::System::UInt32* StaticGet_ACHIEVEMENT_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x14740);
		}

		static ::System::Int32* StaticGet_AKOMNBHHEHK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x14744);
		}

		static ::System::Int32* StaticGet_LHAGNEKFEFD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x14748);
		}

		static ::System::Int32* StaticGet_HBOJKDNBMOI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x1474C);
		}

		static ::System::Int32* StaticGet_ECNGBAKAFAD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "WormCompassPuzzleBoard")->GetStaticField(0x14750);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::String* GetSelectEffectPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETSELECTEFFECTPATH_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNNMDDIDGKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_JNNMDDIDGKE_OFFSET))(this);
		}

		::System::Void EGBCHDILHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_EGBCHDILHJG_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void PFLIKMPCGDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_PFLIKMPCGDF_OFFSET))(this, a1);
		}

		::System::Void DJOMDIEEOFN(::RPG::Client::Prop::WormCompassPuzzleItemBase* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItemBase*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DJOMDIEEOFN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HideAllShowItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_HIDEALLSHOWITEMS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void MGCGCLOBCGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_MGCGCLOBCGF_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void RotateRing(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ROTATERING_OFFSET))(this, a1, a2);
		}

		::System::Void JFNOKBKOFBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_JFNOKBKOFBG_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleItem* GetItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassPuzzleItem* GetOriItem(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleItem*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIITEM_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassPuzzleBlock* GetOriBlock(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleBlock*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETORIBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsBlock(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISBLOCK_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTreasureBox(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ISTREASUREBOX_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::WormCompassFinishRoute* GetRouteFinish()
		{
			return ((::RPG::Client::Prop::WormCompassFinishRoute*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETROUTEFINISH_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GetFinishTreasureBox()
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleTreasureBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETFINISHTREASUREBOX_OFFSET))(this);
		}

		::RPG::Client::Prop::WormCompassPuzzleTreasureBox* GetTreasureBox(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Prop::WormCompassPuzzleTreasureBox*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETTREASUREBOX_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::GameObject* MDEHCJBPHBP(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_MDEHCJBPHBP_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TriggerEffectParams* GetEffectParams(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Nullable* a3, ::System::Nullable* a4, ::UnityEngine::Transform* a5, ::System::Action* a6)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::System::String*, ::UnityEngine::Vector3, ::System::Nullable*, ::System::Nullable*, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_GETEFFECTPARAMS_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CLBKBPIDINN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CLBKBPIDINN_OFFSET))(this);
		}

		::System::Void OnDirectionLeft(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONLEFT_OFFSET))(this, a1);
		}

		::System::Void OnDirectionRight(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDIRECTIONRIGHT_OFFSET))(this, a1);
		}

		::System::Void OnLeftRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONLEFTROTATION_OFFSET))(this, a1);
		}

		::System::Void OnRightRotation(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRIGHTROTATION_OFFSET))(this, a1);
		}

		::System::Void OnStartBtn(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONSTARTBTN_OFFSET))(this, a1);
		}

		::System::Void OnCancel(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCEL_OFFSET))(this, a1);
		}

		::System::Void ABLMNAIGGIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ABLMNAIGGIJ_OFFSET))(this);
		}

		::System::Void AEEODHOLLLC(::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::WormCompassPuzzleItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_AEEODHOLLLC_OFFSET))(this, a1);
		}

		::System::Void IBLICJOFKBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_IBLICJOFKBE_OFFSET))(this);
		}

		::System::Void OnResetClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONRESETCLICK_OFFSET))(this, a1);
		}

		::System::Void OnCancelClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONCANCELCLICK_OFFSET))(this);
		}

		::System::Void DMKONGHDOFP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_DMKONGHDOFP_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void CPNEMOBKHEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CPNEMOBKHEL_OFFSET))(this);
		}

		::System::Void SelectEffect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_SELECTEFFECT_OFFSET))(this, a1);
		}

		::System::Void CancelSelectEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_CANCELSELECTEFFECT_OFFSET))(this);
		}

		::System::Void BMILLNAEHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_BMILLNAEHKK_OFFSET))(this);
		}

		::System::Void KMLEOAJNMLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD_KMLEOAJNMLG_OFFSET))(this);
		}

		::System::Void _InitPuzzle_b__47_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEBOARD__INITPUZZLE_B__47_0_OFFSET))(this, a1, a2);
		}

	};
}
