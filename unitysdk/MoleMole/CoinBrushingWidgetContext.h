#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PPDNMFONAEH;

#define MOLEMOLE_COINBRUSHINGWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x192242F0)

namespace MoleMole
{
	inline static constexpr unsigned int CoinBrushingWidgetContext_TypeDefinitionIndex = 45437;

	class CoinBrushingWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PPDNMFONAEH* EntryData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COINBRUSHINGWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
