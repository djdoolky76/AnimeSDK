#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BA3AE30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1BA3ADF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3B050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_ScopeEmpty_TypeDefinitionIndex = 79758;

	class ConfigSoundActionTriggerCondition_ScopeEmpty : public ::System::Object
	{
	public:
		::System::String* scopeName; // 0x10
		::System::Boolean invert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCOPEEMPTY_EVALUATE_OFFSET))(this, AAOCANGHBDG);
		}
	};
}
