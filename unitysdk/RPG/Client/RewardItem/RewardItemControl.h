#pragma once
#include "unitysdk/unitysdk.h"
class HIKAAGHELPH;
class LABEGKEFBPJ;
namespace R3 { template <typename T> class Observable_1; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xDEBE600)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDBUTTON_OFFSET UNITYSDK_OFFSET(0xDEBA5D0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDCOUNT_OFFSET UNITYSDK_OFFSET(0xDEBBCA0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDICON_OFFSET UNITYSDK_OFFSET(0xDEBAA80)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xDEBA530)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDNAMEPANEL_OFFSET UNITYSDK_OFFSET(0xDEBDC30)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRARITY_OFFSET UNITYSDK_OFFSET(0xDEBB5F0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRECYCLELABELS_OFFSET UNITYSDK_OFFSET(0xDEBD580)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDREDDOT_OFFSET UNITYSDK_OFFSET(0xDEBE0B0)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDSTATUSMARKS_OFFSET UNITYSDK_OFFSET(0xDEBC120)
#define RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__STATUSPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0xDEBE320)

namespace RPG::Client::RewardItem
{
	inline static constexpr unsigned int RewardItemControl_TypeDefinitionIndex = 79133;

	class RewardItemControl
	{
	public:
		::RPG::Client::AnimatorButton* _RootButton; // 0x70
		::UnityEngine::UI::Image* _IconImage; // 0x78
		::UnityEngine::RectTransform* _AvatarPanel; // 0x80
		::UnityEngine::UI::Image* _AvatarIconImage; // 0x88
		::UnityEngine::RectTransform* _BgPanel; // 0x90
		::UnityEngine::UI::Image* _RarityFrameImage; // 0x98
		::UnityEngine::UI::Image* _RarityStarImage; // 0xA0
		::UnityEngine::RectTransform* _NumPanel; // 0xA8
		::RPG::Client::LocalizedText* _CountText; // 0xB0
		::UnityEngine::RectTransform* _StatusPanel; // 0xB8
		::UnityEngine::RectTransform* _GetMark; // 0xC0
		::UnityEngine::RectTransform* _ExtraRewardMark; // 0xC8
		::UnityEngine::RectTransform* _BlackMask; // 0xD0
		::UnityEngine::UI::Image* _ItemTypeIcon; // 0xD8
		::UnityEngine::RectTransform* _LockMarkCenter; // 0xE0
		::UnityEngine::RectTransform* _LockMark; // 0xE8
		::UnityEngine::RectTransform* _TimeLimitMark; // 0xF0
		::UnityEngine::RectTransform* _InvalidatedLabel; // 0xF8
		::UnityEngine::RectTransform* _TimeOutLabel; // 0x100
		::UnityEngine::RectTransform* _NamePanel; // 0x108
		::RPG::Client::LocalizedText* _NameText; // 0x110
		::UnityEngine::RectTransform* _HighLightPanel; // 0x118
		::UnityEngine::Transform* _RedDotRoot; // 0x120
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _Binding(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _BindButton(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDBUTTON_OFFSET))(this, a1);
		}

		::System::Void _BindIcon(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDICON_OFFSET))(this, a1);
		}

		::System::Void _BindRarity(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRARITY_OFFSET))(this, a1);
		}

		::System::Void _BindCount(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDCOUNT_OFFSET))(this, a1);
		}

		::System::Void _BindStatusMarks(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDSTATUSMARKS_OFFSET))(this, a1);
		}

		static ::R3::Observable_1<::System::Boolean>* _StatusPanelVisible(::LABEGKEFBPJ* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::LABEGKEFBPJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__STATUSPANELVISIBLE_OFFSET))(a1);
		}

		::System::Void _BindRecycleLabels(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDRECYCLELABELS_OFFSET))(this, a1);
		}

		::System::Void _BindNamePanel(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDNAMEPANEL_OFFSET))(this, a1);
		}

		::System::Void _BindRedDot(::HIKAAGHELPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIKAAGHELPH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_REWARDITEM_REWARDITEMCONTROL__BINDREDDOT_OFFSET))(this, a1);
		}

	};
}
