#pragma once
#include "unitysdk/unitysdk.h"

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_NAMEDWEBCOLORDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6BB50)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int NamedWebColorDictionary_TypeDefinitionIndex = 31201;

	class NamedWebColorDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_NAMEDWEBCOLORDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}
