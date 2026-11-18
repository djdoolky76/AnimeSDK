#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CUSTOMGETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06B030)

namespace MoleMole
{
	inline static constexpr unsigned int CustomGetChessEntitySaveMapNode_TypeDefinitionIndex = 39884;

	class CustomGetChessEntitySaveMapNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMGETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
