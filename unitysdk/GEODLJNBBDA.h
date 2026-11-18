#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/Axis.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define GEODLJNBBDA_BHGIENLGBJE_OFFSET UNITYSDK_OFFSET(0x6544A0)
#define GEODLJNBBDA_COKNIICCODC_1_OFFSET UNITYSDK_OFFSET(0x10EE8BA0)
#define GEODLJNBBDA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x10EE8A40)
#define GEODLJNBBDA_HHIDJDAACGB_OFFSET UNITYSDK_OFFSET(0x62BE50)
#define GEODLJNBBDA_MGAJDANFEEP_OFFSET UNITYSDK_OFFSET(0x6544E0)
#define GEODLJNBBDA_NLLOHFEDOFN_OFFSET UNITYSDK_OFFSET(0x654610)
#define GEODLJNBBDA_OIIOOIOMJNB_OFFSET UNITYSDK_OFFSET(0x654530)
#define GEODLJNBBDA_PMHLLGKGODG_OFFSET UNITYSDK_OFFSET(0x6545C0)
#define GEODLJNBBDA__CTOR_OFFSET UNITYSDK_OFFSET(0x654460)

inline static constexpr unsigned int GEODLJNBBDA_TypeDefinitionIndex = 54763;

struct alignas(4) GEODLJNBBDA
{
	::UnityEngine::Vector3 GGOPFLNDJGB; // 0x10
	::UnityEngine::Vector3 CDNFNBDEJFK; // 0x1C
	::System::Single GEEMKIKDHLB; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GEODLJNBBDA__CTOR_OFFSET))(this, GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA);
	}

	/*
	static ::GEODLJNBBDA COKNIICCODC(::UnityEngine::Vector3 MPLDDNMCECG, ::System::Single KKAMDFNMMJH, ::System::Single NCCDJLDKFGA, ::UnityEngine::Animations::Axis BHFAGMPDIGJ)
	{
		return ((::GEODLJNBBDA(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Animations::Axis))((::PBYTE)hIl2Cpp + GEODLJNBBDA_COKNIICCODC_OFFSET))(MPLDDNMCECG, KKAMDFNMMJH, NCCDJLDKFGA, BHFAGMPDIGJ);
	}
	*/

	/*
	static ::GEODLJNBBDA COKNIICCODC_1(::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::System::Single NCCDJLDKFGA)
	{
		return ((::GEODLJNBBDA(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GEODLJNBBDA_COKNIICCODC_1_OFFSET))(GIAEPMKCBIB, DOBFFIICAII, NCCDJLDKFGA);
	}
	*/

	::UnityEngine::Vector3 BHGIENLGBJE(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + GEODLJNBBDA_BHGIENLGBJE_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Nullable_1<::System::Single> MGAJDANFEEP(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM, ::System::Boolean GKMGHMELHKE)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GEODLJNBBDA_MGAJDANFEEP_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, EGCKEINKEPM, GKMGHMELHKE);
	}

	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull OIIOOIOMJNB(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer PMAMMGFJAJL)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + GEODLJNBBDA_OIIOOIOMJNB_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, PMAMMGFJAJL);
	}

	::System::Single HHIDJDAACGB(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + GEODLJNBBDA_HHIDJDAACGB_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Single PMHLLGKGODG(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + GEODLJNBBDA_PMHLLGKGODG_OFFSET))(this, GKBJOPJKCLB);
	}

	::UnityEngine::Bounds NLLOHFEDOFN(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + GEODLJNBBDA_NLLOHFEDOFN_OFFSET))(this, GKBJOPJKCLB);
	}
};
