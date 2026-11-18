#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHNDDMAIBBC_GHFBPEDIFMB.h"
#include "unitysdk/NPJJOJICBFI.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHullBuffer.h"
#include "unitysdk/Foundation/DualQuaternion.h"
#include "unitysdk/GEODLJNBBDA.h"
#include "unitysdk/HJDBFHLNIGO.h"
#include "unitysdk/MGLBBPGOGFK.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HHNDDMAIBBC_BHGIENLGBJE_OFFSET UNITYSDK_OFFSET(0x7C0EF0)
#define HHNDDMAIBBC_COKNIICCODC_1_OFFSET UNITYSDK_OFFSET(0x17E4C510)
#define HHNDDMAIBBC_COKNIICCODC_2_OFFSET UNITYSDK_OFFSET(0x17E4CB70)
#define HHNDDMAIBBC_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x17E4C090)
#define HHNDDMAIBBC_DCKFBFCKKOK_OFFSET UNITYSDK_OFFSET(0x5ED530)
#define HHNDDMAIBBC_ECGOPPNJCME_OFFSET UNITYSDK_OFFSET(0x7C0D50)
#define HHNDDMAIBBC_HIDHPDOLKGJ_OFFSET UNITYSDK_OFFSET(0x7C0CD0)
#define HHNDDMAIBBC_HNIBBHKAOOF_OFFSET UNITYSDK_OFFSET(0x359320)
#define HHNDDMAIBBC_KFOCKDFGMLB_OFFSET UNITYSDK_OFFSET(0x5ED540)
#define HHNDDMAIBBC_KJNEDLKNENM_OFFSET UNITYSDK_OFFSET(0x7C0DE0)
#define HHNDDMAIBBC_LGINKFPFNNG_OFFSET UNITYSDK_OFFSET(0x5ED4B0)
#define HHNDDMAIBBC_MGAJDANFEEP_OFFSET UNITYSDK_OFFSET(0x7C0F30)
#define HHNDDMAIBBC_NLLOHFEDOFN_OFFSET UNITYSDK_OFFSET(0x7C0F80)
#define HHNDDMAIBBC_OIIOOIOMJNB_OFFSET UNITYSDK_OFFSET(0x7C0E60)
#define HHNDDMAIBBC__CTOR_OFFSET UNITYSDK_OFFSET(0x7C0C70)

inline static constexpr unsigned int HHNDDMAIBBC_TypeDefinitionIndex = 89444;

struct alignas(4) HHNDDMAIBBC
{
	::NPJJOJICBFI HDAAAFHFDGE; // 0x10
	::HHNDDMAIBBC_GHFBPEDIFMB OFLDCHDHOKK; // 0x14

	::System::Void _ctor(::NPJJOJICBFI AGNLMKIFIEM, ::HHNDDMAIBBC_GHFBPEDIFMB IAHPHJEENIA)
	{
		return ((::System::Void(*)(::PVOID, ::NPJJOJICBFI, ::HHNDDMAIBBC_GHFBPEDIFMB))((::PBYTE)hIl2Cpp + HHNDDMAIBBC__CTOR_OFFSET))(this, AGNLMKIFIEM, IAHPHJEENIA);
	}

	::System::Boolean KFOCKDFGMLB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_KFOCKDFGMLB_OFFSET))(this);
	}

	::System::Boolean DCKFBFCKKOK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_DCKFBFCKKOK_OFFSET))(this);
	}

	::NPJJOJICBFI HNIBBHKAOOF()
	{
		return ((::NPJJOJICBFI(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_HNIBBHKAOOF_OFFSET))(this);
	}

	::MGLBBPGOGFK HIDHPDOLKGJ()
	{
		return ((::MGLBBPGOGFK(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_HIDHPDOLKGJ_OFFSET))(this);
	}

	::HJDBFHLNIGO ECGOPPNJCME()
	{
		return ((::HJDBFHLNIGO(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_ECGOPPNJCME_OFFSET))(this);
	}

	/*
	static ::HHNDDMAIBBC COKNIICCODC(::MGLBBPGOGFK ABJOBELOMEE)
	{
		return ((::HHNDDMAIBBC(*)(::MGLBBPGOGFK))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_COKNIICCODC_OFFSET))(ABJOBELOMEE);
	}
	*/

	::GEODLJNBBDA KJNEDLKNENM()
	{
		return ((::GEODLJNBBDA(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_KJNEDLKNENM_OFFSET))(this);
	}

	::Foundation::Geometry::ExtendConvexHull2D::ConvexHull OIIOOIOMJNB(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer PMAMMGFJAJL)
	{
		return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_OIIOOIOMJNB_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, PMAMMGFJAJL);
	}

	::System::Boolean LGINKFPFNNG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_LGINKFPFNNG_OFFSET))(this);
	}

	/*
	static ::HHNDDMAIBBC COKNIICCODC_1(::HJDBFHLNIGO GHGFHDOMJBL)
	{
		return ((::HHNDDMAIBBC(*)(::HJDBFHLNIGO))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_COKNIICCODC_1_OFFSET))(GHGFHDOMJBL);
	}
	*/

	::UnityEngine::Vector3 BHGIENLGBJE(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_BHGIENLGBJE_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Nullable_1<::System::Single> MGAJDANFEEP(::Foundation::DualQuaternion GKBJOPJKCLB, ::PipelineCamera::FinalCameraData KONLMDBCDCK, ::System::Single EGCKEINKEPM, ::System::Boolean GKMGHMELHKE)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::Foundation::DualQuaternion, ::PipelineCamera::FinalCameraData, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_MGAJDANFEEP_OFFSET))(this, GKBJOPJKCLB, KONLMDBCDCK, EGCKEINKEPM, GKMGHMELHKE);
	}

	::UnityEngine::Bounds NLLOHFEDOFN(::Foundation::DualQuaternion GKBJOPJKCLB)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::Foundation::DualQuaternion))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_NLLOHFEDOFN_OFFSET))(this, GKBJOPJKCLB);
	}

	/*
	static ::HHNDDMAIBBC COKNIICCODC_2(::GEODLJNBBDA DKMCMJOACMB)
	{
		return ((::HHNDDMAIBBC(*)(::GEODLJNBBDA))((::PBYTE)hIl2Cpp + HHNDDMAIBBC_COKNIICCODC_2_OFFSET))(DKMCMJOACMB);
	}
	*/
};
