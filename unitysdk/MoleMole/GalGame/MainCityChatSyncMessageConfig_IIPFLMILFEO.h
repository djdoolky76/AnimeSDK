#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSyncMessageConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130DBCB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130DBCC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO_WRITE_OFFSET UNITYSDK_OFFSET(0x130DBD90)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO__CTOR_OFFSET UNITYSDK_OFFSET(0x130DBE40)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncMessageConfig_IIPFLMILFEO_TypeDefinitionIndex = 70029;

	class MainCityChatSyncMessageConfig_IIPFLMILFEO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSyncMessageConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncMessageConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSyncMessageConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncMessageConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_IIPFLMILFEO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
