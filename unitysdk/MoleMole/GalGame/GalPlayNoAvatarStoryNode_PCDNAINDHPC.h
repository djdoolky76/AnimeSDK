#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayNoAvatarStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8F5540)
#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A8F5550)
#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC_WRITE_OFFSET UNITYSDK_OFFSET(0x1A8F5AE0)
#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F5E20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayNoAvatarStoryNode_PCDNAINDHPC_TypeDefinitionIndex = 53160;

	class GalPlayNoAvatarStoryNode_PCDNAINDHPC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayNoAvatarStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayNoAvatarStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayNoAvatarStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayNoAvatarStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_PCDNAINDHPC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
