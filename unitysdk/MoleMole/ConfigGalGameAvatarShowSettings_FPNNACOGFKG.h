#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigGalGameAvatarShowSettings; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B2CD60)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B2CD70)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG_WRITE_OFFSET UNITYSDK_OFFSET(0x19B2CE40)
#define MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2CEF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalGameAvatarShowSettings_FPNNACOGFKG_TypeDefinitionIndex = 65206;

	class ConfigGalGameAvatarShowSettings_FPNNACOGFKG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGalGameAvatarShowSettings*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigGalGameAvatarShowSettings*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMEAVATARSHOWSETTINGS_FPNNACOGFKG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
