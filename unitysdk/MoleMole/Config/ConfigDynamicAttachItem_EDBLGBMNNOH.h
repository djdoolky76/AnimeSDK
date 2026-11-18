#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16409A10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16409A20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH_WRITE_OFFSET UNITYSDK_OFFSET(0x16409BB0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH__CTOR_OFFSET UNITYSDK_OFFSET(0x16409CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAttachItem_EDBLGBMNNOH_TypeDefinitionIndex = 67407;

	class ConfigDynamicAttachItem_EDBLGBMNNOH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDynamicAttachItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigDynamicAttachItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHITEM_EDBLGBMNNOH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
