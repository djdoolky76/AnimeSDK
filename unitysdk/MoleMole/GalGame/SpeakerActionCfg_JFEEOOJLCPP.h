#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1466C580)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1466C590)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP_WRITE_OFFSET UNITYSDK_OFFSET(0x1466C9E0)
#define MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1466CC70)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int SpeakerActionCfg_JFEEOOJLCPP_TypeDefinitionIndex = 62985;

	class SpeakerActionCfg_JFEEOOJLCPP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::SpeakerActionCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::SpeakerActionCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::SpeakerActionCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::SpeakerActionCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_SPEAKERACTIONCFG_JFEEOOJLCPP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
