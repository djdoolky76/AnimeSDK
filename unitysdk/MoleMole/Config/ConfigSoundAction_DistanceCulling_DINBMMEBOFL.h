#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_DistanceCulling; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127843A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127843B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL_WRITE_OFFSET UNITYSDK_OFFSET(0x12784610)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL__CTOR_OFFSET UNITYSDK_OFFSET(0x12784790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DistanceCulling_DINBMMEBOFL_TypeDefinitionIndex = 55571;

	class ConfigSoundAction_DistanceCulling_DINBMMEBOFL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_DistanceCulling*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_DistanceCulling*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_DistanceCulling*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_DistanceCulling*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DISTANCECULLING_DINBMMEBOFL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
