#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class OffsetGroup; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190B7060)
#define MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190B7070)
#define MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG_WRITE_OFFSET UNITYSDK_OFFSET(0x190B7710)
#define MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG__CTOR_OFFSET UNITYSDK_OFFSET(0x190B7B30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int OffsetGroup_CILNKKLMPKG_TypeDefinitionIndex = 48969;

	class OffsetGroup_CILNKKLMPKG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::OffsetGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::OffsetGroup*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::OffsetGroup*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::OffsetGroup*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_OFFSETGROUP_CILNKKLMPKG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
