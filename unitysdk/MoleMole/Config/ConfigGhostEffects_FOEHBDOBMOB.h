#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigGhostEffects; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19240DA0)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19240DB0)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB_WRITE_OFFSET UNITYSDK_OFFSET(0x19240F40)
#define MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB__CTOR_OFFSET UNITYSDK_OFFSET(0x19241060)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGhostEffects_FOEHBDOBMOB_TypeDefinitionIndex = 49282;

	class ConfigGhostEffects_FOEHBDOBMOB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGhostEffects*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigGhostEffects*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGHOSTEFFECTS_FOEHBDOBMOB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
