#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigGraphicSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16411330)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16411340)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI_WRITE_OFFSET UNITYSDK_OFFSET(0x164115A0)
#define MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI__CTOR_OFFSET UNITYSDK_OFFSET(0x16411720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGraphicSetting_ADCIOBPBIBI_TypeDefinitionIndex = 47847;

	class ConfigGraphicSetting_ADCIOBPBIBI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGraphicSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGraphicSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigGraphicSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGraphicSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGRAPHICSETTING_ADCIOBPBIBI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
