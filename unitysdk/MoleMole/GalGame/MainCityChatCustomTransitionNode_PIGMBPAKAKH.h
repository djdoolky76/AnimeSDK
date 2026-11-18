#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCustomTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12463370)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12463380)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH_WRITE_OFFSET UNITYSDK_OFFSET(0x124635D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH__CTOR_OFFSET UNITYSDK_OFFSET(0x12463750)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCustomTransitionNode_PIGMBPAKAKH_TypeDefinitionIndex = 71761;

	class MainCityChatCustomTransitionNode_PIGMBPAKAKH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCustomTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCustomTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_PIGMBPAKAKH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
