#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NOHGMPIMCEF;

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1597E930)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetContext_TypeDefinitionIndex = 58669;

	class UICinemaDatePlayWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NOHGMPIMCEF* datePlayController; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
