#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICONDBACCHJ;
namespace RPG::AvatarSystem { class IAvatar; }

#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBF3B90)
#define RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0__GETTRIALAVATARLIST_B__0_OFFSET UNITYSDK_OFFSET(0xDBF3DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerReturnTrialAvatarGroup___c__DisplayClass2_0_TypeDefinitionIndex = 61885;

	class PlayerReturnTrialAvatarGroup___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::ICONDBACCHJ* trialAvatarService; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* _GetTrialAvatarList_b__0(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERRETURNTRIALAVATARGROUP___C__DISPLAYCLASS2_0__GETTRIALAVATARLIST_B__0_OFFSET))(this, a1);
		}

	};
}
