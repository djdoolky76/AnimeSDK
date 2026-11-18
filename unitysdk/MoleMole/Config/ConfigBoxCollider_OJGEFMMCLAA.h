#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigBoxCollider; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B91470)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B91480)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA_WRITE_OFFSET UNITYSDK_OFFSET(0x18B916E0)
#define MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B91860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBoxCollider_OJGEFMMCLAA_TypeDefinitionIndex = 80429;

	class ConfigBoxCollider_OJGEFMMCLAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigBoxCollider*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBoxCollider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigBoxCollider*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBoxCollider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOXCOLLIDER_OJGEFMMCLAA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
