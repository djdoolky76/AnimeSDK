#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FMIFLKGJJBI;
class HPIDNHKGMKH;
class NOMGIFNFIJD;
namespace RPG::Client { class GridFightDivisionListViewExtra; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_CTOR_OFFSET UNITYSDK_OFFSET(0xDAA3690)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_DISPATCH_OFFSET UNITYSDK_OFFSET(0xDAA33B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURMOVETOITEMINDEX_OFFSET UNITYSDK_OFFSET(0xDAA2F70)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURRENTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xDAA2AC0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xDAA3020)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_IDLESTATE_OFFSET UNITYSDK_OFFSET(0xDAA35F0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISLISTVIEWSNAPPING_OFFSET UNITYSDK_OFFSET(0xDAA31B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVETOWARDSOUTOFBORDER_OFFSET UNITYSDK_OFFSET(0xDAA3310)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0xDAA30C0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISSCROLLRECTSCROLLING_OFFSET UNITYSDK_OFFSET(0xDAA3290)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISVELOCITYOVERDEADZONE_OFFSET UNITYSDK_OFFSET(0xDAA3220)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_LISTVIEW_OFFSET UNITYSDK_OFFSET(0xDAA3650)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_MOVESTATE_OFFSET UNITYSDK_OFFSET(0xDAA3610)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_SNAPSTATE_OFFSET UNITYSDK_OFFSET(0xDAA3630)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0xDAA35D0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STOPMOVEPROTECTTIME_OFFSET UNITYSDK_OFFSET(0xDAA3070)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_INIT_OFFSET UNITYSDK_OFFSET(0xDAA29B0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xDAA3420)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_MOVETOITEMINDEX_OFFSET UNITYSDK_OFFSET(0xDAA2EB0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_IDLESTATE_OFFSET UNITYSDK_OFFSET(0xDAA3600)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_MOVESTATE_OFFSET UNITYSDK_OFFSET(0xDAA3620)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_SNAPSTATE_OFFSET UNITYSDK_OFFSET(0xDAA3640)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_STATEMACHINE_OFFSET UNITYSDK_OFFSET(0xDAA35E0)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__GETNEARESTCURITEMINDEX_OFFSET UNITYSDK_OFFSET(0xDAA2B20)
#define RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__INITSTATE_OFFSET UNITYSDK_OFFSET(0xDAA2A20)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightDivisionListViewExtra_TypeDefinitionIndex = 65935;

	class GridFightDivisionListViewExtra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* _ListView; // 0x18
		::UnityEngine::RectTransform* _ViewPort; // 0x20
		::System::Single _AnchorPosRatio; // 0x28
		::System::Single _ListMoveVelocityDeadZone; // 0x2C
		::System::Single _StopMoveProtectTime; // 0x30
		::System::Nullable_1<::System::Int32> _CurMoveToItemIndex; // 0x34
		::System::Byte _padding0[0x4];
		::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>* _StateMachine_k__BackingField; // 0x40
		::NOMGIFNFIJD* _IdleState_k__BackingField; // 0x48
		::FMIFLKGJJBI* _MoveState_k__BackingField; // 0x50
		::HPIDNHKGMKH* _SnapState_k__BackingField; // 0x58
		::UnityEngine::Vector2 _CachedScrollRectVelocity; // 0x60
		::System::Action_1<::XLua::LuaTable*>* OnStartMove; // 0x68
		::System::Action_1<::XLua::LuaTable*>* OnEndMove; // 0x70
		::System::Action_1<::XLua::LuaTable*>* OnCurItemChanged; // 0x78
		::System::Int32 ItemIndexRangeL; // 0x80
		::System::Int32 ItemIndexRangeR; // 0x84
		::XLua::LuaTable* _LuaTable; // 0x88
		::System::Boolean _Inited; // 0x90
		::System::Byte _padding1[0x7];
		::UnityEngine::UI::ScrollRect* _ScrollRect; // 0x98
		::Il2CppArray<::UnityEngine::Vector3>* _WorldCornersHelper; // 0xA0
		::System::Boolean _IsMoving; // 0xA8
		::System::Byte _padding2[0x3];
		::System::Int32 _CurItemIndex; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_INIT_OFFSET))(this);
		}

		::SuperScrollView::LoopListViewItem2* GetCurrentViewItem()
		{
			return ((::SuperScrollView::LoopListViewItem2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURRENTVIEWITEM_OFFSET))(this);
		}

		::System::Void MoveToItemIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_MOVETOITEMINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetCurMoveToItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETCURMOVETOITEMINDEX_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* GetScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GETSCROLLRECT_OFFSET))(this);
		}

		::System::Single get_StopMoveProtectTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STOPMOVEPROTECTTIME_OFFSET))(this);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVING_OFFSET))(this);
		}

		::System::Boolean get_IsScrollRectScrolling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISSCROLLRECTSCROLLING_OFFSET))(this);
		}

		::System::Boolean get_IsListViewSnapping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISLISTVIEWSNAPPING_OFFSET))(this);
		}

		::System::Boolean get_IsVelocityOverDeadZone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISVELOCITYOVERDEADZONE_OFFSET))(this);
		}

		::System::Boolean get_IsMoveTowardsOutOfBorder()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_ISMOVETOWARDSOUTOFBORDER_OFFSET))(this);
		}

		::System::Void Dispatch(::System::Action_1<::XLua::LuaTable*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_DISPATCH_OFFSET))(this, a1);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _InitState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__INITSTATE_OFFSET))(this);
		}

		::System::Int32 _GetNearestCurItemIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA__GETNEARESTCURITEMINDEX_OFFSET))(this);
		}

		::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>* get_StateMachine()
		{
			return ((::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_STATEMACHINE_OFFSET))(this);
		}

		::System::Void set_StateMachine(::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Common::StateMachine_1<::RPG::Client::GridFightDivisionListViewExtra*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_STATEMACHINE_OFFSET))(this, a1);
		}

		::NOMGIFNFIJD* get_IdleState()
		{
			return ((::NOMGIFNFIJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_IDLESTATE_OFFSET))(this);
		}

		::System::Void set_IdleState(::NOMGIFNFIJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOMGIFNFIJD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_IDLESTATE_OFFSET))(this, a1);
		}

		::FMIFLKGJJBI* get_MoveState()
		{
			return ((::FMIFLKGJJBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_MOVESTATE_OFFSET))(this);
		}

		::System::Void set_MoveState(::FMIFLKGJJBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMIFLKGJJBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_MOVESTATE_OFFSET))(this, a1);
		}

		::HPIDNHKGMKH* get_SnapState()
		{
			return ((::HPIDNHKGMKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_SNAPSTATE_OFFSET))(this);
		}

		::System::Void set_SnapState(::HPIDNHKGMKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIDNHKGMKH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_SET_SNAPSTATE_OFFSET))(this, a1);
		}

		::SuperScrollView::LoopListView2* get_ListView()
		{
			return ((::SuperScrollView::LoopListView2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTDIVISIONLISTVIEWEXTRA_GET_LISTVIEW_OFFSET))(this);
		}

	};
}
