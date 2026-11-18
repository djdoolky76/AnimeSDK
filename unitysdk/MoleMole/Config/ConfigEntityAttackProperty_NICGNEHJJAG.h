#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B918340)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B918350)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG_WRITE_OFFSET UNITYSDK_OFFSET(0x1B91B0B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B91CA40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAttackProperty_NICGNEHJJAG_TypeDefinitionIndex = 63697;

	class ConfigEntityAttackProperty_NICGNEHJJAG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAttackProperty*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackProperty*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAttackProperty*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAttackProperty*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYATTACKPROPERTY_NICGNEHJJAG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
