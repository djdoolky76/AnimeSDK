#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigEnvironmentFeatureModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA4E890)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA4E8A0)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA4EC50)
#define MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4EE80)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEnvironmentFeatureModifier_NCPEHINPKDA_TypeDefinitionIndex = 63822;

	class ConfigEnvironmentFeatureModifier_NCPEHINPKDA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigEnvironmentFeatureModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigEnvironmentFeatureModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigEnvironmentFeatureModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigEnvironmentFeatureModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENVIRONMENTFEATUREMODIFIER_NCPEHINPKDA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
