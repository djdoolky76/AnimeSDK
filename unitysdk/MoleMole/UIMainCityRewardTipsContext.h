#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;

#define MOLEMOLE_UIMAINCITYREWARDTIPSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186C2D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRewardTipsContext_TypeDefinitionIndex = 52965;

	class UIMainCityRewardTipsContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::HGAJKHIMKJP* itemData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREWARDTIPSCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
