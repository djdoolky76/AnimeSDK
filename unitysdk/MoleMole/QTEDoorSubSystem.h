#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNIDGMKBBPB_EFNGLHCJNIC.h"

class HDGAOPGFBMD;
class JNIDGMKBBPB;
namespace MoleMole { class UIZenkovUnLockedGameWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_QTEDOORSUBSYSTEM_DISABLEINPUT_OFFSET UNITYSDK_OFFSET(0x15AD2FB0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x15AD38A0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ENTERQTESTATE_OFFSET UNITYSDK_OFFSET(0x15AD2A20)
#define MOLEMOLE_QTEDOORSUBSYSTEM_EXITQTESTATE_OFFSET UNITYSDK_OFFSET(0x15AD34F0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_FORCECLEANUP_OFFSET UNITYSDK_OFFSET(0x15AD1C20)
#define MOLEMOLE_QTEDOORSUBSYSTEM_FORCEEXITAFK_OFFSET UNITYSDK_OFFSET(0x15AD2CF0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_INTERRUPTQTEDOOR_OFFSET UNITYSDK_OFFSET(0x15AD2B60)
#define MOLEMOLE_QTEDOORSUBSYSTEM_INVOKEFINISH_OFFSET UNITYSDK_OFFSET(0x15AD4400)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x15AD2070)
#define MOLEMOLE_QTEDOORSUBSYSTEM_NOTIFYRESULTANIMFINISHED_OFFSET UNITYSDK_OFFSET(0x15AD2CA0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x15AD1AC0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONCIRCLESCALECHANGE_OFFSET UNITYSDK_OFFSET(0x15AD3BD0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15AD1B00)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONENTITYBEINGHIT_OFFSET UNITYSDK_OFFSET(0x15AD39A0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONHITRESULT_OFFSET UNITYSDK_OFFSET(0x15AD3CA0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONNEWROUND_OFFSET UNITYSDK_OFFSET(0x15AD3DA0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONONEROUND_OFFSET UNITYSDK_OFFSET(0x15AD3E90)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONPLAYERPRESS_OFFSET UNITYSDK_OFFSET(0x15AD2C40)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x15AD3E00)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKCOMPLETE_OFFSET UNITYSDK_OFFSET(0x15AD43B0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKINTERRUPT_OFFSET UNITYSDK_OFFSET(0x15AD4500)
#define MOLEMOLE_QTEDOORSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15AD1CD0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_PUSHSTATETOWIDGET_OFFSET UNITYSDK_OFFSET(0x15AD22E0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_RECOMPUTEPROGRESSRATE_OFFSET UNITYSDK_OFFSET(0x15AD4100)
#define MOLEMOLE_QTEDOORSUBSYSTEM_REGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x15AD3270)
#define MOLEMOLE_QTEDOORSUBSYSTEM_REMOVEPROGRESSRATE_OFFSET UNITYSDK_OFFSET(0x15AD4300)
#define MOLEMOLE_QTEDOORSUBSYSTEM_SETPROGRESSRATE_OFFSET UNITYSDK_OFFSET(0x15AD3FC0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_SETWIDGETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15AD20F0)
#define MOLEMOLE_QTEDOORSUBSYSTEM_STARTQTEDOOR_OFFSET UNITYSDK_OFFSET(0x15AD2370)
#define MOLEMOLE_QTEDOORSUBSYSTEM_SUPPRESSAFK_OFFSET UNITYSDK_OFFSET(0x15AD1D80)
#define MOLEMOLE_QTEDOORSUBSYSTEM_UNREGISTEREVENTS_OFFSET UNITYSDK_OFFSET(0x15AD3620)
#define MOLEMOLE_QTEDOORSUBSYSTEM_UNSUBSCRIBETASKEVENTS_OFFSET UNITYSDK_OFFSET(0x15AD4550)
#define MOLEMOLE_QTEDOORSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AD4AB0)
#define MOLEMOLE_QTEDOORSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD4A10)
#define MOLEMOLE_QTEDOORSUBSYSTEM__ONHITRESULT_B__32_0_OFFSET UNITYSDK_OFFSET(0x15AD4B30)
#define MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x15AD4B80)
#define MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x15AD4C10)
#define MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x15AD4CA0)

namespace MoleMole
{
	inline static constexpr unsigned int QTEDoorSubSystem_TypeDefinitionIndex = 91108;

	class QTEDoorSubSystem
	{
	public:
		static ::System::Int32* StaticGet_AFK01Hash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x12E20);
		}
		static ::System::Int32* StaticGet_AFK02Hash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x12E24);
		}
		static ::System::Int32* StaticGet_TriggerAFKHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x12E28);
		}
		static ::System::Int32* StaticGet_IdleHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(QTEDoorSubSystem_TypeDefinitionIndex)->GetStaticField(0x12E2C);
		}
		// static const ::System::String* InputTag; // 0x0
		// static const ::System::Single AFKExitCrossFadeDuration; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* _progressRateByTag; // 0x10
		::System::Action_1<::System::Boolean>* _finishCallback; // 0x18
		::HDGAOPGFBMD* _cachedConfig; // 0x20
		::JNIDGMKBBPB* _currentTask; // 0x28
		::MoleMole::UIZenkovUnLockedGameWidgetController* _widgetController; // 0x30
		::System::Single _progressRate; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ISRUNNING_OFFSET))(this);
		}

		::System::Void SetWidgetController(::MoleMole::UIZenkovUnLockedGameWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovUnLockedGameWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_SETWIDGETCONTROLLER_OFFSET))(this, widget);
		}

		::System::Void PushStateToWidget(::MoleMole::UIZenkovUnLockedGameWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZenkovUnLockedGameWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_PUSHSTATETOWIDGET_OFFSET))(this, widget);
		}

		::System::Void StartQTEDoor(::System::Int32 configId, ::System::Action_1<::System::Boolean>* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_STARTQTEDOOR_OFFSET))(this, configId, onFinish);
		}

		::System::Void InterruptQTEDoor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_INTERRUPTQTEDOOR_OFFSET))(this);
		}

		::System::Void OnPlayerPress(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONPLAYERPRESS_OFFSET))(this, args);
		}

		::System::Void NotifyResultAnimFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_NOTIFYRESULTANIMFINISHED_OFFSET))(this);
		}

		::System::Void EnterQTEState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ENTERQTESTATE_OFFSET))(this);
		}

		::System::Void ExitQTEState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_EXITQTESTATE_OFFSET))(this);
		}

		::System::Void ForceExitAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_FORCEEXITAFK_OFFSET))(this);
		}

		::System::Void SuppressAFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_SUPPRESSAFK_OFFSET))(this);
		}

		::System::Void DisableInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_DISABLEINPUT_OFFSET))(this);
		}

		::System::Void EnableInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ENABLEINPUT_OFFSET))(this);
		}

		::System::Void RegisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_REGISTEREVENTS_OFFSET))(this);
		}

		::System::Void UnregisterEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_UNREGISTEREVENTS_OFFSET))(this);
		}

		::System::Void OnEntityBeingHit(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONENTITYBEINGHIT_OFFSET))(this, args);
		}

		::System::Void OnCircleScaleChange(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONCIRCLESCALECHANGE_OFFSET))(this, scale);
		}

		::System::Void OnHitResult(::JNIDGMKBBPB_EFNGLHCJNIC result, ::System::Int32 successCount, ::System::Single currentProgress, ::System::Single totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::JNIDGMKBBPB_EFNGLHCJNIC, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONHITRESULT_OFFSET))(this, result, successCount, currentProgress, totalProgress);
		}

		::System::Void OnNewRound(::System::Int32 sizeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONNEWROUND_OFFSET))(this, sizeType);
		}

		::System::Void OnProgressUpdate(::System::Single currentProgress, ::System::Single totalProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONPROGRESSUPDATE_OFFSET))(this, currentProgress, totalProgress);
		}

		::System::Void OnOneRound(::System::Boolean isSuccess)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONONEROUND_OFFSET))(this, isSuccess);
		}

		::System::Void SetProgressRate(::System::String* tag, ::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_SETPROGRESSRATE_OFFSET))(this, tag, ratio);
		}

		::System::Void RemoveProgressRate(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_REMOVEPROGRESSRATE_OFFSET))(this, tag);
		}

		::System::Void RecomputeProgressRate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_RECOMPUTEPROGRESSRATE_OFFSET))(this);
		}

		::System::Void OnTaskComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKCOMPLETE_OFFSET))(this);
		}

		::System::Void OnTaskInterrupt()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_ONTASKINTERRUPT_OFFSET))(this);
		}

		::System::Void InvokeFinish(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_INVOKEFINISH_OFFSET))(this, success);
		}

		::System::Void ForceCleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_FORCECLEANUP_OFFSET))(this);
		}

		::System::Void UnsubscribeTaskEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM_UNSUBSCRIBETASKEVENTS_OFFSET))(this);
		}

		::System::Void _OnHitResult_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM__ONHITRESULT_B__32_0_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTEDOORSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
