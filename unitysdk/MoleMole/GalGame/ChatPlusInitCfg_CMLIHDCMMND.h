#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ChatPlusInitCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14311D80)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14311D90)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND_WRITE_OFFSET UNITYSDK_OFFSET(0x14312D40)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND__CTOR_OFFSET UNITYSDK_OFFSET(0x14313620)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatPlusInitCfg_CMLIHDCMMND_TypeDefinitionIndex = 86619;

	class ChatPlusInitCfg_CMLIHDCMMND
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ChatPlusInitCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::ChatPlusInitCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CMLIHDCMMND_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
