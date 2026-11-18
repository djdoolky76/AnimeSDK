#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace MoleMole::Config { class ConfigShootingGroundCamera; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace UnityEngine { class AnimationCurve; }

#define EJMGGIGAPNA_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0xFE1A850)
#define EJMGGIGAPNA_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0xFE1A730)
#define EJMGGIGAPNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFE1A7B0)
#define EJMGGIGAPNA_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0xFE1B120)
#define EJMGGIGAPNA_ENDDIONCLKL_OFFSET UNITYSDK_OFFSET(0xFE1AF80)
#define EJMGGIGAPNA_GLEBDNEEIDB_OFFSET UNITYSDK_OFFSET(0xFE1B340)
#define EJMGGIGAPNA_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0xFE1AB10)
#define EJMGGIGAPNA_MNONMMGFGHA_OFFSET UNITYSDK_OFFSET(0xFE1B050)
#define EJMGGIGAPNA_NDNJKGFHFAO_OFFSET UNITYSDK_OFFSET(0xFE1B440)
#define EJMGGIGAPNA_PIIMLEFFPOC_OFFSET UNITYSDK_OFFSET(0xFE1B270)
#define EJMGGIGAPNA__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1A5E0)

inline static constexpr unsigned int EJMGGIGAPNA_TypeDefinitionIndex = 40691;

class EJMGGIGAPNA : public ::System::Object
{
public:
	::PipelineCamera::Blender::DefaultBlender* NDJOFIINGBA; // 0x10
	::UnityEngine::AnimationCurve* ODMFMOEHKJB; // 0x18
	::MoleMole::Config::ConfigShootingGroundCamera* CEJENBBHBBG; // 0x20
	::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* AKMPIKKEOAP; // 0x28
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x30
	::UnityEngine::Vector3 LMIMODIEDJM; // 0x38
	::System::Single DIFBMIIMPDO; // 0x44
	::UnityEngine::Vector3 KGBDHFODGJC; // 0x48
	::UnityEngine::Vector3 DFCONHDCDKO; // 0x54
	::System::Single AEMNBCBPCOI; // 0x60

	::System::Void _ctor(::MoleMole::Config::ConfigShootingGroundCamera*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + EJMGGIGAPNA__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_DISPOSE_OFFSET))(this);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Config::ConfigShootingGroundCamera*& DFMKILICPFB)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void ENDDIONCLKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_ENDDIONCLKL_OFFSET))(this);
	}

	::System::Void MNONMMGFGHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_MNONMMGFGHA_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::MoleMole::Config::ConfigShootingGroundCamera*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Config::ConfigShootingGroundCamera*&))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, DFMKILICPFB);
	}

	static ::PipelineCamera::Blender::DefaultBlender* PIIMLEFFPOC(::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_PIIMLEFFPOC_OFFSET))(MDPPNMIPDMP, FAJHPKBELMF);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Config::ConfigShootingGroundCamera* EJJNGFCGNAK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_JLFNAHONPGB_OFFSET))(this, EJJNGFCGNAK, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::PipelineCamera::WorldBasicCameraData GLEBDNEEIDB(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> AAOCANGHBDG)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_GLEBDNEEIDB_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void NDNJKGFHFAO(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_NDNJKGFHFAO_OFFSET))(this, PMNLNNGEIFM);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Config::ConfigShootingGroundCamera* DFMKILICPFB)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundCamera*))((::PBYTE)hIl2Cpp + EJMGGIGAPNA_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB);
	}
};
