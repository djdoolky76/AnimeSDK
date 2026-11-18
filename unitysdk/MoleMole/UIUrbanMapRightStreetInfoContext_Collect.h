#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetContext.h"

class DHMNFJBEEDP;
template <typename T> class NMANHEHIJAL_1;

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_COLLECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CAA560)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoContext_Collect_TypeDefinitionIndex = 63042;

	class UIUrbanMapRightStreetInfoContext_Collect : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetContext
	{
	public:
		::NMANHEHIJAL_1<::DHMNFJBEEDP*>* CollectDatas; // 0x30
		::System::Int32 MapAreaId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTEXT_COLLECT__CTOR_OFFSET))(this);
		}
	};
}
