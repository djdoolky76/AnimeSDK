#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class ICBLJFKCHDE;

#define MOLEMOLE_THEGUNGOBATTLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A722F50)

namespace MoleMole
{
	inline static constexpr unsigned int TheGunGoBattleContext_TypeDefinitionIndex = 62111;

	class TheGunGoBattleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ICBLJFKCHDE* ItemData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_THEGUNGOBATTLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
