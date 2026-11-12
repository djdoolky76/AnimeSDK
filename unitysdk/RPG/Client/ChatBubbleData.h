#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ChatBubbleRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHATBUBBLEDATA_ADDUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD33D450)
#define RPG_CLIENT_CHATBUBBLEDATA_CCTOR_OFFSET UNITYSDK_OFFSET(0xD33DE00)
#define RPG_CLIENT_CHATBUBBLEDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xD33D7E0)
#define RPG_CLIENT_CHATBUBBLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD33DD80)
#define RPG_CLIENT_CHATBUBBLEDATA_GETDISPLAYCHATBUBBLES_OFFSET UNITYSDK_OFFSET(0xD33D860)
#define RPG_CLIENT_CHATBUBBLEDATA_GET_CURRENTBUBBLEID_OFFSET UNITYSDK_OFFSET(0xD33DD60)
#define RPG_CLIENT_CHATBUBBLEDATA_GET_UNLOCKEDBUBBLEIDS_OFFSET UNITYSDK_OFFSET(0xD33DD40)
#define RPG_CLIENT_CHATBUBBLEDATA_SET_CURRENTBUBBLEID_OFFSET UNITYSDK_OFFSET(0xD33DD70)
#define RPG_CLIENT_CHATBUBBLEDATA_SET_UNLOCKEDBUBBLEIDS_OFFSET UNITYSDK_OFFSET(0xD33DD50)
#define RPG_CLIENT_CHATBUBBLEDATA_SYNCCURRENT_OFFSET UNITYSDK_OFFSET(0xD33D6E0)
#define RPG_CLIENT_CHATBUBBLEDATA_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xD33CE40)
#define RPG_CLIENT_CHATBUBBLEDATA__CANDISPLAY_OFFSET UNITYSDK_OFFSET(0xD33DC50)
#define RPG_CLIENT_CHATBUBBLEDATA__NOTIFYTUTORIAL_OFFSET UNITYSDK_OFFSET(0xD33D660)

namespace RPG::Client
{
	inline static constexpr unsigned int ChatBubbleData_TypeDefinitionIndex = 68383;

	class ChatBubbleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockedBubbleIDs_k__BackingField; // 0x10
		::System::UInt32 _CurrentBubbleID_k__BackingField; // 0x18
		static ::System::UInt32* StaticGet_DefaultBubbleID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ChatBubbleData")->GetStaticField(0x6B50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_CCTOR_OFFSET))();
		}

		::System::Void SyncUnlocked(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SYNCUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void AddUnlocked(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_ADDUNLOCKED_OFFSET))(this, a1);
		}

		::System::Void SyncCurrent(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SYNCCURRENT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_CLEAR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetDisplayChatBubbles()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_GETDISPLAYCHATBUBBLES_OFFSET))(this);
		}

		::System::Void _NotifyTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA__NOTIFYTUTORIAL_OFFSET))(this);
		}

		::System::Boolean _CanDisplay(::RPG::GameCore::ChatBubbleRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChatBubbleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA__CANDISPLAY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_UnlockedBubbleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_GET_UNLOCKEDBUBBLEIDS_OFFSET))(this);
		}

		::System::Void set_UnlockedBubbleIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SET_UNLOCKEDBUBBLEIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentBubbleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_GET_CURRENTBUBBLEID_OFFSET))(this);
		}

		::System::Void set_CurrentBubbleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHATBUBBLEDATA_SET_CURRENTBUBBLEID_OFFSET))(this, a1);
		}

	};
}
