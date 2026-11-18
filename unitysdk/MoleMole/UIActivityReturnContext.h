#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNJEIKIFEOB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYRETURNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F96B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnContext_TypeDefinitionIndex = 81558;

	class UIActivityReturnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DNJEIKIFEOB selectType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
