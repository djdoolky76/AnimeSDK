#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKPARAMS_GETSHADERPROPERTYID_OFFSET UNITYSDK_OFFSET(0x28DF9D0)
#define ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x28DFB70)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int EyeBlinkParams_TypeDefinitionIndex = 16389;

	struct alignas(8) EyeBlinkParams
	{
		static ::System::Int32* StaticGet_BlinkRangeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Int32* StaticGet_BlinkSpeedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		static ::System::Int32* StaticGet_EyeBlinkEdgeWidthID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Int32* StaticGet_EyeCurvatureID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0xC);
		}
		static ::System::Int32* StaticGet_EyeSharpnessID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::Int32* StaticGet_EyeWidthID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0x14);
		}
		static ::System::Int32* StaticGet_EyeScaleID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0x18);
		}
		static ::System::Int32* StaticGet_BlackInstanceID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EyeBlinkParams_TypeDefinitionIndex)->GetStaticField(0x1C);
		}
		::UnityEngine::Material* SampleMat; // 0x10
		::System::Single BlinkRange; // 0x18
		::System::Single BlinkSpeed; // 0x1C
		::System::Single EyeBlinkEdgeWidth; // 0x20
		::System::Single EyeCurvature; // 0x24
		::System::Single EyeSharpness; // 0x28
		::System::Single EyeWidth; // 0x2C
		::System::Single EyeScale; // 0x30
		::System::Single BlackInstance; // 0x34
		::System::Boolean SampleMatNeedColorSample; // 0x38
		::System::Boolean SampleMatUseHalfSource; // 0x39

		static ::System::Void GetShaderPropertyID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKPARAMS_GETSHADERPROPERTYID_OFFSET))();
		}

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_EYEBLINKPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}
	};
}
