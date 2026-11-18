#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoGridScroller_FKKDACNIMNB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class MonoGridScroller_AMJMMKFPEKC; }
namespace MoleMole { class MonoScrollBar; }
namespace MoleMole { class MonoScrollBarAutoHide; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class GridLayoutGroup; }
namespace UnityEngine::UI { class ScrollRect; }

#define MOLEMOLE_MONOGRIDSCROLLER_ADDCHILDREN_OFFSET UNITYSDK_OFFSET(0x12B64FE0)
#define MOLEMOLE_MONOGRIDSCROLLER_ADFDLGKLEPC_OFFSET UNITYSDK_OFFSET(0x12B659E0)
#define MOLEMOLE_MONOGRIDSCROLLER_APNIDFCPBGB_OFFSET UNITYSDK_OFFSET(0x12B6C8C0)
#define MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEXMULTI_OFFSET UNITYSDK_OFFSET(0x12B68740)
#define MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x12B681E0)
#define MOLEMOLE_MONOGRIDSCROLLER_CJAPIDJKLJH_OFFSET UNITYSDK_OFFSET(0x12B6CE50)
#define MOLEMOLE_MONOGRIDSCROLLER_DIHGNPHEHEG_OFFSET UNITYSDK_OFFSET(0x12B6A350)
#define MOLEMOLE_MONOGRIDSCROLLER_EAKBBAFELHG_OFFSET UNITYSDK_OFFSET(0x12B67C90)
#define MOLEMOLE_MONOGRIDSCROLLER_EFFFKAJMJPN_OFFSET UNITYSDK_OFFSET(0x12B6C9B0)
#define MOLEMOLE_MONOGRIDSCROLLER_EIGAGBMHLCI_OFFSET UNITYSDK_OFFSET(0x12B65240)
#define MOLEMOLE_MONOGRIDSCROLLER_ENAFEDCLLEO_OFFSET UNITYSDK_OFFSET(0x12B668A0)
#define MOLEMOLE_MONOGRIDSCROLLER_EPEAHLOLIGG_OFFSET UNITYSDK_OFFSET(0x12B68860)
#define MOLEMOLE_MONOGRIDSCROLLER_FAJDIIFELCD_OFFSET UNITYSDK_OFFSET(0x12B64F40)
#define MOLEMOLE_MONOGRIDSCROLLER_GETGRIDREALCHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x12B6BB70)
#define MOLEMOLE_MONOGRIDSCROLLER_GETITEMDICT_OFFSET UNITYSDK_OFFSET(0x12B6B5A0)
#define MOLEMOLE_MONOGRIDSCROLLER_GETITEMTRANSBYINDEX_OFFSET UNITYSDK_OFFSET(0x12B694D0)
#define MOLEMOLE_MONOGRIDSCROLLER_GETMAXITEMCOUNTWITHOUSCROLL_OFFSET UNITYSDK_OFFSET(0x12B695B0)
#define MOLEMOLE_MONOGRIDSCROLLER_GETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x12B67AC0)
#define MOLEMOLE_MONOGRIDSCROLLER_GETPERFECTSHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x12B69600)
#define MOLEMOLE_MONOGRIDSCROLLER_GETSHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x12B69650)
#define MOLEMOLE_MONOGRIDSCROLLER_GET_GRIDLAYOUT_OFFSET UNITYSDK_OFFSET(0x12B6C710)
#define MOLEMOLE_MONOGRIDSCROLLER_GET_ITEMSIZE_OFFSET UNITYSDK_OFFSET(0x12B64B80)
#define MOLEMOLE_MONOGRIDSCROLLER_GMLKGDLBMNN_OFFSET UNITYSDK_OFFSET(0x12B692D0)
#define MOLEMOLE_MONOGRIDSCROLLER_HMAOMBLGKJL_OFFSET UNITYSDK_OFFSET(0x12B6CF70)
#define MOLEMOLE_MONOGRIDSCROLLER_ILOHNJGMJAN_OFFSET UNITYSDK_OFFSET(0x12B66E00)
#define MOLEMOLE_MONOGRIDSCROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x12B64BB0)
#define MOLEMOLE_MONOGRIDSCROLLER_ISCHILDPARTIALLYINVISIBLE_OFFSET UNITYSDK_OFFSET(0x12B6B5E0)
#define MOLEMOLE_MONOGRIDSCROLLER_JKAEEODPKJC_OFFSET UNITYSDK_OFFSET(0x12B67100)
#define MOLEMOLE_MONOGRIDSCROLLER_LEFTMOVEITEM_OFFSET UNITYSDK_OFFSET(0x12B69B50)
#define MOLEMOLE_MONOGRIDSCROLLER_MBCDKAONIAA_OFFSET UNITYSDK_OFFSET(0x12B68D60)
#define MOLEMOLE_MONOGRIDSCROLLER_MGAINGLLEOL_OFFSET UNITYSDK_OFFSET(0x12B69FB0)
#define MOLEMOLE_MONOGRIDSCROLLER_MIFJHGCDOKJ_OFFSET UNITYSDK_OFFSET(0x12B65E50)
#define MOLEMOLE_MONOGRIDSCROLLER_MINMPCACHJI_OFFSET UNITYSDK_OFFSET(0x12B65C30)
#define MOLEMOLE_MONOGRIDSCROLLER_NCLGKGPOIAL_OFFSET UNITYSDK_OFFSET(0x12B6CFE0)
#define MOLEMOLE_MONOGRIDSCROLLER_NFKFFMLJFJK_OFFSET UNITYSDK_OFFSET(0x12B68DC0)
#define MOLEMOLE_MONOGRIDSCROLLER_NKMHKNIGHAF_OFFSET UNITYSDK_OFFSET(0x12B6A1D0)
#define MOLEMOLE_MONOGRIDSCROLLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x12B6B2F0)
#define MOLEMOLE_MONOGRIDSCROLLER_ONVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x12B68470)
#define MOLEMOLE_MONOGRIDSCROLLER_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12B657A0)
#define MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENTBYINDEX_OFFSET UNITYSDK_OFFSET(0x12B679A0)
#define MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENT_OFFSET UNITYSDK_OFFSET(0x12B65570)
#define MOLEMOLE_MONOGRIDSCROLLER_REFRESHINDEXSET_OFFSET UNITYSDK_OFFSET(0x12B69090)
#define MOLEMOLE_MONOGRIDSCROLLER_REMOVECHILDREN_OFFSET UNITYSDK_OFFSET(0x12B650E0)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOBEGIN_OFFSET UNITYSDK_OFFSET(0x12B67FF0)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOEND_OFFSET UNITYSDK_OFFSET(0x12B680F0)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTITEM_OFFSET UNITYSDK_OFFSET(0x12B67F80)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x12B687E0)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGE_OFFSET UNITYSDK_OFFSET(0x12B67EA0)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREITEM_OFFSET UNITYSDK_OFFSET(0x12B67F10)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGEWITHANIMATION_OFFSET UNITYSDK_OFFSET(0x12B68B50)
#define MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGE_OFFSET UNITYSDK_OFFSET(0x12B67C20)
#define MOLEMOLE_MONOGRIDSCROLLER_SETNORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x12B67B40)
#define MOLEMOLE_MONOGRIDSCROLLER_TURNSCROLLON_OFFSET UNITYSDK_OFFSET(0x12B69F20)
#define MOLEMOLE_MONOGRIDSCROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B68BD0)
#define MOLEMOLE_MONOGRIDSCROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B6C720)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGridScroller_TypeDefinitionIndex = 69051;

	class MonoGridScroller : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* itemPrefab; // 0x18
		::UnityEngine::RectTransform* grid; // 0x20
		::MoleMole::MonoGridScroller_FKKDACNIMNB moveType; // 0x28
		::System::Byte _padding0[0x4];
		::MoleMole::MonoScrollBarAutoHide* scrollBarAutoHide; // 0x30
		::MoleMole::MonoScrollBar* scrollBar; // 0x38
		::System::String* scrollAudioPatternName; // 0x40
		::System::Boolean stretchCellSize; // 0x48
		::System::Boolean centerContent; // 0x49
		::System::Boolean autoPivot; // 0x4A
		::System::Boolean isGridEnable; // 0x4B
		::System::Boolean isOverrideItemSizeForSwap; // 0x4C
		::System::Byte _padding1[0x3];
		::System::Single overrideItemSizeForSwap; // 0x50
		::System::Byte _padding2[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* OJAJADKLNKB; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* KKMAJMPIMLH; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* IHNJDIEBINP; // 0x68
		::MoleMole::MonoGridScroller_AMJMMKFPEKC* NHIPGCGGHGN; // 0x70
		::MoleMole::MonoGridScroller_AMJMMKFPEKC* HJJKEPJLAFD; // 0x78
		::System::Boolean FNAFDELKKAA; // 0x80
		::System::Boolean OAIPGGKAPED; // 0x81
		::System::Byte _padding3[0x2];
		::System::Int32 PHHGBGGECND; // 0x84
		::System::Single scrollSpeed; // 0x88
		::System::Boolean NCKCKOHHMOE; // 0x8C
		::System::Byte _padding4[0x3];
		::System::Single LHEBPGOJMOB; // 0x90
		::System::Single BKHOHEKMPHI; // 0x94
		::System::Int32 POEODPDCNFN; // 0x98
		::System::Boolean optLoadVisibleItems; // 0x9C
		::System::Boolean optEnableAsyncLoadItems; // 0x9D
		::System::Byte _padding5[0x2];
		::System::Int32 _itemCount; // 0xA0
		::System::Int32 _transCount; // 0xA4
		::System::Int32 _col; // 0xA8
		::System::Int32 _row; // 0xAC
		::UnityEngine::Rect _scrollerRect; // 0xB0
		::UnityEngine::Vector2 _cellSize; // 0xC0
		::UnityEngine::Vector2 _spacing; // 0xC8
		::UnityEngine::UI::ScrollRect* _scroller; // 0xD0
		::UnityEngine::UI::GridLayoutGroup* _layout; // 0xD8
		::UnityEngine::Vector2 _padding; // 0xE0
		::System::Single _bottom; // 0xE8
		::System::Single _right; // 0xEC
		::System::Boolean FBEOLJDLFFL; // 0xF0
		::System::Byte _padding6[0x3];
		::System::Int32 SURPLUS_COUNT; // 0xF4
		::System::Boolean MPBLPIDAJMK; // 0xF8
		::System::Boolean BIEFCOOHCMI; // 0xF9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_ItemSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GET_ITEMSIZE_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::MonoGridScroller_AMJMMKFPEKC* OIIGKOLGMMO, ::System::Int32 BABIHDEGHAB, ::System::Nullable_1<::UnityEngine::Vector2> KJLNBLAHHOA, ::System::Boolean FGHBEBCCLHJ, ::System::Boolean BCAFJOLNLIE, ::System::Boolean FBNKBMALAJN, ::System::Int32 ELLPHJEFNAN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGridScroller_AMJMMKFPEKC*, ::System::Int32, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_INIT_OFFSET))(this, OIIGKOLGMMO, BABIHDEGHAB, KJLNBLAHHOA, FGHBEBCCLHJ, BCAFJOLNLIE, FBNKBMALAJN, ELLPHJEFNAN);
		}

		::System::Void RefreshCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENT_OFFSET))(this);
		}

		::System::Void RefreshCurrentByIndex(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REFRESHCURRENTBYINDEX_OFFSET))(this, ABHBKFJKINO);
		}

		::UnityEngine::Vector2 GetNormalizedPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETNORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Void SetNormalizedPosition(::UnityEngine::Vector2 KJLNBLAHHOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SETNORMALIZEDPOSITION_OFFSET))(this, KJLNBLAHHOA);
		}

		::System::Void ScrollToPrevPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGE_OFFSET))(this);
		}

		::System::Void ScrollToNextPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGE_OFFSET))(this);
		}

		::System::Void ScrollToPreItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREITEM_OFFSET))(this);
		}

		::System::Void ScrollToNextItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTITEM_OFFSET))(this);
		}

		::System::Void ScrollToBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOBEGIN_OFFSET))(this);
		}

		::System::Void ScrollToEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOEND_OFFSET))(this);
		}

		::System::Void CenterItemByIndex(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEX_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void CenterItemByIndexMulti(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CENTERITEMBYINDEXMULTI_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void ScrollToNextPageWithAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTONEXTPAGEWITHANIMATION_OFFSET))(this);
		}

		::System::Void ScrollToPrevPageWithAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_SCROLLTOPREVPAGEWITHANIMATION_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void AddChildren(::System::Int32 BDAAJPEOMHF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ADDCHILDREN_OFFSET))(this, BDAAJPEOMHF);
		}

		::System::Void RemoveChildren(::System::Int32 IEAMLHEJNHA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REMOVECHILDREN_OFFSET))(this, IEAMLHEJNHA);
		}

		::UnityEngine::Transform* GetItemTransByIndex(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETITEMTRANSBYINDEX_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Int32 GetMaxItemCountWithouScroll()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETMAXITEMCOUNTWITHOUSCROLL_OFFSET))(this);
		}

		::System::Int32 GetPerfectShowItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETPERFECTSHOWITEMCOUNT_OFFSET))(this);
		}

		::System::Single GetShowItemCount()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETSHOWITEMCOUNT_OFFSET))(this);
		}

		::System::Void LeftMoveItem(::System::Int32 ONEAFAKIABM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_LEFTMOVEITEM_OFFSET))(this, ONEAFAKIABM);
		}

		::System::Void TurnScrollOn(::System::Boolean KMPCLKEOLAO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_TURNSCROLLON_OFFSET))(this, KMPCLKEOLAO);
		}

		::System::Void OnValueChanged(::UnityEngine::Vector2 KJLNBLAHHOA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ONVALUECHANGED_OFFSET))(this, KJLNBLAHHOA);
		}

		::System::Void RefreshIndexSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_REFRESHINDEXSET_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* DIHNFECKHMD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ONENDDRAG_OFFSET))(this, DIHNFECKHMD);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* GetItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETITEMDICT_OFFSET))(this);
		}

		::System::Boolean IsChildPartiallyInvisible(::System::Int32 ABHBKFJKINO, ::System::Single DLPCFCDHOGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ISCHILDPARTIALLYINVISIBLE_OFFSET))(this, ABHBKFJKINO, DLPCFCDHOGP);
		}

		::System::Int32 GetGridRealChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GETGRIDREALCHILDCOUNT_OFFSET))(this);
		}

		::UnityEngine::UI::GridLayoutGroup* get_GridLayout()
		{
			return ((::UnityEngine::UI::GridLayoutGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GET_GRIDLAYOUT_OFFSET))(this);
		}

		::System::Void EPEAHLOLIGG(::System::Single HBEKKMCBGBK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_EPEAHLOLIGG_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Void GMLKGDLBMNN(::System::Int32 HBJOLKHGGDD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_GMLKGDLBMNN_OFFSET))(this, HBJOLKHGGDD);
		}

		::System::Void ENAFEDCLLEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ENAFEDCLLEO_OFFSET))(this);
		}

		::UnityEngine::RectTransform* JKAEEODPKJC(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_JKAEEODPKJC_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void EFFFKAJMJPN(::System::Int32 KDEHMPGOCEP, ::System::Int32 PADJNMGMGHO, ::System::Int32 DKLLMDCDPGA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_EFFFKAJMJPN_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO, DKLLMDCDPGA);
		}

		::System::Void DIHGNPHEHEG(::System::Int32 FKGNDKNHAEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_DIHGNPHEHEG_OFFSET))(this, FKGNDKNHAEH);
		}

		::System::Boolean ILOHNJGMJAN(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ILOHNJGMJAN_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void NKMHKNIGHAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_NKMHKNIGHAF_OFFSET))(this);
		}

		::System::Void EIGAGBMHLCI(::System::Nullable_1<::UnityEngine::Vector2> KJLNBLAHHOA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_EIGAGBMHLCI_OFFSET))(this, KJLNBLAHHOA);
		}

		::System::Void MIFJHGCDOKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_MIFJHGCDOKJ_OFFSET))(this);
		}

		::System::Void APNIDFCPBGB(::UnityEngine::RectTransform* ICOKJCNMMGO, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_APNIDFCPBGB_OFFSET))(this, ICOKJCNMMGO, ABHBKFJKINO);
		}

		::System::Void MGAINGLLEOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_MGAINGLLEOL_OFFSET))(this);
		}

		::System::Void MINMPCACHJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_MINMPCACHJI_OFFSET))(this);
		}

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_PHOADBJGFBE_OFFSET))(this);
		}

		::UnityEngine::Vector2 CJAPIDJKLJH(::System::Int32 ABHBKFJKINO, ::UnityEngine::Vector2 JCDPMKNIIPA)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_CJAPIDJKLJH_OFFSET))(this, ABHBKFJKINO, JCDPMKNIIPA);
		}

		::System::Void FAJDIIFELCD(::MoleMole::MonoGridScroller_AMJMMKFPEKC* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGridScroller_AMJMMKFPEKC*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_FAJDIIFELCD_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void HMAOMBLGKJL(::UnityEngine::Transform* LNEEMAGIHLB, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_HMAOMBLGKJL_OFFSET))(this, LNEEMAGIHLB, ABHBKFJKINO);
		}

		::System::Void ADFDLGKLEPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_ADFDLGKLEPC_OFFSET))(this);
		}

		::System::Void EAKBBAFELHG(::System::Single HBEKKMCBGBK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_EAKBBAFELHG_OFFSET))(this, HBEKKMCBGBK);
		}

		::System::Int32 MBCDKAONIAA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_MBCDKAONIAA_OFFSET))(this);
		}

		::System::Void NFKFFMLJFJK(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_NFKFFMLJFJK_OFFSET))(this, ABHBKFJKINO);
		}

		::MoleMole::MonoGridScroller_AMJMMKFPEKC* NCLGKGPOIAL()
		{
			return ((::MoleMole::MonoGridScroller_AMJMMKFPEKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER_NCLGKGPOIAL_OFFSET))(this);
		}
	};
}
