#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"

class IJLOBIGIEDO;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xFAD0700)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xFAD07A0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0xFAD0660)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0xFAD05F0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFAD0810)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD0EC0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0xFAD0ED0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0xFAD0F60)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_GETEFFINTERACTRANGE_OFFSET UNITYSDK_OFFSET(0xFAD0FF0)
#define MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xFAD1090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractEntryModeDomain_TypeDefinitionIndex = 40949;

	class InteractEntryModeDomain : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		::System::Single targetResource; // 0x20
		::System::Single occupyNormalRatio; // 0x24
		::System::Boolean ShowOccupyProgressBar; // 0x28
		::System::Boolean useFairyImage; // 0x29
		::System::Boolean allowOccupyRatioToNegative; // 0x2A
		::System::Boolean IsPlayerOutPause; // 0x2B
		::System::Single range; // 0x2C
		::System::Single effRange; // 0x30
		::System::Single monsterInterruptRatio; // 0x34
		::System::Single occupyDuration; // 0x38
		::System::Single occupyInterruptRatio; // 0x3C
		::System::Single monsterInteractionTime; // 0x40
		::System::Single monsterInterruptMaxRatio; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEffInteractRange(::System::Single& effRadius)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_GETEFFINTERACTRANGE_OFFSET))(this, effRadius);
		}

		::IJLOBIGIEDO* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::IJLOBIGIEDO*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN_TOSTRING_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::Boolean __base_GetEffInteractRange(::System::Single& P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_GETEFFINTERACTRANGE_OFFSET))(this, P0);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTENTRYMODEDOMAIN___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
