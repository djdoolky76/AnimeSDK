#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatPlayTimelineNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AEABC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AEABD0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF_WRITE_OFFSET UNITYSDK_OFFSET(0x14AEAF80)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEB1B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayTimelineNode_EFEEPFBGKCF_TypeDefinitionIndex = 56181;

	class MainCityChatPlayTimelineNode_EFEEPFBGKCF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatPlayTimelineNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayTimelineNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatPlayTimelineNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayTimelineNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYTIMELINENODE_EFEEPFBGKCF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
