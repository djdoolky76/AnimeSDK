#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKOPGDPKJHB.h"
#include "unitysdk/FKNKNLGMACL.h"
#include "unitysdk/GOECDMPJMCM.h"
#include "unitysdk/RPG/Client/ChatContactData.h"
#include "unitysdk/RPG/Client/ChatContactPam_ChatState.h"
#include "unitysdk/RPG/Client/ChatContactPam_Mode.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/RPG/Client/PamChatQuickFunctionType.h"
class AOHCPPHPOLK;
class ECPFGHMMBBK;
class FAIFDBLLGKK;
class HILNADIJDAJ;
namespace RPG::Client { class ChatContactPam; }
namespace RPG::Client { class ChatContactPam_SendBlockData; }
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class PamChatData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET UNITYSDK_OFFSET(0x1C074250)
#define RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C073380)
#define RPG_CLIENT_CHATCONTACTPAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C073260)
#define RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET UNITYSDK_OFFSET(0x1C0762B0)
#define RPG_CLIENT_CHATCONTACTPAM_GETLLMCHATROLETYPE_OFFSET UNITYSDK_OFFSET(0x1C073450)
#define RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET UNITYSDK_OFFSET(0x1C076190)
#define RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0x1C0734F0)
#define RPG_CLIENT_CHATCONTACTPAM_GET_CANVIEWHISTORY_OFFSET UNITYSDK_OFFSET(0x1D7ADC50)
#define RPG_CLIENT_CHATCONTACTPAM_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x1D7ADB70)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISLLMENABLED_OFFSET UNITYSDK_OFFSET(0x1C076230)
#define RPG_CLIENT_CHATCONTACTPAM_GET_ISWAITINGFORRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C076300)
#define RPG_CLIENT_CHATCONTACTPAM_LLMROLEIDTOMODE_OFFSET UNITYSDK_OFFSET(0x1C073400)
#define RPG_CLIENT_CHATCONTACTPAM_MARKHISTORYINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1C073710)
#define RPG_CLIENT_CHATCONTACTPAM_ONLLMCHATEVENT_OFFSET UNITYSDK_OFFSET(0x1C073ED0)
#define RPG_CLIENT_CHATCONTACTPAM_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1C073530)
#define RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET UNITYSDK_OFFSET(0x1C0741F0)
#define RPG_CLIENT_CHATCONTACTPAM_ONSENDMESSAGESUCCESS_OFFSET UNITYSDK_OFFSET(0x1C075F20)
#define RPG_CLIENT_CHATCONTACTPAM_ONSUGGESTIONSRECEIVED_OFFSET UNITYSDK_OFFSET(0x1C075C60)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET UNITYSDK_OFFSET(0x1C0754B0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTGREETING_OFFSET UNITYSDK_OFFSET(0x1C074390)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTHISTORY_OFFSET UNITYSDK_OFFSET(0x1C0751C0)
#define RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET UNITYSDK_OFFSET(0x1C075290)
#define RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET UNITYSDK_OFFSET(0x1C0736C0)
#define RPG_CLIENT_CHATCONTACTPAM_RESTORELATESTRESPONSE_OFFSET UNITYSDK_OFFSET(0x1C073750)
#define RPG_CLIENT_CHATCONTACTPAM_SENDFUNCTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C074BF0)
#define RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C074400)
#define RPG_CLIENT_CHATCONTACTPAM_SENDSUGGESTIONMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C074F00)
#define RPG_CLIENT_CHATCONTACTPAM_SENDTOUCHMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C074C90)
#define RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET UNITYSDK_OFFSET(0x1C075F70)
#define RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET UNITYSDK_OFFSET(0x1C0734A0)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDFAILEDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C075A70)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDFEEDBACKBLOCKTOLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C075B80)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C075DA0)
#define RPG_CLIENT_CHATCONTACTPAM__APPENDTYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C075670)
#define RPG_CLIENT_CHATCONTACTPAM__CLEARPREVIOUSSENDBLOCK_OFFSET UNITYSDK_OFFSET(0x1C073E80)
#define RPG_CLIENT_CHATCONTACTPAM__CLEARRESPONSEID_OFFSET UNITYSDK_OFFSET(0x1C0761D0)
#define RPG_CLIENT_CHATCONTACTPAM__DOSENDMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C074650)
#define RPG_CLIENT_CHATCONTACTPAM__HASPREVIOUSSENDBLOCK_OFFSET UNITYSDK_OFFSET(0x1C075E80)
#define RPG_CLIENT_CHATCONTACTPAM__ISRESPONSEUPTODATE_OFFSET UNITYSDK_OFFSET(0x1C073E00)
#define RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C076110)
#define RPG_CLIENT_CHATCONTACTPAM__ONCLEARMESSAGES_OFFSET UNITYSDK_OFFSET(0x1C074D40)
#define RPG_CLIENT_CHATCONTACTPAM__ONSYNCHISTORY_OFFSET UNITYSDK_OFFSET(0x1C074DF0)
#define RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET UNITYSDK_OFFSET(0x1C075320)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDCOMPLETEDRESPONSEID_OFFSET UNITYSDK_OFFSET(0x1C075ED0)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDLASTCOMPLETEDMESSAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1C074EA0)
#define RPG_CLIENT_CHATCONTACTPAM__RECORDSENDMESSAGEDATA_OFFSET UNITYSDK_OFFSET(0x1C074B50)
#define RPG_CLIENT_CHATCONTACTPAM__REMOVEINCOMPLETEMESSAGES_OFFSET UNITYSDK_OFFSET(0x1C073D80)
#define RPG_CLIENT_CHATCONTACTPAM__REMOVETYPINGMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C075710)
#define RPG_CLIENT_CHATCONTACTPAM__REQUESTGENERATESUGGESTIONS_OFFSET UNITYSDK_OFFSET(0x1C0759A0)
#define RPG_CLIENT_CHATCONTACTPAM__RESETALL_OFFSET UNITYSDK_OFFSET(0x1C0735C0)
#define RPG_CLIENT_CHATCONTACTPAM__RESETLASTCOMPLETEDMESSAGEINDEX_OFFSET UNITYSDK_OFFSET(0x1C074DA0)
#define RPG_CLIENT_CHATCONTACTPAM__RESETPAMTOUCHIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1C0745C0)
#define RPG_CLIENT_CHATCONTACTPAM__SENDPREVIOUSMESSAGE_OFFSET UNITYSDK_OFFSET(0x1C075450)
#define RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTHELPERGREETING_OFFSET UNITYSDK_OFFSET(0x1C074F60)
#define RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTQUESTIONERGREETING_OFFSET UNITYSDK_OFFSET(0x1C0750A0)
#define RPG_CLIENT_CHATCONTACTPAM__TRYRESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0x1C075790)
#define RPG_CLIENT_CHATCONTACTPAM__UPDATECHATQUESTPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C074570)
#define RPG_CLIENT_CHATCONTACTPAM__UPDATERESPONSEID_OFFSET UNITYSDK_OFFSET(0x1C075590)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatContactPam_TypeDefinitionIndex = 64653;

	class ChatContactPam : public ::RPG::Client::ChatContactData
	{
	public:
		::RPG::Client::PamChatData* _PamChat; // 0x28
		::System::String* _CurrentResponseID; // 0x30
		::RPG::Client::ChatContactPam_SendBlockData* _PreviousSendBlock; // 0x38
		::HILNADIJDAJ* _PamChatGreetingService; // 0x40
		::AOHCPPHPOLK* _ServerProxy; // 0x48
		::System::String* _CompletedResponseID; // 0x50
		::ECPFGHMMBBK* _FunctionCallService; // 0x58
		::System::Int32 _SyncedHistoryPage; // 0x60
		::RPG::Client::ChatContactPam_ChatState _ChatState; // 0x64
		::RPG::Client::ChatContactPam_Mode _PamMode; // 0x68
		::System::Int32 _LastCompletedMessageIndex; // 0x6C
		// static const ::System::Object _InitialHistoryPage; // 0x0
		::System::Void _ctor(::RPG::Client::ChatContactPam_Mode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChatContactPam* Create(::RPG::Client::PamChatData* a1, ::RPG::Client::ChatContactPam_Mode a2)
		{
			return ((::RPG::Client::ChatContactPam*(*)(::RPG::Client::PamChatData*, ::RPG::Client::ChatContactPam_Mode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::ChatContactPam_Mode LLMRoleIDToMode(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChatContactPam_Mode(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_LLMROLEIDTOMODE_OFFSET))(a1);
		}

		::FKNKNLGMACL GetLLMChatRoleType()
		{
			return ((::FKNKNLGMACL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETLLMCHATROLETYPE_OFFSET))(this);
		}

		::System::Void SetServerProxy(::AOHCPPHPOLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOHCPPHPOLK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETSERVERPROXY_OFFSET))(this, a1);
		}

		::AOHCPPHPOLK* GetServerProxy()
		{
			return ((::AOHCPPHPOLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETSERVERPROXY_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONRECONNECT_OFFSET))(this);
		}

		::System::Void MarkHistoryInitialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_MARKHISTORYINITIALIZED_OFFSET))(this);
		}

		::System::Void RestoreLatestResponse(::System::String* a1, ::System::Collections::Generic::IList_1<::FAIFDBLLGKK*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::IList_1<::FAIFDBLLGKK*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RESTORELATESTRESPONSE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetChatState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_RESETCHATSTATE_OFFSET))(this);
		}

		::System::Void OnResponseFailed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONRESPONSEFAILED_OFFSET))(this);
		}

		::System::Void CreateNewChat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_CREATENEWCHAT_OFFSET))(this);
		}

		::System::Void SendMessage(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void SendFunctionMessage(::RPG::Client::PamChatQuickFunctionType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PamChatQuickFunctionType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDFUNCTIONMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void SendTouchMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDTOUCHMESSAGE_OFFSET))(this);
		}

		::System::Void _OnClearMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ONCLEARMESSAGES_OFFSET))(this);
		}

		::System::Void _OnSyncHistory(::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChatMessageData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ONSYNCHISTORY_OFFSET))(this, a1, a2);
		}

		::System::Void SendSuggestionMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SENDSUGGESTIONMESSAGE_OFFSET))(this, a1);
		}

		::System::Void RequestGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTGREETING_OFFSET))(this);
		}

		::System::Void RequestHistory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTHISTORY_OFFSET))(this);
		}

		::System::Void RequestRegenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTREGENERATE_OFFSET))(this);
		}

		::System::Void RequestFeedback(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_REQUESTFEEDBACK_OFFSET))(this, a1, a2);
		}

		::System::Void OnLLMChatEvent(::FAIFDBLLGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAIFDBLLGKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONLLMCHATEVENT_OFFSET))(this, a1);
		}

		::System::Void OnSuggestionsReceived(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONSUGGESTIONSRECEIVED_OFFSET))(this, a1);
		}

		::System::Void OnSendMessageSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_ONSENDMESSAGESUCCESS_OFFSET))(this);
		}

		::System::Void SetFeedback(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_SETFEEDBACK_OFFSET))(this, a1, a2);
		}

		::System::String* GetResponseID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETRESPONSEID_OFFSET))(this);
		}

		::System::Void _TryRequestHelperGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTHELPERGREETING_OFFSET))(this);
		}

		::System::Void _TryRequestQuestionerGreeting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYREQUESTQUESTIONERGREETING_OFFSET))(this);
		}

		::System::Void _RequestGenerateSuggestions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REQUESTGENERATESUGGESTIONS_OFFSET))(this);
		}

		::System::Void _UpdateResponseID(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__UPDATERESPONSEID_OFFSET))(this, a1);
		}

		::System::Void _ResetAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETALL_OFFSET))(this);
		}

		::System::Boolean _IsResponseUpToDate(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__ISRESPONSEUPTODATE_OFFSET))(this, a1);
		}

		::System::Void _ClearResponseID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CLEARRESPONSEID_OFFSET))(this);
		}

		::System::Void _RecordCompletedResponseID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDCOMPLETEDRESPONSEID_OFFSET))(this);
		}

		::System::Void _RecordLastCompletedMessageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDLASTCOMPLETEDMESSAGEINDEX_OFFSET))(this);
		}

		::System::Void _ResetLastCompletedMessageIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETLASTCOMPLETEDMESSAGEINDEX_OFFSET))(this);
		}

		::System::Boolean _HasPreviousSendBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__HASPREVIOUSSENDBLOCK_OFFSET))(this);
		}

		::System::Void _ClearPreviousSendBlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__CLEARPREVIOUSSENDBLOCK_OFFSET))(this);
		}

		::System::Void _AppendTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDTYPINGMESSAGE_OFFSET))(this);
		}

		::System::Void _AppendSuggestionsToLastMessage(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDSUGGESTIONSTOLASTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _AppendFeedbackBlockToLastMessage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDFEEDBACKBLOCKTOLASTMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _AppendFailedMessage(::GOECDMPJMCM a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOECDMPJMCM))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__APPENDFAILEDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void _RemoveTypingMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REMOVETYPINGMESSAGE_OFFSET))(this);
		}

		::RPG::Client::ChatMessageData* _LastMessage()
		{
			return ((::RPG::Client::ChatMessageData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__LASTMESSAGE_OFFSET))(this);
		}

		::System::Void _RemoveIncompleteMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__REMOVEINCOMPLETEMESSAGES_OFFSET))(this);
		}

		::System::Void _RecallPamMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECALLPAMMESSAGES_OFFSET))(this);
		}

		::System::Void _ResetPamTouchIfNeeded(::RPG::Client::MessageContentBlock_BlockType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RESETPAMTOUCHIFNEEDED_OFFSET))(this, a1);
		}

		::System::Void _SendPreviousMessage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__SENDPREVIOUSMESSAGE_OFFSET))(this);
		}

		::System::Void _DoSendMessage(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__DOSENDMESSAGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RecordSendMessageData(::RPG::Client::MessageContentBlock_BlockType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock_BlockType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__RECORDSENDMESSAGEDATA_OFFSET))(this, a1, a2);
		}

		::System::Void _TryResponseFunctionCall(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__TRYRESPONSEFUNCTIONCALL_OFFSET))(this, a1);
		}

		::System::Void _UpdateChatQuestProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM__UPDATECHATQUESTPROGRESS_OFFSET))(this);
		}

		static ::DKOPGDPKJHB GetAiPamQuickFunctionType(::RPG::Client::PamChatQuickFunctionType a1)
		{
			return ((::DKOPGDPKJHB(*)(::RPG::Client::PamChatQuickFunctionType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GETAIPAMQUICKFUNCTIONTYPE_OFFSET))(a1);
		}

		::System::Boolean get_IsWaitingForResponse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_ISWAITINGFORRESPONSE_OFFSET))(this);
		}

		::System::Boolean get_IsLLMEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_ISLLMENABLED_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_HEADICON_OFFSET))(this);
		}

		::System::Boolean get_CanViewHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATCONTACTPAM_GET_CANVIEWHISTORY_OFFSET))(this);
		}

	};
}
