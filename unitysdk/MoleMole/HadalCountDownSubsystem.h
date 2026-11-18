#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGCPGOHHAIC_JACIJBLFLOO.h"

class AGJFJGEMIPB_ABMKPFAONMD;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_ADD_COUNTDOWNFINISHED_OFFSET UNITYSDK_OFFSET(0x119229F0)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_BINDTIMEUP_OFFSET UNITYSDK_OFFSET(0x11923050)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_GETELAPSEDSECONDS_OFFSET UNITYSDK_OFFSET(0x11923150)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_GETREMAININGSECONDS_OFFSET UNITYSDK_OFFSET(0x11923200)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_GET_ISSTARTED_OFFSET UNITYSDK_OFFSET(0x119229E0)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_ONTIMEUP_OFFSET UNITYSDK_OFFSET(0x11922AF0)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_PAUSECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x119235C0)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_REMOVE_COUNTDOWNFINISHED_OFFSET UNITYSDK_OFFSET(0x11922A70)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_RESUMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x119236B0)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_SENDUIOPERATION_OFFSET UNITYSDK_OFFSET(0x11922C10)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x11923280)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_STOPCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x119237B0)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_UNBINDTIMEUP_OFFSET UNITYSDK_OFFSET(0x11922F60)
#define MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11923890)

namespace MoleMole
{
	inline static constexpr unsigned int HadalCountDownSubsystem_TypeDefinitionIndex = 67226;

	class HadalCountDownSubsystem
	{
	public:
		// static const ::System::String* TimerKey; // 0x0
		::System::Action_1<::System::Single>* CountDownFinished; // 0x10
		::AGJFJGEMIPB_ABMKPFAONMD* _timer; // 0x18
		::System::Boolean _hasStarted; // 0x20
		::System::Boolean _isPaused; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsStarted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_GET_ISSTARTED_OFFSET))(this);
		}

		::System::Void add_CountDownFinished(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_ADD_COUNTDOWNFINISHED_OFFSET))(this, value);
		}

		::System::Void remove_CountDownFinished(::System::Action_1<::System::Single>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_REMOVE_COUNTDOWNFINISHED_OFFSET))(this, value);
		}

		::System::Void OnTimeUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_ONTIMEUP_OFFSET))(this);
		}

		::System::Void BindTimeUp(::AGJFJGEMIPB_ABMKPFAONMD* target)
		{
			return ((::System::Void(*)(::PVOID, ::AGJFJGEMIPB_ABMKPFAONMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_BINDTIMEUP_OFFSET))(this, target);
		}

		::System::Void UnbindTimeUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_UNBINDTIMEUP_OFFSET))(this);
		}

		::System::Single GetElapsedSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_GETELAPSEDSECONDS_OFFSET))(this);
		}

		::System::Single GetRemainingSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_GETREMAININGSECONDS_OFFSET))(this);
		}

		::System::Void StartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_STARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void PauseCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_PAUSECOUNTDOWN_OFFSET))(this);
		}

		::System::Void ResumeCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_RESUMECOUNTDOWN_OFFSET))(this);
		}

		::System::Void StopCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_STOPCOUNTDOWN_OFFSET))(this);
		}

		::System::Void SendUIOperation(::EGCPGOHHAIC_JACIJBLFLOO operation, ::AGJFJGEMIPB_ABMKPFAONMD* timer)
		{
			return ((::System::Void(*)(::PVOID, ::EGCPGOHHAIC_JACIJBLFLOO, ::AGJFJGEMIPB_ABMKPFAONMD*))((::PBYTE)hIl2Cpp + MOLEMOLE_HADALCOUNTDOWNSUBSYSTEM_SENDUIOPERATION_OFFSET))(this, operation, timer);
		}
	};
}
