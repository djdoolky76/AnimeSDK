#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162CA7F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162CA800)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB_WRITE_OFFSET UNITYSDK_OFFSET(0x162CAA50)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB__CTOR_OFFSET UNITYSDK_OFFSET(0x162CABD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionNode_HOJPMKEEJAB_TypeDefinitionIndex = 47922;

	class MainCityChatTransitionNode_HOJPMKEEJAB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONNODE_HOJPMKEEJAB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
