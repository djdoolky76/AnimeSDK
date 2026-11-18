#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CUSTOMSETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x180CB180)

namespace MoleMole
{
	inline static constexpr unsigned int CustomSetChessEntitySaveMapNode_TypeDefinitionIndex = 56296;

	class CustomSetChessEntitySaveMapNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CUSTOMSETCHESSENTITYSAVEMAPNODE__CTOR_OFFSET))(this);
		}
	};
}
