#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackDragStateEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"
class HACBPONPEJB;
class JLJHFLEECLF;
class MGOKKPMFACL_FNNMONCNBAB;
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ACQUIREANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x1B791DB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x1B790EA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0x1B781F90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1B7964B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLE_OFFSET UNITYSDK_OFFSET(0x1B781AA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_COMBINE_OFFSET UNITYSDK_OFFSET(0x1B7927D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1B783EA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B795AA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DECOMBINE_OFFSET UNITYSDK_OFFSET(0x1B792A10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B794D70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x1B781D70)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GETROOTGOODDATA_OFFSET UNITYSDK_OFFSET(0x1B783290)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GET_ISSETTLED_OFFSET UNITYSDK_OFFSET(0x1B783F10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ISCHILD_OFFSET UNITYSDK_OFFSET(0x1B796320)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x1B791B50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1B796C40)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHBOTTOMCANANCHORSTATUS_OFFSET UNITYSDK_OFFSET(0x1B7839E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_RELEASEANCHORSINGRID_OFFSET UNITYSDK_OFFSET(0x1B792100)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SEARCHCANANCHORGRIDOFFSET_OFFSET UNITYSDK_OFFSET(0x1B788030)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSETY_OFFSET UNITYSDK_OFFSET(0x1B7961B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSET_OFFSET UNITYSDK_OFFSET(0x1B784DD0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETTLE_OFFSET UNITYSDK_OFFSET(0x1B781C10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_TRIGGERREMOVEAUDIO_OFFSET UNITYSDK_OFFSET(0x1B792640)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B787D10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1B7834E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__COLLECTBOTTOMPARENTGROUPSBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0x1B795B80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__REFRESHBOTTOMPARENTGROUPS_OFFSET UNITYSDK_OFFSET(0x1B795FA0)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackGroupData_TypeDefinitionIndex = 76256;

	class AlleyPackGroupData : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _GroupToRefreshGoodIDs; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* _GroupsToRefresh; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackGoodData*>* BottomItemGoods; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* GroupItemIDHashSet; // 0x28
		::System::Collections::Generic::List_1<::HACBPONPEJB*>* GroupItemGoods; // 0x30
		::System::Collections::Generic::List_1<::JLJHFLEECLF*>* HeadAnchors; // 0x38
		::UnityEngine::Quaternion RootRotation; // 0x40
		::System::Boolean IsDraggingMatchAnchor; // 0x50
		::System::Byte _padding0[0x3];
		::RPG::Client::ActivityAlley::AlleyPackDragStateEnum DragState; // 0x54
		::UnityEngine::Vector3 RootPosition; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackGoodData* GetRootGoodData()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackGoodData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GETROOTGOODDATA_OFFSET))(this);
		}

		::System::Boolean Contains(::RPG::Client::ActivityAlley::AlleyPackGoodData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackGoodData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateRotation(::UnityEngine::Quaternion a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_UPDATEROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void AutoSettle(::MGOKKPMFACL_FNNMONCNBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGOKKPMFACL_FNNMONCNBAB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_AUTOSETTLE_OFFSET))(this, a1);
		}

		::System::Void EnableColliderTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ENABLECOLLIDERTRIGGER_OFFSET))(this, a1);
		}

		::System::Void TriggerRemoveAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_TRIGGERREMOVEAUDIO_OFFSET))(this);
		}

		::System::Void OnRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ONREMOVE_OFFSET))(this);
		}

		::System::Void Settle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETTLE_OFFSET))(this);
		}

		::System::Boolean CheckCanSettle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLE_OFFSET))(this);
		}

		::System::Void CancelSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CANCELSETTLE_OFFSET))(this);
		}

		::System::Void ReleaseAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_RELEASEANCHORSINGRID_OFFSET))(this);
		}

		::System::Void AcquireAnchorsInGrid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ACQUIREANCHORSINGRID_OFFSET))(this);
		}

		::System::Void RefreshBottomCanAnchorStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHBOTTOMCANANCHORSTATUS_OFFSET))(this);
		}

		::System::Void Combine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_COMBINE_OFFSET))(this);
		}

		::System::Void DeCombine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_DECOMBINE_OFFSET))(this);
		}

		::System::Void SetAnchorMatchPosOffsetY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSETY_OFFSET))(this, a1);
		}

		::System::Void SetAnchorMatchPosOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SETANCHORMATCHPOSOFFSET_OFFSET))(this, a1);
		}

		::System::Boolean IsChild(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_ISCHILD_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSettled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_GET_ISSETTLED_OFFSET))(this);
		}

		::System::Void _CollectBottomParentGroupsBeforeRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__COLLECTBOTTOMPARENTGROUPSBEFOREREFRESH_OFFSET))(this);
		}

		::System::Void _RefreshBottomParentGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA__REFRESHBOTTOMPARENTGROUPS_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>> SearchCanAnchorGridOffset(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_SEARCHCANANCHORGRIDOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckCanSettleWithGridOffset(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_CHECKCANSETTLEWITHGRIDOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshAnchorStateWithGridOffset(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKGROUPDATA_REFRESHANCHORSTATEWITHGRIDOFFSET_OFFSET))(this, a1, a2, a3);
		}

	};
}
