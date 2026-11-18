#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowConfirmPopupNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EE2150)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EE2160)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN_WRITE_OFFSET UNITYSDK_OFFSET(0x13EE26F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE2A30)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowConfirmPopupNode_KPJLMCOHEHN_TypeDefinitionIndex = 72988;

	class MainCityChatShowConfirmPopupNode_KPJLMCOHEHN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowConfirmPopupNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWCONFIRMPOPUPNODE_KPJLMCOHEHN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
