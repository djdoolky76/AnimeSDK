#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CMOKABLJPEK;

#define MOLEMOLE_UIACTIVITYCOMPARCADECOINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18844040)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompArcadeCoinContext_TypeDefinitionIndex = 69802;

	class UIActivityCompArcadeCoinContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CMOKABLJPEK* handler; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPARCADECOINCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
