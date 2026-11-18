#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAnimatorBeHitPriorities; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19095490)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190954A0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE_WRITE_OFFSET UNITYSDK_OFFSET(0x19095630)
#define MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE__CTOR_OFFSET UNITYSDK_OFFSET(0x19095750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorBeHitPriorities_FHCLAGGECKE_TypeDefinitionIndex = 38821;

	class ConfigAnimatorBeHitPriorities_FHCLAGGECKE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAnimatorBeHitPriorities*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigAnimatorBeHitPriorities*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorBeHitPriorities*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORBEHITPRIORITIES_FHCLAGGECKE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
