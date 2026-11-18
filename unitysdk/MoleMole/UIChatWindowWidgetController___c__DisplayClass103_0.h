#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJBPFKHFACN.h"
#include "unitysdk/System/Object.h"

class BFHAALDDHFF;

#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS103_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB64E0)
#define MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS103_0__REFRESHCIRCLEHISTORYMESSAGES_B__0_OFFSET UNITYSDK_OFFSET(0x16EB64F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatWindowWidgetController___c__DisplayClass103_0_TypeDefinitionIndex = 73432;

	class UIChatWindowWidgetController___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::AJBPFKHFACN locatorIdentifier; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS103_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshCircleHistoryMessages_b__0(::BFHAALDDHFF* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFHAALDDHFF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATWINDOWWIDGETCONTROLLER___C__DISPLAYCLASS103_0__REFRESHCIRCLEHISTORYMESSAGES_B__0_OFFSET))(this, context);
		}
	};
}
