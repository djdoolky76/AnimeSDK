#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_GlobalValue_BranchOperation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8A6FD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8A6FE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8A7230)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A73B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_GlobalValue_BranchOperation_DPOMNDGGEEF_TypeDefinitionIndex = 90876;

	class ConfigSoundAction_GlobalValue_BranchOperation_DPOMNDGGEEF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_GlobalValue_BranchOperation*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_GLOBALVALUE_BRANCHOPERATION_DPOMNDGGEEF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
