#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188F8330)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovSearchWidgetController_Context_TypeDefinitionIndex = 64850;

	class UIBangkovSearchWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action* OnMoveAllSuccess; // 0x28
		::System::Action* BeforeMoveAll; // 0x30
		::System::Int32 SearchEntityRid; // 0x38
		::System::Boolean IsLegworkBangboo; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVSEARCHWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
