#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }

#define FILCGMKDFFK_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0x174FEBD0)
#define FILCGMKDFFK_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0x174FE980)
#define FILCGMKDFFK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x174FEA00)
#define FILCGMKDFFK_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0x174FEAA0)
#define FILCGMKDFFK_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x174FF290)
#define FILCGMKDFFK_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0x174FF010)
#define FILCGMKDFFK_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x174FE900)
#define FILCGMKDFFK__CTOR_OFFSET UNITYSDK_OFFSET(0x174FE750)

inline static constexpr unsigned int FILCGMKDFFK_TypeDefinitionIndex = 66438;

class FILCGMKDFFK : public ::System::Object
{
public:
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::MoleMole::Battle::Entity* DPDJLIOFEDB; // 0x18
	::UnityEngine::Vector3 NHCNMNGEJON; // 0x20
	::System::Boolean LPAHKDLPPPI; // 0x2C
	::System::Byte _padding0[0x3];
	::UnityEngine::Quaternion EBFAOEPBGFA; // 0x30

	::System::Void _ctor(::MoleMole::Battle::Entity* LDLICIEFBLM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FILCGMKDFFK__CTOR_OFFSET))(this, LDLICIEFBLM);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FILCGMKDFFK_DISPOSE_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::MoleMole::Battle::Entity*& LDLICIEFBLM)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + FILCGMKDFFK_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, LDLICIEFBLM);
	}

	::System::Void NPOLNFDBOOD(::MoleMole::Battle::Entity* LDLICIEFBLM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FILCGMKDFFK_NPOLNFDBOOD_OFFSET))(this, LDLICIEFBLM);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Battle::Entity*& LDLICIEFBLM)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Battle::Entity*&))((::PBYTE)hIl2Cpp + FILCGMKDFFK_ANJAOOMDFLA_OFFSET))(this, LDLICIEFBLM);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Battle::Entity* LDLICIEFBLM, ::System::Boolean DEIEDIPLLEK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + FILCGMKDFFK_JLFNAHONPGB_OFFSET))(this, LDLICIEFBLM, DEIEDIPLLEK, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Battle::Entity* LDLICIEFBLM)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FILCGMKDFFK_CFHBPGGKCFN_OFFSET))(this, LDLICIEFBLM);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + FILCGMKDFFK_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}
};
