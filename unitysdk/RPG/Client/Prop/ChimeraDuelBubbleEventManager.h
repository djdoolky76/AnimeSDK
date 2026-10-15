#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelBubbleEventType.h"
#include "unitysdk/System/Object.h"
class FKFPFNBKMLD;
class MJGEAKHDCIM;
class PAKPEDEPHLE;
class PAPFEGILEEI;
namespace RPG::Client { class ChimeraDuelTalkData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleData; }
namespace RPG::Client::Prop { class ChimeraDuelBubbleEvent; }
namespace RPG::GameCore { class ChimeraDuelBubbleEventListener; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC4E5E0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC4C7C0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_POSTBUBBLEEVENT_OFFSET UNITYSDK_OFFSET(0xDC4CF20)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_REGISTERTALKDATA_OFFSET UNITYSDK_OFFSET(0xDC4C880)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_SHOWCUSTOMTALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xDC4E0C0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_UNREGISTERTALKDATA_OFFSET UNITYSDK_OFFSET(0xDC4CCE0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEBUBBLEDATA_OFFSET UNITYSDK_OFFSET(0xDC4DEE0)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xDC4E400)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTTYPEGETTER_OFFSET UNITYSDK_OFFSET(0xDC4E540)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xDC4DD30)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xDC4D370)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__MATCHLISTENEVENTS_OFFSET UNITYSDK_OFFSET(0xDC4E340)
#define RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__SELECTTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0xDC4D670)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventManager_TypeDefinitionIndex = 78273;

	class ChimeraDuelBubbleEventManager : public ::System::Object
	{
	public:
		static ::PAKPEDEPHLE** StaticGet__EventMatcher()
		{
			return (::PAKPEDEPHLE**)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelBubbleEventManager")->GetStaticField(0x36AA0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::MJGEAKHDCIM*>** StaticGet__EventHandlerCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::MJGEAKHDCIM*>**)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelBubbleEventManager")->GetStaticField(0x36AA8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>*>** StaticGet__EventTalkData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>*>**)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelBubbleEventManager")->GetStaticField(0x36AB0);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>*>** StaticGet__EventCommonTalkData()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>*>**)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelBubbleEventManager")->GetStaticField(0x36AB8);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::PAPFEGILEEI*>** StaticGet__EventTypeGetterCaches()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelBubbleEventType, ::PAPFEGILEEI*>**)UnitySDK::FromName("RPG.Client.Prop", "ChimeraDuelBubbleEventManager")->GetStaticField(0x36AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_DISPOSE_OFFSET))();
		}

		static ::System::Void RegisterTalkData(::RPG::GameCore::ChimeraDuelBubbleEventListener* a1, ::RPG::Client::ChimeraDuelTalkData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelBubbleEventListener*, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_REGISTERTALKDATA_OFFSET))(a1, a2);
		}

		static ::System::Void UnregisterTalkData(::RPG::GameCore::ChimeraDuelBubbleEventType a1, ::RPG::Client::ChimeraDuelTalkData* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelBubbleEventType, ::RPG::Client::ChimeraDuelTalkData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_UNREGISTERTALKDATA_OFFSET))(a1, a2);
		}

		static ::System::Void PostBubbleEvent(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_POSTBUBBLEEVENT_OFFSET))(a1);
		}

		static ::System::Void ShowCustomTalkBubble(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER_SHOWCUSTOMTALKBUBBLE_OFFSET))(a1, a2, a3);
		}

		static ::FKFPFNBKMLD* _SelectTriggerEvent(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>* a2)
		{
			return ((::FKFPFNBKMLD*(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__SELECTTRIGGEREVENT_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::IEnumerable_1<::FKFPFNBKMLD*>* _MatchListenEvents(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FKFPFNBKMLD*>*(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*, ::System::Collections::Generic::List_1<::FKFPFNBKMLD*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__MATCHLISTENEVENTS_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Prop::ChimeraDuelBubbleData* _CreateBubbleData(::RPG::Client::ChimeraDuelTalkData* a1, ::RPG::Client::Prop::ChimeraDuelBubbleEvent* a2)
		{
			return ((::RPG::Client::Prop::ChimeraDuelBubbleData*(*)(::RPG::Client::ChimeraDuelTalkData*, ::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEBUBBLEDATA_OFFSET))(a1, a2);
		}

		static ::MJGEAKHDCIM* _GetEventHandler(::RPG::GameCore::ChimeraDuelBubbleEventType a1)
		{
			return ((::MJGEAKHDCIM*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTHANDLER_OFFSET))(a1);
		}

		static ::MJGEAKHDCIM* _CreateEventHandler(::RPG::GameCore::ChimeraDuelBubbleEventType a1)
		{
			return ((::MJGEAKHDCIM*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTHANDLER_OFFSET))(a1);
		}

		static ::RPG::GameCore::ChimeraDuelBubbleEventType _GetEventType(::RPG::Client::Prop::ChimeraDuelBubbleEvent* a1)
		{
			return ((::RPG::GameCore::ChimeraDuelBubbleEventType(*)(::RPG::Client::Prop::ChimeraDuelBubbleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__GETEVENTTYPE_OFFSET))(a1);
		}

		static ::PAPFEGILEEI* _CreateEventTypeGetter(::RPG::GameCore::ChimeraDuelBubbleEventType a1)
		{
			return ((::PAPFEGILEEI*(*)(::RPG::GameCore::ChimeraDuelBubbleEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELBUBBLEEVENTMANAGER__CREATEEVENTTYPEGETTER_OFFSET))(a1);
		}

	};
}
