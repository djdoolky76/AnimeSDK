#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyMetadataBase_Point.h"
#include "unitysdk/GLJJDEDOIPK.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySplineEventArgs; }
namespace FluffyUnderware::Curvy { class NearestSplinePointHelper; }
namespace MoleMole::DataStructures::Common { class Comment; }
namespace MoleMole::DataStructures::Common { class OptionalColor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define MOLEMOLE_SPLINE_NAPPOINTMETA_AWAKE_OFFSET UNITYSDK_OFFSET(0x1811CDE0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_BDAFMAGPDFO_OFFSET UNITYSDK_OFFSET(0x1811D990)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_FOBLMNKCOCH_OFFSET UNITYSDK_OFFSET(0x1811DB40)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x1811D1D0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_GETUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x1811CDA0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1811CD90)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1811DB30)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_HNMBFGLJIHI_OFFSET UNITYSDK_OFFSET(0x1811DAF0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_IGFOAGPMEME_OFFSET UNITYSDK_OFFSET(0x1811D4A0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x1811DB50)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_JLFHAHNPMBI_OFFSET UNITYSDK_OFFSET(0x1811DB10)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x1811DAD0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1811D0D0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1811D670)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1811D2D0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1811CFF0)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1811CF10)
#define MOLEMOLE_SPLINE_NAPPOINTMETA_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1811CE30)
#define MOLEMOLE_SPLINE_NAPPOINTMETA__CTOR_OFFSET UNITYSDK_OFFSET(0x1811D840)

namespace MoleMole::Spline
{
	inline static constexpr unsigned int NAPPointMeta_TypeDefinitionIndex = 39801;

	class NAPPointMeta : public ::FluffyUnderware::Curvy::CurvyMetadataBase_Point
	{
	public:
		::System::String* _tag; // 0x50
		::System::Boolean _hasSerialized; // 0x58
		::System::Byte _padding0[0x3];
		::GLJJDEDOIPK Direction; // 0x5C
		::System::String* UniqueName; // 0x60
		::MoleMole::DataStructures::Common::Comment* Comment; // 0x68
		::MoleMole::DataStructures::Common::OptionalColor* DebugColor; // 0x70
		::FluffyUnderware::Curvy::NearestSplinePointHelper* CBGILOMMPNA; // 0x78
		::System::Boolean NKLAAACCLKN; // 0x80
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 EMBHMNGEKMD; // 0x84
		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* EINBIADHHMP; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA__CTOR_OFFSET))(this);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_GET_TAG_OFFSET))(this);
		}

		::System::String* GetUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_GETUNIQUENAME_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_AWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ONDISABLE_OFFSET))(this);
		}

		::System::Void IGFOAGPMEME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_IGFOAGPMEME_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* BDAFMAGPDFO()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_BDAFMAGPDFO_OFFSET))(this);
		}

		::System::Void KDOIBCBFBAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_KDOIBCBFBAG_OFFSET))(this);
		}

		::System::Void HNMBFGLJIHI(::FluffyUnderware::Curvy::CurvySplineEventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineEventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_HNMBFGLJIHI_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void JLFHAHNPMBI(::UnityEngine::Vector3 OHOGDOMNHNK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_JLFHAHNPMBI_OFFSET))(this, OHOGDOMNHNK);
		}

		::System::Void GPGLNOBDBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_GPGLNOBDBGJ_OFFSET))(this);
		}

		::System::String* FOBLMNKCOCH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_FOBLMNKCOCH_OFFSET))(this);
		}

		::System::Void ILHIIDBCNEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SPLINE_NAPPOINTMETA_ILHIIDBCNEC_OFFSET))(this);
		}
	};
}
