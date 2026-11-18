#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDPFDGLCPKB.h"
#include "unitysdk/MIHHPIABODE.h"
#include "unitysdk/NDGIBPHNGBH.h"
#include "unitysdk/NIIMOFIKEFK.h"
#include "unitysdk/KPNEKBLDEOK.h"

class ABCONMBPJHP;
class ANJODMGKGLK;
class EEGGIHELJPH;
class ENGKPGFGGLM;
class FLBAPBMDLHJ;
class GEDAIKEIKMO;
namespace MoleMole { class GroupChallengeSubsystem_CustomConditionCallback; }
namespace MoleMole { class GroupChallengeSubsystem_LevelConditionCallback; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDGROUPCHALLENGEENDCSREQ_OFFSET UNITYSDK_OFFSET(0x13580150)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERFLOORCHALLENGEINFOCSNOTIFY_OFFSET UNITYSDK_OFFSET(0x1357F030)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERGROUPCHALLENGEINFOCSNOTIFY_OFFSET UNITYSDK_OFFSET(0x1357F440)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CANCELGROUPCHALLENGEBYID_OFFSET UNITYSDK_OFFSET(0x13582100)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_FINISHGROUPCHALLENGEBYID_OFFSET UNITYSDK_OFFSET(0x13582300)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_HANDLEEVTLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x13580FA0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_MAPPINGFLAGSTOREPORTREASON_OFFSET UNITYSDK_OFFSET(0x13580020)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEBEGIN_OFFSET UNITYSDK_OFFSET(0x13580380)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGECANCEL_OFFSET UNITYSDK_OFFSET(0x1357FFA0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEEND_OFFSET UNITYSDK_OFFSET(0x1357F8F0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x1357F860)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEPROGRESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1357ED10)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13581460)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x13580F30)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13581640)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERCUSTOMCHALLENGECONDITION_OFFSET UNITYSDK_OFFSET(0x13580500)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13580AA0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERGROUPCHALLENGE_OFFSET UNITYSDK_OFFSET(0x13581CD0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x135810D0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRIGGERCUSTOMCHALLENGECONDITION_OFFSET UNITYSDK_OFFSET(0x13580930)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_1_OFFSET UNITYSDK_OFFSET(0x13581BC0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_2_OFFSET UNITYSDK_OFFSET(0x13582410)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_3_OFFSET UNITYSDK_OFFSET(0x13581FF0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_OFFSET UNITYSDK_OFFSET(0x13581AE0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERCUSTOMCHALLENGECONDITION_OFFSET UNITYSDK_OFFSET(0x13580730)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13580D50)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERLEVELCONDITION_OFFSET UNITYSDK_OFFSET(0x135812B0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13582510)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13582670)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x13582700)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13582790)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x13582820)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x135828B0)

namespace MoleMole
{
	inline static constexpr unsigned int GroupChallengeSubsystem_TypeDefinitionIndex = 64113;

