#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BA3AAA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1BA3AA60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3ABA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Not_TypeDefinitionIndex = 69943;

	class ConfigSoundActionTriggerCondition_Not : public ::System::Object
	{
	public:
		::MoleMole::Config::ISoundActionTriggerCondition* condition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_NOT_EVALUATE_OFFSET))(this, context);
		}
	};
}
