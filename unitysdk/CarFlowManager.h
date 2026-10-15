#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/ValueTuple_2.h"
class Car;
class CarFlowIntersectionRule;
class CarFlowRoad;
class CarFlowRoadMapInfo;
class CarFlowRoadMapPosition;
class Lane;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CARFLOWMANAGER_AAHCFHABKHE_OFFSET UNITYSDK_OFFSET(0xDCE6A40)
#define CARFLOWMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xDCE3AC0)
#define CARFLOWMANAGER_CALACOLMDAE_OFFSET UNITYSDK_OFFSET(0xDCE5E10)
#define CARFLOWMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCE6D80)
#define CARFLOWMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xDCE6D60)
#define CARFLOWMANAGER_ECCNLEKCILL_OFFSET UNITYSDK_OFFSET(0xDCE66E0)
#define CARFLOWMANAGER_EIFDPMLFPJG_OFFSET UNITYSDK_OFFSET(0xDCE6270)
#define CARFLOWMANAGER_FGJGDHGEEEG_OFFSET UNITYSDK_OFFSET(0xDCE4ED0)
#define CARFLOWMANAGER_FINLBKIJKFF_OFFSET UNITYSDK_OFFSET(0xDCE5B80)
#define CARFLOWMANAGER_GETNEXTROUTE_OFFSET UNITYSDK_OFFSET(0xDCE6440)
#define CARFLOWMANAGER_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDCE3B10)
#define CARFLOWMANAGER_LGBAMMBDBLH_OFFSET UNITYSDK_OFFSET(0xDCE69B0)
#define CARFLOWMANAGER_LPPAEHNGMOK_OFFSET UNITYSDK_OFFSET(0xDCE6BB0)
#define CARFLOWMANAGER_MCPNHMEMPPL_OFFSET UNITYSDK_OFFSET(0xDCE59B0)
#define CARFLOWMANAGER_NKHIDOHFJJA_OFFSET UNITYSDK_OFFSET(0xDCE5700)
#define CARFLOWMANAGER_PAHPDOHKHND_OFFSET UNITYSDK_OFFSET(0xDCE5790)
#define CARFLOWMANAGER_PGHKHJLMAMA_OFFSET UNITYSDK_OFFSET(0xDCE5830)
#define CARFLOWMANAGER_SPAWNCAR_OFFSET UNITYSDK_OFFSET(0xDCE4AA0)
#define CARFLOWMANAGER_START_OFFSET UNITYSDK_OFFSET(0xDCE42B0)
#define CARFLOWMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xDCE42F0)

inline static constexpr unsigned int CarFlowManager_TypeDefinitionIndex = 47072;

	class CarFlowManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::CarFlowRoadMapInfo* RoadMap; // 0x18
		::System::Collections::Generic::List_1<::Lane*>* EntryLanes; // 0x20
		::System::Collections::Generic::List_1<::Lane*>* ExitLanes; // 0x28
		::System::Collections::Generic::List_1<::Car*>* RuntimeCars; // 0x30
		::Il2CppArray<::Car*>* CarArtPrefabs; // 0x38
		::System::Single SpawnTimeInterval; // 0x40
		::System::Single SpawnTimeIntervalRange; // 0x44
		::System::Single StaticCarMinDistance; // 0x48
		::System::Single StaticCarSafetyDistance; // 0x4C
		::System::Single AverageCarLength; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* SafetyDistance_SpeedCurve; // 0x58
		::System::Single TangentScale; // 0x60
		::System::Boolean IPKICAFDKEP; // 0x64
		static ::System::Single* StaticGet_DefaultStaticCarMinDistance()
		{
			return (::System::Single*)UnitySDK::FromName("", "CarFlowManager")->GetStaticField(0x13780);
		}

		static ::System::Single* StaticGet_DefaultAverageCarLength()
		{
			return (::System::Single*)UnitySDK::FromName("", "CarFlowManager")->GetStaticField(0x13784);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CARFLOWMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void FGJGDHGEEEG(::Car* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_FGJGDHGEEEG_OFFSET))(this, a1);
		}

		::System::Single NKHIDOHFJJA(::Car* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_NKHIDOHFJJA_OFFSET))(this, a1);
		}

		::System::Single CALACOLMDAE(::Car* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_CALACOLMDAE_OFFSET))(this, a1);
		}

		::System::Single EIFDPMLFPJG(::Car* a1)
		{
			return ((::System::Single(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_EIFDPMLFPJG_OFFSET))(this, a1);
		}

		::System::Single PAHPDOHKHND(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_PAHPDOHKHND_OFFSET))(this, a1, a2);
		}

		::System::Void FINLBKIJKFF(::Car* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_FINLBKIJKFF_OFFSET))(this, a1);
		}

		::System::Void PGHKHJLMAMA(::Car* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_PGHKHJLMAMA_OFFSET))(this, a1);
		}

		::System::Void MCPNHMEMPPL(::Car* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_MCPNHMEMPPL_OFFSET))(this, a1);
		}

		::System::Void SpawnCar(::Lane* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Lane*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_SPAWNCAR_OFFSET))(this, a1);
		}

		::Car* LGBAMMBDBLH()
		{
			return ((::Car*(*)(::PVOID))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_LGBAMMBDBLH_OFFSET))(this);
		}

		::CarFlowIntersectionRule* GetNextRoute(::CarFlowRoadMapPosition* a1, ::CarFlowRoad* a2)
		{
			return ((::CarFlowIntersectionRule*(*)(::PVOID, ::CarFlowRoadMapPosition*, ::CarFlowRoad*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_GETNEXTROUTE_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::Single> AAHCFHABKHE(::Car* a1)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Single>(*)(::PVOID, ::Car*))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_AAHCFHABKHE_OFFSET))(this, a1);
		}

		::System::Single LPPAEHNGMOK(::Car* a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::Car*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_LPPAEHNGMOK_OFFSET))(this, a1, a2, a3);
		}

		::System::Single ECCNLEKCILL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CARFLOWMANAGER_ECCNLEKCILL_OFFSET))(this, a1, a2);
		}

	};
