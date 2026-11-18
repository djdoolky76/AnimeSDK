#pragma once
#include "unitysdk/unitysdk.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_HANDLERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8A340)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int SVGDocument_Handlers_TypeDefinitionIndex = 31179;

	class SVGDocument_Handlers
	{
	public:
		::System::Void _ctor(::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_SVGDOCUMENT_HANDLERS__CTOR_OFFSET))(this, capacity);
		}
	};
}
