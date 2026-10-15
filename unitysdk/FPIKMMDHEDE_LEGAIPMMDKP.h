#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPIKMMDHEDE_GFIODGHGCHK.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class Nullable; }

#define FPIKMMDHEDE_LEGAIPMMDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1591AF70)
#define FPIKMMDHEDE_LEGAIPMMDKP_EPIBJAJHHEL_OFFSET UNITYSDK_OFFSET(0x1591AEF0)
#define FPIKMMDHEDE_LEGAIPMMDKP_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1591AEC0)
#define FPIKMMDHEDE_LEGAIPMMDKP_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1591AEE0)

	class FPIKMMDHEDE_LEGAIPMMDKP : public ::FPIKMMDHEDE_GFIODGHGCHK
	{
	public:
		::System::Nullable* _TargetPosition_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_CTOR_OFFSET))(this);
		}

		::System::Nullable* get_TargetPosition()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_GET_TARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetPosition(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_SET_TARGETPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean EPIBJAJHHEL(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_EPIBJAJHHEL_OFFSET))(this, a1);
		}

	};
