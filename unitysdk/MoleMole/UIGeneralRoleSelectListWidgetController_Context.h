#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/PABFMPEAHNM.h"

class FDMFHPAJENA;
class JKFDIFGCMEF;

#define MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1759FBB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSelectListWidgetController_Context_TypeDefinitionIndex = 43932;

	class UIGeneralRoleSelectListWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FDMFHPAJENA* DataSource; // 0x28
		::JKFDIFGCMEF* TeamRowContext; // 0x30
		::System::Boolean ShowPreset; // 0x38
		::System::Boolean EnableSpecial; // 0x39
		::System::Boolean ShowBuddy; // 0x3A
		::System::Byte _padding0[0x1];
		::PABFMPEAHNM InitialMode; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESELECTLISTWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
