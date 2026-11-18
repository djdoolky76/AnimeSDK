#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatQuestTrackItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162C97E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162C97F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM_WRITE_OFFSET UNITYSDK_OFFSET(0x162C9A40)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM__CTOR_OFFSET UNITYSDK_OFFSET(0x162C9BC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestTrackItem_PHJICMHBHBM_TypeDefinitionIndex = 39569;

	class MainCityChatQuestTrackItem_PHJICMHBHBM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatQuestTrackItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestTrackItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatQuestTrackItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestTrackItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_PHJICMHBHBM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
