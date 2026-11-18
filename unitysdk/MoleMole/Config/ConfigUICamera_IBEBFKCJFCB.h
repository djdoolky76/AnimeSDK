#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUICamera; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B92D9E0)
#define MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B92D9F0)
#define MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB_WRITE_OFFSET UNITYSDK_OFFSET(0x1B92DC40)
#define MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92DDC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUICamera_IBEBFKCJFCB_TypeDefinitionIndex = 85052;

	class ConfigUICamera_IBEBFKCJFCB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUICamera*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigUICamera*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_IBEBFKCJFCB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
