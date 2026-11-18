#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class NLHKPEDIGOI;

#define MOLEMOLE_SPECIALGIFTSIGNINCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BEF90)

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGiftSignInContext_TypeDefinitionIndex = 56641;

	class SpecialGiftSignInContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NLHKPEDIGOI* TabData; // 0x28

		::System::Void _ctor(::NLHKPEDIGOI* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::NLHKPEDIGOI*))((::PBYTE)hIl2Cpp + MOLEMOLE_SPECIALGIFTSIGNINCONTEXT__CTOR_OFFSET))(this, tabData);
		}
	};
}
