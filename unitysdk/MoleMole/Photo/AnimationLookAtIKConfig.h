#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Photo/LookAtBoneConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/NativeMemoryRequestHandle.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/GAOKHAHEDPM.h"
#include "unitysdk/IKDFOIDDAEC.h"
#include "unitysdk/INCAECNMCEH.h"
#include "unitysdk/JAHFCNNMABJ.h"
#include "unitysdk/PBKHDCIJJLE.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace Foundation { class NativeMemory; }
namespace Foundation { class NativeMemoryBuilder; }
namespace MoleMole::Photo { class PlayableGraphFloatAttributeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_CREATEJOBDATA_OFFSET UNITYSDK_OFFSET(0x139FDE60)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET UNITYSDK_OFFSET(0x139FDE50)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITEYES_OFFSET UNITYSDK_OFFSET(0x139FF320)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSOLVER_OFFSET UNITYSDK_OFFSET(0x139FF540)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSPINES_OFFSET UNITYSDK_OFFSET(0x139FF060)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_REQUESTMEMORY_OFFSET UNITYSDK_OFFSET(0x139FF6E0)
#define MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x139FFF30)

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationLookAtIKConfig_TypeDefinitionIndex = 47367;

	class AnimationLookAtIKConfig
	{
	public:
		// static const ::System::Int32 WeightAllocIndex = 0x0; // 0x0
		// static const ::System::Int32 SolverAllocIndex = 0x1; // 0x0
		// static const ::System::Int32 SpinesAllocIndex = 0x2; // 0x0
		// static const ::System::Int32 EyesAllocIndex = 0x3; // 0x0
		// static const ::System::Int32 EffectorAllocIndex = 0x4; // 0x0
		// static const ::System::Int32 AllocCount = 0x5; // 0x0
		::Il2CppArray<::MoleMole::Photo::LookAtBoneConfig>* spines; // 0x10
		::MoleMole::Photo::LookAtBoneConfig head; // 0x18
		::Il2CppArray<::MoleMole::Photo::LookAtBoneConfig>* eyes; // 0x30
		::System::Single spineWeight; // 0x38
		::System::Single headWeight; // 0x3C
		::System::Single eyeWeight; // 0x40
		::System::Single spineClampWeight; // 0x44
		::System::Single headClampWeight; // 0x48
		::System::Single eyeClampWeight; // 0x4C
		::System::Int32 clampSmoothingIteration; // 0x50
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* spineWeightCurve; // 0x58
		::UnityEngine::Vector3 spineTargetOffset; // 0x60
		::System::Byte _padding1[0x4];
		::MoleMole::Photo::PlayableGraphFloatAttributeConfig* weight; // 0x70
		::System::Boolean allocateEffector; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_DynamicMemoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_GET_DYNAMICMEMORYCOUNT_OFFSET))(this);
		}

		::INCAECNMCEH CreateJobData(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::PMBCHGNJMKF& context, ::Foundation::NativeMemory* memory, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle> variables)
		{
			return ((::INCAECNMCEH(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF&, ::Foundation::NativeMemory*, ::System::ReadOnlySpan_1_F48FB86071006F3E<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_CREATEJOBDATA_OFFSET))(this, graph, animator, context, memory, variables);
		}

		::System::Void RequestMemory(::UnityEngine::Animator* animator, ::MoleMole::Photo::Skeleton* skeleton, ::Foundation::NativeMemoryBuilder* builder, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle> output)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::MoleMole::Photo::Skeleton*, ::Foundation::NativeMemoryBuilder*, ::System::Span_1_9011FAD97750D224<::Foundation::NativeMemoryRequestHandle>))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_REQUESTMEMORY_OFFSET))(this, animator, skeleton, builder, output);
		}

		::System::Boolean InitSpines(::Foundation::NativeVariableArray_1<::JAHFCNNMABJ> spinesVariable, ::PBKHDCIJJLE skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeVariableArray_1<::JAHFCNNMABJ>, ::PBKHDCIJJLE))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSPINES_OFFSET))(this, spinesVariable, skeleton);
		}

		::System::Boolean InitEyes(::Foundation::NativeVariableArray_1<::GAOKHAHEDPM> eyesVariable, ::PBKHDCIJJLE skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeVariableArray_1<::GAOKHAHEDPM>, ::PBKHDCIJJLE))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITEYES_OFFSET))(this, eyesVariable, skeleton);
		}

		::System::Boolean InitSolver(::Foundation::NativeVariable_1<::IKDFOIDDAEC> solver, ::PBKHDCIJJLE skeleton)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::NativeVariable_1<::IKDFOIDDAEC>, ::PBKHDCIJJLE))((::PBYTE)hIl2Cpp + MOLEMOLE_PHOTO_ANIMATIONLOOKATIKCONFIG_INITSOLVER_OFFSET))(this, solver, skeleton);
		}
	};
}
