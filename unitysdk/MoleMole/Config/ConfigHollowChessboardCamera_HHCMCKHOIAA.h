#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B9203F0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B920400)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA_WRITE_OFFSET UNITYSDK_OFFSET(0x1B920E30)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B921400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboardCamera_HHCMCKHOIAA_TypeDefinitionIndex = 74974;

	class ConfigHollowChessboardCamera_HHCMCKHOIAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChessboardCamera*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChessboardCamera*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARDCAMERA_HHCMCKHOIAA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
