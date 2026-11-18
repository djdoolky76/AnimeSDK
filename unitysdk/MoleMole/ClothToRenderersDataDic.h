#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CLOTHTORENDERERSDATADIC__CTOR_OFFSET UNITYSDK_OFFSET(0x16516140)

namespace MoleMole
{
	inline static constexpr unsigned int ClothToRenderersDataDic_TypeDefinitionIndex = 83484;

	class ClothToRenderersDataDic
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CLOTHTORENDERERSDATADIC__CTOR_OFFSET))(this);
		}
	};
}
