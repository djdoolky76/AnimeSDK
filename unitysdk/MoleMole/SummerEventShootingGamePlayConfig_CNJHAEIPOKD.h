#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SummerEventShootingGamePlayConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1311C270)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1311C280)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD_WRITE_OFFSET UNITYSDK_OFFSET(0x1311C8D0)
#define MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1311CC80)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventShootingGamePlayConfig_CNJHAEIPOKD_TypeDefinitionIndex = 48071;

	class SummerEventShootingGamePlayConfig_CNJHAEIPOKD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::SummerEventShootingGamePlayConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::SummerEventShootingGamePlayConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::SummerEventShootingGamePlayConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTSHOOTINGGAMEPLAYCONFIG_CNJHAEIPOKD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
