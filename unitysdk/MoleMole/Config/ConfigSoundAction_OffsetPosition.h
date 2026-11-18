#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Ease.h"
#include "unitysdk/MoleMole/Config/ConfigSoundActionGeneral.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12784890)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x127847D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_PARAMHINT_OFFSET UNITYSDK_OFFSET(0x12784810)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12785290)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_WALK_OFFSET UNITYSDK_OFFSET(0x12785330)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x12785440)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_ISMATCH_OFFSET UNITYSDK_OFFSET(0x12785480)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_WALK_OFFSET UNITYSDK_OFFSET(0x12785490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_OffsetPosition_TypeDefinitionIndex = 71216;

	class ConfigSoundAction_OffsetPosition : public ::MoleMole::Config::ConfigSoundActionGeneral
	{
	public:
		::MoleMole::Config::ConfigSoundActionGeneral* actionOnComplete; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* action; // 0x28
		::UnityEngine::Vector3 offset; // 0x30
		::System::Single moveDuration; // 0x3C
		::System::Boolean createNewEmitter; // 0x40
		::System::Byte _padding0[0x3];
		::DG::Tweening::Ease moveEase; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::String* get_ParamHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_GET_PARAMHINT_OFFSET))(this);
		}

		::System::Void Execute(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_EXECUTE_OFFSET))(this, context);
		}

		::System::Boolean IsMatch(::System::String* pattern)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_ISMATCH_OFFSET))(this, pattern);
		}

		::System::Void Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION_WALK_OFFSET))(this, callback);
		}

		::System::Boolean __base_IsMatch(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_ISMATCH_OFFSET))(this, P0);
		}

		::System::Void __base_Walk(::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::Config::ConfigSoundActionGeneral*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_OFFSETPOSITION___BASE_WALK_OFFSET))(this, P0);
		}
	};
}
