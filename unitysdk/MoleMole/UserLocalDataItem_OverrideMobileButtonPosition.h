#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION_DGNAAPGKIPL_OFFSET UNITYSDK_OFFSET(0x120A60A0)
#define MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x120A6090)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_OverrideMobileButtonPosition_TypeDefinitionIndex = 89805;

	class UserLocalDataItem_OverrideMobileButtonPosition : public ::System::Object
	{
	public:
		::MoleMole::ConfigUICommon_Input_ButtonType buttonType; // 0x10
		::MoleMole::ConfigUICommon_Input_PositionType positionType; // 0x14
		::System::Int32 sizeLevel; // 0x18
		::System::Int32 xPosition; // 0x1C
		::System::Int32 yPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION__CTOR_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition* DGNAAPGKIPL()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPosition*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_OVERRIDEMOBILEBUTTONPOSITION_DGNAAPGKIPL_OFFSET))(this);
		}
	};
}
