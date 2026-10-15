#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EnvLocalVolume;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ADDPOINT_OFFSET UNITYSDK_OFFSET(0x15656DF0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_AJPKKBEAMAB_OFFSET UNITYSDK_OFFSET(0x15656590)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x15656F70)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_FDCJJLAHJAF_OFFSET UNITYSDK_OFFSET(0x15656B00)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_FEHCGIBKICG_OFFSET UNITYSDK_OFFSET(0x15656850)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x15656D60)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x15656D10)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTSEGMENTINDEX_OFFSET UNITYSDK_OFFSET(0x15656DB0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_MIBPENDCIKE_OFFSET UNITYSDK_OFFSET(0x15656210)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0x156564B0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x156563D0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x156561C0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15655E50)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_PGEAINLJGKF_OFFSET UNITYSDK_OFFSET(0x15656060)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_REMOVEPOINT_OFFSET UNITYSDK_OFFSET(0x15656ED0)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x15656010)
#define ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15656420)

namespace EnviromentSystemV2Space
{
	class PathController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Points; // 0x18
		::System::Single MaxDistance; // 0x20
		::System::Boolean broadcastCurve; // 0x24
		::System::Boolean JMPLBPFAKME; // 0x25
		::System::Boolean ShowDebugGizmos; // 0x26
		::System::Byte _padding0[0x1];
		::UnityEngine::Color PathColor; // 0x28
		::System::Single GizmoSize; // 0x38
		::System::Single OELDIGFLKJH; // 0x3C
		::System::Int32 JJFBDJKBNPM; // 0x40
		::System::Single BBELABMDJIP; // 0x44
		::System::Single EFEDPMOPJBN; // 0x48
		::System::Single FLOLNDOIEIF; // 0x4C
		::System::Collections::Generic::List_1<::EnvLocalVolume*>* controlledEnvLocalVolumes; // 0x50
		::EnvLocalVolume* targetEnvLocalVolume; // 0x58
		::System::Single changeInterVal; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void PGEAINLJGKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_PGEAINLJGKF_OFFSET))(this);
		}

		::System::Void AJPKKBEAMAB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_AJPKKBEAMAB_OFFSET))(this, a1);
		}

		::System::Void MIBPENDCIKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_MIBPENDCIKE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 FEHCGIBKICG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_FEHCGIBKICG_OFFSET))(this, a1, a2, a3);
		}

		::System::Single FDCJJLAHJAF(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_FDCJJLAHJAF_OFFSET))(this, a1, a2);
		}

		::System::Single GetCurrentPercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTPERCENTAGE_OFFSET))(this);
		}

		::System::Single GetCurrentDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTDISTANCE_OFFSET))(this);
		}

		::System::Int32 GetCurrentSegmentIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_GETCURRENTSEGMENTINDEX_OFFSET))(this);
		}

		::System::Void AddPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_ADDPOINT_OFFSET))(this, a1);
		}

		::System::Void RemovePoint(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_REMOVEPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_PATHCONTROLLER_NINDHOGICJD_OFFSET))(this);
		}

	};
}
