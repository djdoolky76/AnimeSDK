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

#define HJDBFHLNIGO_BBGGGDDJEKM_OFFSET UNITYSDK_OFFSET(0x7B10F0)
#define HJDBFHLNIGO_BHGIENLGBJE_OFFSET UNITYSDK_OFFSET(0x7B1130)
#define HJDBFHLNIGO_COKNIICCODC_1_OFFSET UNITYSDK_OFFSET(0x17A509B0)
#define HJDBFHLNIGO_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x17A4FED0)
#define HJDBFHLNIGO_HIFHMFLLPFO_OFFSET UNITYSDK_OFFSET(0x7B1060)
#define HJDBFHLNIGO_JMFDKGLNOEB_OFFSET UNITYSDK_OFFSET(0x3F1E40)
#define HJDBFHLNIGO_MGAJDANFEEP_OFFSET UNITYSDK_OFFSET(0x7B10A0)
#define HJDBFHLNIGO_NLLOHFEDOFN_OFFSET UNITYSDK_OFFSET(0x7B1240)
#define HJDBFHLNIGO_OIIOOIOMJNB_OFFSET UNITYSDK_OFFSET(0x7B11B0)
#define HJDBFHLNIGO_PPBAFLELFKC_OFFSET UNITYSDK_OFFSET(0x7B1170)
#define HJDBFHLNIGO__CTOR_OFFSET UNITYSDK_OFFSET(0x7B0FC0)

inline static constexpr unsigned int HJDBFHLNIGO_TypeDefinitionIndex = 52326;

struct alignas(4) HJDBFHLNIGO
{
	::UnityEngine::Vector3 MKEGNKPNOAB; // 0x10
	::UnityEngine::Vector3 NBIDBGCOHEM; // 0x1C
	::UnityEngine::Vector3 JEFFMCPDOPH; // 0x28
	::UnityEngine::Vector3 ABINNFKHDOF; // 0x34
	::UnityEngine::Vector3 GJLPHCECHCM; // 0x40

	::System::Void _ctor(::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 GHPJIDFANOG, ::UnityEngine::Vector3 MBLMHFIMINK, ::UnityEngine::Vector3 BJOJFCFCBNB, ::UnityEngine::Vector3 MHOFIADGKHK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJDBFHLNIGO__CTOR_OFFSET))(this, MPLDDNMCECG, GHPJIDFANOG, MBLMHFIMINK, BJOJFCFCBNB, MHOFIADGKHK);
	}

	::UnityEngine::Vector3 HIFHMFLLPFO(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_HIFHMFLLPFO_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Nullable_1<::System::Single> MGAJDANFEEP(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM, ::System::Boolean GKMGHMELHKE)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_MGAJDANFEEP_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, EGCKEINKEPM, GKMGHMELHKE);
	}

	::UnityEngine::Vector3 BBGGGDDJEKM(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_BBGGGDDJEKM_OFFSET))(this, GKBJOPJKCLB);
	}

	/*
	static ::HJDBFHLNIGO COKNIICCODC(::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 GHPJIDFANOG)
	{
		return ((::HJDBFHLNIGO(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_COKNIICCODC_OFFSET))(MPLDDNMCECG, GHPJIDFANOG);
	}
	*/

	::UnityEngine::Vector3 BHGIENLGBJE(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_BHGIENLGBJE_OFFSET))(this, GKBJOPJKCLB);
	}

	::UnityEngine::Vector3 PPBAFLELFKC(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_PPBAFLELFKC_OFFSET))(this, GKBJOPJKCLB);
	}

	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull OIIOOIOMJNB(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer PMAMMGFJAJL)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_OIIOOIOMJNB_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, PMAMMGFJAJL);
	}

	::UnityEngine::Vector3 JMFDKGLNOEB(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_JMFDKGLNOEB_OFFSET))(this, GKBJOPJKCLB);
	}

	/*
	static ::HJDBFHLNIGO COKNIICCODC_1(::UnityEngine::Vector3 MPLDDNMCECG, ::UnityEngine::Vector3 GHPJIDFANOG, ::UnityEngine::Vector3 MBLMHFIMINK, ::UnityEngine::Vector3 BJOJFCFCBNB, ::UnityEngine::Vector3 MHOFIADGKHK)
	{
		return ((::HJDBFHLNIGO(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_COKNIICCODC_1_OFFSET))(MPLDDNMCECG, GHPJIDFANOG, MBLMHFIMINK, BJOJFCFCBNB, MHOFIADGKHK);
	}
	*/

	::UnityEngine::Bounds NLLOHFEDOFN(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HJDBFHLNIGO_NLLOHFEDOFN_OFFSET))(this, GKBJOPJKCLB);
	}
};
