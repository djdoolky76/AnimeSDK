#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Zone.h"
#include "unitysdk/GLJJDEDOIPK.h"

namespace FluffyUnderware::Curvy { class CurvyMetadataBase_Point_Empty; }
namespace FluffyUnderware::Curvy { class NearestSplinePointHelper; }
namespace MoleMole::DataStructures::Common { class Comment; }
namespace MoleMole::DataStructures::Common { class OptionalColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define MOLEMOLE_SPLINE_NAPZONEMETA_AWAKE_OFFSET UNITYSDK_OFFSET(0x162F40D0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_FOBLMNKCOCH_OFFSET UNITYSDK_OFFSET(0x162F4920)
#define MOLEMOLE_SPLINE_NAPZONEMETA_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x162F42E0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x162F4090)
#define MOLEMOLE_SPLINE_NAPZONEMETA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x162F4080)
#define MOLEMOLE_SPLINE_NAPZONEMETA_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x162F47C0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_HIPLELKGDNC_1_OFFSET UNITYSDK_OFFSET(0x162F4690)
#define MOLEMOLE_SPLINE_NAPZONEMETA_HIPLELKGDNC_OFFSET UNITYSDK_OFFSET(0x162F43C0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x162F47D0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_KCGAHLHKMDO_OFFSET UNITYSDK_OFFSET(0x162F47E0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x162F4940)
#define MOLEMOLE_SPLINE_NAPZONEMETA_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x162F4260)
#define MOLEMOLE_SPLINE_NAPZONEMETA_MEHPJMALJBG_OFFSET UNITYSDK_OFFSET(0x162F4930)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONAFTERCREATEZONEPOINT_OFFSET UNITYSDK_OFFSET(0x162F4480)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x162F4440)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x162F4350)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x162F4220)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x162F41E0)
#define MOLEMOLE_SPLINE_NAPZONEMETA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x162F4120)
#define MOLEMOLE_SPLINE_NAPZONEMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x162F44D0)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPZoneMeta_TypeDefinitionIndex = 67275;

	class NAPZoneMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Zone
	{
	public:
		::System::String* _tag; // 0x40
		::System::Boolean _hasSerialized; // 0x48
		::System::Byte _padding0[0x3];
		::GLJJDEDOIPK Direction; // 0x4C
		::System::String* UniqueName; // 0x50
		::MoleMole::DataStructures::Common::Comment* Comment; // 0x58
		::MoleMole::DataStructures::Common::OptionalColor* DebugColor; // 0x60
		::FluffyUnderware::Curvy::NearestSplinePointHelper* CBGILOMMPNA; // 0x68
		::FluffyUnderware::Curvy::NearestSplinePointHelper* IGHNMDLFLDO; // 0x70
		::System::Boolean NKLAAACCLKN; // 0x78
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* HKCMHJFGEII; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_GET_TAG_OFFSET))(this);
		}

		::System::String* GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_GETUNIQUENAME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_AWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnAfterCreateZonePoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ONAFTERCREATEZONEPOINT_OFFSET))(this);
		}

		::System::Void HIPLELKGDNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_HIPLELKGDNC_OFFSET))(this);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_ILHIIDBCNEC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* KCGAHLHKMDO()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_KCGAHLHKMDO_OFFSET))(this);
		}

		::System::String* FOBLMNKCOCH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_FOBLMNKCOCH_OFFSET))(this);
		}

		::System::Void MEHPJMALJBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_MEHPJMALJBG_OFFSET))(this);
		}

		::System::Void HIPLELKGDNC_1(::FluffyUnderware::Curvy::NearestSplinePointHelper* IHJEAAEDCKN, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty* OPMPKFEHOBM)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::NearestSplinePointHelper*, ::FluffyUnderware::Curvy::CurvyMetadataBase_Point_Empty*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_HIPLELKGDNC_1_OFFSET))(this, IHJEAAEDCKN, OPMPKFEHOBM);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPZONEMETA_KDOIBCBFBAG_OFFSET))(this);
		}
	};
}
