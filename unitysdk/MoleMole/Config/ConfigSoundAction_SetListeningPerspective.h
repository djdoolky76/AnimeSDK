#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFAC9DA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0xFAC9D60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xFAC9EB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC9F00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0xFAC9F40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetListeningPerspective_TypeDefinitionIndex = 55396;

	class ConfigSoundAction_SetListeningPerspective : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Int32 perspective; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
