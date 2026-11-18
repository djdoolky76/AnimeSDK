#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define POSTPROCESS_MKGLOW_RENDERDIMENSION_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define POSTPROCESS_MKGLOW_RENDERDIMENSION_GET_RENDERDIMENSION_OFFSET UNITYSDK_OFFSET(0x282350)
#define POSTPROCESS_MKGLOW_RENDERDIMENSION_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x359320)
#define POSTPROCESS_MKGLOW_RENDERDIMENSION_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define POSTPROCESS_MKGLOW_RENDERDIMENSION_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x359150)
#define POSTPROCESS_MKGLOW_RENDERDIMENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int RenderDimension_TypeDefinitionIndex = 26290;

	struct alignas(4) RenderDimension
	{
		::System::Int32 _width_k__BackingField; // 0x10
		::System::Int32 _height_k__BackingField; // 0x14

		::System::Void _ctor(::System::Int32 width, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERDIMENSION__CTOR_OFFSET))(this, width, height);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERDIMENSION_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERDIMENSION_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERDIMENSION_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERDIMENSION_SET_HEIGHT_OFFSET))(this, value);
		}

		/*
		::PostProcess::MKGlow::RenderDimension get_renderDimension()
		{
			return ((::PostProcess::MKGlow::RenderDimension(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_RENDERDIMENSION_GET_RENDERDIMENSION_OFFSET))(this);
		}
		*/
	};
}
