#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B524605D013E41E8/E28E3FA8D21EF662.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_COLORVALUE_OFFSET UNITYSDK_OFFSET(0x302F190)
#define UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x41050C0)
#define UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x41050D0)
#define UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_VEC4VALUE_OFFSET UNITYSDK_OFFSET(0x41050E0)

namespace UnityEngine::Animations
{
	inline static constexpr unsigned int MaterialData_TypeDefinitionIndex = 21087;

	struct alignas(4) MaterialData
	{
		::UnityEngine::E46B881AA2636190 m_ColorValue; // 0x10
		::UnityEngine::E8984F4E44AE20E5 m_Vec4Value; // 0x20
		::System::Single m_FloatValue; // 0x30
		::B524605D013E41E8::E28E3FA8D21EF662 m_DataType; // 0x34

		::UnityEngine::E8984F4E44AE20E5 get_vec4Value()
		{
			return ((::UnityEngine::E8984F4E44AE20E5(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_VEC4VALUE_OFFSET))(this);
		}

		::B524605D013E41E8::E28E3FA8D21EF662 get_dataType()
		{
			return ((::B524605D013E41E8::E28E3FA8D21EF662(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_DATATYPE_OFFSET))(this);
		}

		::UnityEngine::E46B881AA2636190 get_colorValue()
		{
			return ((::UnityEngine::E46B881AA2636190(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_COLORVALUE_OFFSET))(this);
		}

		::System::Single get_floatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMATIONS_MATERIALDATA_GET_FLOATVALUE_OFFSET))(this);
		}
	};
}
