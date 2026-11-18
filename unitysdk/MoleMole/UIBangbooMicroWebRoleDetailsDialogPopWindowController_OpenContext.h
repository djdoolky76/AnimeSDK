#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIBANGBOOMICROWEBROLEDETAILSDIALOGPOPWINDOWCONTROLLER_OPENCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A151CA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRoleDetailsDialogPopWindowController_OpenContext_TypeDefinitionIndex = 61532;

	class UIBangbooMicroWebRoleDetailsDialogPopWindowController_OpenContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean ShowRoleTabBar; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 SelectCharacterGroupId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBROLEDETAILSDIALOGPOPWINDOWCONTROLLER_OPENCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
