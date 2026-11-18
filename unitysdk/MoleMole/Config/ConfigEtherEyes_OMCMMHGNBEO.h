#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEtherEyes; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121BE410)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121BE420)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO_WRITE_OFFSET UNITYSDK_OFFSET(0x121BE7E0)
#define MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO__CTOR_OFFSET UNITYSDK_OFFSET(0x121BEA20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEtherEyes_OMCMMHGNBEO_TypeDefinitionIndex = 62947;

	class ConfigEtherEyes_OMCMMHGNBEO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEtherEyes*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEtherEyes*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEtherEyes*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGETHEREYES_OMCMMHGNBEO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
