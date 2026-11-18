#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNPEOAGLPDM.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UICINEMAPREPPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1849D4B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPrepPageContext_TypeDefinitionIndex = 65034;

	class UICinemaPrepPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HNPEOAGLPDM cinemaJumpState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPREPPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
