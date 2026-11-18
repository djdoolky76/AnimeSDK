#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigStairVelocityModifier; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C702DD0)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C702DE0)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C702EB0)
#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C702F60)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigStairVelocityModifier_EGGCCLIJDJM_TypeDefinitionIndex = 55259;

	class ConfigStairVelocityModifier_EGGCCLIJDJM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigStairVelocityModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigStairVelocityModifier*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigStairVelocityModifier*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigStairVelocityModifier*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER_EGGCCLIJDJM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
