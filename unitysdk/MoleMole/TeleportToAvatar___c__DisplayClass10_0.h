#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigAvatarDateTeleport; }
namespace MoleMole { class TeleportToAvatar; }

#define MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14BCB890)
#define MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__ONUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x14BCB8A0)

namespace MoleMole
{
	inline static constexpr unsigned int TeleportToAvatar___c__DisplayClass10_0_TypeDefinitionIndex = 82660;

	class TeleportToAvatar___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::TeleportToAvatar* __4__this; // 0x10
		::MoleMole::ConfigAvatarDateTeleport* config; // 0x18
		::MoleMole::EntityHandle entityHandle; // 0x20
		::UnityEngine::Vector3 switchInPos; // 0x30
		::LFGBJHCEJID posRot; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUpdate_b__0(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_TELEPORTTOAVATAR___C__DISPLAYCLASS10_0__ONUPDATE_B__0_OFFSET))(this, id);
		}
	};
}
