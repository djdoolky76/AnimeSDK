#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigGalgameShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA4EED0)
#define MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA4EEE0)
#define MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA4F070)
#define MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4F190)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGalgameShake_LKLFDIOCDPA_TypeDefinitionIndex = 82180;

	class ConfigGalgameShake_LKLFDIOCDPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigGalgameShake*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigGalgameShake*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigGalgameShake*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalgameShake*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGALGAMESHAKE_LKLFDIOCDPA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
