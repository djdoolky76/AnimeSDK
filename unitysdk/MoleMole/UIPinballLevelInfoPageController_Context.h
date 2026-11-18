#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KFNDABIHAMO;

#define MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18FEB490)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballLevelInfoPageController_Context_TypeDefinitionIndex = 56982;

	class UIPinballLevelInfoPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::KFNDABIHAMO* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLLEVELINFOPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
