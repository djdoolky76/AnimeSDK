#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/Nullable_1.h"
class AHCEFHABPDI;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class ItemData; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_AKMGALBKAGP_OFFSET UNITYSDK_OFFSET(0xC93FE90)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0xC940160)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC940280)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xC93FB80)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_SHOULDSHOWDETAILONCLICK_OFFSET UNITYSDK_OFFSET(0xC93FE70)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC93FBC0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_NEDDICCIKBN_OFFSET UNITYSDK_OFFSET(0xC9400C0)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_NFIFDIGGILL_OFFSET UNITYSDK_OFFSET(0xC940050)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xC93FB10)
#define RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_SHOULDSHOWDETAILONCLICK_OFFSET UNITYSDK_OFFSET(0xC93FE80)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeRewardItemIconLiteControl_TypeDefinitionIndex = 81419;

	class ChallengeRewardItemIconLiteControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::AHCEFHABPDI* BNKFDFNJLJH; // 0x18
		::RPG::Client::AnimatorButton* _BtnRoot; // 0x20
		::UnityEngine::UI::Image* _IconRarity; // 0x28
		::UnityEngine::RectTransform* _NodeItemNormal; // 0x30
		::UnityEngine::UI::Image* _IconItemNormal; // 0x38
		::UnityEngine::RectTransform* _NodeItemAvatar; // 0x40
		::UnityEngine::UI::Image* _IconItemAvatar; // 0x48
		::UnityEngine::RectTransform* _NodeCount; // 0x50
		::RPG::Client::LocalizedText* _TextCount; // 0x58
		::System::Boolean _ShouldShowDetailOnClick_k__BackingField; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_CTOR_OFFSET))(this);
		}

		::AHCEFHABPDI* get_RewardItem()
		{
			return ((::AHCEFHABPDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_REWARDITEM_OFFSET))(this);
		}

		::System::Void set_RewardItem(::AHCEFHABPDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHCEFHABPDI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_REWARDITEM_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldShowDetailOnClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_GET_SHOULDSHOWDETAILONCLICK_OFFSET))(this);
		}

		::System::Void set_ShouldShowDetailOnClick(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_SET_SHOULDSHOWDETAILONCLICK_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void AKMGALBKAGP(::RPG::Client::ItemData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_AKMGALBKAGP_OFFSET))(this, a1);
		}

		::System::Void NFIFDIGGILL(::RPG::GameCore::ItemRarity a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRarity))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_NFIFDIGGILL_OFFSET))(this, a1);
		}

		::System::Void NEDDICCIKBN(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_NEDDICCIKBN_OFFSET))(this, a1);
		}

		::System::Void CBDJKPPNMDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGEREWARDITEMICONLITECONTROL_CBDJKPPNMDC_OFFSET))(this);
		}

	};
}
