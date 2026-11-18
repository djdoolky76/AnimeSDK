#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigViewObjectMisc; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11EA30D0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11EA30E0)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO_WRITE_OFFSET UNITYSDK_OFFSET(0x11EA3280)
#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO__CTOR_OFFSET UNITYSDK_OFFSET(0x11EA33A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_JGKDOANIDOO_TypeDefinitionIndex = 62550;

	class ConfigViewObjectMisc_JGKDOANIDOO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigViewObjectMisc*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigViewObjectMisc*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_JGKDOANIDOO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
