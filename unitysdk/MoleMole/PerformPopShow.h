#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LELKPLJNAPD_LDGFEACDECP.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class BFDCJJOGEFG;
class FPKIFHKCBEK;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_PERFORMPOPSHOW_DOWAIT_OFFSET UNITYSDK_OFFSET(0x14B133F0)
#define MOLEMOLE_PERFORMPOPSHOW_ENABLESTATE_OFFSET UNITYSDK_OFFSET(0x14B13CC0)
#define MOLEMOLE_PERFORMPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x14B13110)
#define MOLEMOLE_PERFORMPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14B13120)
#define MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B13BD0)
#define MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHSYNCDATACALLBACK_OFFSET UNITYSDK_OFFSET(0x14B13C30)
#define MOLEMOLE_PERFORMPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14B13340)
#define MOLEMOLE_PERFORMPOPSHOW_PLAY_OFFSET UNITYSDK_OFFSET(0x14B13650)
#define MOLEMOLE_PERFORMPOPSHOW__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14B13200)
#define MOLEMOLE_PERFORMPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x14B13130)
#define MOLEMOLE_PERFORMPOPSHOW__ONPROCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x14B13D90)

namespace MoleMole
{
	inline static constexpr unsigned int PerformPopShow_TypeDefinitionIndex = 82339;

	class PerformPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Action_1<::FPKIFHKCBEK*>* finishSyncDataCallback; // 0x28
		::System::Action* executeWhenStartFadeOutAction; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* performIDs; // 0x38
		::System::Action* finishCallback; // 0x40
		::System::Int32 transitionID; // 0x48
		::System::Int32 _triggerGroupID; // 0x4C
		::System::Int32 _waitTime; // 0x50
		::System::Boolean _useWhiteMaskFadeOut; // 0x54
		::System::Boolean _useBlackOrWhiteMaskFadeOut; // 0x55
		::System::Boolean _blackMaskFadein; // 0x56

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Int32>* performs, ::System::Action* finishCallback, ::System::Action* finishFadeCallback, ::System::Boolean blackMaskFadein, ::System::Action_1<::FPKIFHKCBEK*>* finishSyncDataCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::System::Action_1<::FPKIFHKCBEK*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__CTOR_OFFSET))(this, performs, finishCallback, finishFadeCallback, blackMaskFadein, finishSyncDataCallback);
		}

		::System::Void _ctor_1(::BFDCJJOGEFG* performActionParams, ::System::Action* finishCallback, ::System::Action* finishFadeCallback, ::System::Int32 transitionID, ::System::Action_1<::FPKIFHKCBEK*>* finishSyncDataCallback)
		{
			return ((::System::Void(*)(::PVOID, ::BFDCJJOGEFG*, ::System::Action*, ::System::Action*, ::System::Int32, ::System::Action_1<::FPKIFHKCBEK*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__CTOR_1_OFFSET))(this, performActionParams, finishCallback, finishFadeCallback, transitionID, finishSyncDataCallback);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void InvokeFinishCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHCALLBACK_OFFSET))(this);
		}

		::System::Void InvokeFinishSyncDataCallback(::FPKIFHKCBEK* syncData)
		{
			return ((::System::Void(*)(::PVOID, ::FPKIFHKCBEK*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_INVOKEFINISHSYNCDATACALLBACK_OFFSET))(this, syncData);
		}

		static ::System::Void DoWait(::System::Int32 waitTime, ::LELKPLJNAPD_LDGFEACDECP stopSource, ::System::Action* onPlay)
		{
			return ((::System::Void(*)(::System::Int32, ::LELKPLJNAPD_LDGFEACDECP, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_DOWAIT_OFFSET))(waitTime, stopSource, onPlay);
		}

		static ::System::Void EnableState(::System::Boolean state)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_ENABLESTATE_OFFSET))(state);
		}

		::System::Void Play(::System::Boolean finishChat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW_PLAY_OFFSET))(this, finishChat);
		}

		::System::Void _OnProcess_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMPOPSHOW__ONPROCESS_B__16_0_OFFSET))(this);
		}
	};
}
