#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define MGLBBPGOGFK_BHGIENLGBJE_OFFSET UNITYSDK_OFFSET(0x7AF190)
#define MGLBBPGOGFK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x177BD890)
#define MGLBBPGOGFK_HHIDJDAACGB_OFFSET UNITYSDK_OFFSET(0x408580)
#define MGLBBPGOGFK_MGAJDANFEEP_OFFSET UNITYSDK_OFFSET(0x7AEF60)
#define MGLBBPGOGFK_NLLOHFEDOFN_OFFSET UNITYSDK_OFFSET(0x7AF1D0)
#define MGLBBPGOGFK_OIIOOIOMJNB_OFFSET UNITYSDK_OFFSET(0x7AF060)
#define MGLBBPGOGFK__CTOR_OFFSET UNITYSDK_OFFSET(0x3CCA00)

inline static constexpr unsigned int MGLBBPGOGFK_TypeDefinitionIndex = 71739;

struct alignas(4) MGLBBPGOGFK
{
	::UnityEngine::Vector3 MKEGNKPNOAB; // 0x10
	::System::Single GEEMKIKDHLB; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 MPLDDNMCECG, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MGLBBPGOGFK__CTOR_OFFSET))(this, MPLDDNMCECG, NCCDJLDKFGA);
	}

	::System::Nullable_1<::System::Single> MGAJDANFEEP(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM, ::System::Boolean GKMGHMELHKE)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MGLBBPGOGFK_MGAJDANFEEP_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, EGCKEINKEPM, GKMGHMELHKE);
	}

	/*
	static ::MGLBBPGOGFK COKNIICCODC(::UnityEngine::Vector3 MPLDDNMCECG, ::System::Single NCCDJLDKFGA)
	{
		return ((::MGLBBPGOGFK(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MGLBBPGOGFK_COKNIICCODC_OFFSET))(MPLDDNMCECG, NCCDJLDKFGA);
	}
	*/

	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull OIIOOIOMJNB(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer PMAMMGFJAJL)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + MGLBBPGOGFK_OIIOOIOMJNB_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, PMAMMGFJAJL);
	}

	::UnityEngine::Vector3 BHGIENLGBJE(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + MGLBBPGOGFK_BHGIENLGBJE_OFFSET))(this, GKBJOPJKCLB);
	}

	::UnityEngine::Bounds NLLOHFEDOFN(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + MGLBBPGOGFK_NLLOHFEDOFN_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Single HHIDJDAACGB(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + MGLBBPGOGFK_HHIDJDAACGB_OFFSET))(this, GKBJOPJKCLB);
	}
};