	class GroupChallengeSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::FLBAPBMDLHJ*>* _challengeRecords; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _levelConditionCallbackMap; // 0x18
		::System::Collections::Generic::Dictionary_2<::NIIMOFIKEFK, ::System::Object*>* _callbackMap; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnChallengeProgressChanged(::FLBAPBMDLHJ* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEPROGRESSCHANGED_OFFSET))(this, challenge);
		}

		::System::Void OnChallengeFinish(::FLBAPBMDLHJ* challenge, ::System::Boolean result, ::DDPFDGLCPKB flags, ::NDGIBPHNGBH reason)
		{
			return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*, ::System::Boolean, ::DDPFDGLCPKB, ::NDGIBPHNGBH))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEFINISH_OFFSET))(this, challenge, result, flags, reason);
		}

		::System::Void OnChallengeCancel(::FLBAPBMDLHJ* challenge, ::DDPFDGLCPKB flags, ::NDGIBPHNGBH reason)
		{
			return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*, ::DDPFDGLCPKB, ::NDGIBPHNGBH))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGECANCEL_OFFSET))(this, challenge, flags, reason);
		}

		::System::Void OnChallengeEnd(::FLBAPBMDLHJ* challenge, ::System::Boolean isSuccess, ::DDPFDGLCPKB endFlag, ::NDGIBPHNGBH reason)
		{
			return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*, ::System::Boolean, ::DDPFDGLCPKB, ::NDGIBPHNGBH))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEEND_OFFSET))(this, challenge, isSuccess, endFlag, reason);
		}

		::System::Void OnChallengeBegin(::FLBAPBMDLHJ* challenge)
		{
			return ((::System::Void(*)(::PVOID, ::FLBAPBMDLHJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONCHALLENGEBEGIN_OFFSET))(this, challenge);
		}

		::EEGGIHELJPH* BuildMultiPlayerGroupChallengeInfoCsNotify(::FLBAPBMDLHJ* challenge, ::MIHHPIABODE state)
		{
			return ((::EEGGIHELJPH*(*)(::PVOID, ::FLBAPBMDLHJ*, ::MIHHPIABODE))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERGROUPCHALLENGEINFOCSNOTIFY_OFFSET))(this, challenge, state);
		}

		::GEDAIKEIKMO* BuildMultiPlayerFloorChallengeInfoCsNotify(::FLBAPBMDLHJ* challenge, ::MIHHPIABODE state)
		{
			return ((::GEDAIKEIKMO*(*)(::PVOID, ::FLBAPBMDLHJ*, ::MIHHPIABODE))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDMULTIPLAYERFLOORCHALLENGEINFOCSNOTIFY_OFFSET))(this, challenge, state);
		}

		::NDGIBPHNGBH MappingFlagsToReportReason(::DDPFDGLCPKB flags, ::NDGIBPHNGBH overrideReason)
		{
			return ((::NDGIBPHNGBH(*)(::PVOID, ::DDPFDGLCPKB, ::NDGIBPHNGBH))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_MAPPINGFLAGSTOREPORTREASON_OFFSET))(this, flags, overrideReason);
		}

		::ANJODMGKGLK* BuildGroupChallengeEndCsReq(::FLBAPBMDLHJ* challenge, ::System::Boolean isSuccess, ::NDGIBPHNGBH endReportReason)
		{
			return ((::ANJODMGKGLK*(*)(::PVOID, ::FLBAPBMDLHJ*, ::System::Boolean, ::NDGIBPHNGBH))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_BUILDGROUPCHALLENGEENDCSREQ_OFFSET))(this, challenge, isSuccess, endReportReason);
		}

		::System::Void RegisterCustomChallengeCondition(::System::UInt32 groupID, ::System::Int32 conditionID, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERCUSTOMCHALLENGECONDITION_OFFSET))(this, groupID, conditionID, triggerCallback);
		}

		::System::Void UnregisterCustomChallengeCondition(::System::UInt32 groupID, ::System::Int32 conditionID, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_CustomConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERCUSTOMCHALLENGECONDITION_OFFSET))(this, groupID, conditionID, triggerCallback);
		}

		::System::Void TriggerCustomChallengeCondition(::System::UInt32 groupID, ::System::Int32 conditionID, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRIGGERCUSTOMCHALLENGECONDITION_OFFSET))(this, groupID, conditionID, count);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void RegisterLevelCondition(::System::Int32 levelConditionID, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERLEVELCONDITION_OFFSET))(this, levelConditionID, triggerCallback);
		}

		::System::Void UnregisterLevelCondition(::System::Int32 levelConditionID, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback* triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GroupChallengeSubsystem_LevelConditionCallback*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_UNREGISTERLEVELCONDITION_OFFSET))(this, levelConditionID, triggerCallback);
		}

		::System::Void HandleEvtLevelCondition(::ENGKPGFGGLM* evt)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_HANDLEEVTLEVELCONDITION_OFFSET))(this, evt);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean TryGetGroupChallengeRecord(::System::UInt32 groupID, ::FLBAPBMDLHJ*& challengeRecord, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::FLBAPBMDLHJ*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_OFFSET))(this, groupID, challengeRecord, index);
		}

		::System::Boolean TryGetGroupChallengeRecord_1(::System::UInt32 groupID, ::System::Int32 challengeID, ::FLBAPBMDLHJ*& challengeRecord, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::FLBAPBMDLHJ*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_1_OFFSET))(this, groupID, challengeID, challengeRecord, index);
		}

		::System::Void RegisterGroupChallenge(::System::UInt32 groupID, ::System::Int32 challengeID, ::ABCONMBPJHP* buildContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::ABCONMBPJHP*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_REGISTERGROUPCHALLENGE_OFFSET))(this, groupID, challengeID, buildContext);
		}

		::System::Void CancelGroupChallengeByID(::System::UInt32 groupID, ::System::Int32 challengeID, ::DDPFDGLCPKB flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::DDPFDGLCPKB))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CANCELGROUPCHALLENGEBYID_OFFSET))(this, groupID, challengeID, flags);
		}

		::System::Void FinishGroupChallengeByID(::System::UInt32 groupID, ::System::Int32 challengeID, ::System::Boolean isSuccess, ::DDPFDGLCPKB flags, ::NDGIBPHNGBH reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean, ::DDPFDGLCPKB, ::NDGIBPHNGBH))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_FINISHGROUPCHALLENGEBYID_OFFSET))(this, groupID, challengeID, isSuccess, flags, reason);
		}

		::System::Boolean TryGetGroupChallengeRecord_2(::System::UInt32 groupID, ::KPNEKBLDEOK& challengeHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::KPNEKBLDEOK&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_2_OFFSET))(this, groupID, challengeHandle);
		}

		::System::Boolean TryGetGroupChallengeRecord_3(::System::UInt32 groupID, ::System::Int32 challengeID, ::KPNEKBLDEOK& challengeHandle)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::KPNEKBLDEOK&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_TRYGETGROUPCHALLENGERECORD_3_OFFSET))(this, groupID, challengeID, challengeHandle);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::ENGKPGFGGLM* P0)
		{
			return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
