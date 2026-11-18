#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16417150)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16417160)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF_WRITE_OFFSET UNITYSDK_OFFSET(0x164173B0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF__CTOR_OFFSET UNITYSDK_OFFSET(0x16417530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertySettings_GHEOPIMPFKF_TypeDefinitionIndex = 78497;

	class ConfigMaterialPropertySettings_GHEOPIMPFKF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertySettings*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertySettings*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYSETTINGS_GHEOPIMPFKF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
