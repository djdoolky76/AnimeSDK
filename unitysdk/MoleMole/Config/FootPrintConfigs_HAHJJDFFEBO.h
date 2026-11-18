#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class FootPrintConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192526F0)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19252700)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO_WRITE_OFFSET UNITYSDK_OFFSET(0x19252890)
#define MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO__CTOR_OFFSET UNITYSDK_OFFSET(0x192529B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int FootPrintConfigs_HAHJJDFFEBO_TypeDefinitionIndex = 72073;

	class FootPrintConfigs_HAHJJDFFEBO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::FootPrintConfigs*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::FootPrintConfigs*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_FOOTPRINTCONFIGS_HAHJJDFFEBO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
