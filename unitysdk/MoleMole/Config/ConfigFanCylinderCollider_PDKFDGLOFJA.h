#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFanCylinderCollider; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFD3C60)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD3C70)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA_WRITE_OFFSET UNITYSDK_OFFSET(0xFFD4160)
#define MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD4440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFanCylinderCollider_PDKFDGLOFJA_TypeDefinitionIndex = 90586;

	class ConfigFanCylinderCollider_PDKFDGLOFJA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFanCylinderCollider*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFanCylinderCollider*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigFanCylinderCollider*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFanCylinderCollider*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFANCYLINDERCOLLIDER_PDKFDGLOFJA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
