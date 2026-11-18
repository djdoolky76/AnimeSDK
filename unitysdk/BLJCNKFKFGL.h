#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/PipelineCamera/CameraVariableFetchContext_1.h"
#include "unitysdk/PipelineCamera/ScopedDelegateHandle.h"

namespace MoleMole::Cameras { class FixedCameraConfig; }
namespace MoleMole::Utils { template <typename T> class TaskBasedEventCollection_1; }
namespace PipelineCamera { class CameraCommandSpawnSubModules; }
namespace PipelineCamera { class CameraCommandUnSpawnSubModules; }
namespace PipelineCamera { template <typename T> class CameraVariableSubModule_1; }
namespace PipelineCamera::Blender { class DefaultBlender; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define BLJCNKFKFGL_ANJAOOMDFLA_OFFSET UNITYSDK_OFFSET(0xF7AC0A0)
#define BLJCNKFKFGL_CCINFKLHDDG_OFFSET UNITYSDK_OFFSET(0xF7AB670)
#define BLJCNKFKFGL_CFHBPGGKCFN_OFFSET UNITYSDK_OFFSET(0xF7AB6D0)
#define BLJCNKFKFGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF7AB760)
#define BLJCNKFKFGL_EBJMJDJFGFN_OFFSET UNITYSDK_OFFSET(0xF7AB900)
#define BLJCNKFKFGL_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0xF7AC510)
#define BLJCNKFKFGL_JLFNAHONPGB_OFFSET UNITYSDK_OFFSET(0xF7ABC00)
#define BLJCNKFKFGL_LHKFGCLMFCA_OFFSET UNITYSDK_OFFSET(0xF7AD120)
#define BLJCNKFKFGL_MCBAHLHLBPB_OFFSET UNITYSDK_OFFSET(0xF7AC5D0)
#define BLJCNKFKFGL_PIIMLEFFPOC_OFFSET UNITYSDK_OFFSET(0xF7AD040)
#define BLJCNKFKFGL__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AB400)

inline static constexpr unsigned int BLJCNKFKFGL_TypeDefinitionIndex = 79700;

class BLJCNKFKFGL : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_GIGBLPHPABA()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(BLJCNKFKFGL_TypeDefinitionIndex)->GetStaticField(0x136A0);
	}
	// static const ::NBGELMBGLKD ACHEIANAGJE = 0x1; // 0x0
	::MoleMole::Utils::TaskBasedEventCollection_1<::System::Object*>* NNKIDGCEACP; // 0x10
	::MoleMole::Cameras::FixedCameraConfig* CEJENBBHBBG; // 0x18
	::System::Boolean LPAHKDLPPPI; // 0x20
	::System::Boolean EPOCJMIJCGH; // 0x21
	::System::Byte _padding0[0x2];
	::System::UInt32 OPEJLEBMPAI; // 0x24
	::PipelineCamera::WorldBasicCameraData BFJIMBDDBAC; // 0x28

	::System::Void _ctor(::MoleMole::Cameras::FixedCameraConfig* DFMKILICPFB, ::System::Boolean DEIEDIPLLEK, ::System::Boolean FANHLHNELOE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BLJCNKFKFGL__CTOR_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK, FANHLHNELOE);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_DISPOSE_OFFSET))(this);
	}

	::System::Void EBJMJDJFGFN(::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>* FKMJKPGNCJI, ::MoleMole::Cameras::FixedCameraConfig*& DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::CameraVariableSubModule_1<::PipelineCamera::WorldBasicCameraData>*, ::MoleMole::Cameras::FixedCameraConfig*&))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_EBJMJDJFGFN_OFFSET))(this, FKMJKPGNCJI, DFMKILICPFB);
	}

	::System::Void JLFNAHONPGB(::MoleMole::Cameras::FixedCameraConfig* EJJNGFCGNAK, ::System::Boolean DEIEDIPLLEK, ::PipelineCamera::CameraCommandSpawnSubModules*& INBNCFGMKCL, ::PipelineCamera::CameraCommandUnSpawnSubModules*& MJJIOHKLAKK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean, ::PipelineCamera::CameraCommandSpawnSubModules*&, ::PipelineCamera::CameraCommandUnSpawnSubModules*&))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_JLFNAHONPGB_OFFSET))(this, EJJNGFCGNAK, DEIEDIPLLEK, INBNCFGMKCL, MJJIOHKLAKK);
	}

	::PipelineCamera::ScopedDelegateHandle ANJAOOMDFLA(::MoleMole::Cameras::FixedCameraConfig*& DFMKILICPFB, ::System::Boolean DEIEDIPLLEK)
	{
		return ((::PipelineCamera::ScopedDelegateHandle(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*&, ::System::Boolean))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_ANJAOOMDFLA_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK);
	}

	::System::String* CCINFKLHDDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_CCINFKLHDDG_OFFSET))(this);
	}

	::PipelineCamera::WorldBasicCameraData GIAOBHOJCDP(::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData> ILNDOANENID)
	{
		return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::PipelineCamera::CameraVariableFetchContext_1<::PipelineCamera::WorldBasicCameraData>))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_GIAOBHOJCDP_OFFSET))(this, ILNDOANENID);
	}

	static ::PipelineCamera::Blender::DefaultBlender* PIIMLEFFPOC(::System::Boolean JCJDLICAODK, ::System::Single MDPPNMIPDMP, ::UnityEngine::AnimationCurve* FAJHPKBELMF)
	{
		return ((::PipelineCamera::Blender::DefaultBlender*(*)(::System::Boolean, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_PIIMLEFFPOC_OFFSET))(JCJDLICAODK, MDPPNMIPDMP, FAJHPKBELMF);
	}

	::Cysharp::Threading::Tasks::UniTaskVoid CFHBPGGKCFN(::MoleMole::Cameras::FixedCameraConfig* DFMKILICPFB, ::System::Boolean DEIEDIPLLEK)
	{
		return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::MoleMole::Cameras::FixedCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_CFHBPGGKCFN_OFFSET))(this, DFMKILICPFB, DEIEDIPLLEK);
	}

	::System::Void MCBAHLHLBPB(::PipelineCamera::WorldBasicCameraData& GPBKDGGEBCF)
	{
		return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_MCBAHLHLBPB_OFFSET))(this, GPBKDGGEBCF);
	}

	::BLJCNKFKFGL* LHKFGCLMFCA(::System::Boolean JCJDLICAODK)
	{
		return ((::BLJCNKFKFGL*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLJCNKFKFGL_LHKFGCLMFCA_OFFSET))(this, JCJDLICAODK);
	}
};
