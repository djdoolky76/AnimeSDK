#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIZENKOVZEROMARKETREWARDCOMPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1671D650)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovZeroMarketRewardCompContext_TypeDefinitionIndex = 69693;

	class UIZenkovZeroMarketRewardCompContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVZEROMARKETREWARDCOMPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
