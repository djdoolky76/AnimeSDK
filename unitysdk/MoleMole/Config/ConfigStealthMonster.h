#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

#define MOLEMOLE_CONFIG_CONFIGSTEALTHMONSTER__CTOR_OFFSET UNITYSDK_OFFSET(0x190A7F60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStealthMonster_TypeDefinitionIndex = 54462;

	class ConfigStealthMonster : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Single MajorAxisLength; // 0x58
		::System::Single MinorAxisLength; // 0x5C
		::System::Single TimeHideDelay; // 0x60
		::System::Single StateSwitchAlert; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTEALTHMONSTER__CTOR_OFFSET))(this);
		}
	};
}
