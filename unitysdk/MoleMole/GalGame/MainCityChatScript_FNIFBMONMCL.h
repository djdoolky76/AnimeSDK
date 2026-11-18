#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatScript; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AEB1F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AEB200)
#define MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL_WRITE_OFFSET UNITYSDK_OFFSET(0x14AEB2D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEB380)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatScript_FNIFBMONMCL_TypeDefinitionIndex = 72476;

	class MainCityChatScript_FNIFBMONMCL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatScript*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatScript*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatScript*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatScript*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSCRIPT_FNIFBMONMCL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
