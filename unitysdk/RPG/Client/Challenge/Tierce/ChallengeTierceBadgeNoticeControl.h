#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class KELDADFDNPO;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class PrefabLoadMeta; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC93B580)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC93B0B0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_LLEGHDEJJLK_OFFSET UNITYSDK_OFFSET(0xC93B050)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_NLIOEBODLDJ_OFFSET UNITYSDK_OFFSET(0xC93B010)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceBadgeNoticeControl_TypeDefinitionIndex = 81517;

	class ChallengeTierceBadgeNoticeControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::KELDADFDNPO* GPDIDCGEEEC; // 0x18
		::RPG::Client::AnimatorButton* _BtnClose; // 0x20
		::RPG::Client::LocalizedText* _TextGroupName; // 0x28
		::RPG::Client::PrefabLoadMeta* _BadgePrefabLoadMeta; // 0x30
		::System::Int32 _BadgeMemoryPrefabIndex; // 0x38
		::System::Int32 _BadgeStoryPrefabIndex; // 0x3C
		::System::Int32 _BadgeBossPrefabIndex; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::LocalizedText* _TextNormalStarAchievedCount; // 0x48
		::RPG::Client::LocalizedText* _TextNormalStarTotalCount; // 0x50
		::RPG::Client::LocalizedText* _TextSpecialStarAchievedCount; // 0x58
		::RPG::Client::LocalizedText* _TextSpecialStarTotalCount; // 0x60
		::RPG::Client::LocalizedText* _TextExpireDate; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_CTOR_OFFSET))(this);
		}

		::KELDADFDNPO* NLIOEBODLDJ()
		{
			return ((::KELDADFDNPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_NLIOEBODLDJ_OFFSET))(this);
		}

		::System::Void LLEGHDEJJLK(::KELDADFDNPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KELDADFDNPO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_LLEGHDEJJLK_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::KELDADFDNPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KELDADFDNPO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEBADGENOTICECONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
