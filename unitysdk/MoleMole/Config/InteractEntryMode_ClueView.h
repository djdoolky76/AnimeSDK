#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class IJLOBIGIEDO;
namespace MoleMole::Config { class InteractEntry; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x127932F0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x127931E0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x127933B0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x127933C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryMode_ClueView_TypeDefinitionIndex = 86390;

	class InteractEntryMode_ClueView : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::Int32 ClueTemplateId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW__CTOR_OFFSET))(this);
		}

		::IJLOBIGIEDO* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::IJLOBIGIEDO*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODE_CLUEVIEW___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}
	};
}
