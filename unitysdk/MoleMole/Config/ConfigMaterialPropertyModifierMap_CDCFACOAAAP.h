#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121C3C20)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121C3C30)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP_WRITE_OFFSET UNITYSDK_OFFSET(0x121C3DC0)
#define MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP__CTOR_OFFSET UNITYSDK_OFFSET(0x121C3EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMaterialPropertyModifierMap_CDCFACOAAAP_TypeDefinitionIndex = 76379;

	class ConfigMaterialPropertyModifierMap_CDCFACOAAAP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigMaterialPropertyModifierMap*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigMaterialPropertyModifierMap*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATERIALPROPERTYMODIFIERMAP_CDCFACOAAAP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
