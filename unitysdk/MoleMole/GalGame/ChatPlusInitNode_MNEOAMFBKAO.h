#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ChatPlusInitNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162C8160)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162C8170)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO_WRITE_OFFSET UNITYSDK_OFFSET(0x162C83C0)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO__CTOR_OFFSET UNITYSDK_OFFSET(0x162C8540)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatPlusInitNode_MNEOAMFBKAO_TypeDefinitionIndex = 42217;

	class ChatPlusInitNode_MNEOAMFBKAO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ChatPlusInitNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::ChatPlusInitNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_MNEOAMFBKAO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
