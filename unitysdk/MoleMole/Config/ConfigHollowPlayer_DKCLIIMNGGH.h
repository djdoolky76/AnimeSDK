#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFD53C0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD53D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH_WRITE_OFFSET UNITYSDK_OFFSET(0xFFD5650)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD5800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayer_DKCLIIMNGGH_TypeDefinitionIndex = 75058;

	class ConfigHollowPlayer_DKCLIIMNGGH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowPlayer*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowPlayer*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_DKCLIIMNGGH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
