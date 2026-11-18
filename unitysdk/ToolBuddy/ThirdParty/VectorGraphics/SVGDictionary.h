#pragma once
#include "unitysdk/unitysdk.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE74AA0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDictionary_TypeDefinitionIndex = 31171;

	class SVGDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}
