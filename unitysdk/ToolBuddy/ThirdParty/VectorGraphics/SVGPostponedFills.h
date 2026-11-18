#pragma once
#include "unitysdk/unitysdk.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPOSTPONEDFILLS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE75D50)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGPostponedFills_TypeDefinitionIndex = 31172;

	class SVGPostponedFills
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGPOSTPONEDFILLS__CTOR_OFFSET))(this);
		}
	};
}
