#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicAttachmentAnimSync.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B147E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B147F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB_WRITE_OFFSET UNITYSDK_OFFSET(0x19B14AC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB__CTOR_OFFSET UNITYSDK_OFFSET(0x19B14C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAttachmentAnimSync_ICCDFGGEMGB_TypeDefinitionIndex = 68164;

	class ConfigDynamicAttachmentAnimSync_ICCDFGGEMGB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigDynamicAttachmentAnimSync& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachmentAnimSync&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigDynamicAttachmentAnimSync& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigDynamicAttachmentAnimSync&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICATTACHMENTANIMSYNC_ICCDFGGEMGB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
