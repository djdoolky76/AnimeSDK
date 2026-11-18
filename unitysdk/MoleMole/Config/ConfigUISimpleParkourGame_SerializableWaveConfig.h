#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCHBFMFAGNF;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDDODGENODE_OFFSET UNITYSDK_OFFSET(0x11EA2A30)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDHOLDNODE_OFFSET UNITYSDK_OFFSET(0x11EA2AE0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTAPNODE_OFFSET UNITYSDK_OFFSET(0x11EA2980)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTOUCHNODE_OFFSET UNITYSDK_OFFSET(0x11EA2B90)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_GETWAVEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x11EA2DD0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_TOWAVECONFIG_OFFSET UNITYSDK_OFFSET(0x11EA2C40)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA2F80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableWaveConfig_TypeDefinitionIndex = 64085;

	class ConfigUISimpleParkourGame_SerializableWaveConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig* parentLevelConfig; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* Nodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void AddTapNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTAPNODE_OFFSET))(this);
		}

		::System::Void AddDodgeNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDDODGENODE_OFFSET))(this);
		}

		::System::Void AddHoldNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDHOLDNODE_OFFSET))(this);
		}

		::System::Void AddTouchNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTOUCHNODE_OFFSET))(this);
		}

		::KCHBFMFAGNF* ToWaveConfig(::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig)
		{
			return ((::KCHBFMFAGNF*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_TOWAVECONFIG_OFFSET))(this, globalConfig);
		}

		::System::String* GetWaveDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_GETWAVEDISPLAYNAME_OFFSET))(this);
		}
	};
}
