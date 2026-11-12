#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LimaoNews/LimaoNewsWorkProgressBaseViewModel.h"
namespace RPG::Client::LimaoNews { class LimaoNewsMessageService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkData; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartMessageViewModel; }
namespace RPG::Client::LimaoNews { class LimaoNewsWorkProgressStartViewModel; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_ADD_REQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0xDE49660)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xDE48E50)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xDE490F0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDE49540)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_EVENTPATH_OFFSET UNITYSDK_OFFSET(0xDE49780)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ISINFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xDE49620)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0xDE49760)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE49600)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xDE49720)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCONTINE_OFFSET UNITYSDK_OFFSET(0xDE49740)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xDE49640)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_REMOVE_REQUESTCLOSE_OFFSET UNITYSDK_OFFSET(0xDE496C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_EVENTPATH_OFFSET UNITYSDK_OFFSET(0xDE49790)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ISINFINISHSTATE_OFFSET UNITYSDK_OFFSET(0xDE49630)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEID_OFFSET UNITYSDK_OFFSET(0xDE49770)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xDE49610)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xDE49730)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCONTINE_OFFSET UNITYSDK_OFFSET(0xDE49750)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xDE49650)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xDE49160)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__ONMESSAGEFINISHED_OFFSET UNITYSDK_OFFSET(0xDE492C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__STARTEVENTLEVELGRAPH_OFFSET UNITYSDK_OFFSET(0xDE493B0)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkProgressStartViewModel_TypeDefinitionIndex = 83232;

	class LimaoNewsWorkProgressStartViewModel : public ::RPG::Client::LimaoNews::LimaoNewsWorkProgressBaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _OnBtnClose_k__BackingField; // 0x38
		::RPG::Client::LimaoNews::LimaoNewsMessageService* _MessageService; // 0x40
		::Sofa::Core::SimpleCommand* _OnBtnContine_k__BackingField; // 0x48
		::System::Action* RequestClose; // 0x50
		::System::String* _EventPath_k__BackingField; // 0x58
		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel* _MessageViewModel_k__BackingField; // 0x60
		::System::UInt32 _RewardCount_k__BackingField; // 0x68
		::System::UInt32 _MessageID_k__BackingField; // 0x6C
		::System::Boolean _IsInFinishState_k__BackingField; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel* Create(::RPG::Client::LimaoNews::LimaoNewsWorkData* a1, ::RPG::Client::LimaoNews::LimaoNewsMessageService* a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartViewModel*(*)(::RPG::Client::LimaoNews::LimaoNewsWorkData*, ::RPG::Client::LimaoNews::LimaoNewsMessageService*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnMessageFinished(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__ONMESSAGEFINISHED_OFFSET))(this, a1);
		}

		::System::Void _StartEventLevelGraph()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL__STARTEVENTLEVELGRAPH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel* get_MessageViewModel()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEVIEWMODEL_OFFSET))(this);
		}

		::System::Void set_MessageViewModel(::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsWorkProgressStartMessageViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEVIEWMODEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInFinishState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ISINFINISHSTATE_OFFSET))(this);
		}

		::System::Void set_IsInFinishState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ISINFINISHSTATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RewardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_REWARDCOUNT_OFFSET))(this);
		}

		::System::Void set_RewardCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_REWARDCOUNT_OFFSET))(this, a1);
		}

		::System::Void add_RequestClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_ADD_REQUESTCLOSE_OFFSET))(this, a1);
		}

		::System::Void remove_RequestClose(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_REMOVE_REQUESTCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnClose()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCLOSE_OFFSET))(this);
		}

		::System::Void set_OnBtnClose(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCLOSE_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_OnBtnContine()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_ONBTNCONTINE_OFFSET))(this);
		}

		::System::Void set_OnBtnContine(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_ONBTNCONTINE_OFFSET))(this, a1);
		}

		::System::UInt32 get_MessageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_MESSAGEID_OFFSET))(this);
		}

		::System::Void set_MessageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_MESSAGEID_OFFSET))(this, a1);
		}

		::System::String* get_EventPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_GET_EVENTPATH_OFFSET))(this);
		}

		::System::Void set_EventPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPROGRESSSTARTVIEWMODEL_SET_EVENTPATH_OFFSET))(this, a1);
		}

	};
}
