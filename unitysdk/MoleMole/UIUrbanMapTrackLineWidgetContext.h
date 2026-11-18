#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJCHCMEFPIF.h"
#include "unitysdk/LGOHCKHPJBN.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"

class LKMLFIAKFOO;
class PPAAHJMDPAO;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_ASYNCCALCPATH_OFFSET UNITYSDK_OFFSET(0x185EAA60)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CALCPATH_ASYNC_OFFSET UNITYSDK_OFFSET(0x185E9010)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANCELASYNCQUERY_OFFSET UNITYSDK_OFFSET(0x185EABC0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANREACHDIRECTLY_OFFSET UNITYSDK_OFFSET(0x185EAD80)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CUTLINEINQUESTCIRCLEAREA_OFFSET UNITYSDK_OFFSET(0x185E9280)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x185E9860)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x185E94F0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENENAVMESHPATHRESULT_ASYNC_OFFSET UNITYSDK_OFFSET(0x185EA2F0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENETRACKPOINTSDATA_OFFSET UNITYSDK_OFFSET(0x185E9EB0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETGROUNDPOS_OFFSET UNITYSDK_OFFSET(0x185EAC30)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETMAINCITYTARGETPOS_OFFSET UNITYSDK_OFFSET(0x185EA810)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSONRADARHUD_OFFSET UNITYSDK_OFFSET(0x185E98D0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETTRACKTARGETWORLDPOSITIONINBIGSCENE_OFFSET UNITYSDK_OFFSET(0x185E9FC0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_OFFSET UNITYSDK_OFFSET(0x185E9170)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINMAINCITY_ASYNC_OFFSET UNITYSDK_OFFSET(0x185E8F00)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_MAPMODEL_OFFSET UNITYSDK_OFFSET(0x185E87B0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_USEASYNCTRACKLINE_OFFSET UNITYSDK_OFFSET(0x185E8790)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_REFRESHPOINTSINBIGSCENE_OFFSET UNITYSDK_OFFSET(0x185E9CB0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_REFRESHPOINTSINMAINCITY_OFFSET UNITYSDK_OFFSET(0x185E9AB0)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SAMPLEPOSITIONGRADUALLY_OFFSET UNITYSDK_OFFSET(0x185EA440)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SETQUERYCOMPLETED_OFFSET UNITYSDK_OFFSET(0x185EAA10)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_B__34_0_OFFSET UNITYSDK_OFFSET(0x185EAF80)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x185EAE50)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x185E8880)
#define MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x185EAFB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTrackLineWidgetContext_TypeDefinitionIndex = 52010;

	class UIUrbanMapTrackLineWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_m_sampleDistanceList()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapTrackLineWidgetContext_TypeDefinitionIndex)->GetStaticField(0x39200);
		}
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_m_sampleVerticalToleranceList()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIUrbanMapTrackLineWidgetContext_TypeDefinitionIndex)->GetStaticField(0x39208);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _pointsOnRadarHud; // 0x28
		::PPAAHJMDPAO* QueryWrapper; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CachedBigSceneWorldPoints; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* CachedMainCityWorldPoints; // 0x40
		::MoleMole::Config::GuidePoint_AutoGenStrategy _splitStrategy; // 0x48
		::DJCHCMEFPIF TrackTarget; // 0x98
		::UnityEngine::Vector3 ExternalTargetPos; // 0xB0
		::UnityEngine::Vector3 PlayerPosition; // 0xBC
		::UnityEngine::Vector3 _afterMappedDestinationPos; // 0xC8
		::LGOHCKHPJBN MapConvertData; // 0xD4
		::UnityEngine::Vector3 _beforeMappedDestinationPos; // 0x10C
		::System::Boolean UseExternalTargetPos; // 0x118
		::System::Boolean QueryCompleted; // 0x119
		::System::Boolean IsCancelled; // 0x11A
		::System::Byte _padding0[0x1];
		::System::Int32 defaultAreaMask; // 0x11C
		::UnityEngine::Color Color; // 0x120

		::System::Void _ctor(::DJCHCMEFPIF trackTarget, ::LGOHCKHPJBN mapConvertData, ::UnityEngine::Color color, ::UnityEngine::Vector3 playerPosition, ::System::Boolean needCache, ::UnityEngine::Vector3 externalTargetPos, ::System::Boolean useOverridePos)
		{
			return ((::System::Void(*)(::PVOID, ::DJCHCMEFPIF, ::LGOHCKHPJBN, ::UnityEngine::Color, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CTOR_OFFSET))(this, trackTarget, mapConvertData, color, playerPosition, needCache, externalTargetPos, useOverridePos);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__CCTOR_OFFSET))();
		}

		::System::Boolean get_UseAsyncTrackLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_USEASYNCTRACKLINE_OFFSET))(this);
		}

		::System::Void CutLineInQuestCircleArea(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& raw)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CUTLINEINQUESTCIRCLEAREA_OFFSET))(this, raw);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean Equals_1(::System::Object* objA, ::System::Object* objB)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_EQUALS_1_OFFSET))(objA, objB);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetPointsOnRadarHUD(::UnityEngine::Vector3 playerPos)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETPOINTSONRADARHUD_OFFSET))(this, playerPos);
		}

		::System::Void RefreshPointsInBigScene(::UnityEngine::Vector3 playerPosVal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_REFRESHPOINTSINBIGSCENE_OFFSET))(this, playerPosVal);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> GetWorldPointsInBigScene_NavMeshCalc_Async(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths, ::UnityEngine::Vector3 playerPosVal)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINBIGSCENE_NAVMESHCALC_ASYNC_OFFSET))(this, paths, playerPosVal);
		}

		::System::Boolean GetBigSceneTrackPointsData(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& paths)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENETRACKPOINTSDATA_OFFSET))(this, paths);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> CalcPath_Async(::UnityEngine::Vector3 playerPosVal, ::UnityEngine::Vector3 targetPos, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CALCPATH_ASYNC_OFFSET))(this, playerPosVal, targetPos, paths);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> GetBigSceneNavMeshPathResult_Async(::UnityEngine::Vector3 playerPosVal, ::UnityEngine::Vector3 targetPos, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETBIGSCENENAVMESHPATHRESULT_ASYNC_OFFSET))(this, playerPosVal, targetPos, paths);
		}

		::UnityEngine::Vector3 GetTrackTargetWorldPositionInBigScene()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETTRACKTARGETWORLDPOSITIONINBIGSCENE_OFFSET))(this);
		}

		::LKMLFIAKFOO* get_MapModel()
		{
			return ((::LKMLFIAKFOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GET_MAPMODEL_OFFSET))(this);
		}

		::System::Void RefreshPointsInMainCity(::UnityEngine::Vector3 playerPosVal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_REFRESHPOINTSINMAINCITY_OFFSET))(this, playerPosVal);
		}

		::System::Boolean GetMainCityTargetPos(::UnityEngine::Vector3& targetNavPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETMAINCITYTARGETPOS_OFFSET))(this, targetNavPos);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> GetWorldPointsInMainCity_Async(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* paths, ::UnityEngine::Vector3 playerPosVal)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETWORLDPOINTSINMAINCITY_ASYNC_OFFSET))(this, paths, playerPosVal);
		}

		::System::Void SetQueryCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SETQUERYCOMPLETED_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> AsyncCalcPath(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* result)
		{
			return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_ASYNCCALCPATH_OFFSET))(this, sourcePosition, targetPosition, result);
		}

		::System::Void CancelAsyncQuery()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANCELASYNCQUERY_OFFSET))(this);
		}

		::System::Boolean SamplePositionGradually(::UnityEngine::Vector3 rawPosition, ::UnityEngine::Vector3& position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_SAMPLEPOSITIONGRADUALLY_OFFSET))(this, rawPosition, position);
		}

		::UnityEngine::Vector3 GetGroundPos(::UnityEngine::Vector3 originPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_GETGROUNDPOS_OFFSET))(this, originPos);
		}

		::System::Boolean CanReachDirectly(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT_CANREACHDIRECTLY_OFFSET))(this, from, to);
		}

		::System::Boolean _AsyncCalcPath_b__34_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT__ASYNCCALCPATH_B__34_0_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTRACKLINEWIDGETCONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
