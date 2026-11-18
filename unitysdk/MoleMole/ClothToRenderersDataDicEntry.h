#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CLOTHTORENDERERSDATADICENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B82C70)

namespace MoleMole
{
	inline static constexpr unsigned int ClothToRenderersDataDicEntry_TypeDefinitionIndex = 82473;

	class ClothToRenderersDataDicEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHTORENDERERSDATADICENTRY__CTOR_OFFSET))(this);
		}
	};
}
