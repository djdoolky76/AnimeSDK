#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigTrainingRoom; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A76AC80)
#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A76AC90)
#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG_WRITE_OFFSET UNITYSDK_OFFSET(0x1A76AEF0)
#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76B070)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTrainingRoom_MLCMKEIICIG_TypeDefinitionIndex = 77750;

	class ConfigTrainingRoom_MLCMKEIICIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigTrainingRoom*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigTrainingRoom*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigTrainingRoom*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTrainingRoom*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_MLCMKEIICIG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
