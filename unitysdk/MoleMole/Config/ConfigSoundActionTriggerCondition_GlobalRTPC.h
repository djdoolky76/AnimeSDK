#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionTriggerCondition_GlobalRTPC_JKCNGACAPCL.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_EVALUATE_OFFSET UNITYSDK_OFFSET(0xFFE1EB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xFFE1E70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0xFFE21D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE22A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_GlobalRTPC_TypeDefinitionIndex = 78088;

	class ConfigSoundActionTriggerCondition_GlobalRTPC : public ::System::Object
	{
	public:
		// static const ::System::Single Epsilon; // 0x0
		::System::String* rtpcName; // 0x10
		::MoleMole::Config::ConfigSoundActionTriggerCondition_GlobalRTPC_JKCNGACAPCL op; // 0x18
		::System::Single value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_EVALUATE_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Boolean NIIHMPMKICM(::System::Single LDDJOFHAOHG, ::System::Single HODAIDNDKHD, ::MoleMole::Config::ConfigSoundActionTriggerCondition_GlobalRTPC_JKCNGACAPCL IIDKBMFGAOL)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single, ::MoleMole::Config::ConfigSoundActionTriggerCondition_GlobalRTPC_JKCNGACAPCL))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_GLOBALRTPC_NIIHMPMKICM_OFFSET))(LDDJOFHAOHG, HODAIDNDKHD, IIDKBMFGAOL);
		}
	};
}
