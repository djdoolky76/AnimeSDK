#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A032210)
#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A032220)
#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH_WRITE_OFFSET UNITYSDK_OFFSET(0x1A032530)
#define MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A032710)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMisc_InteractRotate_CALMMMIDJHH_TypeDefinitionIndex = 92046;

	class ConfigMisc_InteractRotate_CALMMMIDJHH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMisc_InteractRotate*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMisc_InteractRotate*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigMisc_InteractRotate*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMisc_InteractRotate*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMISC_INTERACTROTATE_CALMMMIDJHH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
