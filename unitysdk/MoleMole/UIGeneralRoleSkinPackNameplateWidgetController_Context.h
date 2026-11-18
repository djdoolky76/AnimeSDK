#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class LDPGEIMEPPD;
class NBDLJECLJJO;

#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1759FC10)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSkinPackNameplateWidgetController_Context_TypeDefinitionIndex = 87774;

	class UIGeneralRoleSkinPackNameplateWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LDPGEIMEPPD* RecommendPageData; // 0x28
		::NBDLJECLJJO* GoodsData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
