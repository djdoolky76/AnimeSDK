#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalJumpChapterNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162C8890)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162C88A0)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC_WRITE_OFFSET UNITYSDK_OFFSET(0x162C8C50)
#define MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC__CTOR_OFFSET UNITYSDK_OFFSET(0x162C8E80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalJumpChapterNode_HLKNKBMFACC_TypeDefinitionIndex = 43753;

	class GalJumpChapterNode_HLKNKBMFACC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalJumpChapterNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalJumpChapterNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalJumpChapterNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalJumpChapterNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALJUMPCHAPTERNODE_HLKNKBMFACC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
