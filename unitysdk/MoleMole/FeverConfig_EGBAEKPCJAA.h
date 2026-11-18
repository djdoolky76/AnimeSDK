#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class FeverConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B2ECE0)
#define MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B2ECF0)
#define MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA_WRITE_OFFSET UNITYSDK_OFFSET(0x12B2EE80)
#define MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA__CTOR_OFFSET UNITYSDK_OFFSET(0x12B2EFA0)

namespace MoleMole
{
	inline static constexpr unsigned int FeverConfig_EGBAEKPCJAA_TypeDefinitionIndex = 88025;

	class FeverConfig_EGBAEKPCJAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::FeverConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FeverConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::FeverConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FeverConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_EGBAEKPCJAA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
