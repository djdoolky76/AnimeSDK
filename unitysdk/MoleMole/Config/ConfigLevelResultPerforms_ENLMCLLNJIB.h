#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigLevelResultPerforms; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1929F8A0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1929F8B0)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB_WRITE_OFFSET UNITYSDK_OFFSET(0x192A0750)
#define MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB__CTOR_OFFSET UNITYSDK_OFFSET(0x192A0FA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLevelResultPerforms_ENLMCLLNJIB_TypeDefinitionIndex = 56358;

	class ConfigLevelResultPerforms_ENLMCLLNJIB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigLevelResultPerforms*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigLevelResultPerforms*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLevelResultPerforms*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLEVELRESULTPERFORMS_ENLMCLLNJIB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
