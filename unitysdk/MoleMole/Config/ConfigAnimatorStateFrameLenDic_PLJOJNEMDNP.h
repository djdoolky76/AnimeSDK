#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAnimatorStateFrameLenDic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131DB200)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131DB210)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP_WRITE_OFFSET UNITYSDK_OFFSET(0x131DB520)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP__CTOR_OFFSET UNITYSDK_OFFSET(0x131DB6F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorStateFrameLenDic_PLJOJNEMDNP_TypeDefinitionIndex = 76546;

	class ConfigAnimatorStateFrameLenDic_PLJOJNEMDNP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAnimatorStateFrameLenDic*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigAnimatorStateFrameLenDic*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_PLJOJNEMDNP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
