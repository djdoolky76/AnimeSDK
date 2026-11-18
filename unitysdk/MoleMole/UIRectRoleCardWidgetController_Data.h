#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x147FE7E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRectRoleCardWidgetController_Data_TypeDefinitionIndex = 65033;

	class UIRectRoleCardWidgetController_Data : public ::System::Object
	{
	public:
		::BPHGNMNLLHF* avatarItem; // 0x10
		::System::Boolean IsDefault; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECTROLECARDWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
