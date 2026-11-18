#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class HitRotationOverrideMapItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA466A0)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA466B0)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA46840)
#define MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA46960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitRotationOverrideMapItem_KMHMDENHBAB_TypeDefinitionIndex = 61706;

	class HitRotationOverrideMapItem_KMHMDENHBAB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::HitRotationOverrideMapItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::HitRotationOverrideMapItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::HitRotationOverrideMapItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::HitRotationOverrideMapItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HITROTATIONOVERRIDEMAPITEM_KMHMDENHBAB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
