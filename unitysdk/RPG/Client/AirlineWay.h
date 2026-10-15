#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Airline.h"
#include "unitysdk/RPG/Client/AirlineWay_ETailMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MOKNEGNIBGI.h"
#include "unitysdk/UnityEngine/Quaternion.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::Client { class AirlineStationInfo; }
namespace RPG::Client { class AirlineVariableScalePoint; }
namespace RPG::Client { class AirlineVariableSpeedRange; }
namespace RPG::Client { class RacingBoostRingConfig; }
namespace RPG::Client { class RacingDriveConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AIRLINEWAY_AGKDEAMIDEM_OFFSET UNITYSDK_OFFSET(0xC640AB0)
#define RPG_CLIENT_AIRLINEWAY_AWAKE_OFFSET UNITYSDK_OFFSET(0xC640C50)
#define RPG_CLIENT_AIRLINEWAY_CCCGHFPBNNL_OFFSET UNITYSDK_OFFSET(0xC6417B0)
#define RPG_CLIENT_AIRLINEWAY_CLAMPRACINGOFFSET_OFFSET UNITYSDK_OFFSET(0xC643C40)
#define RPG_CLIENT_AIRLINEWAY_CTOR_OFFSET UNITYSDK_OFFSET(0xC6455F0)
#define RPG_CLIENT_AIRLINEWAY_DJJBNHJEFJK_OFFSET UNITYSDK_OFFSET(0xC645320)
#define RPG_CLIENT_AIRLINEWAY_EOIIPNNCMBO_OFFSET UNITYSDK_OFFSET(0xC645250)
#define RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xC6439F0)
#define RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTTRIGGERDISTANCE_OFFSET UNITYSDK_OFFSET(0xC643B70)
#define RPG_CLIENT_AIRLINEWAY_FAOKDFNFBLM_OFFSET UNITYSDK_OFFSET(0xC644DA0)
#define RPG_CLIENT_AIRLINEWAY_GETBAKEDRACINGLINELATERALOFFSET_OFFSET UNITYSDK_OFFSET(0xC6450F0)
#define RPG_CLIENT_AIRLINEWAY_GETNEXTRACINGBOOSTRINGINDEX_OFFSET UNITYSDK_OFFSET(0xC6436F0)
#define RPG_CLIENT_AIRLINEWAY_GETOPTIMALRACINGLINEOFFSET_OFFSET UNITYSDK_OFFSET(0xC644760)
#define RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKANCHOR_OFFSET UNITYSDK_OFFSET(0xC642050)
#define RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKPOSITION_OFFSET UNITYSDK_OFFSET(0xC642AB0)
#define RPG_CLIENT_AIRLINEWAY_GETRACINGTURNSTRENGTH_OFFSET UNITYSDK_OFFSET(0xC643D50)
#define RPG_CLIENT_AIRLINEWAY_GET_BODYLOOKAHEADDISTANCE_OFFSET UNITYSDK_OFFSET(0xC640800)
#define RPG_CLIENT_AIRLINEWAY_GET_HASBAKEDRACINGLINE_OFFSET UNITYSDK_OFFSET(0xC644A00)
#define RPG_CLIENT_AIRLINEWAY_GET_HASBODYLOOKAHEADSTEERING_OFFSET UNITYSDK_OFFSET(0xC6407E0)
#define RPG_CLIENT_AIRLINEWAY_GET_HASCUSTOMSAILBOATWINDDIRECTION_OFFSET UNITYSDK_OFFSET(0xC640850)
#define RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTRINGS_OFFSET UNITYSDK_OFFSET(0xC6409A0)
#define RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTSPEEDCONFIG_OFFSET UNITYSDK_OFFSET(0xC640B20)
#define RPG_CLIENT_AIRLINEWAY_GET_HASTURNSPEEDCONTROL_OFFSET UNITYSDK_OFFSET(0xC6407D0)
#define RPG_CLIENT_AIRLINEWAY_GET_ISRACINGMODEENABLED_OFFSET UNITYSDK_OFFSET(0xC642C70)
#define RPG_CLIENT_AIRLINEWAY_GET_LEAVEDISSOLVEPOINT_OFFSET UNITYSDK_OFFSET(0xC6407B0)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTMOVETRIGGERHASH_OFFSET UNITYSDK_OFFSET(0xC640A00)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTSPEEDDURATION_OFFSET UNITYSDK_OFFSET(0xC640B90)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTTRIGGERDISTANCEOFFSET_OFFSET UNITYSDK_OFFSET(0xC640BF0)
#define RPG_CLIENT_AIRLINEWAY_GET_RACINGDRIVESETTINGS_OFFSET UNITYSDK_OFFSET(0xC640930)
#define RPG_CLIENT_AIRLINEWAY_GET_SAILBOATWINDDIRECTION_OFFSET UNITYSDK_OFFSET(0xC6408B0)
#define RPG_CLIENT_AIRLINEWAY_INITRACINGBOOSTRINGS_OFFSET UNITYSDK_OFFSET(0xC642CD0)
#define RPG_CLIENT_AIRLINEWAY_JJONIPBPEBJ_OFFSET UNITYSDK_OFFSET(0xC6454D0)
#define RPG_CLIENT_AIRLINEWAY_LLLLAHFJFJG_OFFSET UNITYSDK_OFFSET(0xC645510)
#define RPG_CLIENT_AIRLINEWAY_MJKGJMCJBBB_OFFSET UNITYSDK_OFFSET(0xC644850)
#define RPG_CLIENT_AIRLINEWAY_NLFCPKOGJPG_OFFSET UNITYSDK_OFFSET(0xC643E30)
#define RPG_CLIENT_AIRLINEWAY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC641A20)
#define RPG_CLIENT_AIRLINEWAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC6419D0)
#define RPG_CLIENT_AIRLINEWAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC641760)
#define RPG_CLIENT_AIRLINEWAY_RELEASERACINGBOOSTRINGS_OFFSET UNITYSDK_OFFSET(0xC641A70)
#define RPG_CLIENT_AIRLINEWAY_SET_LEAVEDISSOLVEPOINT_OFFSET UNITYSDK_OFFSET(0xC6407C0)
#define RPG_CLIENT_AIRLINEWAY_START_OFFSET UNITYSDK_OFFSET(0xC641C90)
#define RPG_CLIENT_AIRLINEWAY_TRIGGERRACINGBOOSTRING_OFFSET UNITYSDK_OFFSET(0xC643860)
#define RPG_CLIENT_AIRLINEWAY_TRYGETBAKEDRACINGLINEPOSE_OFFSET UNITYSDK_OFFSET(0xC644A60)
#define RPG_CLIENT_AIRLINEWAY_TRYGETRACINGBOOSTRINGDISTANCE_OFFSET UNITYSDK_OFFSET(0xC6437B0)

namespace RPG::Client
{
	class AirlineWay : public ::RPG::Client::Airline
	{
	public:
		::RPG::Client::AirlineWay_ETailMode tailMode; // 0x30
		::System::Single width; // 0x34
		::System::Boolean enableRacingBehavior; // 0x38
		::System::Byte _padding0[0x7];
		::RPG::Client::RacingDriveConfig* racingDriveConfig; // 0x40
		::RPG::Client::RacingBoostRingConfig* racingBoostRingConfig; // 0x48
		::System::Boolean fullSpeed; // 0x50
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableSpeedRange*>* variableSpeedRanges; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::AirlineVariableScalePoint*>* variableScalePoints; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::AirlineStationInfo*>* stations; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* subwayHiddenSegments; // 0x70
		::System::Int32 leaveDissolvePointIndex; // 0x78
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* leaveDissolvePlanet; // 0x80
		::System::Boolean enableWaterSurface; // 0x88
		::System::Byte _padding3[0x3];
		::System::Single waterSurfaceHeight; // 0x8C
		::System::Boolean enableTurnSpeedControl; // 0x90
		::System::Byte _padding4[0x3];
		::System::Single turnSpeedLookAheadNear; // 0x94
		::System::Single turnSpeedLookAheadFar; // 0x98
		::System::Byte _padding5[0x4];
		::UnityEngine::AnimationCurve* turnSpeedCurve; // 0xA0
		::System::Single bodyLookAheadDistance; // 0xA8
		::UnityEngine::Vector2 sailboatWindDirection; // 0xAC
		::System::Single _LeaveDissolvePoint_k__BackingField; // 0xB4
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _bakedRacingLinePoints; // 0xB8
		::System::Single _bakedRacingLinePointSpacing; // 0xC0
		::System::Byte _padding6[0x4];
		::BansheeGz::BGSpline::Components::BGCcMath* BOACCCCFJEE; // 0xC8
		::System::Boolean ACAKGFGOKJK; // 0xD0
		::System::Byte _padding7[0x7];
		::System::Collections::Generic::List_1<::System::Object*>* DHIJHMHAHCI; // 0xD8
		// static const ::System::Object NMHIJPMMLCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_CTOR_OFFSET))(this);
		}

