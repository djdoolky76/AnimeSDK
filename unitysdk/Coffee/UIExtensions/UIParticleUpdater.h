#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Coffee/UIExtensions/UIParticleRendererFullJob_FullJob.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleAttractor; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ATTRACTALL_OFFSET UNITYSDK_OFFSET(0x1E20EA80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_CREATEFULLJOB_OFFSET UNITYSDK_OFFSET(0x1E20DF70)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_DISPOSEALLNATIVEARRAYS_OFFSET UNITYSDK_OFFSET(0x1E20E530)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ENSUREPREPARECAPACITY_OFFSET UNITYSDK_OFFSET(0x1E1E9030)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ENSUREPROPERTYCAPACITY_OFFSET UNITYSDK_OFFSET(0x1E1E9270)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E1F9F00)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETNATIVEARRAYCAPACITY_OFFSET UNITYSDK_OFFSET(0x1E20E2A0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET UNITYSDK_OFFSET(0x1E20D940)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GET_UIPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1E20BC50)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEDEFERREDFULLJOB_OFFSET UNITYSDK_OFFSET(0x1E20EBC0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZENATIVEARRAYS_OFFSET UNITYSDK_OFFSET(0x1E20DC30)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x1E20BCD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ONAFTERPERFORMUPDATEFULLJOB_OFFSET UNITYSDK_OFFSET(0x1E20ED80)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHFULLJOB_OFFSET UNITYSDK_OFFSET(0x1E20CB70)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHJOB_OFFSET UNITYSDK_OFFSET(0x1E20B0F0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHV2_OFFSET UNITYSDK_OFFSET(0x1E20BF30)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1E20BF70)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x1E1EADB0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1E1DDC60)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_RESOLVESMOOTHMASKS_OFFSET UNITYSDK_OFFSET(0x1E20E450)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_RUNFULLJOBENDFINALIZE_OFFSET UNITYSDK_OFFSET(0x1E20E730)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x1E1EAFE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1E1DE780)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E20EE30)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleUpdater_TypeDefinitionIndex = 34422;

	class UIParticleUpdater : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_s_JobParticlesTimes()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A380);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet_s_JobParticleSystems()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A388);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet_s_JobMaterialRenderers()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A390);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_UpdatedGroupIds()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A398);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_JobPreparedRendererUpdates()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A3A0);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>** StaticGet_s_ActiveParticles()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A3A8);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>** StaticGet_s_ActiveAttractors()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A3B0);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>** StaticGet_s_BatchRenderers()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A3B8);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_JobRendererUpdates()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x2A3C0);
		}
		static ::Unity::Collections::NativeArray_1<::System::Object*>* StaticGet_s_PropertySpecsNative()
		{
			return (::Unity::Collections::NativeArray_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8830);
		}
		static ::Unity::Collections::NativeArray_1<::System::Object*>* StaticGet_s_SimCmdsNative()
		{
			return (::Unity::Collections::NativeArray_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8840);
		}
		static ::Unity::Jobs::JobHandle* StaticGet_s_FullJobHandle()
		{
			return (::Unity::Jobs::JobHandle*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8850);
		}
		static ::Unity::Collections::NativeArray_1<::System::Object*>* StaticGet_s_JobDatasNative()
		{
			return (::Unity::Collections::NativeArray_1<::System::Object*>*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8860);
		}
		static ::System::Boolean* StaticGet_s_FullJobWarmedUp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8870);
		}
		static ::System::Int32* StaticGet_s_FrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8874);
		}
		static ::System::Int32* StaticGet_s_DeferredJobCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x8878);
		}
		// static const ::System::Int32 kInitialCapacity = 0x40; // 0x0
		// static const ::System::Int32 kMinJobScheduleCount = 0x2; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET))();
		}

		static ::System::Void RefreshJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHJOB_OFFSET))();
		}

		static ::System::Int32 get_uiParticleCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GET_UIPARTICLECOUNT_OFFSET))();
		}

		static ::System::Void Register(::Coffee::UIExtensions::UIParticle* particle)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_OFFSET))(particle);
		}

		static ::System::Void Unregister(::Coffee::UIExtensions::UIParticle* particle)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_OFFSET))(particle);
		}

		static ::System::Void Register_1(::Coffee::UIExtensions::UIParticleAttractor* attractor)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticleAttractor*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_1_OFFSET))(attractor);
		}

		static ::System::Void Unregister_1(::Coffee::UIExtensions::UIParticleAttractor* attractor)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticleAttractor*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_1_OFFSET))(attractor);
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEONLOAD_OFFSET))();
		}

		static ::System::Void RefreshV2()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHV2_OFFSET))();
		}

		static ::System::Void Refresh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET))();
		}

		static ::System::Void GetGroupedRenderers(::System::Int32 groupId, ::System::Int32 index, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>* results)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET))(groupId, index, results);
		}

		static ::Coffee::UIExtensions::UIParticle* GetPrimary(::System::Int32 groupId)
		{
			return ((::Coffee::UIExtensions::UIParticle*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET))(groupId);
		}

		static ::System::Void InitializeNativeArrays()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZENATIVEARRAYS_OFFSET))();
		}

		static ::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob CreateFullJob()
		{
			return ((::Coffee::UIExtensions::UIParticleRendererFullJob_FullJob(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_CREATEFULLJOB_OFFSET))();
		}

		static ::System::Int32 GetNativeArrayCapacity(::System::Int32 required)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETNATIVEARRAYCAPACITY_OFFSET))(required);
		}

		static ::System::Void EnsurePrepareCapacity(::System::Int32 count, ::System::Boolean preserveCollected)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ENSUREPREPARECAPACITY_OFFSET))(count, preserveCollected);
		}

		static ::System::Void EnsurePropertyCapacity(::System::Int32 count, ::System::Boolean preserveSpecs)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ENSUREPROPERTYCAPACITY_OFFSET))(count, preserveSpecs);
		}

		static ::System::Void ResolveSmoothMasks(::PVOID jobDatas, ::System::Int32 jobCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_RESOLVESMOOTHMASKS_OFFSET))(jobDatas, jobCount);
		}

		static ::System::Void DisposeAllNativeArrays()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_DISPOSEALLNATIVEARRAYS_OFFSET))();
		}

		static ::System::Void RefreshFullJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESHFULLJOB_OFFSET))();
		}

		static ::System::Void AttractAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ATTRACTALL_OFFSET))();
		}

		static ::System::Void InitializeDeferredFullJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEDEFERREDFULLJOB_OFFSET))();
		}

		static ::System::Void OnAfterPerformUpdateFullJob()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_ONAFTERPERFORMUPDATEFULLJOB_OFFSET))();
		}

		static ::System::Void RunFullJobEndFinalize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_RUNFULLJOBENDFINALIZE_OFFSET))();
		}
	};
}
