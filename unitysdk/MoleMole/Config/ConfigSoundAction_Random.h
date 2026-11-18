#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"
#include "unitysdk/MoleMole/Config/ConfigSoundAction_Random_RandomType.h"

class EIOKLKEJAME;
namespace MoleMole::Config { class SoundActionWithWeight; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1924D060)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1924CDA0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x1924CD60)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1924D960)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_RESETDATA_OFFSET UNITYSDK_OFFSET(0x1924CF00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_WALK_OFFSET UNITYSDK_OFFSET(0x1924DBE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1924DEB0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x1924DF70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1924DF80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x1924DF90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Random_TypeDefinitionIndex = 45141;

	class ConfigSoundAction_Random : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>* randoms; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>* candidates; // 0x28
		::System::Boolean avoidRepeating; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 avoidRepeatingCount; // 0x34
		::MoleMole::Config::ConfigSoundAction_Random_RandomType randomType; // 0x38
		::System::Int32 playTimeIndex; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Void ResetData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_RESETDATA_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
