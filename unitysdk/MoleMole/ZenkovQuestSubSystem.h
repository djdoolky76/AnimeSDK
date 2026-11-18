#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GNCKCBODEKO.h"
#include "unitysdk/OOCEACEEEPN.h"

class ENGKPGFGGLM;
class LDIBODLHCNK;
namespace MoleMole::Config { class ZenkovEvacuationSystemTrait; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_FLUSHPENDINGEVACUATIONTIPS_OFFSET UNITYSDK_OFFSET(0x120B4960)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_GETEVACUATIONTIPSID_OFFSET UNITYSDK_OFFSET(0x120B4AF0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_HANDLESETEVACUATIONDATA_OFFSET UNITYSDK_OFFSET(0x120B2B50)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYEVACUATIONCANCELONENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x120B4550)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYSETEVACUATIONDATA_OFFSET UNITYSDK_OFFSET(0x120B35B0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x120B27B0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x120B31F0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEARNINGSREACHEDMINEXFIL_OFFSET UNITYSDK_OFFSET(0x120B3430)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONDATAUPDATED_OFFSET UNITYSDK_OFFSET(0x120B38D0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x120B3840)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x120B4380)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_PROCESSEVACUATIONTIPS_OFFSET UNITYSDK_OFFSET(0x120B3990)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x120B3EF0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SENDEVACUATIONCANCELEVENT_OFFSET UNITYSDK_OFFSET(0x120B36C0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SHOWEVACUATIONCOUNTDOWNTIPS_OFFSET UNITYSDK_OFFSET(0x120B4BA0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x120B41A0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x120B4E20)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x120B4CF0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM__HANDLESETEVACUATIONDATA_B__8_0_OFFSET UNITYSDK_OFFSET(0x120B4E90)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x120B4EA0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x120B4F30)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x120B4FC0)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x120B5050)
#define MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x120B50E0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovQuestSubSystem_TypeDefinitionIndex = 52924;

	class ZenkovQuestSubSystem
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_pendingBeforeSubsystem()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovQuestSubSystem_TypeDefinitionIndex)->GetStaticField(0x52250);
		}
		::System::Collections::Generic::List_1<::LDIBODLHCNK*>* _pendingEvacuationTips; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _floorSuitDic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEarningsReachedMinExfil(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEARNINGSREACHEDMINEXFIL_OFFSET))(this, args);
		}

		static ::System::Void NotifySetEvacuationData(::LDIBODLHCNK* evacuationData, ::System::Boolean isUpdate)
		{
			return ((::System::Void(*)(::LDIBODLHCNK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYSETEVACUATIONDATA_OFFSET))(evacuationData, isUpdate);
		}

		::System::Void HandleSetEvacuationData(::LDIBODLHCNK* evacuationData, ::System::Boolean isUpdate)
		{
			return ((::System::Void(*)(::PVOID, ::LDIBODLHCNK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_HANDLESETEVACUATIONDATA_OFFSET))(this, evacuationData, isUpdate);
		}

		::System::Void OnEvacuationDataUpdated(::LDIBODLHCNK* evacuationData)
		{
			return ((::System::Void(*)(::PVOID, ::LDIBODLHCNK*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONDATAUPDATED_OFFSET))(this, evacuationData);
		}

		::System::Void OnEvacuationStateChange(::LDIBODLHCNK* state)
		{
			return ((::System::Void(*)(::PVOID, ::LDIBODLHCNK*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVACUATIONSTATECHANGE_OFFSET))(this, state);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void NotifyEvacuationCancelOnEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_NOTIFYEVACUATIONCANCELONENTERBATTLE_OFFSET))(this);
		}

		::System::Void SendEvacuationCancelEvent(::LDIBODLHCNK* evacuationData, ::GNCKCBODEKO cancelType)
		{
			return ((::System::Void(*)(::PVOID, ::LDIBODLHCNK*, ::GNCKCBODEKO))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SENDEVACUATIONCANCELEVENT_OFFSET))(this, evacuationData, cancelType);
		}

		::System::Void FlushPendingEvacuationTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_FLUSHPENDINGEVACUATIONTIPS_OFFSET))(this);
		}

		::System::Void ProcessEvacuationTips(::LDIBODLHCNK* evacuationData)
		{
			return ((::System::Void(*)(::PVOID, ::LDIBODLHCNK*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_PROCESSEVACUATIONTIPS_OFFSET))(this, evacuationData);
		}

		static ::System::Int32 GetEvacuationTipsId(::MoleMole::Config::ZenkovEvacuationSystemTrait* trait, ::OOCEACEEEPN state)
		{
			return ((::System::Int32(*)(::MoleMole::Config::ZenkovEvacuationSystemTrait*, ::OOCEACEEEPN))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_GETEVACUATIONTIPSID_OFFSET))(trait, state);
		}

		::System::Void ShowEvacuationCountdownTips(::System::Int32 tipsId, ::System::String* showName, ::LDIBODLHCNK* evacuationData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::LDIBODLHCNK*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM_SHOWEVACUATIONCOUNTDOWNTIPS_OFFSET))(this, tipsId, showName, evacuationData);
		}

		::System::Void _HandleSetEvacuationData_b__8_0(::System::Collections::Generic::List_1<::System::UInt32>* list, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* suitDic)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM__HANDLESETEVACUATIONDATA_B__8_0_OFFSET))(this, list, suitDic);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVQUESTSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
