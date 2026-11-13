#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebateUIType.h"
#include "unitysdk/System/Object.h"
class BGDGNJBCMBE;
class KDJNAAOFMMJ;
class PIMIDMONKOA;
namespace RPG::Client { class TalkDebateCountInfo; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class DebateInitialize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEBATEMANAGER_CHECKFAIL_OFFSET UNITYSDK_OFFSET(0x1B7F9660)
#define RPG_CLIENT_DEBATEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B7F8C90)
#define RPG_CLIENT_DEBATEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7FA290)
#define RPG_CLIENT_DEBATEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7F8C30)
#define RPG_CLIENT_DEBATEMANAGER_GET_UITYPE_OFFSET UNITYSDK_OFFSET(0x1B7FA240)
#define RPG_CLIENT_DEBATEMANAGER_ISALLITEMSUBMITTED_OFFSET UNITYSDK_OFFSET(0x1B7F9850)
#define RPG_CLIENT_DEBATEMANAGER_RETURNTOTESTIMONY_OFFSET UNITYSDK_OFFSET(0x1B7F9770)
#define RPG_CLIENT_DEBATEMANAGER_STARTDEBATE_OFFSET UNITYSDK_OFFSET(0x1B7F8F30)
#define RPG_CLIENT_DEBATEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1B7F8B80)
#define RPG_CLIENT_DEBATEMANAGER_TRYMINUSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7F95D0)
#define RPG_CLIENT_DEBATEMANAGER__CHECKTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0x1B7F9FE0)
#define RPG_CLIENT_DEBATEMANAGER__ONASK_OFFSET UNITYSDK_OFFSET(0x1B7F9EB0)
#define RPG_CLIENT_DEBATEMANAGER__ONPROMISEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1B7FA140)
#define RPG_CLIENT_DEBATEMANAGER__ONSTARTTOASTEND_OFFSET UNITYSDK_OFFSET(0x1B7F9CD0)
#define RPG_CLIENT_DEBATEMANAGER__ONSUBMITITEM_OFFSET UNITYSDK_OFFSET(0x1B7F9F40)
#define RPG_CLIENT_DEBATEMANAGER__ONTALKDEBATEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0x1B7F9D30)
#define RPG_CLIENT_DEBATEMANAGER__PLAYDEBATE_OFFSET UNITYSDK_OFFSET(0x1B7F98E0)
#define RPG_CLIENT_DEBATEMANAGER__PROMISESHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0x1B7F9540)
#define RPG_CLIENT_DEBATEMANAGER__REGIST_OFFSET UNITYSDK_OFFSET(0x1B7F9170)
#define RPG_CLIENT_DEBATEMANAGER__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x1B7F9C70)
#define RPG_CLIENT_DEBATEMANAGER__RESOLVESHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0x1B7F9BE0)
#define RPG_CLIENT_DEBATEMANAGER__SETTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0x1B7F9230)
#define RPG_CLIENT_DEBATEMANAGER__SETUPCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7F9950)
#define RPG_CLIENT_DEBATEMANAGER__SHOWSTARTTOAST_OFFSET UNITYSDK_OFFSET(0x1B7F9A30)
#define RPG_CLIENT_DEBATEMANAGER__SHOWTESTIMONY_OFFSET UNITYSDK_OFFSET(0x1B7F97C0)
#define RPG_CLIENT_DEBATEMANAGER__SORTTESTIMONYGROUPS_OFFSET UNITYSDK_OFFSET(0x1B7FA0C0)
#define RPG_CLIENT_DEBATEMANAGER__UNREGIST_OFFSET UNITYSDK_OFFSET(0x1B7F8E70)

namespace RPG::Client
{
	inline static constexpr unsigned int DebateManager_TypeDefinitionIndex = 62068;

	class DebateManager : public ::System::Object
	{
	public:
		::KDJNAAOFMMJ* _StartToastExecuter; // 0x10
		::System::String* _FailStr; // 0x18
		::RPG::GameCore::TaskContext* _TaskContext; // 0x20
		::RPG::GameCore::DebateInitialize* _InitTaskConfig; // 0x28
		::RPG::Client::Promises::Promise* _StartToastPromise; // 0x30
		::System::Collections::Generic::List_1<::PIMIDMONKOA*>* _TestimonyGroups; // 0x38
		::BGDGNJBCMBE* _TestimonyTimelinePlayer; // 0x40
		::System::Action* _OnInitTaskEnd; // 0x48
		::RPG::Client::TalkDebateCountInfo* _TalkDebateCountInfo; // 0x50
		::System::Int32 _CurrentGroupIndex; // 0x58
		::System::Boolean _Running; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void StartDebate(::RPG::GameCore::DebateInitialize* a1, ::RPG::GameCore::TaskContext* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DebateInitialize*, ::RPG::GameCore::TaskContext*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_STARTDEBATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean TryMinusCount(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_TRYMINUSCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean CheckFail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_CHECKFAIL_OFFSET))(this);
		}

		::System::Void ReturnToTestimony()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_RETURNTOTESTIMONY_OFFSET))(this);
		}

		::System::Boolean IsAllItemSubmitted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_ISALLITEMSUBMITTED_OFFSET))(this);
		}

		::System::Void _PlayDebate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__PLAYDEBATE_OFFSET))(this);
		}

		::System::Void _SetupCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SETUPCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* _PromiseShowStartToast()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__PROMISESHOWSTARTTOAST_OFFSET))(this);
		}

		::System::Void _ResolveShowStartToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__RESOLVESHOWSTARTTOAST_OFFSET))(this);
		}

		::System::Void _ShowStartToast()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SHOWSTARTTOAST_OFFSET))(this);
		}

		::System::Void _OnStartToastEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONSTARTTOASTEND_OFFSET))(this);
		}

		::System::Void _Regist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__REGIST_OFFSET))(this);
		}

		::System::Void _Unregist()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__UNREGIST_OFFSET))(this);
		}

		::System::Void _OnTalkDebateButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONTALKDEBATEBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void _OnAsk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONASK_OFFSET))(this);
		}

		::System::Void _OnSubmitItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONSUBMITITEM_OFFSET))(this);
		}

		::System::Void _ShowTestimony()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SHOWTESTIMONY_OFFSET))(this);
		}

		::System::Void _SetTestimonyGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SETTESTIMONYGROUPS_OFFSET))(this);
		}

		::System::Int32 _SortTestimonyGroups(::PIMIDMONKOA* a1, ::PIMIDMONKOA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::PIMIDMONKOA*, ::PIMIDMONKOA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__SORTTESTIMONYGROUPS_OFFSET))(this, a1, a2);
		}

		::System::Void _CheckTestimonyGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__CHECKTESTIMONYGROUPS_OFFSET))(this);
		}

		::System::Void _ResolvePromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__RESOLVEPROMISE_OFFSET))(this, a1);
		}

		::System::Void _OnPromiseException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER__ONPROMISEEXCEPTION_OFFSET))(this, a1);
		}

		::RPG::GameCore::DebateUIType get_UIType()
		{
			return ((::RPG::GameCore::DebateUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEBATEMANAGER_GET_UITYPE_OFFSET))(this);
		}

	};
}
