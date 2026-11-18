#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/System/DateTime.h"

class OBILIDDPCNA;
class OBPHHLINLLC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOTIMERMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1310BE40)
#define MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_1_OFFSET UNITYSDK_OFFSET(0x1310C9B0)
#define MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_2_OFFSET UNITYSDK_OFFSET(0x1310CBA0)
#define MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_OFFSET UNITYSDK_OFFSET(0x1310C830)
#define MOLEMOLE_MONOTIMERMANAGER_RESETALLTRIGGERTIMER_OFFSET UNITYSDK_OFFSET(0x1310C330)
#define MOLEMOLE_MONOTIMERMANAGER_RESTARTGAME_OFFSET UNITYSDK_OFFSET(0x1310C0D0)
#define MOLEMOLE_MONOTIMERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1310C4B0)
#define MOLEMOLE_MONOTIMERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1310CC50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTimerManager_TypeDefinitionIndex = 72471;

	class MonoTimerManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::MonoTimerManager** StaticGet_PMKINFHDLFD()
		{
			return (::MoleMole::MonoTimerManager**)Il2CppClass::FromTypeDefinitionIndex(MonoTimerManager_TypeDefinitionIndex)->GetStaticField(0x34B10);
		}
		::System::Boolean isDirty; // 0x18
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::OBPHHLINLLC*>* JCHLJDEDFCA; // 0x20
		::System::Collections::Generic::List_1<::OBPHHLINLLC*>* BKGENEGEACP; // 0x28
		::System::Collections::Generic::List_1<::OBILIDDPCNA*>* LHMNHAKDFEL; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER__CTOR_OFFSET))(this);
		}

		static ::MoleMole::MonoTimerManager* get_Instance()
		{
			return ((::MoleMole::MonoTimerManager*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void RestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_RESTARTGAME_OFFSET))(this);
		}

		::System::Void ResetAllTriggerTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_RESETALLTRIGGERTIMER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_UPDATE_OFFSET))(this);
		}

		::OBPHHLINLLC* RegisterTimer(::System::DateTime OBDCKIIBEJM, ::System::Action* PFNNGIKBBJL, ::System::Boolean FLMIJCJJIBA, ::System::Boolean KJFODMIMAFJ)
		{
			return ((::OBPHHLINLLC*(*)(::PVOID, ::System::DateTime, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_OFFSET))(this, OBDCKIIBEJM, PFNNGIKBBJL, FLMIJCJJIBA, KJFODMIMAFJ);
		}

		::OBPHHLINLLC* RegisterTimer_1(::System::Single HKEFLKGDPGL, ::System::Action* EHIPCAJONMF, ::System::Boolean KJFODMIMAFJ)
		{
			return ((::OBPHHLINLLC*(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_1_OFFSET))(this, HKEFLKGDPGL, EHIPCAJONMF, KJFODMIMAFJ);
		}

		::OBILIDDPCNA* RegisterTimer_2(::System::DateTime OBDCKIIBEJM, ::System::Action* FHJPINMHDEP)
		{
			return ((::OBILIDDPCNA*(*)(::PVOID, ::System::DateTime, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTIMERMANAGER_REGISTERTIMER_2_OFFSET))(this, OBDCKIIBEJM, FHJPINMHDEP);
		}
	};
}
