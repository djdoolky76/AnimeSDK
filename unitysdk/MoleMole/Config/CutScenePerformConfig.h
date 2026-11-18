#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class IAEOCKOHIMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET UNITYSDK_OFFSET(0x192AED40)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET UNITYSDK_OFFSET(0x192AECF0)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET UNITYSDK_OFFSET(0x192AED90)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET UNITYSDK_OFFSET(0x192AEDE0)
#define MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x192AEEE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CutScenePerformConfig_TypeDefinitionIndex = 57620;

	class CutScenePerformConfig : public ::System::Object
	{
	public:
		::System::String* CameraShotKey; // 0x10
		::System::Single ShowUIDelayTime; // 0x18
		::System::Single FlowCanvasDelayTime; // 0x1C
		::MoleMole::Config::CutSceneEndMode finishMode; // 0x20
		::System::Boolean IsGroupShotData; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single InputMuteDelayTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG__CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_inputMuteDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_INPUTMUTEDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_flowCanvasDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_FLOWCANVASDELAYTIME_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> MoleMole_Config_IScenePerformConfig_get_showUIDelayTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_GET_SHOWUIDELAYTIME_OFFSET))(this);
		}

		::System::Void MoleMole_Config_IScenePerformConfig_Setup(::IAEOCKOHIMH* node)
		{
			return ((::System::Void(*)(::PVOID, ::IAEOCKOHIMH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CUTSCENEPERFORMCONFIG_MOLEMOLE_CONFIG_ISCENEPERFORMCONFIG_SETUP_OFFSET))(this, node);
		}
	};
}
