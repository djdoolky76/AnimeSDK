#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }

#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHPARAMS_GETSHADERPROPERTYID_OFFSET UNITYSDK_OFFSET(0x2877C50)
#define ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x2877CD0)

namespace ABC::TechArt::Timeline::PostProcess
{
	inline static constexpr unsigned int PPGlitchParams_TypeDefinitionIndex = 16084;

	struct alignas(8) PPGlitchParams
	{
		static ::System::Int32* StaticGet_GlitchSpeedID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PPGlitchParams_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::Material* SampleMat; // 0x10
		::System::Single GlitchSpeed; // 0x18
		::System::Boolean SampleMatNeedColorSample; // 0x1C
		::System::Boolean SampleMatUseHalfSource; // 0x1D

		::System::Void _ctor(::System::Boolean A267FE551C5A0512)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHPARAMS__CTOR_OFFSET))(this, A267FE551C5A0512);
		}

		static ::System::Void GetShaderPropertyID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_TECHART_TIMELINE_POSTPROCESS_PPGLITCHPARAMS_GETSHADERPROPERTYID_OFFSET))();
		}
	};
}
