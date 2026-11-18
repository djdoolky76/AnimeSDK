#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EFAKEEDALOA;

#define MOLEMOLE_UIPERFORMPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17B95FB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPerformPageContext_TypeDefinitionIndex = 52357;

	class UIPerformPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::EFAKEEDALOA* performParam; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPERFORMPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
