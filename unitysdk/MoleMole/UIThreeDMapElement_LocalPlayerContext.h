#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"
#include "unitysdk/OLPPOJJADDO.h"

#define MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1828EC30)
#define MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1828EEB0)
#define MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT___BASE_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1828EF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIThreeDMapElement_LocalPlayerContext_TypeDefinitionIndex = 60696;

	class UIThreeDMapElement_LocalPlayerContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT__CTOR_OFFSET))(this);
		}

		::OLPPOJJADDO GetWorldPosition()
		{
			return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT_GETWORLDPOSITION_OFFSET))(this);
		}

		::OLPPOJJADDO __base_GetWorldPosition()
		{
			return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_LOCALPLAYERCONTEXT___BASE_GETWORLDPOSITION_OFFSET))(this);
		}
	};
}
