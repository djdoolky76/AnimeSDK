#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYABYSSZEROCOMPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1631D670)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityAbyssZeroCompContext_TypeDefinitionIndex = 58117;

	class UIActivityAbyssZeroCompContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYABYSSZEROCOMPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
