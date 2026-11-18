#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class LookIKCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1357CC30)
#define MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1357CC40)
#define MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME_WRITE_OFFSET UNITYSDK_OFFSET(0x1357D090)
#define MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME__CTOR_OFFSET UNITYSDK_OFFSET(0x1357D320)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int LookIKCfg_IIMIEOIMBME_TypeDefinitionIndex = 43720;

	class LookIKCfg_IIMIEOIMBME
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::LookIKCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::LookIKCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::LookIKCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_LOOKIKCFG_IIMIEOIMBME_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
