#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLNKIGMDODK;
namespace System { class String; }

#define RPG_CLIENT_ANNOUNCEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCFE97D0)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0xCFE9900)
#define RPG_CLIENT_ANNOUNCEDATA_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0xCFE9A00)
#define RPG_CLIENT_ANNOUNCEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0xCFE99B0)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0xCFE9A50)
#define RPG_CLIENT_ANNOUNCEDATA_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0xCFE9960)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISCENTERSYSTEMLAST5EVERYMINUTES_OFFSET UNITYSDK_OFFSET(0xCFE9B10)
#define RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0xCFE9940)
#define RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0xCFE9920)
#define RPG_CLIENT_ANNOUNCEDATA_GET_TIPTEXT_OFFSET UNITYSDK_OFFSET(0xCFE9AA0)
#define RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xCFE9840)
#define RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0xCFE98B0)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET UNITYSDK_OFFSET(0xCFE9910)
#define RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET UNITYSDK_OFFSET(0xCFE9950)
#define RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET UNITYSDK_OFFSET(0xCFE9930)

namespace RPG::Client
{
	inline static constexpr unsigned int AnnounceData_TypeDefinitionIndex = 68351;

	class AnnounceData : public ::System::Object
	{
	public:
		::NLNKIGMDODK* _Proto; // 0x10
		::System::UInt32 _LastShowTime_k__BackingField; // 0x18
		::System::Boolean _AlreadyShowed_k__BackingField; // 0x1C
		::System::Boolean _IsStripe_k__BackingField; // 0x1D
		::System::Void _ctor(::NLNKIGMDODK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNKIGMDODK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Refresh(::NLNKIGMDODK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNKIGMDODK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_REFRESH_OFFSET))(this, a1);
		}

		::System::Void SetAlreadyShowed(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SETALREADYSHOWED_OFFSET))(this, a1);
		}

		::System::Boolean get_AlreadyShowed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ALREADYSHOWED_OFFSET))(this);
		}

		::System::Void set_AlreadyShowed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ALREADYSHOWED_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastShowTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_LASTSHOWTIME_OFFSET))(this);
		}

		::System::Void set_LastShowTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_LASTSHOWTIME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsStripe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ISSTRIPE_OFFSET))(this);
		}

		::System::Void set_IsStripe(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_SET_ISSTRIPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Frequency()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_FREQUENCY_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ENDTIME_OFFSET))(this);
		}

		::System::String* get_TipText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_TIPTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsCenterSystemLast5EveryMinutes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNOUNCEDATA_GET_ISCENTERSYSTEMLAST5EVERYMINUTES_OFFSET))(this);
		}

	};
}
