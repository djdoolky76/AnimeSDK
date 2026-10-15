#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/RectInt.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define COPKPNCABFO_SURFACECARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC9B40)
#define COPKPNCABFO_SURFACECARD_HIIBPEKAGPG_OFFSET UNITYSDK_OFFSET(0xDCCD720)
#define COPKPNCABFO_SURFACECARD_MBOMNFBHCMK_OFFSET UNITYSDK_OFFSET(0xDCCD690)
#define COPKPNCABFO_SURFACECARD_PCFPFBEGBBO_OFFSET UNITYSDK_OFFSET(0xDCCD6E0)

inline static constexpr unsigned int COPKPNCABFO_SurfaceCard_TypeDefinitionIndex = 51755;

	class COPKPNCABFO_SurfaceCard : public ::System::Object
	{
	public:
		::System::Int32 directionIndex; // 0x10
		::System::Int32 clusterIndex; // 0x14
		::UnityEngine::Bounds localBounds; // 0x18
		::UnityEngine::Vector3 direction; // 0x30
		::UnityEngine::RectInt atlasRect; // 0x3C
		::UnityEngine::Vector2 atlasUVMin; // 0x4C
		::UnityEngine::Vector2 atlasUVMax; // 0x54
		::System::Boolean isRotated; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 originalWorldSize; // 0x60
		::System::Single weightedCoverage; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COPKPNCABFO_SURFACECARD_CTOR_OFFSET))(this);
		}

		::System::Int32 MBOMNFBHCMK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + COPKPNCABFO_SURFACECARD_MBOMNFBHCMK_OFFSET))(this);
		}

		::UnityEngine::Vector2 PCFPFBEGBBO()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + COPKPNCABFO_SURFACECARD_PCFPFBEGBBO_OFFSET))(this);
		}

		::UnityEngine::Vector2 HIIBPEKAGPG()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + COPKPNCABFO_SURFACECARD_HIIBPEKAGPG_OFFSET))(this);
		}

	};
