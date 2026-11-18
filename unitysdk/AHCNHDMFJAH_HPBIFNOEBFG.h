#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

class AHCNHDMFJAH;
namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define AHCNHDMFJAH_HPBIFNOEBFG_CBCIMCIDJBA_OFFSET UNITYSDK_OFFSET(0x134CAD00)
#define AHCNHDMFJAH_HPBIFNOEBFG_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x134CB060)
#define AHCNHDMFJAH_HPBIFNOEBFG_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x134CAD60)
#define AHCNHDMFJAH_HPBIFNOEBFG__CTOR_OFFSET UNITYSDK_OFFSET(0x134CACF0)

inline static constexpr unsigned int AHCNHDMFJAH_HPBIFNOEBFG_TypeDefinitionIndex = 78389;

class AHCNHDMFJAH_HPBIFNOEBFG : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* IHEJNHEEOED; // 0x10
	::AHCNHDMFJAH* KLHPEBKNIFB; // 0x18
	::Il2CppArray<::UnityEngine::Collider*>* FCMPJMPMCHE; // 0x20
	::Il2CppArray<::UnityEngine::Collider*>* IIFMKAPNJNL; // 0x28
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* PNPMMLNCDNK; // 0x30
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x38
	::System::Single HKHIMAKFCGD; // 0x3C
	::System::Single EGCKEINKEPM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_HPBIFNOEBFG__CTOR_OFFSET))(this);
	}

	::System::Void CBCIMCIDJBA(::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_HPBIFNOEBFG_CBCIMCIDJBA_OFFSET))(this, FKMJKPGNCJI);
	}

	::System::Boolean HBJKOGCOPJG(::UnityEngine::RaycastHit NNAKPHEJBHJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_HPBIFNOEBFG_HBJKOGCOPJG_OFFSET))(this, NNAKPHEJBHJ);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* EJHICKGMKBO()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCNHDMFJAH_HPBIFNOEBFG_EJHICKGMKBO_OFFSET))(this);
	}
};
