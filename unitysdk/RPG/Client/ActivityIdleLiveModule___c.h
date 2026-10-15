#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOBCDAJAKGC;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::ActivityIdleLive { class CaptainData; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC524420)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC524450)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___INITREQ_B__229_0_OFFSET UNITYSDK_OFFSET(0xC5244A0)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___SORTCAPTAINBYTOTALSCDESCEND_B__258_0_OFFSET UNITYSDK_OFFSET(0xC524540)
#define RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___UPDATECHAPTERRECORDDATA_B__215_1_OFFSET UNITYSDK_OFFSET(0xC524460)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityIdleLiveModule___c_TypeDefinitionIndex = 61538;

	class ActivityIdleLiveModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::CaptainData*>** StaticGet___9__258_0()
		{
			return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::CaptainData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2A080);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2A088);
		}

		static ::System::Comparison_1<::BOBCDAJAKGC*>** StaticGet___9__215_1()
		{
			return (::System::Comparison_1<::BOBCDAJAKGC*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2A090);
		}

		static ::System::Action_1<::RPG::Client::ScheduleData*>** StaticGet___9__229_0()
		{
			return (::System::Action_1<::RPG::Client::ScheduleData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2A098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __UpdateChapterRecordData_b__215_1(::BOBCDAJAKGC* a1, ::BOBCDAJAKGC* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::BOBCDAJAKGC*, ::BOBCDAJAKGC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___UPDATECHAPTERRECORDDATA_B__215_1_OFFSET))(this, a1, a2);
		}

		::System::Void __InitReq_b__229_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___INITREQ_B__229_0_OFFSET))(this, a1);
		}

		::System::Int32 __SortCaptainByTotalScDescend_b__258_0(::RPG::Client::ActivityIdleLive::CaptainData* a1, ::RPG::Client::ActivityIdleLive::CaptainData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CaptainData*, ::RPG::Client::ActivityIdleLive::CaptainData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVEMODULE___C___SORTCAPTAINBYTOTALSCDESCEND_B__258_0_OFFSET))(this, a1, a2);
		}

	};
}
