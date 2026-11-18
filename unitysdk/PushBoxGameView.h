#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGGILHEBIAA.h"
#include "unitysdk/LJIBNLBCGFG.h"
#include "unitysdk/PushBoxCell.h"
#include "unitysdk/Share/GridDir.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/EAOGLMKGMGE.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/PushBoxGameView___c__DisplayClass28_0.h"
#include "unitysdk/UnityEngine/Vector3.h"

class FAIKBPENCON;
class FMNAIOANOLK;
class GMPLKJPGNIP;
class GOIKJCHFIIO;
class IANEJNBHNPJ;
class IPMBELDBAJK;
class MIKBKMMKEML;
class OBKNEEOLOPB;
class PushBoxNpcView;
class PushBoxPlayerView;
class PushBoxTileView;
namespace MoleMole { class UIHollowPushBoxGame3DModelController; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityAction; }

#define PUSHBOXGAMEVIEW_BINDUI_OFFSET UNITYSDK_OFFSET(0x1D63CC70)
#define PUSHBOXGAMEVIEW_CANMOVETO_OFFSET UNITYSDK_OFFSET(0x1D6400C0)
#define PUSHBOXGAMEVIEW_CREATENPC_OFFSET UNITYSDK_OFFSET(0x1D63F270)
#define PUSHBOXGAMEVIEW_CREATETILE_OFFSET UNITYSDK_OFFSET(0x1D63F030)
#define PUSHBOXGAMEVIEW_CREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1D641800)
#define PUSHBOXGAMEVIEW_DESTROYVIEW_OFFSET UNITYSDK_OFFSET(0x1D6418E0)
#define PUSHBOXGAMEVIEW_DOGENCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x1D63CFC0)
#define PUSHBOXGAMEVIEW_FRESHCHESSBOARDVIEW_OFFSET UNITYSDK_OFFSET(0x1D63FA40)
#define PUSHBOXGAMEVIEW_GENCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x1D63CCC0)
#define PUSHBOXGAMEVIEW_GETINDEXWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1D63F720)
#define PUSHBOXGAMEVIEW_GETMOVEDIR_OFFSET UNITYSDK_OFFSET(0x1D641420)
#define PUSHBOXGAMEVIEW_GETMOVETARGETINDEX_OFFSET UNITYSDK_OFFSET(0x1D6410B0)
#define PUSHBOXGAMEVIEW_GET_CURBOARDTYPE_OFFSET UNITYSDK_OFFSET(0x1D6410A0)
#define PUSHBOXGAMEVIEW_GET_REALXSIZE_OFFSET UNITYSDK_OFFSET(0x1D63F6D0)
#define PUSHBOXGAMEVIEW_GET_SECTIONUID_OFFSET UNITYSDK_OFFSET(0x1D641BB0)
#define PUSHBOXGAMEVIEW_HIDEALL_OFFSET UNITYSDK_OFFSET(0x1D63E700)
#define PUSHBOXGAMEVIEW_INITALLNPC_OFFSET UNITYSDK_OFFSET(0x1D640840)
#define PUSHBOXGAMEVIEW_INITCHESSPIECES_OFFSET UNITYSDK_OFFSET(0x1D63D900)
#define PUSHBOXGAMEVIEW_INITPLAYER_OFFSET UNITYSDK_OFFSET(0x1D63E260)
#define PUSHBOXGAMEVIEW_ONNPCUPDATE_OFFSET UNITYSDK_OFFSET(0x1D640370)
#define PUSHBOXGAMEVIEW_PLAYFULLSCREENTEXTURE_OFFSET UNITYSDK_OFFSET(0x1D641940)
#define PUSHBOXGAMEVIEW_PLAYINITANIM_OFFSET UNITYSDK_OFFSET(0x1D63EED0)
#define PUSHBOXGAMEVIEW_PLAYRESETANIM_OFFSET UNITYSDK_OFFSET(0x1D63D280)
#define PUSHBOXGAMEVIEW_REFRESHPLAYERAPPEARANCE_OFFSET UNITYSDK_OFFSET(0x1D640300)
#define PUSHBOXGAMEVIEW_REFRESHPLAYERPOS_OFFSET UNITYSDK_OFFSET(0x1D63E370)
#define PUSHBOXGAMEVIEW_SET_SECTIONUID_OFFSET UNITYSDK_OFFSET(0x1D641BC0)
#define PUSHBOXGAMEVIEW_SHOWNPCANDPLAYER_OFFSET UNITYSDK_OFFSET(0x1D63EB30)
#define PUSHBOXGAMEVIEW_TRYENTITYMOVE_OFFSET UNITYSDK_OFFSET(0x1D641BD0)
#define PUSHBOXGAMEVIEW_UPDATESINGLENPC_OFFSET UNITYSDK_OFFSET(0x1D640590)
#define PUSHBOXGAMEVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D63E630)
#define PUSHBOXGAMEVIEW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D642020)
#define PUSHBOXGAMEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D641E60)
#define PUSHBOXGAMEVIEW__INITCHESSPIECES_G____CALCENTERPOS_28_0_OFFSET UNITYSDK_OFFSET(0x1D63F690)
#define PUSHBOXGAMEVIEW__INITCHESSPIECES_G____CREATELOGICINFO_28_1_OFFSET UNITYSDK_OFFSET(0x1D63F480)
#define PUSHBOXGAMEVIEW__PLAYINITANIM_B__24_0_OFFSET UNITYSDK_OFFSET(0x1D6420D0)
#define PUSHBOXGAMEVIEW__PLAYINITANIM_B__24_1_OFFSET UNITYSDK_OFFSET(0x1D6423D0)

