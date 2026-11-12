#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/CakeCatchBubbleType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class ACPGJEEJBPB;
class AGMKEJJJGFM;
class ALEAKDBNMKC;
namespace RPG::Client { class CakeCatchBubbleManager; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD242EF0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD242E50)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_INTERRUPTALL_OFFSET UNITYSDK_OFFSET(0xD2431B0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_PLAYDIALOGUEGROUP_OFFSET UNITYSDK_OFFSET(0xD243130)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER_SHOWCAKEIDENTITYBUBBLE_OFFSET UNITYSDK_OFFSET(0xD243D20)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__BUILDPENDINGQUEUE_OFFSET UNITYSDK_OFFSET(0xD243330)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__GETDEFAULTBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0xD243BF0)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__ONBUBBLECOMPLETE_OFFSET UNITYSDK_OFFSET(0xD243520)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__PLAYNEXTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xD243460)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__RESOLVEBUBBLEOFFSET_OFFSET UNITYSDK_OFFSET(0xD243950)
#define RPG_CLIENT_CAKECATCHBUBBLEMANAGER__SHOWCAKEDIALOGUEBUBBLE_OFFSET UNITYSDK_OFFSET(0xD243570)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchBubbleManager_TypeDefinitionIndex = 64403;

	class CakeCatchBubbleManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::ACPGJEEJBPB*>* _PendingQueue; // 0x10
		::System::Action* _OnDialogueGroupEnd; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeBubbleOffset>* _SlotOffsetDict; // 0x20
		::System::Int32 _CurrentRuntimeID; // 0x28
		::System::Boolean _IsPlayingDialogue; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 _BubbleTimerID; // 0x30
		static ::RPG::Client::CakeCatchBubbleManager** StaticGet__instance()
		{
			return (::RPG::Client::CakeCatchBubbleManager**)UnitySDK::FromName("RPG.Client", "CakeCatchBubbleManager")->GetStaticField(0x5A0A0);
		}

		// static const ::System::Object _INVALID_RUNTIME_ID; // 0x0
		// static const ::System::Object _INVALID_BUBBLE_TIMER_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeCatchBubbleManager* get_Instance()
		{
			return ((::RPG::Client::CakeCatchBubbleManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void PlayDialogueGroup(::AGMKEJJJGFM* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AGMKEJJJGFM*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_PLAYDIALOGUEGROUP_OFFSET))(this, a1, a2);
		}

		::System::Void InterruptAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_INTERRUPTALL_OFFSET))(this);
		}

		::System::Void _BuildPendingQueue(::System::Collections::Generic::List_1<::ACPGJEEJBPB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ACPGJEEJBPB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__BUILDPENDINGQUEUE_OFFSET))(this, a1);
		}

		::System::Void _OnBubbleComplete()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__ONBUBBLECOMPLETE_OFFSET))(this);
		}

		::System::Void _PlayNextDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__PLAYNEXTDIALOGUE_OFFSET))(this);
		}

		::System::Void _ShowCakeDialogueBubble(::ACPGJEEJBPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACPGJEEJBPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__SHOWCAKEDIALOGUEBUBBLE_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType> _ResolveBubbleOffset(::ALEAKDBNMKC* a1)
		{
			return ((::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType>(*)(::PVOID, ::ALEAKDBNMKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__RESOLVEBUBBLEOFFSET_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType> _GetDefaultBubbleOffset()
		{
			return ((::System::ValueTuple_2<::RPG::Client::CakeBubbleOffset, ::RPG::Client::CakeCatchBubbleType>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER__GETDEFAULTBUBBLEOFFSET_OFFSET))(this);
		}

		::System::Void ShowCakeIdentityBubble(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLEMANAGER_SHOWCAKEIDENTITYBUBBLE_OFFSET))(this, a1, a2, a3);
		}

	};
}
