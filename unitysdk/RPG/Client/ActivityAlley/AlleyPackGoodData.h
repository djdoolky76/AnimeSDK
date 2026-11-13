#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackComponentType.h"
#include "unitysdk/RPG/GameCore/AlleyPackAnchorType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIJCLDAADGP;
namespace RPG::Client::ActivityAlley { class AlleyPackComponent; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodDef; }
namespace RPG::Client::ActivityAlley { class AlleyPackGroupData; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ACQUIRETAILANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x1B793E30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_AUTOSETTLEREFRESHANCHORSTATE_OFFSET UNITYSDK_OFFSET(0x1B794D20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0x1B793630)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKANCHORPAIRS_OFFSET UNITYSDK_OFFSET(0x1B792E30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKCANSETTLE_OFFSET UNITYSDK_OFFSET(0x1B792CF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B795A10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B7940D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GETREQUIREDHEADANCHORTYPE_OFFSET UNITYSDK_OFFSET(0x1B7925C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7954A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGGINGFIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B795890)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_FIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B795190)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B795170)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATEANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7957C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B794C80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0x1B784AB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISALLANCHORWAITINGATTACH_OFFSET UNITYSDK_OFFSET(0x1B793A10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x1B794FB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1B793B40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1B7944D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATE_OFFSET UNITYSDK_OFFSET(0x1B788180)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHGROUP_OFFSET UNITYSDK_OFFSET(0x1B781DC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHPOSDATA_OFFSET UNITYSDK_OFFSET(0x1B787EE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RELEASETAILANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x1B7938E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RESETCMPTPARENT_OFFSET UNITYSDK_OFFSET(0x1B794F40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETCMPTPARENT_OFFSET UNITYSDK_OFFSET(0x1B794ED0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETTLE_OFFSET UNITYSDK_OFFSET(0x1B792F70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_DRAGANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B795570)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_FIRSTHEADANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1B795250)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_GROUPDATA_OFFSET UNITYSDK_OFFSET(0x1B795180)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B794030)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B793540)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1B793F60)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGoodData_TypeDefinitionIndex = 76252;

	class AlleyPackGoodData : public ::System::Object
	{
	public:
		::RPG::Client::ActivityAlley::AlleyPackGoodDef* GoodDef; // 0x10
		::HIJCLDAADGP* TopologyInfo; // 0x18
		::RPG::Client::ActivityAlley::AlleyPackGroupData* _GroupData_k__BackingField; // 0x20
		::RPG::Client::ActivityAlley::AlleyPackComponent* APCmptRef; // 0x28
		::UnityEngine::Vector3 _DragAnchorPosition; // 0x30
		::UnityEngine::Vector3 RelativePosToRotateAnchor; // 0x3C
		::UnityEngine::Vector3 RelativePosToFirstHeadAnchor; // 0x48
		::System::UInt32 RuntimeUniqueID; // 0x54
		::RPG::Client::ActivityAlley::AlleyPackComponentType ComponentType; // 0x58
		::System::Boolean IsAutoSettleSelect; // 0x5C
		::System::Boolean EnableAnchorMatchPosOffset; // 0x5D
		::System::Boolean IsSettled; // 0x5E
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 AnchorMatchPosOffset; // 0x60
		::UnityEngine::Vector3 RotateAnchorRelativePosToDragAnchor; // 0x6C
		::UnityEngine::Vector3 RelativePosToDragAnchor; // 0x78
		::UnityEngine::Vector3 _FirstHeadAnchorPosition; // 0x84
		::UnityEngine::Vector3 FirstHeadRelativePosToDragAnchor; // 0x90
		::UnityEngine::Quaternion _Rotation; // 0x9C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean CheckCanSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKCANSETTLE_OFFSET))(this);
		}

		::System::Boolean CheckAnchorPairs()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CHECKANCHORPAIRS_OFFSET))(this);
		}

		::System::Void Settle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETTLE_OFFSET))(this);
		}

		::System::Void CancelSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_CANCELSETTLE_OFFSET))(this);
		}

		::System::Boolean IsAllAnchorWaitingAttach()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISALLANCHORWAITINGATTACH_OFFSET))(this);
		}

		::System::Void OnRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ONREMOVE_OFFSET))(this);
		}

		::System::Void AcquireTailAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ACQUIRETAILANCHORSINGRID_OFFSET))(this);
		}

		::System::Void ReleaseTailAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RELEASETAILANCHORSINGRID_OFFSET))(this);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEPOSITION_OFFSET))(this, a1);
		}

		::System::Void UpdateRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_UPDATEROTATION_OFFSET))(this, a1);
		}

		::System::Void EnableColliderTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ENABLECOLLIDERTRIGGER_OFFSET))(this, a1);
		}

		::System::Void RefreshAnchorState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATE_OFFSET))(this, a1);
		}

		::System::Void RefreshAnchorStateWithGridOffset(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AutoSettleRefreshAnchorState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_AUTOSETTLEREFRESHANCHORSTATE_OFFSET))(this);
		}

		::System::Void RefreshPosData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHPOSDATA_OFFSET))(this);
		}

		::System::Void RefreshGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_REFRESHGROUP_OFFSET))(this);
		}

		::System::Void SetCmptParent(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SETCMPTPARENT_OFFSET))(this, a1);
		}

		::System::Void ResetCmptParent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_RESETCMPTPARENT_OFFSET))(this);
		}

		::RPG::GameCore::AlleyPackAnchorType GetRequiredHeadAnchorType()
		{
			return ((::RPG::GameCore::AlleyPackAnchorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GETREQUIREDHEADANCHORTYPE_OFFSET))(this);
		}

		::System::Boolean IsChildOf(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_ISCHILDOF_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityAlley::AlleyPackGroupData* get_GroupData()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGroupData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_GROUPDATA_OFFSET))(this);
		}

		::System::Void set_GroupData(::RPG::Client::ActivityAlley::AlleyPackGroupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_GROUPDATA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_FirstHeadAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_FIRSTHEADANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_FirstHeadAnchorPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_FIRSTHEADANCHORPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_DragAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGANCHORPOSITION_OFFSET))(this);
		}

		::System::Void set_DragAnchorPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_DRAGANCHORPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_RotateAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATEANCHORPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Single get_YawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_YAWANGLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DraggingFirstHeadAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGOODDATA_GET_DRAGGINGFIRSTHEADANCHORPOSITION_OFFSET))(this);
		}

	};
}
