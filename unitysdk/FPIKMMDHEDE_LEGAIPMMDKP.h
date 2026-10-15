#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPIKMMDHEDE_GFIODGHGCHK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define FPIKMMDHEDE_LEGAIPMMDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1590FF10)
#define FPIKMMDHEDE_LEGAIPMMDKP_EPIBJAJHHEL_OFFSET UNITYSDK_OFFSET(0x1590FE90)
#define FPIKMMDHEDE_LEGAIPMMDKP_GET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1590FE60)
#define FPIKMMDHEDE_LEGAIPMMDKP_SET_TARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1590FE80)

inline static constexpr unsigned int FPIKMMDHEDE_LEGAIPMMDKP_TypeDefinitionIndex = 79489;

	class FPIKMMDHEDE_LEGAIPMMDKP : public ::FPIKMMDHEDE_GFIODGHGCHK
	{
	public:
		::System::Nullable_1<::UnityEngine::Vector2Int> _TargetPosition_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Vector2Int> get_TargetPosition()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector2Int>(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_GET_TARGETPOSITION_OFFSET))(this);
		}

		::System::Void set_TargetPosition(::System::Nullable_1<::UnityEngine::Vector2Int> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2Int>))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_SET_TARGETPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean EPIBJAJHHEL(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + FPIKMMDHEDE_LEGAIPMMDKP_EPIBJAJHHEL_OFFSET))(this, a1);
		}

	};
