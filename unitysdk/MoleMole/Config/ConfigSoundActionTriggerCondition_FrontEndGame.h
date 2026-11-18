#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_EVALUATE_OFFSET UNITYSDK_OFFSET(0x190A5830)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x190A57F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_ISFRONTENDGAME_OFFSET UNITYSDK_OFFSET(0x190A5890)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x190A5A60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_FrontEndGame_TypeDefinitionIndex = 87127;

	class ConfigSoundActionTriggerCondition_FrontEndGame : public ::System::Object
	{
	public:
		::System::Boolean invert; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_EVALUATE_OFFSET))(this, context);
		}

		static ::System::Boolean IsFrontEndGame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_FRONTENDGAME_ISFRONTENDGAME_OFFSET))();
		}
	};
}
