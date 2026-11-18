#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class PGKNIGJKKCL;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define PGKNIGJKKCL_PKHLFBMODHO_APJGFAEMDCK_OFFSET UNITYSDK_OFFSET(0x1C1D3920)
#define PGKNIGJKKCL_PKHLFBMODHO_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0x1C1D3870)
#define PGKNIGJKKCL_PKHLFBMODHO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D3860)

inline static constexpr unsigned int PGKNIGJKKCL_PKHLFBMODHO_TypeDefinitionIndex = 75334;

class PGKNIGJKKCL_PKHLFBMODHO : public ::System::Object
{
public:
	::PGKNIGJKKCL* KLHPEBKNIFB; // 0x10
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* PNPMMLNCDNK; // 0x18
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x20
	::System::Single HKHIMAKFCGD; // 0x24
	::System::Single EGCKEINKEPM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_PKHLFBMODHO__CTOR_OFFSET))(this);
	}

	::System::Void CBCIMCIDJBA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_PKHLFBMODHO_CBCIMCIDJBA_OFFSET))(this, FKMJKPGNCJI);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* APJGFAEMDCK()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKNIGJKKCL_PKHLFBMODHO_APJGFAEMDCK_OFFSET))(this);
	}
};
