#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatTransitionWithActionsNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x143156B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x143156C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ_WRITE_OFFSET UNITYSDK_OFFSET(0x14315910)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14315A90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionWithActionsNode_DDOGAINMKIJ_TypeDefinitionIndex = 47261;

	class MainCityChatTransitionWithActionsNode_DDOGAINMKIJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionWithActionsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_DDOGAINMKIJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
