#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/ThirdParty/VectorGraphics/FillMode.h"
#include "unitysdk/UnityEngine/Color.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1DE8F030)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1DE8F070)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_GET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1DE8F050)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x1DE8F040)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1DE8F080)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_SET_OPACITY_OFFSET UNITYSDK_OFFSET(0x1DE8F060)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE74950)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SolidFill_TypeDefinitionIndex = 31224;

	class SolidFill : public ::System::Object
	{
	public:
		::UnityEngine::Color _Color_k__BackingField; // 0x10
		::ToolBuddy::ThirdParty::VectorGraphics::FillMode _Mode_k__BackingField; // 0x20
		::System::Single m_Opacity; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_SET_COLOR_OFFSET))(this, value);
		}

		::System::Single get_Opacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_GET_OPACITY_OFFSET))(this);
		}

		::System::Void set_Opacity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_SET_OPACITY_OFFSET))(this, value);
		}

		::ToolBuddy::ThirdParty::VectorGraphics::FillMode get_Mode()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::FillMode(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::ToolBuddy::ThirdParty::VectorGraphics::FillMode value)
		{
			return ((::System::Void(*)(::PVOID, ::ToolBuddy::ThirdParty::VectorGraphics::FillMode))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SOLIDFILL_SET_MODE_OFFSET))(this, value);
		}
	};
}
