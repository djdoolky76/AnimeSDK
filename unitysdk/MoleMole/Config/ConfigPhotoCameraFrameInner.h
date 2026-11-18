#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigPhotoCameraFrame; }

#define MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEINNER__CTOR_OFFSET UNITYSDK_OFFSET(0x12776410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPhotoCameraFrameInner_TypeDefinitionIndex = 68186;

	class ConfigPhotoCameraFrameInner : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::ConfigPhotoCameraFrame* Frame; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPHOTOCAMERAFRAMEINNER__CTOR_OFFSET))(this);
		}
	};
}
