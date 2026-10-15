#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCBHBJEOCHL;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AssistData; }
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_ASSISTDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xC69FB30)
#define RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xC69FAC0)
#define RPG_CLIENT_ASSISTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC69F920)
#define RPG_CLIENT_ASSISTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC69F990)
#define RPG_CLIENT_ASSISTDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xC69F900)
#define RPG_CLIENT_ASSISTDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0xC69F910)
#define RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0xC69F9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssistData_TypeDefinitionIndex = 64254;

	class AssistData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* PlayerDisplayData; // 0x10
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SET_AVATAR_OFFSET))(this, a1);
		}

		static ::RPG::Client::AssistData* Create(::HCBHBJEOCHL* a1)
		{
			return ((::RPG::Client::AssistData*(*)(::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::AssistData* Create_1(::RPG::Client::AssistData* a1)
		{
			return ((::RPG::Client::AssistData*(*)(::RPG::Client::AssistData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CREATE_1_OFFSET))(a1);
		}

		::RPG::Client::AssistData* Clone()
		{
			return ((::RPG::Client::AssistData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_CLONE_OFFSET))(this);
		}

		::System::Void SyncData(::HCBHBJEOCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBHBJEOCHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSISTDATA_SYNCDATA_OFFSET))(this, a1);
		}

	};
}
