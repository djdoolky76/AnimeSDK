#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionIntending.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_BEGINSCOPE_OFFSET UNITYSDK_OFFSET(0x1B8A6210)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ENDSCOPE_OFFSET UNITYSDK_OFFSET(0x1B8A6270)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTEANDENDSCOPE_OFFSET UNITYSDK_OFFSET(0x1B8A65B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B8A62D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_GETFILTEREDTYPELIST_OFFSET UNITYSDK_OFFSET(0x1B8A68F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A6BF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_SETSCOPEVALUE_OFFSET UNITYSDK_OFFSET(0x1B8A6880)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A6CB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_EXECUTEANDENDSCOPE_OFFSET UNITYSDK_OFFSET(0x1B8A6CF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1B8A6DB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DelayAction_TypeDefinitionIndex = 54904;

	class ConfigSoundAction_DelayAction : public ::MoleMole::Config::ConfigSoundActionIntending
	{
	public:
		::MoleMole::Config::ConfigSoundActionIntending* action; // 0x20
		::System::Single delayTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION__CTOR_OFFSET))(this);
		}

		::System::UInt32 BeginScope()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_BEGINSCOPE_OFFSET))(this);
		}

		::System::Void EndScope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ENDSCOPE_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTE_OFFSET))(this, context);
		}

		::System::Void ExecuteAndEndScope(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_EXECUTEANDENDSCOPE_OFFSET))(this, context);
		}

		::System::Void SetScopeValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_SETSCOPEVALUE_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetFilteredTypeList()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_GETFILTEREDTYPELIST_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void __base_ExecuteAndEndScope(::EIOKLKEJAME* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_EXECUTEANDENDSCOPE_OFFSET))(this, P0);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___BASE_ISMATCH_OFFSET))(this, P0);
		}
	};
}
