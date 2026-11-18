#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBlackScreenNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x119194B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x119194C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM_WRITE_OFFSET UNITYSDK_OFFSET(0x11919910)
#define MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM__CTOR_OFFSET UNITYSDK_OFFSET(0x11919BA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBlackScreenNode_MBFBPLGCKIM_TypeDefinitionIndex = 40158;

	class MainCityChatBlackScreenNode_MBFBPLGCKIM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBlackScreenNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBlackScreenNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBlackScreenNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBlackScreenNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBLACKSCREENNODE_MBFBPLGCKIM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
