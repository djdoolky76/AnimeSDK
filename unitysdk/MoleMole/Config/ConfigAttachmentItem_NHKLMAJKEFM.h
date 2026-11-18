#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAttachmentItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131DB810)
#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131DB820)
#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM_WRITE_OFFSET UNITYSDK_OFFSET(0x131DB9B0)
#define MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM__CTOR_OFFSET UNITYSDK_OFFSET(0x131DBAD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAttachmentItem_NHKLMAJKEFM_TypeDefinitionIndex = 88445;

	class ConfigAttachmentItem_NHKLMAJKEFM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAttachmentItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAttachmentItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigAttachmentItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttachmentItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGATTACHMENTITEM_NHKLMAJKEFM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
