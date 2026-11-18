#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoCinemaCameraLightConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10431550)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10431560)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK_WRITE_OFFSET UNITYSDK_OFFSET(0x104317B0)
#define MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK__CTOR_OFFSET UNITYSDK_OFFSET(0x10431930)

namespace MoleMole
{
	inline static constexpr unsigned int MonoCinemaCameraLightConfig_IBFEMFLNBCK_TypeDefinitionIndex = 49922;

	class MonoCinemaCameraLightConfig_IBFEMFLNBCK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoCinemaCameraLightConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoCinemaCameraLightConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoCinemaCameraLightConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoCinemaCameraLightConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOCINEMACAMERALIGHTCONFIG_IBFEMFLNBCK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
