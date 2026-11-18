#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16245F30)
#define MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16245F40)
#define MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI_WRITE_OFFSET UNITYSDK_OFFSET(0x16246390)
#define MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI__CTOR_OFFSET UNITYSDK_OFFSET(0x16246620)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalTransitionNode_GGJAPKJCJBI_TypeDefinitionIndex = 66204;

	class GalTransitionNode_GGJAPKJCJBI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalTransitionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALTRANSITIONNODE_GGJAPKJCJBI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
