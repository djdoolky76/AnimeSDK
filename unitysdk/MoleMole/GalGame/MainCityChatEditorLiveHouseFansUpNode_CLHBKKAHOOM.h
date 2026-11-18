#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatEditorLiveHouseFansUpNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1357D770)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1357D780)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM_WRITE_OFFSET UNITYSDK_OFFSET(0x1357D9D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1357DB50)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorLiveHouseFansUpNode_CLHBKKAHOOM_TypeDefinitionIndex = 81875;

	class MainCityChatEditorLiveHouseFansUpNode_CLHBKKAHOOM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatEditorLiveHouseFansUpNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_CLHBKKAHOOM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
