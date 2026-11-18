#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_ACTIVITYRETURNGIFTV3CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13041580)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityReturnGiftV3Context_TypeDefinitionIndex = 63628;

	class ActivityReturnGiftV3Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean isFromAutoOpen; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYRETURNGIFTV3CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
