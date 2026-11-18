#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowChangeChessboard; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190A22D0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190A22E0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA_WRITE_OFFSET UNITYSDK_OFFSET(0x190A2470)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA__CTOR_OFFSET UNITYSDK_OFFSET(0x190A2590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeChessboard_CGAOKDLCEJA_TypeDefinitionIndex = 74235;

	class ConfigHollowChangeChessboard_CGAOKDLCEJA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowChangeChessboard*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowChangeChessboard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowChangeChessboard*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChangeChessboard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGECHESSBOARD_CGAOKDLCEJA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
