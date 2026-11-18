#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1924A4D0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1924A4E0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO_WRITE_OFFSET UNITYSDK_OFFSET(0x1924ABC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1924AFB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRot_ENBMOMIGMAO_TypeDefinitionIndex = 39165;

	class ConfigPosRot_ENBMOMIGMAO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRot*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRot*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_ENBMOMIGMAO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
