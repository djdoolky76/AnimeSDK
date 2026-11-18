#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGAGCFOLHGI;

#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168FB210)
#define MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS71_0__INTERNALREFRESHDETAILTITLE_B__0_OFFSET UNITYSDK_OFFSET(0x168FB220)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleInfoSkillChildWindowController___c__DisplayClass71_0_TypeDefinitionIndex = 89369;

	class UIRoleInfoSkillChildWindowController___c__DisplayClass71_0 : public ::System::Object
	{
	public:
		::System::Int32 passiveLevel; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS71_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _InternalRefreshDetailTitle_b__0(::FGAGCFOLHGI* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGAGCFOLHGI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEINFOSKILLCHILDWINDOWCONTROLLER___C__DISPLAYCLASS71_0__INTERNALREFRESHDETAILTITLE_B__0_OFFSET))(this, x);
		}
	};
}
