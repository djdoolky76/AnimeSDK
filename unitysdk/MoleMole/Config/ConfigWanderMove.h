#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigWanderMove_ConfigWanderMoveEntry; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGWANDERMOVE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x16540280)
#define MOLEMOLE_CONFIG_CONFIGWANDERMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16540360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWanderMove_TypeDefinitionIndex = 86394;

	class ConfigWanderMove : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single StuckCheckTime; // 0x58
		::System::Single StuckMoveThreshold; // 0x5C
		::System::Single MoveTimeout; // 0x60
		::System::Byte _padding0[0x4];
		::MoleMole::Config::ConfigWanderMove_ConfigWanderMoveEntry* DefaultConfig; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* ConfigMap; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWANDERMOVE__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::ConfigWanderMove_ConfigWanderMoveEntry* GetConfig(::System::Int32 configID)
		{
			return ((::MoleMole::Config::ConfigWanderMove_ConfigWanderMoveEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWANDERMOVE_GETCONFIG_OFFSET))(this, configID);
		}
	};
}
