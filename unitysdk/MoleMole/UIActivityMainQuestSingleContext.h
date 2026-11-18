#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CJIEIHEDMME;

#define MOLEMOLE_UIACTIVITYMAINQUESTSINGLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19824FD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainQuestSingleContext_TypeDefinitionIndex = 67764;

	class UIActivityMainQuestSingleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CJIEIHEDMME* activityData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMAINQUESTSINGLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
