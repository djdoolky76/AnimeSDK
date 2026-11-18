#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KCHBFMFAGNF;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableWaveConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__APPLYLEVELCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x1B92DE50)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92DE40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame___c__DisplayClass7_0_TypeDefinitionIndex = 64088;

	class ConfigUISimpleParkourGame___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::KCHBFMFAGNF* _ApplyLevelConfig_b__0(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig* w)
		{
			return ((::KCHBFMFAGNF*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__APPLYLEVELCONFIG_B__0_OFFSET))(this, w);
		}
	};
}
