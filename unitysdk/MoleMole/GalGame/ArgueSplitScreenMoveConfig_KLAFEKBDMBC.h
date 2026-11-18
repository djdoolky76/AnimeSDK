#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ArgueSplitScreenMoveConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D1E4A0)
#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D1E4B0)
#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC_WRITE_OFFSET UNITYSDK_OFFSET(0x10D1E640)
#define MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1E760)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueSplitScreenMoveConfig_KLAFEKBDMBC_TypeDefinitionIndex = 45572;

	class ArgueSplitScreenMoveConfig_KLAFEKBDMBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ArgueSplitScreenMoveConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ArgueSplitScreenMoveConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::ArgueSplitScreenMoveConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ArgueSplitScreenMoveConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUESPLITSCREENMOVECONFIG_KLAFEKBDMBC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
