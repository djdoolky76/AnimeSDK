#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class LuaUIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x1D70ADE0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D70B170)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70A6E0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__DISABLED_OFFSET UNITYSDK_OFFSET(0x1D70A570)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1D70A600)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISSHOWING_OFFSET UNITYSDK_OFFSET(0x1D70A690)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D70AFC0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETCANSHOW_OFFSET UNITYSDK_OFFSET(0x1D70B270)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETDISABLED_OFFSET UNITYSDK_OFFSET(0x1D70B5C0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SET__DISABLED_OFFSET UNITYSDK_OFFSET(0x1D70A5B0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISRELEVANTPLAYTYPEBYSEASON_OFFSET UNITYSDK_OFFSET(0x1D70BA20)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISVALIDINVITATION_OFFSET UNITYSDK_OFFSET(0x1D70B630)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D70B8F0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET UNITYSDK_OFFSET(0x1D70B7A0)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET UNITYSDK_OFFSET(0x1D70B890)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYPLAYNEXT_OFFSET UNITYSDK_OFFSET(0x1D70B320)
#define RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET UNITYSDK_OFFSET(0x1D70B560)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2InviteToastService_TypeDefinitionIndex = 67970;

	class MatchThreeV2InviteToastService : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::RPG::Client::ChatMessageData*>* _PendingInvitations; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _ManuallySetCanShowOnFocus; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* _AutomaticallySetCanShowOnFocus; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* _StartReasonSet; // 0x28
		::RPG::Client::LuaUIController* _CurrentDialog; // 0x30
		::System::Boolean _CanShow; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CTOR_OFFSET))(this);
		}

		::System::Boolean get__Disabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__DISABLED_OFFSET))(this);
		}

		::System::Void set__Disabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SET__DISABLED_OFFSET))(this, a1);
		}

		::System::Boolean get__IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get__IsShowing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_GET__ISSHOWING_OFFSET))(this);
		}

		::System::Void Acquire(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_ACQUIRE_OFFSET))(this, a1);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Clear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_CLEAR_OFFSET))(this, a1);
		}

		::System::Void SetCanShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETCANSHOW_OFFSET))(this, a1);
		}

		::System::Void SetDisabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE_SETDISABLED_OFFSET))(this, a1);
		}

		::System::Void _TryPlayNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYPLAYNEXT_OFFSET))(this);
		}

		::System::Void _TryStopCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__TRYSTOPCURRENT_OFFSET))(this);
		}

		::System::Void _OnReceiveContact(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONRECEIVECONTACT_OFFSET))(this, a1);
		}

		::System::Void _OnToastDialogExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONTOASTDIALOGEXIT_OFFSET))(this);
		}

		::System::Void _OnFocusChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ONFOCUSCHANGED_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsValidInvitation(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISVALIDINVITATION_OFFSET))(a1);
		}

		static ::System::Boolean _IsRelevantPlayTypeBySeason(::FJPMJPEKLJL a1, ::FJPMJPEKLJL a2)
		{
			return ((::System::Boolean(*)(::FJPMJPEKLJL, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2INVITETOASTSERVICE__ISRELEVANTPLAYTYPEBYSEASON_OFFSET))(a1, a2);
		}

	};
}
