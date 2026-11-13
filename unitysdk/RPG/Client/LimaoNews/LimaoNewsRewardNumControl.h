#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBBE610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL_SETREWARDID_OFFSET UNITYSDK_OFFSET(0x1CBBE5C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__GETREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CBBE520)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CBBE490)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CBBE410)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsRewardNumControl_TypeDefinitionIndex = 83139;

	class LimaoNewsRewardNumControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::UInt32 _RewardID; // 0x40
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Text* _Text; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::UInt32 _GetRewardCount(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL__GETREWARDCOUNT_OFFSET))(this, a1);
		}

		::System::Void SetRewardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSREWARDNUMCONTROL_SETREWARDID_OFFSET))(this, a1);
		}

	};
}
