#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class IHENDFLIFNJ;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FateAreaDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEAREADATAITEM_CREATEBYID_OFFSET UNITYSDK_OFFSET(0xD840BC0)
#define RPG_CLIENT_FATEAREADATAITEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD840BB0)
#define RPG_CLIENT_FATEAREADATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xD840B90)
#define RPG_CLIENT_FATEAREADATAITEM_GETMAXSCORE_OFFSET UNITYSDK_OFFSET(0xD840C10)
#define RPG_CLIENT_FATEAREADATAITEM_GETMINSCORE_OFFSET UNITYSDK_OFFSET(0xD841010)
#define RPG_CLIENT_FATEAREADATAITEM_GETSCORERULETEXT_OFFSET UNITYSDK_OFFSET(0xD8413B0)
#define RPG_CLIENT_FATEAREADATAITEM_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0xD841530)
#define RPG_CLIENT_FATEAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0xD841760)
#define RPG_CLIENT_FATEAREADATAITEM_GET_AREATYPE_OFFSET UNITYSDK_OFFSET(0xD841780)
#define RPG_CLIENT_FATEAREADATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xD8418E0)
#define RPG_CLIENT_FATEAREADATAITEM_GET_FIRSTPASSREWARD_OFFSET UNITYSDK_OFFSET(0xD841A60)
#define RPG_CLIENT_FATEAREADATAITEM_GET_HINT_OFFSET UNITYSDK_OFFSET(0xD8419A0)
#define RPG_CLIENT_FATEAREADATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD841820)
#define RPG_CLIENT_FATEAREADATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xD840FB0)
#define RPG_CLIENT_FATEAREADATAITEM_SET_AREAID_OFFSET UNITYSDK_OFFSET(0xD841770)

namespace RPG::Client
{
	inline static constexpr unsigned int FateAreaDataItem_TypeDefinitionIndex = 65431;

	class FateAreaDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _AreaID_k__BackingField; // 0x10
		::System::Void _ctor(::IHENDFLIFNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHENDFLIFNJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateAreaDataItem* CreateByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateAreaDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_CREATEBYID_OFFSET))(a1);
		}

		::System::UInt32 GetMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETMAXSCORE_OFFSET))(this);
		}

		::System::UInt32 GetMinScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETMINSCORE_OFFSET))(this);
		}

		::System::String* GetScoreRuleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETSCORERULETEXT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_SET_AREAID_OFFSET))(this, a1);
		}

		::RPG::GameCore::FateAreaType get_AreaType()
		{
			return ((::RPG::GameCore::FateAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_AREATYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_Hint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_HINT_OFFSET))(this);
		}

		::System::UInt32 get_FirstPassReward()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET_FIRSTPASSREWARD_OFFSET))(this);
		}

		::IHENDFLIFNJ* get__Row()
		{
			return ((::IHENDFLIFNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEAREADATAITEM_GET__ROW_OFFSET))(this);
		}

	};
}
