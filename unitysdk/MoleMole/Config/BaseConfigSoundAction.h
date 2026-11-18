#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x131D8BD0)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_2_OFFSET UNITYSDK_OFFSET(0x131CBD60)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_GET_CANDEFEREXECUTION_OFFSET UNITYSDK_OFFSET(0x131D8B20)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x131D8B10)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x131D8B30)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_SHOWLOG_OFFSET UNITYSDK_OFFSET(0x131D8E20)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_TESTSOUNDACTION_OFFSET UNITYSDK_OFFSET(0x131D8C70)
#define MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x131D8EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseConfigSoundAction_TypeDefinitionIndex = 91299;

	class BaseConfigSoundAction : public ::System::Object
	{
	public:
		::System::String* _ParamHint_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION__CTOR_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Boolean get_CanDeferExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_GET_CANDEFEREXECUTION_OFFSET))(this);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Execute_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_1_OFFSET))(this);
		}

		::System::Void TestSoundAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_TESTSOUNDACTION_OFFSET))(this);
		}

		::System::Void Execute_2(::UnityEngine::GameObject* gameObject, ::System::String* sourceHint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_EXECUTE_2_OFFSET))(this, gameObject, sourceHint);
		}

		::System::Void ShowLog(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASECONFIGSOUNDACTION_SHOWLOG_OFFSET))(this, context);
		}
	};
}
