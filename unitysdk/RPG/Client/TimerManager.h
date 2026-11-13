#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIHFIHMEIB;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TIMERMANAGER_ADDONCETIMERWITHFINISHMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1A15B1D0)
#define RPG_CLIENT_TIMERMANAGER_ADDONCETIMER_OFFSET UNITYSDK_OFFSET(0x1A15AF20)
#define RPG_CLIENT_TIMERMANAGER_ADDREPEATTIMER_OFFSET UNITYSDK_OFFSET(0x1A15ABD0)
#define RPG_CLIENT_TIMERMANAGER_CANCEL_OFFSET UNITYSDK_OFFSET(0x1A15B900)
#define RPG_CLIENT_TIMERMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A15BDA0)
#define RPG_CLIENT_TIMERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A15BAB0)
#define RPG_CLIENT_TIMERMANAGER_GETTIMERID_OFFSET UNITYSDK_OFFSET(0x1A15AED0)
#define RPG_CLIENT_TIMERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A15AB90)
#define RPG_CLIENT_TIMERMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1A15B3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimerManager_TypeDefinitionIndex = 70257;

	class TimerManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* pendingTimerID; // 0x10
		::HDIHFIHMEIB* pool; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* deleteTimerID; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* aliveTimerID; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* TimerMap; // 0x30
		::System::Boolean InTimerTick; // 0x38
		::System::Byte _padding0[0x3];
		::System::Int32 id; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_INIT_OFFSET))(this);
		}

		::System::Int32 AddRepeatTimer(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDREPEATTIMER_OFFSET))(this, a1, a2);
		}

		::System::Int32 AddOnceTimer(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDONCETIMER_OFFSET))(this, a1, a2);
		}

		::System::Int32 AddOnceTimerWithFinishMsTimeStamp(::System::UInt64 a1, ::System::Action* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_ADDONCETIMERWITHFINISHMSTIMESTAMP_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetTimerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_GETTIMERID_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Cancel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_CANCEL_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMERMANAGER_DISPOSE_OFFSET))(this);
		}

	};
}
