#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ALLHKDOEKBK;

#define MOLEMOLE_UIHANDBOOKITEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19C41120)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookItemContext_TypeDefinitionIndex = 80307;

	class UIHandBookItemContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ALLHKDOEKBK* navigationTemplateMap; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKITEMCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
