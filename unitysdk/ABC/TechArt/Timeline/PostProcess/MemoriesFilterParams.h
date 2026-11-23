#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

namespace UnityEngine { class Material; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERPARAMS_GETSHADERPROPERTYID_OFFSET UNITYSDK_OFFSET(0x28E5250)
#define ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x28E53D0)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int MemoriesFilterParams_TypeDefinitionIndex = 16429;

	struct alignas(8) MemoriesFilterParams
	{
		static ::System::Int32* StaticGet_WiggleIntensityID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MemoriesFilterParams_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_LineAmountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MemoriesFilterParams_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Int32* StaticGet_LineThicknessID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MemoriesFilterParams_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_LineSpeedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MemoriesFilterParams_TypeDefinitionIndex)->GetStaticField(0xC);
		}
		static ::System::Int32* StaticGet_NoiseAmountID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MemoriesFilterParams_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Int32* StaticGet_NoiseThicknessID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MemoriesFilterParams_TypeDefinitionIndex)->GetStaticField(0x14);
		}
		static ::System::Int32* StaticGet_NoiseFrequencyID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MemoriesFilterParams_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		::UnityEngine::Material* SampleMat; // 0x10
		::UnityEngine::E8984F4E44AE20E5 WiggleIntensity; // 0x18
		::System::Single LineAmount; // 0x28
		::System::Single LineThickness; // 0x2C
		::System::Single LineSpeed; // 0x30
		::System::Single NoiseAmount; // 0x34
		::System::Single NoiseThickness; // 0x38
		::System::Single NoiseFrequency; // 0x3C
		::System::Boolean SampleMatNeedColorSample; // 0x40
		::System::Boolean SampleMatUseHalfSource; // 0x41

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}

		static ::System::Void GetShaderPropertyID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_MEMORIESFILTERPARAMS_GETSHADERPROPERTYID_OFFSET))();
		}
	};
}
