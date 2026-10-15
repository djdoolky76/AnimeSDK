#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPIKMMDHEDE_GFIODGHGCHK.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define FPIKMMDHEDE_FDPGBPPOGHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1591AE80)
#define FPIKMMDHEDE_FDPGBPPOGHN_EPIBJAJHHEL_OFFSET UNITYSDK_OFFSET(0x1591AE30)
#define FPIKMMDHEDE_FDPGBPPOGHN_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1591AE10)
#define FPIKMMDHEDE_FDPGBPPOGHN_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1591AE20)

	class FPIKMMDHEDE_FDPGBPPOGHN : public ::FPIKMMDHEDE_GFIODGHGCHK
	{
	public:
		::UnityEngine::Vector2Int _TargetPosition_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_FDPGBPPOGHN_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_TargetPosition()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_FDPGBPPOGHN_GET_TARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetPosition(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_FDPGBPPOGHN_SET_TARGETPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean EPIBJAJHHEL(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_FDPGBPPOGHN_EPIBJAJHHEL_OFFSET))(this, a1);
		}

	};
