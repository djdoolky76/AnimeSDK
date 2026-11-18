#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class OIFFHDLKJIF;

#define MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180F2710)

namespace MoleMole
{
	inline static constexpr unsigned int InterKnotPlayerPostQuestRowContext_TypeDefinitionIndex = 75796;

	class InterKnotPlayerPostQuestRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::OIFFHDLKJIF* Quest; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERKNOTPLAYERPOSTQUESTROWCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
