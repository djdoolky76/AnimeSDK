#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityRunStates; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1929E470)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1929E480)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB_WRITE_OFFSET UNITYSDK_OFFSET(0x1929E610)
#define MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1929E730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityRunStates_DHEEJCHHCBB_TypeDefinitionIndex = 54518;

	class ConfigEntityRunStates_DHEEJCHHCBB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityRunStates*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityRunStates*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYRUNSTATES_DHEEJCHHCBB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
