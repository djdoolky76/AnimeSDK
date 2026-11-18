#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBeginUIGameConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162C8FF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162C9000)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB_WRITE_OFFSET UNITYSDK_OFFSET(0x162C93B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB__CTOR_OFFSET UNITYSDK_OFFSET(0x162C95E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBeginUIGameConfig_KJFFMHBMIEB_TypeDefinitionIndex = 60879;

	class MainCityChatBeginUIGameConfig_KJFFMHBMIEB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBeginUIGameConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBeginUIGameConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBeginUIGameConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBeginUIGameConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_KJFFMHBMIEB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
