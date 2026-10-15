#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickTap_ActionTriggering.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickTap_OnTap; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_CTOR_OFFSET UNITYSDK_OFFSET(0x16756650)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_DOACTION_OFFSET UNITYSDK_OFFSET(0x167567D0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_UPDATE_OFFSET UNITYSDK_OFFSET(0x167566E0)

namespace HedgehogTeam::EasyTouch
{
	class QuickTap : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickTap_OnTap* onTap; // 0x70
		::HedgehogTeam::EasyTouch::QuickTap_ActionTriggering actionTriggering; // 0x78
		::System::Byte _padding0[0x4];
		::HedgehogTeam::EasyTouch::Gesture* currentGesture; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_UPDATE_OFFSET))(this);
		}

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKTAP_DOACTION_OFFSET))(this, a1);
		}

	};
}
