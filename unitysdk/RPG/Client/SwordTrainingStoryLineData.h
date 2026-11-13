#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class SwordTrainingStoryLineData; }
namespace RPG::Client { class SwordTrainingUnlockData; }
namespace RPG::GameCore { class SwordTrainingStoryLineRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C598260)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C598670)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C5986E0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x1C598E70)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ENDINGSTORYIDS_OFFSET UNITYSDK_OFFSET(0x1C598010)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1C599000)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C598720)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x1C598F60)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C598680)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKIMAGE_OFFSET UNITYSDK_OFFSET(0x1C598B30)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x1C598C70)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYHARDDESC_OFFSET UNITYSDK_OFFSET(0x1C5989B0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEDESC_OFFSET UNITYSDK_OFFSET(0x1C598DB0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEIMAGE_OFFSET UNITYSDK_OFFSET(0x1C598D10)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TALKSENTENCEID_OFFSET UNITYSDK_OFFSET(0x1C598BD0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C598A70)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_UNLOCKCONDITIONDESC_OFFSET UNITYSDK_OFFSET(0x1C598840)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SETFINISHED_OFFSET UNITYSDK_OFFSET(0x1C5979B0)
#define RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1C599010)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingStoryLineData_TypeDefinitionIndex = 63405;

	class SwordTrainingStoryLineData : public ::System::Object
	{
	public:
		::RPG::Client::SwordTrainingUnlockData* UnlockData; // 0x10
		::System::UInt32 StoryLineID; // 0x18
		::System::Boolean _IsTriggered_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingStoryLineData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::SwordTrainingStoryLineData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SetFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SETFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::RPG::Client::TextID get_UnlockConditionDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_UNLOCKCONDITIONDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryHardDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYHARDDESC_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingStoryLineRow* get_Row()
		{
			return ((::RPG::GameCore::SwordTrainingStoryLineRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_StartTalkImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_TalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_TALKSENTENCEID_OFFSET))(this);
		}

		::System::UInt32 get_StartTalkSentenceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STARTTALKSENTENCEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_EndingStoryIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ENDINGSTORYIDS_OFFSET))(this);
		}

		::System::String* get_StoryLineImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEIMAGE_OFFSET))(this);
		}

		::RPG::Client::TextID get_StoryLineDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_STORYLINEDESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_AVATARIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_REWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_GET_ISTRIGGERED_OFFSET))(this);
		}

		::System::Void set_IsTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGSTORYLINEDATA_SET_ISTRIGGERED_OFFSET))(this, a1);
		}

	};
}
