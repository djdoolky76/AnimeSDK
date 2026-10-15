#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ExpeditionBattleTeamMember; }

#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_CREATE_OFFSET UNITYSDK_OFFSET(0xCE4B030)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_CTOR_OFFSET UNITYSDK_OFFSET(0xCE4CAD0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xCE4CA90)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xCE4CAB0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xCE4CAA0)
#define RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xCE4CAC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleTeamMember_TypeDefinitionIndex = 63857;

	class ExpeditionBattleTeamMember : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
		::ACINIALAFDE _Type_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_AVATAR_OFFSET))(this, a1);
		}

		::ACINIALAFDE get_Type()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_SET_TYPE_OFFSET))(this, a1);
		}

		static ::RPG::Client::ExpeditionBattleTeamMember* Create(::RPG::AvatarSystem::IAvatar* a1, ::ACINIALAFDE a2)
		{
			return ((::RPG::Client::ExpeditionBattleTeamMember*(*)(::RPG::AvatarSystem::IAvatar*, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLETEAMMEMBER_CREATE_OFFSET))(a1, a2);
		}

	};
}
