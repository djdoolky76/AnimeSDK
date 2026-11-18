#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/DebugColor.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5AAE10)
#define MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C5AAE20)
#define MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL_WRITE_OFFSET UNITYSDK_OFFSET(0x1C5AAFB0)
#define MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AB0E0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int DebugColor_HBJPGNCIKGL_TypeDefinitionIndex = 66172;

	class DebugColor_HBJPGNCIKGL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::DebugColor& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::DebugColor&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Battle::DebugColor& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::DebugColor&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_DEBUGCOLOR_HBJPGNCIKGL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
