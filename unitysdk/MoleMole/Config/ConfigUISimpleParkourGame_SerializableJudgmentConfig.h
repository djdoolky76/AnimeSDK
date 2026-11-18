#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJJOBDLJOPM;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableJudgmentRange; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASGOODRANGE_OFFSET UNITYSDK_OFFSET(0x19B20ED0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASPERFECTRANGE_OFFSET UNITYSDK_OFFSET(0x19B20EC0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_TOJUDGMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x19B20EE0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B21350)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableJudgmentConfig_TypeDefinitionIndex = 64083;

	class ConfigUISimpleParkourGame_SerializableJudgmentConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentRange* PerfectRange; // 0x10
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentRange* GoodRange; // 0x18
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentRange* BadRange; // 0x20
		::System::Single PerfectMultiplier; // 0x28
		::System::Single GoodMultiplier; // 0x2C
		::System::Single BadMultiplier; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasPerfectRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASPERFECTRANGE_OFFSET))(this);
		}

		::System::Boolean get_HasGoodRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASGOODRANGE_OFFSET))(this);
		}

		::AJJOBDLJOPM* ToJudgmentConfig()
		{
			return ((::AJJOBDLJOPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_TOJUDGMENTCONFIG_OFFSET))(this);
		}
	};
}
