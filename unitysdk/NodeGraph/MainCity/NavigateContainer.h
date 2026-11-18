#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDCOHGFJLCM.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CNCDJPDKPBG;
class DHBPMCNNLCJ;
namespace MoleMole::Battle { class Entity; }
namespace NodeGraph::MainCity { class SimpleInteractionPoint; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_EQUALS_OFFSET UNITYSDK_OFFSET(0xF16AC00)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0xF16AB50)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0xF16AB30)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0xF16AB10)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CURRENTPATHINDEX_OFFSET UNITYSDK_OFFSET(0xF16ABC0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0xF16AAD0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET UNITYSDK_OFFSET(0xF16A9A0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MOVEDIRECTIONANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0xF16A980)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVFLAGS_OFFSET UNITYSDK_OFFSET(0xF168FB0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xF16A9C0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xF16A9D0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0xF16AB80)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0xF16AAB0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0xF16A8F0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xF16A930)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0xF16A940)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xF16A960)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_STEPFINISHED_OFFSET UNITYSDK_OFFSET(0xF16ABE0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TASKRUNNING_OFFSET UNITYSDK_OFFSET(0xF16A910)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TOTALPATH_OFFSET UNITYSDK_OFFSET(0xF16ABA0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0xF16AA90)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_WAITIDLEREMAININGTIME_OFFSET UNITYSDK_OFFSET(0xF16AAF0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_HANDLEPLAYERNAVIGATEDONE_OFFSET UNITYSDK_OFFSET(0xF16A9F0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDPOS_OFFSET UNITYSDK_OFFSET(0xF16AB70)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIMER_OFFSET UNITYSDK_OFFSET(0xF16AB40)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIME_OFFSET UNITYSDK_OFFSET(0xF16AB20)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CURRENTPATHINDEX_OFFSET UNITYSDK_OFFSET(0xF16ABD0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MAXWAITIDLETIME_OFFSET UNITYSDK_OFFSET(0xF16AAE0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET UNITYSDK_OFFSET(0xF16A9B0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MOVEDIRECTIONANGLEOFFSET_OFFSET UNITYSDK_OFFSET(0xF16A990)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVINTERACTIONPOINT_OFFSET UNITYSDK_OFFSET(0xF168F00)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVPATHFOLLOW_OFFSET UNITYSDK_OFFSET(0xF16A9E0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NEEDDETOUR_OFFSET UNITYSDK_OFFSET(0xF16AB90)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NOTURNANIM_OFFSET UNITYSDK_OFFSET(0xF16AAC0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_OVERRIDERADIUS_OFFSET UNITYSDK_OFFSET(0xF16A900)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET UNITYSDK_OFFSET(0xF16A950)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDSPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xF16A970)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_STEPFINISHED_OFFSET UNITYSDK_OFFSET(0xF16ABF0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TASKRUNNING_OFFSET UNITYSDK_OFFSET(0xF16A920)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TOTALPATH_OFFSET UNITYSDK_OFFSET(0xF16ABB0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0xF16AAA0)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_WAITIDLEREMAININGTIME_OFFSET UNITYSDK_OFFSET(0xF16AB00)
#define NODEGRAPH_MAINCITY_NAVIGATECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xF165D30)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int NavigateContainer_TypeDefinitionIndex = 41265;

	class NavigateContainer : public ::System::Object
	{
	public:
		::CNCDJPDKPBG* navPathFollow; // 0x10
		::MoleMole::Battle::Entity* ownerEntity; // 0x18
		::NodeGraph::MainCity::SimpleInteractionPoint* navInteractionPoint; // 0x20
		::System::Collections::Generic::List_1<::DHBPMCNNLCJ*>* _TotalPath_k__BackingField; // 0x28
		::System::Action_2<::MoleMole::Battle::Entity*, ::System::Boolean>* HandlePlayerNavigateDoneAction; // 0x30
		::KDCOHGFJLCM navFlags; // 0x38
		::System::Single _WaitIdleRemainingTime_k__BackingField; // 0x3C
		::System::Single _CheckStandTimer_k__BackingField; // 0x40
		::System::Single _CheckStandTime_k__BackingField; // 0x44
		::System::Int32 _CurrentPathIndex_k__BackingField; // 0x48
		::System::Boolean _NeedDetour_k__BackingField; // 0x4C
		::System::Boolean _MoveDirectionAngleOffsetInitialized_k__BackingField; // 0x4D
		::System::Boolean _TaskRunning_k__BackingField; // 0x4E
		::System::Boolean _NoTurnAnim_k__BackingField; // 0x4F
		::System::Int32 savedMuteAnimatorMoveIndex; // 0x50
		::System::Boolean _StepFinished_k__BackingField; // 0x54
		::System::Boolean _UseNavMesh_k__BackingField; // 0x55
		::System::Byte _padding0[0x2];
		::System::Single _MoveDirectionAngleOffset_k__BackingField; // 0x58
		::UnityEngine::Vector3 _CheckStandPos_k__BackingField; // 0x5C
		::System::Single _MaxWaitIdleTime_k__BackingField; // 0x68
		::UnityEngine::Vector2 _SavedSpeedRatio_k__BackingField; // 0x6C
		::System::Single _OverrideRadius_k__BackingField; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER__CTOR_OFFSET))(this);
		}

		::System::Single get_OverrideRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OVERRIDERADIUS_OFFSET))(this);
		}

		::System::Void set_OverrideRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_OVERRIDERADIUS_OFFSET))(this, value);
		}

		::System::Boolean get_TaskRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TASKRUNNING_OFFSET))(this);
		}

		::System::Void set_TaskRunning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TASKRUNNING_OFFSET))(this, value);
		}

		::MoleMole::Battle::Entity* get_OwnerEntity()
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_OWNERENTITY_OFFSET))(this);
		}

		::KDCOHGFJLCM& get_NavFlags()
		{
			return ((::KDCOHGFJLCM&(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVFLAGS_OFFSET))(this);
		}

		::System::Int32 get_SavedMuteAnimatorMoveIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this);
		}

		::System::Void set_SavedMuteAnimatorMoveIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDMUTEANIMATORMOVEINDEX_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_SavedSpeedRatio()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_SAVEDSPEEDRATIO_OFFSET))(this);
		}

		::System::Void set_SavedSpeedRatio(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_SAVEDSPEEDRATIO_OFFSET))(this, value);
		}

		::System::Single get_MoveDirectionAngleOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MOVEDIRECTIONANGLEOFFSET_OFFSET))(this);
		}

		::System::Void set_MoveDirectionAngleOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MOVEDIRECTIONANGLEOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_MoveDirectionAngleOffsetInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET))(this);
		}

		::System::Void set_MoveDirectionAngleOffsetInitialized(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MOVEDIRECTIONANGLEOFFSETINITIALIZED_OFFSET))(this, value);
		}

		::DHBPMCNNLCJ* get_NavInteractionPoint()
		{
			return ((::DHBPMCNNLCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVINTERACTIONPOINT_OFFSET))(this);
		}

		::System::Void set_NavInteractionPoint(::DHBPMCNNLCJ* value)
		{
			return ((::System::Void(*)(::PVOID, ::DHBPMCNNLCJ*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVINTERACTIONPOINT_OFFSET))(this, value);
		}

		::CNCDJPDKPBG* get_NavPathFollow()
		{
			return ((::CNCDJPDKPBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NAVPATHFOLLOW_OFFSET))(this);
		}

		::System::Void set_NavPathFollow(::CNCDJPDKPBG* value)
		{
			return ((::System::Void(*)(::PVOID, ::CNCDJPDKPBG*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NAVPATHFOLLOW_OFFSET))(this, value);
		}

		::System::Void HandlePlayerNavigateDone(::MoleMole::Battle::Entity* avatar, ::System::Boolean abortByOvertime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_HANDLEPLAYERNAVIGATEDONE_OFFSET))(this, avatar, abortByOvertime);
		}

		::System::Boolean get_UseNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_USENAVMESH_OFFSET))(this);
		}

		::System::Void set_UseNavMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_USENAVMESH_OFFSET))(this, value);
		}

		::System::Boolean get_NoTurnAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NOTURNANIM_OFFSET))(this);
		}

		::System::Void set_NoTurnAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NOTURNANIM_OFFSET))(this, value);
		}

		::System::Single get_MaxWaitIdleTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_MAXWAITIDLETIME_OFFSET))(this);
		}

		::System::Void set_MaxWaitIdleTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_MAXWAITIDLETIME_OFFSET))(this, value);
		}

		::System::Single get_WaitIdleRemainingTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_WAITIDLEREMAININGTIME_OFFSET))(this);
		}

		::System::Void set_WaitIdleRemainingTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_WAITIDLEREMAININGTIME_OFFSET))(this, value);
		}

		::System::Single get_CheckStandTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIME_OFFSET))(this);
		}

		::System::Void set_CheckStandTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIME_OFFSET))(this, value);
		}

		::System::Single get_CheckStandTimer()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDTIMER_OFFSET))(this);
		}

		::System::Void set_CheckStandTimer(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDTIMER_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_CheckStandPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CHECKSTANDPOS_OFFSET))(this);
		}

		::System::Void set_CheckStandPos(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CHECKSTANDPOS_OFFSET))(this, value);
		}

		::System::Boolean get_NeedDetour()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_NEEDDETOUR_OFFSET))(this);
		}

		::System::Void set_NeedDetour(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_NEEDDETOUR_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::DHBPMCNNLCJ*>* get_TotalPath()
		{
			return ((::System::Collections::Generic::List_1<::DHBPMCNNLCJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_TOTALPATH_OFFSET))(this);
		}

		::System::Void set_TotalPath(::System::Collections::Generic::List_1<::DHBPMCNNLCJ*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DHBPMCNNLCJ*>*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_TOTALPATH_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentPathIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_CURRENTPATHINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentPathIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_CURRENTPATHINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_StepFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_GET_STEPFINISHED_OFFSET))(this);
		}

		::System::Void set_StepFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_SET_STEPFINISHED_OFFSET))(this, value);
		}

		::System::Boolean Equals(::NodeGraph::MainCity::NavigateContainer* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::MainCity::NavigateContainer*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_NAVIGATECONTAINER_EQUALS_OFFSET))(this, other);
		}
	};
}
