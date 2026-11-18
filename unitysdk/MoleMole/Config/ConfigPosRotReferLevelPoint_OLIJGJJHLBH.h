#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPosRotReferLevelPoint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAC8110)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAC8120)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH_WRITE_OFFSET UNITYSDK_OFFSET(0xFAC8430)
#define MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC8600)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRotReferLevelPoint_OLIJGJJHLBH_TypeDefinitionIndex = 59765;

	class ConfigPosRotReferLevelPoint_OLIJGJJHLBH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigPosRotReferLevelPoint*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigPosRotReferLevelPoint*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRotReferLevelPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROTREFERLEVELPOINT_OLIJGJJHLBH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