inline static constexpr unsigned int PushBoxGameView_TypeDefinitionIndex = 61722;

class PushBoxGameView : public ::UnityEngine::MonoBehaviour
{
public:
	static ::Il2CppArray<::Share::GridDir>** StaticGet_GRID_DIR_FOUR()
	{
		return (::Il2CppArray<::Share::GridDir>**)Il2CppClass::FromTypeDefinitionIndex(PushBoxGameView_TypeDefinitionIndex)->GetStaticField(0x4B310);
	}
	// static const ::System::Int32 PLAY_UI_MAZE_MINIGAME_PUSHBOX_RESTART = 0x84C1EC; // 0x0
	// static const ::System::Int32 _placeholderNumRow = 0x0; // 0x0
	// static const ::System::Int32 _placeholderNunCol = 0x0; // 0x0
	::UnityEngine::GameObject* BlockTemplate; // 0x18
	::UnityEngine::GameObject* NpcTemplate; // 0x20
	::UnityEngine::Transform* BlockParent; // 0x28
	::UnityEngine::Transform* Player; // 0x30
	::UnityEngine::SpriteRenderer* FullScreenRender; // 0x38
	::UnityEngine::Vector2 TileSize; // 0x40
	::System::Int32 FullScreenTileCount; // 0x48
	::System::Single CameraSizePerTile; // 0x4C
	::UnityEngine::Camera* CameraTrans; // 0x50
	::System::String* GridTextureKey; // 0x58
	::System::String* ResetTextureKey; // 0x60
	::System::Single FadeInWaitTime; // 0x68
	::System::Single FadeInDuration; // 0x6C
	::System::Single FadeInFinishWaitTime; // 0x70
	::System::Single FadeOutDuration; // 0x74
	::System::Boolean inited; // 0x78
	::System::Byte _padding0[0x7];
	::MIKBKMMKEML* spriteRenderAnim; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* _toDeleteNpcList; // 0x88
	::LJIBNLBCGFG _SectionUID_k__BackingField; // 0x90
	::GOIKJCHFIIO* _spriteResourceProxy; // 0x98
	::System::Int32 _realXmin; // 0xA0
	::System::Int32 _realXmax; // 0xA4
	::System::Int32 _realYmin; // 0xA8
	::System::Int32 _realYmax; // 0xAC
	::System::Boolean _isInitMapping; // 0xB0
	::System::Byte _padding1[0x7];
	::OBKNEEOLOPB* _hollowModel; // 0xB8
	::IANEJNBHNPJ* _chessboardServerInfo; // 0xC0
	::System::Collections::Generic::Dictionary_2<::PushBoxCell, ::PushBoxTileView*>* _allChessPieces; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PushBoxNpcView*>* _allNpcDic; // 0xD0
	::PushBoxPlayerView* _playerView; // 0xD8
	::MoleMole::UIHollowPushBoxGame3DModelController* _controller; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW__CCTOR_OFFSET))();
	}

	::System::Void BindUI(::MoleMole::UIHollowPushBoxGame3DModelController* controller)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowPushBoxGame3DModelController*))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_BINDUI_OFFSET))(this, controller);
	}

	::System::Void GenChessboard(::LJIBNLBCGFG sectionId, ::MoleMole::HollowChessboard::HollowChessboardUID chessboardUid)
	{
		return ((::System::Void(*)(::PVOID, ::LJIBNLBCGFG, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_GENCHESSBOARD_OFFSET))(this, sectionId, chessboardUid);
	}

	::System::Void DoGenChessboard(::LJIBNLBCGFG sectionId, ::MoleMole::HollowChessboard::HollowChessboardUID chessboardUid)
	{
		return ((::System::Void(*)(::PVOID, ::LJIBNLBCGFG, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_DOGENCHESSBOARD_OFFSET))(this, sectionId, chessboardUid);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_UPDATE_OFFSET))(this);
	}

	::System::Void HideAll()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_HIDEALL_OFFSET))(this);
	}

	::System::Void ShowNPCAndPlayer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_SHOWNPCANDPLAYER_OFFSET))(this);
	}

	::System::Void PlayInitAnim()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_PLAYINITANIM_OFFSET))(this);
	}

	::System::Void PlayResetAnim(::System::Action* genChessboard, ::System::String* overrideKey)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_PLAYRESETANIM_OFFSET))(this, genChessboard, overrideKey);
	}

	::PushBoxTileView* CreateTile(::MoleMole::HollowChessboard::HollowCell cell, ::System::Boolean initMap)
	{
		return ((::PushBoxTileView*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_CREATETILE_OFFSET))(this, cell, initMap);
	}

	::PushBoxNpcView* CreateNpc(::System::Int32 npcTemplateID, ::System::Boolean initMap)
	{
		return ((::PushBoxNpcView*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_CREATENPC_OFFSET))(this, npcTemplateID, initMap);
	}

	::System::Void InitChessPieces(::System::Collections::Generic::IReadOnlyDictionary_2<::EAOGLMKGMGE, ::FMNAIOANOLK*>* gridInfo)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::EAOGLMKGMGE, ::FMNAIOANOLK*>*))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_INITCHESSPIECES_OFFSET))(this, gridInfo);
	}

	::System::Int32 get_RealXSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_GET_REALXSIZE_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetIndexWorldPos(::MoleMole::HollowChessboard::HollowCell hollowCell)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_GETINDEXWORLDPOS_OFFSET))(this, hollowCell);
	}

	::System::Void FreshChessboardView(::GMPLKJPGNIP* value)
	{
		return ((::System::Void(*)(::PVOID, ::GMPLKJPGNIP*))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_FRESHCHESSBOARDVIEW_OFFSET))(this, value);
	}

	::System::Boolean CanMoveTo(::MoleMole::HollowChessboard::HollowCell index)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_CANMOVETO_OFFSET))(this, index);
	}

	::System::Void InitPlayer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_INITPLAYER_OFFSET))(this);
	}

	::System::Void RefreshPlayerPos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_REFRESHPLAYERPOS_OFFSET))(this);
	}

	::System::Void RefreshPlayerAppearance(::System::String* key)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_REFRESHPLAYERAPPEARANCE_OFFSET))(this, key);
	}

	::System::Void OnNpcUpdate(::System::Int32 npcId)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_ONNPCUPDATE_OFFSET))(this, npcId);
	}

	::System::Void InitAllNpc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_INITALLNPC_OFFSET))(this);
	}

	::System::Void UpdateSingleNpc(::FAIKBPENCON* npc, ::System::Boolean initMap)
	{
		return ((::System::Void(*)(::PVOID, ::FAIKBPENCON*, ::System::Boolean))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_UPDATESINGLENPC_OFFSET))(this, npc, initMap);
	}

	::JGGILHEBIAA get_CurBoardType()
	{
		return ((::JGGILHEBIAA(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_GET_CURBOARDTYPE_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell GetMoveTargetIndex(::MoleMole::HollowChessboard::HollowCell sourceIndex, ::Share::GridDir moveDir)
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::Share::GridDir))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_GETMOVETARGETINDEX_OFFSET))(this, sourceIndex, moveDir);
	}

	::Share::GridDir GetMoveDir(::MoleMole::HollowChessboard::HollowCell source, ::MoleMole::HollowChessboard::HollowCell target)
	{
		return ((::Share::GridDir(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_GETMOVEDIR_OFFSET))(this, source, target);
	}

	::System::Void CreateView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_CREATEVIEW_OFFSET))(this);
	}

	::System::Void DestroyView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_DESTROYVIEW_OFFSET))(this);
	}

	::System::Void PlayFullScreenTexture(::System::String* textureSheetKey, ::UnityEngine::Events::UnityAction* onEnd, ::System::Boolean useRealXSizeAsFullScreen)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Events::UnityAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_PLAYFULLSCREENTEXTURE_OFFSET))(this, textureSheetKey, onEnd, useRealXSizeAsFullScreen);
	}

	::LJIBNLBCGFG get_SectionUID()
	{
		return ((::LJIBNLBCGFG(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_GET_SECTIONUID_OFFSET))(this);
	}

	::System::Void set_SectionUID(::LJIBNLBCGFG value)
	{
		return ((::System::Void(*)(::PVOID, ::LJIBNLBCGFG))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_SET_SECTIONUID_OFFSET))(this, value);
	}

	::System::Void TryEntityMove(::MoleMole::HollowChessboard::HollowCell sourceIndex, ::MoleMole::HollowChessboard::HollowCell targetIndex, ::System::Action_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>* onMoveSuccess, ::System::Action* onMoveFail)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Action_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>*, ::System::Action*))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW_TRYENTITYMOVE_OFFSET))(this, sourceIndex, targetIndex, onMoveSuccess, onMoveFail);
	}

	::System::Void _PlayInitAnim_b__24_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW__PLAYINITANIM_B__24_0_OFFSET))(this);
	}

	::System::Void _PlayInitAnim_b__24_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW__PLAYINITANIM_B__24_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 _InitChessPieces_g____calCenterPos_28_0(::PushBoxGameView___c__DisplayClass28_0& param_0, ::System::Object*& param_1, ::System::Object*& param_2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::PushBoxGameView___c__DisplayClass28_0&, ::System::Object*&, ::System::Object*&))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW__INITCHESSPIECES_G____CALCENTERPOS_28_0_OFFSET))(this, param_0, param_1, param_2);
	}

	::IPMBELDBAJK* _InitChessPieces_g____createLogicInfo_28_1(::PushBoxGameView___c__DisplayClass28_0& param_0, ::System::Object*& param_1)
	{
		return ((::IPMBELDBAJK*(*)(::PVOID, ::PushBoxGameView___c__DisplayClass28_0&, ::System::Object*&))((::PBYTE)hIl2Cpp + PUSHBOXGAMEVIEW__INITCHESSPIECES_G____CREATELOGICINFO_28_1_OFFSET))(this, param_0, param_1);
	}
};
