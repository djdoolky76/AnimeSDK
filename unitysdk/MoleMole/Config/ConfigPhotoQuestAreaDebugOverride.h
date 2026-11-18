#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigPhotoQuestArea; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOQUESTAREADEBUGOVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1BEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoQuestAreaDebugOverride_TypeDefinitionIndex = 51539;

	class ConfigPhotoQuestAreaDebugOverride : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Int32 PhotoQuestID; // 0x58
		::System::Byte _padding0[0x4];
		::MoleMole::Config::ConfigPhotoQuestArea* AreaConfig; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOQUESTAREADEBUGOVERRIDE__CTOR_OFFSET))(this);
		}
	};
}
