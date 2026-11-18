#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoCinemaCameraConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D37CF0)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D37D00)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK_WRITE_OFFSET UNITYSDK_OFFSET(0x10D37E90)
#define MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK__CTOR_OFFSET UNITYSDK_OFFSET(0x10D37FB0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraConfig_KBDFBHNAGEK_TypeDefinitionIndex = 50254;

	class MonoCinemaCameraConfig_KBDFBHNAGEK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoCinemaCameraConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoCinemaCameraConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoCinemaCameraConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoCinemaCameraConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERACONFIG_KBDFBHNAGEK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
