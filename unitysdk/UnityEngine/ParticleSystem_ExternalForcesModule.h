#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ParticleSystemGameObjectFilter.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ParticleSystemForceField; }

#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F340)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_OFFSET UNITYSDK_OFFSET(0x3F76560)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F3F0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_OFFSET UNITYSDK_OFFSET(0x3F765B0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F170)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F76420)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F300)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_OFFSET UNITYSDK_OFFSET(0x3F76540)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F260)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_OFFSET UNITYSDK_OFFSET(0x3F764D0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F2B0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_OFFSET UNITYSDK_OFFSET(0x3F764F0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F220)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_OFFSET UNITYSDK_OFFSET(0x3F76460)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F1B0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76440)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F320)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_OFFSET UNITYSDK_OFFSET(0x3F76550)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F3B0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_OFFSET UNITYSDK_OFFSET(0x3F76590)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F360)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_OFFSET UNITYSDK_OFFSET(0x3F76570)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_1_OFFSET UNITYSDK_OFFSET(0x3F76580)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F390)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_OFFSET UNITYSDK_OFFSET(0x3F76570)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F3D0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_OFFSET UNITYSDK_OFFSET(0x3F765A0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F190)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x3F76430)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F280)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_OFFSET UNITYSDK_OFFSET(0x3F764E0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F2E0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_OFFSET UNITYSDK_OFFSET(0x3F76520)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F240)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_OFFSET UNITYSDK_OFFSET(0x3F764A0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x2079F1D0)
#define UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_OFFSET UNITYSDK_OFFSET(0x3F76450)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_ExternalForcesModule_TypeDefinitionIndex = 5247;

	struct alignas(8) ParticleSystem_ExternalForcesModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10
		::System::Void _ctor(::UnityEngine::ParticleSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Single get_multiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_OFFSET))(this);
		}

		::System::Void set_multiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_multiplierCurve()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_OFFSET))(this);
		}

		::System::Void set_multiplierCurve(::UnityEngine::ParticleSystem_MinMaxCurve a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemGameObjectFilter get_influenceFilter()
		{
			return ((::UnityEngine::ParticleSystemGameObjectFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_OFFSET))(this);
		}

		::System::Void set_influenceFilter(::UnityEngine::ParticleSystemGameObjectFilter a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemGameObjectFilter))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_OFFSET))(this, a1);
		}

		::UnityEngine::LayerMask get_influenceMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_OFFSET))(this);
		}

		::System::Void set_influenceMask(::UnityEngine::LayerMask a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_OFFSET))(this, a1);
		}

		::System::Int32 get_influenceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_OFFSET))(this);
		}

		::System::Boolean IsAffectedBy(::UnityEngine::ParticleSystemForceField* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_OFFSET))(this, a1);
		}

		::System::Void AddInfluence(::UnityEngine::ParticleSystemForceField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_OFFSET))(this, a1);
		}

		::System::Void RemoveInfluenceAtIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_OFFSET))(this, a1);
		}

		::System::Void RemoveInfluence(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_OFFSET))(this, a1);
		}

		::System::Void RemoveInfluence_1(::UnityEngine::ParticleSystemForceField* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_1_OFFSET))(this, a1);
		}

		::System::Void RemoveAllInfluences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_OFFSET))(this);
		}

		::System::Void SetInfluence(::System::Int32 a1, ::UnityEngine::ParticleSystemForceField* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ParticleSystemForceField* GetInfluence(::System::Int32 a1)
		{
			return ((::UnityEngine::ParticleSystemForceField*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ExternalForcesModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_ENABLED_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_ENABLED_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Single get_multiplier_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_ExternalForcesModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_multiplier_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_multiplierCurve_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_MULTIPLIERCURVE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_multiplierCurve_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::ParticleSystem_MinMaxCurve a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_MULTIPLIERCURVE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemGameObjectFilter get_influenceFilter_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1)
		{
			return ((::UnityEngine::ParticleSystemGameObjectFilter(*)(::UnityEngine::ParticleSystem_ExternalForcesModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEFILTER_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void set_influenceFilter_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::ParticleSystemGameObjectFilter a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::ParticleSystemGameObjectFilter))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEFILTER_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void get_influenceMask_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::LayerMask a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCEMASK_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void set_influenceMask_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::LayerMask a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SET_INFLUENCEMASK_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Int32 get_influenceCount_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_ExternalForcesModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GET_INFLUENCECOUNT_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean IsAffectedBy_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::ParticleSystemForceField* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ISAFFECTEDBY_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void AddInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::ParticleSystemForceField* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_ADDINFLUENCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void RemoveInfluenceAtIndex_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCEATINDEX_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void RemoveInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::UnityEngine::ParticleSystemForceField* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEINFLUENCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Void RemoveAllInfluences_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_REMOVEALLINFLUENCES_INJECTED_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Void SetInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::System::Int32 a2, ::UnityEngine::ParticleSystemForceField* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::System::Int32, ::UnityEngine::ParticleSystemForceField*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_SETINFLUENCE_INJECTED_OFFSET))(a1, a2, a3);
		}
		*/

		/*
		static ::UnityEngine::ParticleSystemForceField* GetInfluence_Injected(::UnityEngine::ParticleSystem_ExternalForcesModule a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::ParticleSystemForceField*(*)(::UnityEngine::ParticleSystem_ExternalForcesModule, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EXTERNALFORCESMODULE_GETINFLUENCE_INJECTED_OFFSET))(a1, a2);
		}
		*/

	};
}
