#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DEBNKJEHNIL;

#define MOLEMOLE_UIABINFOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13F30EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInfoContext_TypeDefinitionIndex = 75681;

	class UIABInfoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DEBNKJEHNIL* viewModel; // 0x28
		::System::Int32 tabIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINFOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
