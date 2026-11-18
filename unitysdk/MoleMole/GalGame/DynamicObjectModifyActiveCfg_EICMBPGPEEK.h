#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162C8580)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162C8590)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK_WRITE_OFFSET UNITYSDK_OFFSET(0x162C8720)
#define MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK__CTOR_OFFSET UNITYSDK_OFFSET(0x162C8840)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int DynamicObjectModifyActiveCfg_EICMBPGPEEK_TypeDefinitionIndex = 39345;

	class DynamicObjectModifyActiveCfg_EICMBPGPEEK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::DynamicObjectModifyActiveCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::DynamicObjectModifyActiveCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::DynamicObjectModifyActiveCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::DynamicObjectModifyActiveCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_DYNAMICOBJECTMODIFYACTIVECFG_EICMBPGPEEK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
