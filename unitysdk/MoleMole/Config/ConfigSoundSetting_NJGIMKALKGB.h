#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6D97D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6D97E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6D9AF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D9CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundSetting_NJGIMKALKGB_TypeDefinitionIndex = 68169;

	class ConfigSoundSetting_NJGIMKALKGB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDSETTING_NJGIMKALKGB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
