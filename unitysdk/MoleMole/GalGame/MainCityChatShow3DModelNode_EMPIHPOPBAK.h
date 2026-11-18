#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShow3DModelNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139E7070)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139E7080)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK_WRITE_OFFSET UNITYSDK_OFFSET(0x139E7390)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK__CTOR_OFFSET UNITYSDK_OFFSET(0x139E7570)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShow3DModelNode_EMPIHPOPBAK_TypeDefinitionIndex = 66260;

	class MainCityChatShow3DModelNode_EMPIHPOPBAK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShow3DModelNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShow3DModelNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShow3DModelNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShow3DModelNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_EMPIHPOPBAK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
