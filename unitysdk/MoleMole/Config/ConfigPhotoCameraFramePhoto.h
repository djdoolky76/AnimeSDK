#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigPhotoCameraFramePhotoSetting; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEPHOTO__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1BE60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraFramePhoto_TypeDefinitionIndex = 42034;

	class ConfigPhotoCameraFramePhoto : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigPhotoCameraFramePhotoSetting* PhotoFrameSetting; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEPHOTO__CTOR_OFFSET))(this);
		}
	};
}
