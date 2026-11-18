#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CCBGGAFNBHM;

#define MOLEMOLE_UIMONSTERCARDDATACONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17FA3B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardDataContext_TypeDefinitionIndex = 60321;

	class UIMonsterCardDataContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CCBGGAFNBHM* MonsterCardSummary; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDDATACONTEXT__CTOR_OFFSET))(this);
		}
	};
}
