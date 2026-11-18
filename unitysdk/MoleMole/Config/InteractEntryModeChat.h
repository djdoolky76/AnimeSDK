#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class IJLOBIGIEDO;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1925A2F0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1925A400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeChat_TypeDefinitionIndex = 78546;

	class InteractEntryModeChat : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::String* Speaker; // 0x20
		::System::String* storyModuleID; // 0x28
		::System::Int32 performID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT__CTOR_OFFSET))(this);
		}

		::IJLOBIGIEDO* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::IJLOBIGIEDO*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODECHAT_CREATEINSTANCE_OFFSET))(this, entry);
		}
	};
}
