#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NCJABLONOJL;
namespace MoleMole::Config { class HollowPopInteractInfo; }

#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C38840)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMiniEventWidgetController_Context_TypeDefinitionIndex = 78181;

	class UIHollowMiniEventWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NCJABLONOJL* PopInteractNetInfo; // 0x28
		::MoleMole::Config::HollowPopInteractInfo* PopInteractAssetInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
