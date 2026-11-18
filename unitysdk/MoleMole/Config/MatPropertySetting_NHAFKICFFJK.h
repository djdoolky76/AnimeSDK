#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MatPropertySetting.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190B59F0)
#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190B5A00)
#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK_WRITE_OFFSET UNITYSDK_OFFSET(0x190B5CC0)
#define MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK__CTOR_OFFSET UNITYSDK_OFFSET(0x190B5E60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MatPropertySetting_NHAFKICFFJK_TypeDefinitionIndex = 63388;

	class MatPropertySetting_NHAFKICFFJK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::MatPropertySetting& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MatPropertySetting&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::MatPropertySetting& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MatPropertySetting&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MATPROPERTYSETTING_NHAFKICFFJK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
