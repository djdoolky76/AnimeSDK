#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class BabelTowerRankConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x174BE4B0)
#define MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x174BE4C0)
#define MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI_WRITE_OFFSET UNITYSDK_OFFSET(0x174BE650)
#define MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI__CTOR_OFFSET UNITYSDK_OFFSET(0x174BE770)

namespace MoleMole
{
	inline static constexpr unsigned int BabelTowerRankConfig_FLCLKFPKNFI_TypeDefinitionIndex = 39292;

	class BabelTowerRankConfig_FLCLKFPKNFI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::BabelTowerRankConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::BabelTowerRankConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::BabelTowerRankConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::BabelTowerRankConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BABELTOWERRANKCONFIG_FLCLKFPKNFI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
