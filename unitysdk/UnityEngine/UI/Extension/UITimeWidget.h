#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIControlComponent.h"
#include "unitysdk/UnityEngine/UI/Extension/IconShowType.h"
#include "unitysdk/UnityEngine/UI/Extension/TitleShowType.h"
#include "unitysdk/UnityEngine/UI/Extension/UITimeWidget_TimeShowType.h"
#include "unitysdk/UnityEngine/UI/Extension/UITimeWidget_TimeUpdateType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UnityEngine/UI/Extension/SetTimeStampCountParam.h"
#include "unitysdk/UnityEngine/Color.h"

class MBBCFJKMFNF;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITimeStruct; }
namespace UnityEngine::UI::Extension { class UITimeWidget_Model; }

#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_CLEAN_OFFSET UNITYSDK_OFFSET(0x194D50E0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x194D4850)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_GET__MODEL_OFFSET UNITYSDK_OFFSET(0x194D4740)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_HIDETIME_OFFSET UNITYSDK_OFFSET(0x194D7230)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x194D5090)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x194D4940)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_REMOVEENDCALL_OFFSET UNITYSDK_OFFSET(0x194D54C0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETALLCOLOR_1_OFFSET UNITYSDK_OFFSET(0x194D6A30)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETALLCOLOR_OFFSET UNITYSDK_OFFSET(0x194D6980)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETICONACTIVE_OFFSET UNITYSDK_OFFSET(0x194D77D0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETICONPATH_OFFSET UNITYSDK_OFFSET(0x194D7960)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETICONSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x194D72E0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMECOLOR_1_OFFSET UNITYSDK_OFFSET(0x194D6E60)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMECOLOR_OFFSET UNITYSDK_OFFSET(0x194D7180)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMECOUNTUP_OFFSET UNITYSDK_OFFSET(0x194D56E0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEDESCOLOR_1_OFFSET UNITYSDK_OFFSET(0x194D6BF0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEDESCOLOR_OFFSET UNITYSDK_OFFSET(0x194D70D0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEOUT_OFFSET UNITYSDK_OFFSET(0x194D5680)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMESHOWTYPE_OFFSET UNITYSDK_OFFSET(0x194D6930)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMESTAMPCOUNTDOWN_1_OFFSET UNITYSDK_OFFSET(0x194D5610)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMESTAMPCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x194D5510)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEUPDATETYPE_OFFSET UNITYSDK_OFFSET(0x194D68E0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIME_1_OFFSET UNITYSDK_OFFSET(0x194D5920)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIME_OFFSET UNITYSDK_OFFSET(0x194D58A0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTITLEACTIVE_OFFSET UNITYSDK_OFFSET(0x194D7AF0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTITLE_1_OFFSET UNITYSDK_OFFSET(0x194D7E00)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTITLE_OFFSET UNITYSDK_OFFSET(0x194D7C70)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_STOPTIMESTAMPCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x194D5390)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_DEFAULT_OFFSET UNITYSDK_OFFSET(0x194D6480)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_HOURMINUTESECOND_OFFSET UNITYSDK_OFFSET(0x194D5D70)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_HOURMINUTE_OFFSET UNITYSDK_OFFSET(0x194D5C10)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_MINUTESECOND_OFFSET UNITYSDK_OFFSET(0x194D60C0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_ONLYDAY_OFFSET UNITYSDK_OFFSET(0x194D6350)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_ONLYONE_OFFSET UNITYSDK_OFFSET(0x194D59F0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_UPDATETICK_OFFSET UNITYSDK_OFFSET(0x194D49E0)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_UPDATE_OFFSET UNITYSDK_OFFSET(0x194D4990)
#define UNITYENGINE_UI_EXTENSION_UITIMEWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x194D80C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TypeDefinitionIndex = 85886;

	class UITimeWidget : public ::MoleMole::UIControlComponent
	{
	public:
		// static const ::System::String* LastTimeTextKey; // 0x0
		// static const ::System::String* RefreshTimeTextKey; // 0x0
		// static const ::System::String* ActivityTimeExpiredTextKey; // 0x0
		// static const ::System::String* WeeklyRefreshTextKey; // 0x0
		// static const ::System::String* DailyRefreshTextKey; // 0x0
		// static const ::System::String* DiscountLastTimeKey; // 0x0
		// static const ::System::String* LastTimeIcon; // 0x0
		// static const ::System::String* RefreshTimeIcon; // 0x0
		// static const ::System::String* activityColorKey; // 0x0
		// static const ::System::String* activityPeriodColorKey; // 0x0
		::System::Boolean isAutoTick; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::UI::Extension::UITimeWidget_TimeShowType showType; // 0x1C
		::UnityEngine::UI::Extension::UITimeWidget_TimeUpdateType _timeUpdateType; // 0x20
		::System::Byte _padding1[0x4];
		::UnityEngine::GameObject* titlePreSpace; // 0x28
		::UnityEngine::GameObject* titlePostSpace; // 0x30
		::UnityEngine::UI::Extension::UITimeStruct* day; // 0x38
		::UnityEngine::UI::Extension::UITimeStruct* hour; // 0x40
		::UnityEngine::UI::Extension::UITimeStruct* minutes; // 0x48
		::UnityEngine::UI::Extension::UITimeStruct* seconds; // 0x50
		::UnityEngine::UI::Text* Title; // 0x58
		::UnityEngine::UI::Image* Icon; // 0x60
		::System::Int32 _totalSeconds; // 0x68
		::System::Single _startTime; // 0x6C
		::System::Int32 _timeoutSeconds; // 0x70
		::System::Byte _padding2[0x4];
		::System::Int64 _timeStamp; // 0x78
		::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* _EndCall; // 0x80
		::MBBCFJKMFNF* _loadProxyBase; // 0x88
		::Foundation::AssetRequestHandle refreshTimeIconHandle; // 0x90
		::Foundation::AssetRequestHandle lastTimeIconHandle; // 0xB0
		::UnityEngine::UI::Extension::UITimeWidget_Model* __model; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITimeWidget_Model* get__model()
		{
			return ((::UnityEngine::UI::Extension::UITimeWidget_Model*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_GET__MODEL_OFFSET))(this);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_GET_ISEND_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_ONDESTROY_OFFSET))(this);
		}

		::System::Void StopTimeStampCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_STOPTIMESTAMPCOUNTDOWN_OFFSET))(this);
		}

		::System::Void RemoveEndCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_REMOVEENDCALL_OFFSET))(this);
		}

		::System::Void SetTimeStampCountDown(::UnityEngine::UI::Extension::SetTimeStampCountParam p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::SetTimeStampCountParam))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMESTAMPCOUNTDOWN_OFFSET))(this, p);
		}

		::System::Void SetTimeStampCountDown_1(::System::Int64 timeStamp, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>* endCall)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Action_1<::UnityEngine::UI::Extension::UITimeWidget*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMESTAMPCOUNTDOWN_1_OFFSET))(this, timeStamp, endCall);
		}

		::System::Void SetTimeout(::System::Int32 secs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEOUT_OFFSET))(this, secs);
		}

		::System::Void SetTimeCountUp(::System::Int64 beginTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMECOUNTUP_OFFSET))(this, beginTimeStamp);
		}

		::System::Void SetTime(::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIME_OFFSET))(this, seconds);
		}

		::System::Void SetTime_1(::System::TimeSpan ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIME_1_OFFSET))(this, ts);
		}

		::System::Void SetTimeUpdateType(::UnityEngine::UI::Extension::UITimeWidget_TimeUpdateType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget_TimeUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEUPDATETYPE_OFFSET))(this, type);
		}

		::System::Void SetTimeShowType(::UnityEngine::UI::Extension::UITimeWidget_TimeShowType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget_TimeShowType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMESHOWTYPE_OFFSET))(this, type);
		}

		::System::Void TimeShow_OnlyOne(::System::TimeSpan ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_ONLYONE_OFFSET))(this, ts);
		}

		::System::Void TimeShow_Default(::System::TimeSpan ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_DEFAULT_OFFSET))(this, ts);
		}

		::System::Void TimeShow_OnlyDay(::System::TimeSpan ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_ONLYDAY_OFFSET))(this, ts);
		}

		::System::Void TimeShow_HourMinute(::System::TimeSpan ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_HOURMINUTE_OFFSET))(this, ts);
		}

		::System::Void TimeShow_HourMinuteSecond(::System::TimeSpan ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_HOURMINUTESECOND_OFFSET))(this, ts);
		}

		::System::Void TimeShow_MinuteSecond(::System::TimeSpan ts)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_TIMESHOW_MINUTESECOND_OFFSET))(this, ts);
		}

		::System::Void SetAllColor(::System::String* colorKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETALLCOLOR_OFFSET))(this, colorKey);
		}

		::System::Void SetAllColor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETALLCOLOR_1_OFFSET))(this, color);
		}

		::System::Void SetTimeDesColor(::System::String* colorKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEDESCOLOR_OFFSET))(this, colorKey);
		}

		::System::Void SetTimeDesColor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMEDESCOLOR_1_OFFSET))(this, color);
		}

		::System::Void SetTimeColor(::System::String* colorKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMECOLOR_OFFSET))(this, colorKey);
		}

		::System::Void SetTimeColor_1(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTIMECOLOR_1_OFFSET))(this, color);
		}

		::System::Void HideTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_HIDETIME_OFFSET))(this);
		}

		::System::Void UpdateTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_UPDATETICK_OFFSET))(this);
		}

		::System::Void SetIconShowType(::UnityEngine::UI::Extension::IconShowType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::IconShowType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETICONSHOWTYPE_OFFSET))(this, type);
		}

		::System::Void SetIconActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETICONACTIVE_OFFSET))(this, active);
		}

		::System::Void SetIconPath(::Foundation::AssetPath assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETICONPATH_OFFSET))(this, assetPath);
		}

		::System::Void SetTitleActive(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTITLEACTIVE_OFFSET))(this, isActive);
		}

		::System::Void SetTitle(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTITLE_OFFSET))(this, title);
		}

		::System::Void SetTitle_1(::UnityEngine::UI::Extension::TitleShowType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::TitleShowType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_SETTITLE_1_OFFSET))(this, type);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITIMEWIDGET_CLEAN_OFFSET))(this);
		}
	};
}
