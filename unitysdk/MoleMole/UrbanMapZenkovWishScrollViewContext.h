#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_URBANMAPZENKOVWISHSCROLLVIEWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE543500)

namespace MoleMole
{
	inline static constexpr unsigned int UrbanMapZenkovWishScrollViewContext_TypeDefinitionIndex = 81334;

	class UrbanMapZenkovWishScrollViewContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 selectQuestId; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_URBANMAPZENKOVWISHSCROLLVIEWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
