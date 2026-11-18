#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AirCombatReturnBoxOriginalZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1908BA30)
#define MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1908BA40)
#define MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG_WRITE_OFFSET UNITYSDK_OFFSET(0x1908BF30)
#define MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG__CTOR_OFFSET UNITYSDK_OFFSET(0x1908C210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AirCombatReturnBoxOriginalZone_MCDAOBJEIDG_TypeDefinitionIndex = 80193;

	class AirCombatReturnBoxOriginalZone_MCDAOBJEIDG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AirCombatReturnBoxOriginalZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AirCombatReturnBoxOriginalZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AirCombatReturnBoxOriginalZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AirCombatReturnBoxOriginalZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIRCOMBATRETURNBOXORIGINALZONE_MCDAOBJEIDG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
