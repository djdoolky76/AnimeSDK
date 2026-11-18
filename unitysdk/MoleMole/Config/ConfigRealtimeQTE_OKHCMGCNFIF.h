#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12782C30)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12782C40)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF_WRITE_OFFSET UNITYSDK_OFFSET(0x12782DD0)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF__CTOR_OFFSET UNITYSDK_OFFSET(0x12782EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRealtimeQTE_OKHCMGCNFIF_TypeDefinitionIndex = 43026;

	class ConfigRealtimeQTE_OKHCMGCNFIF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigRealtimeQTE*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigRealtimeQTE*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_OKHCMGCNFIF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
