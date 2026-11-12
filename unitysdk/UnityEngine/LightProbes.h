#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Rendering/SphericalHarmonicsL2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_LIGHTPROBES_ADD_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0x206A5130)
#define UNITYENGINE_LIGHTPROBES_ADD_TETRAHEDRALIZATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x206A4FA0)
#define UNITYENGINE_LIGHTPROBES_ARELIGHTPROBESALLOWED_OFFSET UNITYSDK_OFFSET(0x206A5300)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_1_OFFSET UNITYSDK_OFFSET(0x206A5470)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x206A5460)
#define UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET UNITYSDK_OFFSET(0x206A5310)
#define UNITYENGINE_LIGHTPROBES_CTOR_OFFSET UNITYSDK_OFFSET(0x206A4F90)
#define UNITYENGINE_LIGHTPROBES_GETCOUNT_OFFSET UNITYSDK_OFFSET(0x206A56F0)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET UNITYSDK_OFFSET(0x206A52F0)
#define UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET UNITYSDK_OFFSET(0x206A52E0)
#define UNITYENGINE_LIGHTPROBES_GET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0x206A56B0)
#define UNITYENGINE_LIGHTPROBES_GET_CELLCOUNT_OFFSET UNITYSDK_OFFSET(0x206A56E0)
#define UNITYENGINE_LIGHTPROBES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x206A56D0)
#define UNITYENGINE_LIGHTPROBES_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x206A56A0)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLNEEDSRETETRAHEDRALIZATIONFUNCTION_OFFSET UNITYSDK_OFFSET(0x206A5290)
#define UNITYENGINE_LIGHTPROBES_INTERNAL_CALLTETRAHEDRALIZATIONCOMPLETEDFUNCTION_OFFSET UNITYSDK_OFFSET(0x206A5100)
#define UNITYENGINE_LIGHTPROBES_REMOVE_NEEDSRETETRAHEDRALIZATION_OFFSET UNITYSDK_OFFSET(0x206A51E0)
#define UNITYENGINE_LIGHTPROBES_REMOVE_TETRAHEDRALIZATIONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x206A5050)
#define UNITYENGINE_LIGHTPROBES_SET_BAKEDPROBES_OFFSET UNITYSDK_OFFSET(0x206A56C0)
#define UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x206A52D0)
#define UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZE_OFFSET UNITYSDK_OFFSET(0x206A52C0)

namespace UnityEngine
{
	inline static constexpr unsigned int LightProbes_TypeDefinitionIndex = 4129;

	class LightProbes : public ::UnityEngine::Object
	{
	public:
		static ::System::Action** StaticGet_tetrahedralizationCompleted()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine", "LightProbes")->GetStaticField(0xD8E0);
		}

		static ::System::Action** StaticGet_needsRetetrahedralization()
		{
			return (::System::Action**)UnitySDK::FromName("UnityEngine", "LightProbes")->GetStaticField(0xD8E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CTOR_OFFSET))(this);
		}

		static ::System::Void add_tetrahedralizationCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ADD_TETRAHEDRALIZATIONCOMPLETED_OFFSET))(a1);
		}

		static ::System::Void remove_tetrahedralizationCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_REMOVE_TETRAHEDRALIZATIONCOMPLETED_OFFSET))(a1);
		}

		static ::System::Void Internal_CallTetrahedralizationCompletedFunction()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_INTERNAL_CALLTETRAHEDRALIZATIONCOMPLETEDFUNCTION_OFFSET))();
		}

		static ::System::Void add_needsRetetrahedralization(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ADD_NEEDSRETETRAHEDRALIZATION_OFFSET))(a1);
		}

		static ::System::Void remove_needsRetetrahedralization(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_REMOVE_NEEDSRETETRAHEDRALIZATION_OFFSET))(a1);
		}

		static ::System::Void Internal_CallNeedsRetetrahedralizationFunction()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_INTERNAL_CALLNEEDSRETETRAHEDRALIZATIONFUNCTION_OFFSET))();
		}

		static ::System::Void Tetrahedralize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZE_OFFSET))();
		}

		static ::System::Void TetrahedralizeAsync()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_TETRAHEDRALIZEASYNC_OFFSET))();
		}

		static ::System::Void GetInterpolatedProbe(::UnityEngine::Vector3 a1, ::UnityEngine::Renderer* a2, ::UnityEngine::Rendering::SphericalHarmonicsL2 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean AreLightProbesAllowed(::UnityEngine::Renderer* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_ARELIGHTPROBESALLOWED_OFFSET))(a1);
		}

		static ::System::Void CalculateInterpolatedLightAndOcclusionProbes(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a2, ::Il2CppArray<::UnityEngine::Vector4>* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CalculateInterpolatedLightAndOcclusionProbes_1(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CalculateInterpolatedLightAndOcclusionProbes_Internal(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a3, ::Il2CppArray<::UnityEngine::Vector4>* a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_CALCULATEINTERPOLATEDLIGHTANDOCCLUSIONPROBES_INTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_positions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_POSITIONS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* get_bakedProbes()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_BAKEDPROBES_OFFSET))(this);
		}

		::System::Void set_bakedProbes(::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::SphericalHarmonicsL2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_SET_BAKEDPROBES_OFFSET))(this, a1);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_cellCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GET_CELLCOUNT_OFFSET))(this);
		}

		static ::System::Int32 GetCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETCOUNT_OFFSET))();
		}

		static ::System::Void GetInterpolatedProbe_Injected(::UnityEngine::Vector3 a1, ::UnityEngine::Renderer* a2, ::UnityEngine::Rendering::SphericalHarmonicsL2 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Renderer*, ::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_LIGHTPROBES_GETINTERPOLATEDPROBE_INJECTED_OFFSET))(a1, a2, a3);
		}

	};
}
