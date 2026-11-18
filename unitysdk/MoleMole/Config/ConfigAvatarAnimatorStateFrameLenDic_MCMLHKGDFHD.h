#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAvatarAnimatorStateFrameLenDic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFD0FE0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD0FF0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD_WRITE_OFFSET UNITYSDK_OFFSET(0xFFD1180)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD12A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarAnimatorStateFrameLenDic_MCMLHKGDFHD_TypeDefinitionIndex = 38247;

	class ConfigAvatarAnimatorStateFrameLenDic_MCMLHKGDFHD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_MCMLHKGDFHD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
