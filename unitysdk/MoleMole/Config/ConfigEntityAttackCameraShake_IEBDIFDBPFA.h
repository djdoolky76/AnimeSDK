#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAttackCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA29A50)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA29A60)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA29BF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA29D10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackCameraShake_IEBDIFDBPFA_TypeDefinitionIndex = 83173;

	class ConfigEntityAttackCameraShake_IEBDIFDBPFA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackCameraShake*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackCameraShake*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackCameraShake*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackCameraShake*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKCAMERASHAKE_IEBDIFDBPFA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
