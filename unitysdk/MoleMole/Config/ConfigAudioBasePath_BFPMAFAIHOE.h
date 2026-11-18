#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAudioBasePath; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192969F0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19296A00)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE_WRITE_OFFSET UNITYSDK_OFFSET(0x19296B90)
#define MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE__CTOR_OFFSET UNITYSDK_OFFSET(0x19296CB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioBasePath_BFPMAFAIHOE_TypeDefinitionIndex = 56570;

	class ConfigAudioBasePath_BFPMAFAIHOE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAudioBasePath*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigAudioBasePath*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAudioBasePath*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOBASEPATH_BFPMAFAIHOE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
