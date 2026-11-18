#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_QUESTPREFIX_EVALUATE_OFFSET UNITYSDK_OFFSET(0x192AB290)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_QUESTPREFIX_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x192AB250)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_QUESTPREFIX__CTOR_OFFSET UNITYSDK_OFFSET(0x192AB6D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_QuestPrefix_TypeDefinitionIndex = 74253;

	class ConfigSoundActionTriggerCondition_QuestPrefix : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* questIdPrefixes; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_QUESTPREFIX__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_QUESTPREFIX_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_QUESTPREFIX_EVALUATE_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
