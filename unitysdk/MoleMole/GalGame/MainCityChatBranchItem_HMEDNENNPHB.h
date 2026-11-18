#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1357D360)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1357D370)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB_WRITE_OFFSET UNITYSDK_OFFSET(0x1357D500)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1357D620)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBranchItem_HMEDNENNPHB_TypeDefinitionIndex = 66810;

	class MainCityChatBranchItem_HMEDNENNPHB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBranchItem*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBranchItem*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHITEM_HMEDNENNPHB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
