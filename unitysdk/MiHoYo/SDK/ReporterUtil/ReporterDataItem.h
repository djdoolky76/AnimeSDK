#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ReporterUtil/ReporterDataItem_TimeStatus.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace MiHoYo::SDK::ReporterUtil { class ReporterDataItem; }

#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_BEGIN_OFFSET UNITYSDK_OFFSET(0xB6918B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xB691AC0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_DURATIONWITH_OFFSET UNITYSDK_OFFSET(0xB691970)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_END_OFFSET UNITYSDK_OFFSET(0xB691910)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xB691770)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xB691790)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB691750)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0xB6917B0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SETSAMETIMETO_OFFSET UNITYSDK_OFFSET(0xB6908A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xB691780)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xB6917A0)
#define MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB691760)

namespace MiHoYo::SDK::ReporterUtil
{
	inline static constexpr unsigned int ReporterDataItem_TypeDefinitionIndex = 47672;

	class ReporterDataItem : public ::System::Object
	{
	public:
		::System::DateTime endTime; // 0x10
		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus _Status_k__BackingField; // 0x18
		::System::Byte _padding0[0x4];
		::System::DateTime beginTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus get_Status()
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem_TimeStatus))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_STATUS_OFFSET))(this, a1);
		}

		::System::DateTime get_BeginTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_BEGINTIME_OFFSET))(this, a1);
		}

		::System::DateTime get_EndTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::Int64 get_TotalMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_GET_TOTALMILLISECONDS_OFFSET))(this);
		}

		::System::Void Begin(::System::Nullable_1<::System::DateTime> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_BEGIN_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::ReporterUtil::ReporterDataItem* SetSameTimeTo(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a1)
		{
			return ((::MiHoYo::SDK::ReporterUtil::ReporterDataItem*(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_SETSAMETIMETO_OFFSET))(this, a1);
		}

		::System::Void End(::System::Nullable_1<::System::DateTime> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_END_OFFSET))(this, a1);
		}

		::System::Int64 DurationWith(::MiHoYo::SDK::ReporterUtil::ReporterDataItem* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::MiHoYo::SDK::ReporterUtil::ReporterDataItem*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REPORTERUTIL_REPORTERDATAITEM_DURATIONWITH_OFFSET))(this, a1);
		}

	};
}
