#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA4DAD0)
#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA4DAE0)
#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA4DC70)
#define MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4DD90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TagLibraryConfig_BKEMHMJABAD_TypeDefinitionIndex = 68638;

	class TagLibraryConfig_BKEMHMJABAD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::TagLibraryConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::TagLibraryConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TAGLIBRARYCONFIG_BKEMHMJABAD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
