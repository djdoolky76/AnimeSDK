#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"

namespace System { class EventArgs; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalCameraData; }

#define CAGLBIKANLP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x16A08DE0)
#define CAGLBIKANLP_APJGNENHFAN_OFFSET UNITYSDK_OFFSET(0x16A08DF0)
#define CAGLBIKANLP_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16A09550)
#define CAGLBIKANLP_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x16A09890)
#define CAGLBIKANLP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x16A09350)
#define CAGLBIKANLP_OCCOMKLOICD_OFFSET UNITYSDK_OFFSET(0x16A09360)
#define CAGLBIKANLP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16A08A00)
#define CAGLBIKANLP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16A08840)
#define CAGLBIKANLP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16A08D00)
#define CAGLBIKANLP__CTOR_OFFSET UNITYSDK_OFFSET(0x16A08D60)

inline static constexpr unsigned int CAGLBIKANLP_TypeDefinitionIndex = 48582;

class CAGLBIKANLP
{
public:
	::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* FAHBBDLKKDE; // 0x38
	::UnityEngine::Camera* HIDGBNLLCHG; // 0x40
	::System::Boolean FDPLNNGGMDF; // 0x48
	::System::Byte _padding0[0x3];
	::System::Int32 INDINLLJCFL; // 0x4C
	::UnityEngine::NAPRenderPipeline0::CameraRenderType PEFGEFMMCEL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void APJGNENHFAN(::UnityEngine::Camera* KONLMDBCDCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CAGLBIKANLP_APJGNENHFAN_OFFSET))(this, KONLMDBCDCK);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void OCCOMKLOICD(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CAGLBIKANLP_OCCOMKLOICD_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void HMLGKBFFNHI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP_HMLGKBFFNHI_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGLBIKANLP_ILHIIDBCNEC_OFFSET))(this);
	}
};
