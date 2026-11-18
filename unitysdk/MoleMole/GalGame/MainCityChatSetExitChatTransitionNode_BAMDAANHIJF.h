#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSetExitChatTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8F6FC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A8F6FD0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF_WRITE_OFFSET UNITYSDK_OFFSET(0x1A8F7220)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F73A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSetExitChatTransitionNode_BAMDAANHIJF_TypeDefinitionIndex = 44185;

	class MainCityChatSetExitChatTransitionNode_BAMDAANHIJF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_BAMDAANHIJF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
