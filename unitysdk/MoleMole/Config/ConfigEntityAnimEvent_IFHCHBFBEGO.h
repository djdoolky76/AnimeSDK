#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B917020)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B917150)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_READ_OFFSET UNITYSDK_OFFSET(0x1B917030)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_WRITE_OFFSET UNITYSDK_OFFSET(0x1B917C00)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B918300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEvent_IFHCHBFBEGO_TypeDefinitionIndex = 62312;

	class ConfigEntityAnimEvent_IFHCHBFBEGO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Void Read(::MoleMole::Config::ConfigEntityAnimEvent*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::IDataReader*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_READ_OFFSET))(this, EGEGIMGMJHN, FAJNJHEJMEA);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAnimEvent*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAnimEvent*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENT_IFHCHBFBEGO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
