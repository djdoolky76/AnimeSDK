#pragma once
#include "unitysdk/unitysdk.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPROPERTYSHEET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8B560)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGPropertySheet_TypeDefinitionIndex = 31202;

	class SVGPropertySheet
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPROPERTYSHEET__CTOR_OFFSET))(this);
		}
	};
}
