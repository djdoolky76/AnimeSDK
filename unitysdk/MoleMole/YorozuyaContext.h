#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1058F500)

namespace MoleMole
{
	inline static constexpr unsigned int YorozuyaContext_TypeDefinitionIndex = 59226;

	class YorozuyaContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isAutoOpen; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 selectQuestID; // 0x2C
		::DJPBMMDAFKB showActivityType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_YOROZUYACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
