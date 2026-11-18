#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class LOKMCMCCIIH;
namespace MoleMole { class UIGeneralLimitItemRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALLIMITITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1759ECE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralLimitItemRowWidgetController_Context_TypeDefinitionIndex = 46611;

	class UIGeneralLimitItemRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIGeneralLimitItemRowWidgetController*>* OnClick; // 0x28
		::LOKMCMCCIIH* Data; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALLIMITITEMROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
