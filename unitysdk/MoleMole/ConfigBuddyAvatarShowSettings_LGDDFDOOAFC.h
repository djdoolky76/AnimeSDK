#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigBuddyAvatarShowSettings; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190C1D10)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190C1D20)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC_WRITE_OFFSET UNITYSDK_OFFSET(0x190C1EB0)
#define MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC__CTOR_OFFSET UNITYSDK_OFFSET(0x190C1FD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyAvatarShowSettings_LGDDFDOOAFC_TypeDefinitionIndex = 77791;

	class ConfigBuddyAvatarShowSettings_LGDDFDOOAFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigBuddyAvatarShowSettings*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigBuddyAvatarShowSettings*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyAvatarShowSettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYAVATARSHOWSETTINGS_LGDDFDOOAFC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
