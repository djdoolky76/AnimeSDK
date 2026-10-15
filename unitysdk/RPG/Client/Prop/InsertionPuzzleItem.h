#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBCAOOBFHEA.h"
#include "unitysdk/RPG/Client/Prop/BaseItemState.h"
#include "unitysdk/RPG/Client/Prop/HexPuzzleItemBase.h"
#include "unitysdk/RPG/Client/Prop/InsertionItemState.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DEBEAKKOHLN;
class DPLLFKALLIN;
class NEOCEOCDEAF;
namespace RPG::Client::Prop { class InsertionPuzzleItem; }
namespace RPG::Client::Prop { class PuzzleBoardBase; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD03E60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xDD03E40)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETISHOVER_OFFSET UNITYSDK_OFFSET(0xDD00D60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETNEXTCOORD_OFFSET UNITYSDK_OFFSET(0xDD01C20)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0xDCFDFE0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISINANIMATION_OFFSET UNITYSDK_OFFSET(0xDD00F10)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEMFAILD_OFFSET UNITYSDK_OFFSET(0xDD02730)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEM_OFFSET UNITYSDK_OFFSET(0xDD026C0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_LMBBJGLAKIJ_OFFSET UNITYSDK_OFFSET(0xDD03850)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD03D20)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVEREXIT_OFFSET UNITYSDK_OFFSET(0xDCFD3D0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVER_OFFSET UNITYSDK_OFFSET(0xDCFD4A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONSELECT_OFFSET UNITYSDK_OFFSET(0xDD03A30)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_RESETLASTCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0xDD01CE0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ROTATE_OFFSET UNITYSDK_OFFSET(0xDCFF370)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETANIMATOR_OFFSET UNITYSDK_OFFSET(0xDD03DD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xDD03BB0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMSTATE_OFFSET UNITYSDK_OFFSET(0xDCFE190)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCENTER_OFFSET UNITYSDK_OFFSET(0xDCFF270)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0xDD02FD0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETDITHERALPHAWITHANIMATION_OFFSET UNITYSDK_OFFSET(0xDD00140)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xDD00DA0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONSTATE_OFFSET UNITYSDK_OFFSET(0xDCFF2E0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETNEXTCOORDANDPOSITION_OFFSET UNITYSDK_OFFSET(0xDCFF200)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETREDHIT_OFFSET UNITYSDK_OFFSET(0xDD01C60)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETROTATECURVE_OFFSET UNITYSDK_OFFSET(0xDD03D80)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETSCALEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0xDCFA4A0)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETTRANSFERSTATE_OFFSET UNITYSDK_OFFSET(0xDD00320)
#define RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_TICK_OFFSET UNITYSDK_OFFSET(0xDCFBD20)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int InsertionPuzzleItem_TypeDefinitionIndex = 78634;

	class InsertionPuzzleItem : public ::RPG::Client::Prop::HexPuzzleItemBase
	{
	public:
		::System::Boolean IsRefreshPosition; // 0x30
		::System::Boolean IsInteractable; // 0x31
		::System::Boolean IsDisable; // 0x32
		::System::Boolean IsRetreat; // 0x33
		::System::Boolean IsExit; // 0x34
		::System::Boolean IsTarget; // 0x35
		::System::Boolean IsInsertion; // 0x36
		::System::Boolean IsBlock; // 0x37
		::System::Boolean IsTransfer; // 0x38
		::System::Boolean IsBoard; // 0x39
		::System::Boolean IsBoundary; // 0x3A
		::System::Byte _padding0[0x1];
		::System::Int32 InsertionMatchID; // 0x3C
		::System::Int32 TransferMatchID; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::Animator* TargetAnimator; // 0x48
		::UnityEngine::GameObject* TransferEffect; // 0x50
		::System::Single ItemOriginScale; // 0x58
		::RPG::Client::Prop::BaseItemState LFBAOFKKENA; // 0x5C
		::System::Boolean MDHFHDHIBEE; // 0x60
		::System::Byte _padding2[0x3];
		::NBCAOOBFHEA CPODFLIKCGO; // 0x64
		::NBCAOOBFHEA GIOMINGLNOF; // 0x6C
		::UnityEngine::Vector2 FOOKCGJIBMM; // 0x74
		::UnityEngine::Vector2 CIMKFJBFEJO; // 0x7C
		::UnityEngine::Vector2 MLKKADCAMJH; // 0x84
		::System::Single ELAPNHKMPPC; // 0x8C
		::System::Boolean MHLHNOLKFNE; // 0x90
		::System::Byte _padding3[0x3];
		::System::Single PGMIOKKLHIE; // 0x94
		::UnityEngine::Vector2 GPAPFJAKOHC; // 0x98
		::UnityEngine::Vector2 GBILFGBIGCF; // 0xA0
		::UnityEngine::AnimationCurve* APPFIKHLIOD; // 0xA8
		::System::Single PBKJKLAHGBP; // 0xB0
		::System::Byte _padding4[0x4];
		::DPLLFKALLIN* DKGHCDHMKCP; // 0xB8
		::NEOCEOCDEAF* CFIMJPFGBAL; // 0xC0
		::NEOCEOCDEAF* IBGKOCINPOP; // 0xC8
		::DEBEAKKOHLN* OIDAGBPPNBJ; // 0xD0
		static ::System::String** StaticGet_OMBNKEFHNBH()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "InsertionPuzzleItem")->GetStaticField(0x56730);
		}

		static ::System::String** StaticGet_OAKPAGACBBO()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "InsertionPuzzleItem")->GetStaticField(0x56738);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_CCTOR_OFFSET))();
		}

		::System::Void Init(::RPG::Client::Prop::PuzzleBoardBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PuzzleBoardBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONSELECT_OFFSET))(this);
		}

		::System::Void OnHover(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVER_OFFSET))(this, a1);
		}

		::System::Void OnHoverExit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONHOVEREXIT_OFFSET))(this, a1);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_TICK_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetCoordAndPosition(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCOORDANDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetNextCoordAndPosition(::NBCAOOBFHEA a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::NBCAOOBFHEA, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETNEXTCOORDANDPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetLastCoordAndPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_RESETLASTCOORDANDPOSITION_OFFSET))(this);
		}

		::System::Void SetCenter(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETCENTER_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISINANIMATION_OFFSET))(this);
		}

		::System::Boolean IsMatchItem(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEM_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchItemFaild(::RPG::Client::Prop::InsertionPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::InsertionPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ISMATCHITEMFAILD_OFFSET))(this, a1);
		}

		::System::Void SetRotateCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETROTATECURVE_OFFSET))(this, a1);
		}

		::NBCAOOBFHEA GetNextCoord()
		{
			return ((::NBCAOOBFHEA(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETNEXTCOORD_OFFSET))(this);
		}

		::System::Void SetAnimator(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETANIMATOR_OFFSET))(this, a1);
		}

		::System::Boolean GetIsHover()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_GETISHOVER_OFFSET))(this);
		}

		::System::Void Rotate(::DPLLFKALLIN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DPLLFKALLIN*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_ROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetInsertionHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetInsertionState(::RPG::Client::Prop::InsertionItemState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::InsertionItemState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETINSERTIONSTATE_OFFSET))(this, a1);
		}

		::System::Void SetBaseItemHighlight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMHIGHLIGHT_OFFSET))(this, a1);
		}

		::System::Void SetBaseItemState(::RPG::Client::Prop::BaseItemState a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BaseItemState, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETBASEITEMSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void SetRedHit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETREDHIT_OFFSET))(this);
		}

		::System::Void SetScaleWithAnimation(::System::Single a1, ::DPLLFKALLIN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::DPLLFKALLIN*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETSCALEWITHANIMATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetTransferState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETTRANSFERSTATE_OFFSET))(this, a1);
		}

		::System::Void SetDitherAlphaWithAnimation(::System::Single a1, ::System::Single a2, ::System::Single a3, ::DPLLFKALLIN* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::DPLLFKALLIN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_SETDITHERALPHAWITHANIMATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LMBBJGLAKIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_INSERTIONPUZZLEITEM_LMBBJGLAKIJ_OFFSET))(this);
		}

	};
}
