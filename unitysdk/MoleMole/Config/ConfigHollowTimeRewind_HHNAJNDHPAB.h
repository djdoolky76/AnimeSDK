#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A030240)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A030250)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB_WRITE_OFFSET UNITYSDK_OFFSET(0x1A030450)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0305D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowTimeRewind_HHNAJNDHPAB_TypeDefinitionIndex = 56834;

	class ConfigHollowTimeRewind_HHNAJNDHPAB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowTimeRewind*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowTimeRewind*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWTIMEREWIND_HHNAJNDHPAB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
