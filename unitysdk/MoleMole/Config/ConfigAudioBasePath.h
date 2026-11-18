#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class AudioBasePath; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x131DBB10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioBasePath_TypeDefinitionIndex = 56569;

	class ConfigAudioBasePath : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Boolean NeedSetBasePath; // 0x58
		::System::Byte _padding0[0x7];
		::MoleMole::Config::AudioBasePath* BasePath; // 0x60
		::Il2CppArray<::MoleMole::Config::AudioBasePath*>* paths; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH__CTOR_OFFSET))(this);
		}
	};
}
