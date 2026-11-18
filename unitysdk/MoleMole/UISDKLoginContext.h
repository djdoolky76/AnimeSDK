#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPLCAPCBCJN.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISDKLOGINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179ADB60)

namespace MoleMole
{
	inline static constexpr unsigned int UISDKLoginContext_TypeDefinitionIndex = 82608;

	class UISDKLoginContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::IPLCAPCBCJN enterGameState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISDKLOGINCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
