#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ArgueGeneralUIStateConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D1E1A0)
#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D1E1B0)
#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM_WRITE_OFFSET UNITYSDK_OFFSET(0x10D1E340)
#define MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1E460)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ArgueGeneralUIStateConfig_FMICHLDFKKM_TypeDefinitionIndex = 76143;

	class ArgueGeneralUIStateConfig_FMICHLDFKKM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ArgueGeneralUIStateConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ArgueGeneralUIStateConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::ArgueGeneralUIStateConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ArgueGeneralUIStateConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_ARGUEGENERALUISTATECONFIG_FMICHLDFKKM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
