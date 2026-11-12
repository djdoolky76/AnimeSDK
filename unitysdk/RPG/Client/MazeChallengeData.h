#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNKPLOGICFO;
namespace RPG::Client { class MazeChallengeSystem; }
namespace RPG::GameCore { class MazePuzzleChallengeRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAZECHALLENGEDATA_ADDFINPARMRLISTSUCC_OFFSET UNITYSDK_OFFSET(0xE034350)
#define RPG_CLIENT_MAZECHALLENGEDATA_ATTACHQUEST_OFFSET UNITYSDK_OFFSET(0xE033A90)
#define RPG_CLIENT_MAZECHALLENGEDATA_CHANGEREMAINSTEP_OFFSET UNITYSDK_OFFSET(0xE034230)
#define RPG_CLIENT_MAZECHALLENGEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE0334C0)
#define RPG_CLIENT_MAZECHALLENGEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE033EB0)
#define RPG_CLIENT_MAZECHALLENGEDATA_GETTIMEREMAINING_OFFSET UNITYSDK_OFFSET(0xE034140)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_CHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0xE034BF0)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMCNT_OFFSET UNITYSDK_OFFSET(0xE034C10)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMTOTAL_OFFSET UNITYSDK_OFFSET(0xE034C20)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_ISFAIL_OFFSET UNITYSDK_OFFSET(0xE034C00)
#define RPG_CLIENT_MAZECHALLENGEDATA_GET_REMAININGSTEP_OFFSET UNITYSDK_OFFSET(0xE034C30)
#define RPG_CLIENT_MAZECHALLENGEDATA_RESET_OFFSET UNITYSDK_OFFSET(0xE033640)
#define RPG_CLIENT_MAZECHALLENGEDATA_SETFINPARMRLISTSUCC_OFFSET UNITYSDK_OFFSET(0xE034610)
#define RPG_CLIENT_MAZECHALLENGEDATA_SETPREPAREFINISH_OFFSET UNITYSDK_OFFSET(0xE0346B0)
#define RPG_CLIENT_MAZECHALLENGEDATA_TICK_OFFSET UNITYSDK_OFFSET(0xE0341A0)
#define RPG_CLIENT_MAZECHALLENGEDATA__ISALLFINPARAMFINISH_OFFSET UNITYSDK_OFFSET(0xE0343F0)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONFAIL_OFFSET UNITYSDK_OFFSET(0xE0342E0)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONFINISH_OFFSET UNITYSDK_OFFSET(0xE034510)
#define RPG_CLIENT_MAZECHALLENGEDATA__ONQUESTUPDATE_OFFSET UNITYSDK_OFFSET(0xE033DA0)
#define RPG_CLIENT_MAZECHALLENGEDATA__PREPARETIMEUPACTION_OFFSET UNITYSDK_OFFSET(0xE0348B0)
#define RPG_CLIENT_MAZECHALLENGEDATA__TIMEUPACTION_OFFSET UNITYSDK_OFFSET(0xE034830)
#define RPG_CLIENT_MAZECHALLENGEDATA__UPDATEATTACHQUEST_OFFSET UNITYSDK_OFFSET(0xE033B50)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeChallengeData_TypeDefinitionIndex = 62282;

	class MazeChallengeData : public ::System::Object
	{
	public:
		::KNKPLOGICFO* _PrepareTimer; // 0x10
		::KNKPLOGICFO* _NowTimer; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* _FinParamTotal; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* _FinParamCnt; // 0x28
		::KNKPLOGICFO* _LimitTimer; // 0x30
		::RPG::Client::MazeChallengeSystem* _Owner; // 0x38
		::RPG::GameCore::MazePuzzleChallengeRow* _ChallengeData; // 0x40
		::System::Single _LimitTime; // 0x48
		::System::Int32 _RemainStep; // 0x4C
		::System::UInt32 _AttachQuestID; // 0x50
		::System::UInt32 _ScreenBlockHandler; // 0x54
		::System::Boolean _IsFail; // 0x58
		::System::Boolean IsPrepareFinish; // 0x59
		::System::Boolean _IsPreparing; // 0x5A
		::System::Void _ctor(::RPG::Client::MazeChallengeSystem* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MazeChallengeSystem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AttachQuest(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_ATTACHQUEST_OFFSET))(this, a1);
		}

		::System::Void _UpdateAttachQuest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__UPDATEATTACHQUEST_OFFSET))(this);
		}

		::System::Void _OnQuestUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ONQUESTUPDATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Single GetTimeRemaining()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GETTIMEREMAINING_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_TICK_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_RESET_OFFSET))(this);
		}

		::System::Void ChangeRemainStep(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_CHANGEREMAINSTEP_OFFSET))(this, a1);
		}

		::System::Void AddFinParmrListSucc(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_ADDFINPARMRLISTSUCC_OFFSET))(this, a1, a2);
		}

		::System::Void SetFinParmrListSucc(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_SETFINPARMRLISTSUCC_OFFSET))(this, a1, a2);
		}

		::System::Void SetPrepareFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_SETPREPAREFINISH_OFFSET))(this);
		}

		::System::Void _TimeUpAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__TIMEUPACTION_OFFSET))(this);
		}

		::System::Void _PrepareTimeUpAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__PREPARETIMEUPACTION_OFFSET))(this);
		}

		::System::Void _OnFail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ONFAIL_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ONFINISH_OFFSET))(this);
		}

		::System::Boolean _IsAllFinParamFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA__ISALLFINPARAMFINISH_OFFSET))(this);
		}

		::RPG::GameCore::MazePuzzleChallengeRow* get_ChallengeData()
		{
			return ((::RPG::GameCore::MazePuzzleChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_CHALLENGEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsFail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_ISFAIL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_FinParamCnt()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMCNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_FinParamTotal()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_FINPARAMTOTAL_OFFSET))(this);
		}

		::System::Int32 get_RemainingStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZECHALLENGEDATA_GET_REMAININGSTEP_OFFSET))(this);
		}

	};
}
