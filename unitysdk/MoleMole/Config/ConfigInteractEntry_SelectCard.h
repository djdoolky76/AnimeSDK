#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InteractEntryMode.h"
#include "unitysdk/MoleMole/InLevelOptionsCardSelectItemData.h"

class IJLOBIGIEDO;
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x192419C0)
#define MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x19241A90)
#define MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x19241930)
#define MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD__CTOR_OFFSET UNITYSDK_OFFSET(0x19241B30)
#define MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD___BASE_CHECKACTIONCONTENT_OFFSET UNITYSDK_OFFSET(0x19241B90)
#define MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD___BASE_CHECKVALUECONTENT_OFFSET UNITYSDK_OFFSET(0x19241C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInteractEntry_SelectCard_TypeDefinitionIndex = 56096;

	class ConfigInteractEntry_SelectCard : public ::MoleMole::Config::InteractEntryMode
	{
	public:
		// static const ::System::String* SelectItemIdName; // 0x0
		::System::Collections::Generic::List_1<::MoleMole::InLevelOptionsCardSelectItemData>* ItemDatas; // 0x20
		::System::String* titleKey; // 0x28
		::System::Boolean RewardAll; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD__CTOR_OFFSET))(this);
		}

		::IJLOBIGIEDO* CreateInstance(::MoleMole::Config::InteractEntry* entry)
		{
			return ((::IJLOBIGIEDO*(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD_CREATEINSTANCE_OFFSET))(this, entry);
		}

		::System::Void CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD_CHECKVALUECONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckActionContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD___BASE_CHECKACTIONCONTENT_OFFSET))(this);
		}

		::System::Void __base_CheckValueContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINTERACTENTRY_SELECTCARD___BASE_CHECKVALUECONTENT_OFFSET))(this);
		}
	};
}
