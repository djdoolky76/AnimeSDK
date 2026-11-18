#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/OPPKNDHKKHN.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIROLESKILLLEVELUPPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188935D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkillLevelUpPopContext_TypeDefinitionIndex = 47809;

	class UIRoleSkillLevelUpPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::BPHGNMNLLHF* avatar; // 0x28
		::OPPKNDHKKHN skill; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKILLLEVELUPPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
