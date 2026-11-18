#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_PENDINGITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A712EB0)

namespace MoleMole
{
	inline static constexpr unsigned int PartnerAvatarDynamicLoadSubSystem_PendingItem_TypeDefinitionIndex = 68989;

	class PartnerAvatarDynamicLoadSubSystem_PendingItem : public ::System::Object
	{
	public:
		::MoleMole::InLevelAvatarDataItem* AvatarData; // 0x10
		::System::Action_1<::MoleMole::Battle::Entity*>* OnComplete; // 0x18
		::MoleMole::Battle::Entity* Entity; // 0x20
		::System::Int32 RobotID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PARTNERAVATARDYNAMICLOADSUBSYSTEM_PENDINGITEM__CTOR_OFFSET))(this);
		}
	};
}
