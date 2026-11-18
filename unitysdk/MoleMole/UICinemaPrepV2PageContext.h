#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNPEOAGLPDM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICINEMAPREPV2PAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x184A12C0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPrepV2PageContext_TypeDefinitionIndex = 76416;

	class UICinemaPrepV2PageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HNPEOAGLPDM cinemaJumpState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPV2PAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
