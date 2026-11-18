#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PGOIKPHLOCN.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C6D7440)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1C6D7400)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_JJJJGOBKGKP_OFFSET UNITYSDK_OFFSET(0x1C6D7510)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D7970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Platform_TypeDefinitionIndex = 51694;

	class ConfigSoundActionTriggerCondition_Platform : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PGOIKPHLOCN>* platforms; // 0x10
		::System::Boolean checkCloudGamePlatform; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_EVALUATE_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Boolean JJJJGOBKGKP(::PGOIKPHLOCN GDLOCGDAJGL, ::System::Boolean ODHFMJDENOP)
		{
			return ((::System::Boolean(*)(::PGOIKPHLOCN, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_PLATFORM_JJJJGOBKGKP_OFFSET))(GDLOCGDAJGL, ODHFMJDENOP);
		}
	};
}
