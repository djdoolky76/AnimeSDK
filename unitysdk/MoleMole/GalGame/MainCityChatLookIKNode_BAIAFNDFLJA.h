#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatLookIKNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1466B040)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1466B050)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA_WRITE_OFFSET UNITYSDK_OFFSET(0x1466B5E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1466B920)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatLookIKNode_BAIAFNDFLJA_TypeDefinitionIndex = 54734;

	class MainCityChatLookIKNode_BAIAFNDFLJA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatLookIKNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatLookIKNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatLookIKNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatLookIKNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATLOOKIKNODE_BAIAFNDFLJA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
