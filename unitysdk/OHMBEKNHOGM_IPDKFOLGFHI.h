#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera { template <typename T> class ICameraSubModule_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Collider; }

#define OHMBEKNHOGM_IPDKFOLGFHI_EJHICKGMKBO_OFFSET UNITYSDK_OFFSET(0x15F71A30)
#define OHMBEKNHOGM_IPDKFOLGFHI_HBJKOGCOPJG_OFFSET UNITYSDK_OFFSET(0x15F71BB0)
#define OHMBEKNHOGM_IPDKFOLGFHI__CTOR_OFFSET UNITYSDK_OFFSET(0x15F71A20)

inline static constexpr unsigned int OHMBEKNHOGM_IPDKFOLGFHI_TypeDefinitionIndex = 53860;

class OHMBEKNHOGM_IPDKFOLGFHI : public ::System::Object
{
public:
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* PNPMMLNCDNK; // 0x10
	::System::Func_2<::UnityEngine::RaycastHit, ::System::Boolean>* IHEJNHEEOED; // 0x18
	::Il2CppArray<::UnityEngine::Collider*>* FCMPJMPMCHE; // 0x20
	::Il2CppArray<::UnityEngine::Collider*>* IIFMKAPNJNL; // 0x28
	::System::Single HKHIMAKFCGD; // 0x30
	::UnityEngine::LayerMask FBNGKPGLADH; // 0x34
	::System::Single EGCKEINKEPM; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMBEKNHOGM_IPDKFOLGFHI__CTOR_OFFSET))(this);
	}

	::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>* EJHICKGMKBO()
	{
		return ((::PipelineCamera::ICameraSubModule_1<::PipelineCamera::WorldBasicCameraData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHMBEKNHOGM_IPDKFOLGFHI_EJHICKGMKBO_OFFSET))(this);
	}

	::System::Boolean HBJKOGCOPJG(::UnityEngine::RaycastHit NNAKPHEJBHJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + OHMBEKNHOGM_IPDKFOLGFHI_HBJKOGCOPJG_OFFSET))(this, NNAKPHEJBHJ);
	}
};
