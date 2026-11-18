#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UINEWBIEGUIDEGETBETTERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D53DF0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuideGetBetterContext_TypeDefinitionIndex = 60661;

	class UINewbieGuideGetBetterContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* overrideTitleTextKey; // 0x28
		::System::Boolean hideTab; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 selectTab; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEGETBETTERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