		::System::Single get_LeaveDissolvePoint()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_LEAVEDISSOLVEPOINT_OFFSET))(this);
		}

		::System::Void set_LeaveDissolvePoint(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_SET_LEAVEDISSOLVEPOINT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasTurnSpeedControl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASTURNSPEEDCONTROL_OFFSET))(this);
		}

		::System::Boolean get_HasBodyLookAheadSteering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASBODYLOOKAHEADSTEERING_OFFSET))(this);
		}

		::System::Single get_BodyLookAheadDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_BODYLOOKAHEADDISTANCE_OFFSET))(this);
		}

		::System::Boolean get_HasCustomSailboatWindDirection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASCUSTOMSAILBOATWINDDIRECTION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_SailboatWindDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_SAILBOATWINDDIRECTION_OFFSET))(this);
		}

		::RPG::Client::RacingDriveConfig* get_RacingDriveSettings()
		{
			return ((::RPG::Client::RacingDriveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGDRIVESETTINGS_OFFSET))(this);
		}

		::System::Boolean get_HasRacingBoostRings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTRINGS_OFFSET))(this);
		}

		::System::Int32 get_RacingBoostMoveTriggerHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTMOVETRIGGERHASH_OFFSET))(this);
		}

		::System::Boolean get_HasRacingBoostSpeedConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASRACINGBOOSTSPEEDCONFIG_OFFSET))(this);
		}

		::System::Single get_RacingBoostSpeedDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTSPEEDDURATION_OFFSET))(this);
		}

		::System::Single get_RacingBoostTriggerDistanceOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_RACINGBOOSTTRIGGERDISTANCEOFFSET_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_START_OFFSET))(this);
		}

		::MOKNEGNIBGI GetRacingTrackAnchor(::System::Single a1)
		{
			return ((::MOKNEGNIBGI(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKANCHOR_OFFSET))(this, a1);
		}

		::System::Void GetRacingTrackPosition(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETRACINGTRACKPOSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsRacingModeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_ISRACINGMODEENABLED_OFFSET))(this);
		}

		::System::Void InitRacingBoostRings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_INITRACINGBOOSTRINGS_OFFSET))(this);
		}

		::System::Void ReleaseRacingBoostRings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_RELEASERACINGBOOSTRINGS_OFFSET))(this);
		}

		::System::Int32 GetNextRacingBoostRingIndex(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETNEXTRACINGBOOSTRINGINDEX_OFFSET))(this, a1);
		}

		::System::Boolean TryGetRacingBoostRingDistance(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_TRYGETRACINGBOOSTRINGDISTANCE_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerRacingBoostRing(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_TRIGGERRACINGBOOSTRING_OFFSET))(this, a1);
		}

		::System::Single EvaluateRacingBoostSpeedMultiplier(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTSPEEDMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Single EvaluateRacingBoostTriggerDistance(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_EVALUATERACINGBOOSTTRIGGERDISTANCE_OFFSET))(this, a1);
		}

		::System::Single ClampRacingOffset(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_CLAMPRACINGOFFSET_OFFSET))(this, a1);
		}

		::System::Single GetRacingTurnStrength(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETRACINGTURNSTRENGTH_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetOptimalRacingLineOffset(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETOPTIMALRACINGLINEOFFSET_OFFSET))(this, a1, a2, a3);
		}

		::System::Single MJKGJMCJBBB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_MJKGJMCJBBB_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_HasBakedRacingLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GET_HASBAKEDRACINGLINE_OFFSET))(this);
		}

		::System::Boolean TryGetBakedRacingLinePose(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_TRYGETBAKEDRACINGLINEPOSE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single GetBakedRacingLineLateralOffset(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_GETBAKEDRACINGLINELATERALOFFSET_OFFSET))(this, a1);
		}

		::System::Single EOIIPNNCMBO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_EOIIPNNCMBO_OFFSET))(this);
		}

		::System::Int32 DJJBNHJEFJK(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_DJJBNHJEFJK_OFFSET))(this, a1);
		}

		::System::Boolean FAOKDFNFBLM(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_FAOKDFNFBLM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NLFCPKOGJPG(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_NLFCPKOGJPG_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void JJONIPBPEBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_JJONIPBPEBJ_OFFSET))(this);
		}

		::System::Void LLLLAHFJFJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_LLLLAHFJFJG_OFFSET))(this);
		}

		static ::System::Int32 AGKDEAMIDEM(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_AGKDEAMIDEM_OFFSET))(a1);
		}

		::System::Void CCCGHFPBNNL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AIRLINEWAY_CCCGHFPBNNL_OFFSET))(this, a1);
		}

	};
}
