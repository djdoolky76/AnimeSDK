#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FPBOLBNCDIP;

#define MOLEMOLE_UIACTIVITYPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18859D30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPopContext_TypeDefinitionIndex = 46672;

	class UIActivityPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FPBOLBNCDIP* popData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
