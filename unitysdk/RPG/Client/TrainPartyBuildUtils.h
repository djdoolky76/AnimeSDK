#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class OIIPJFDNPAH;
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFOBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x1CE45E70)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0x1CE45E00)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CANCELPREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0x1CE45D70)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CREATEFAKESLOTIDTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0x1CE45EB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETAVATARPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0x1CE46770)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETLIGHTCONEPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0x1CE46F00)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETPHOTOWORLDDATALIST_OFFSET UNITYSDK_OFFSET(0x1CE464B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGESUBAREAID_OFFSET UNITYSDK_OFFSET(0x1CE48070)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID_OFFSET UNITYSDK_OFFSET(0x1CE477B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_TAG_OFFSET UNITYSDK_OFFSET(0x1CE45620)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_AREA_ID_OFFSET UNITYSDK_OFFSET(0x1CE476E0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0x1CE47DC0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0x1CE47B70)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_HOVER_MATERIAL_PATH_OFFSET UNITYSDK_OFFSET(0x1CE47AB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_GOTO_ID_OFFSET UNITYSDK_OFFSET(0x1CE479B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_UNLOCK_ID_OFFSET UNITYSDK_OFFSET(0x1CE478B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_OUTLINE_ROOT_PATH_OFFSET UNITYSDK_OFFSET(0x1CE48010)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_AVATAR_TAG_OFFSET UNITYSDK_OFFSET(0x1CE45A40)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_LIGHT_CONE_TAG_OFFSET UNITYSDK_OFFSET(0x1CE457A0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_MISSION_TAG_OFFSET UNITYSDK_OFFSET(0x1CE458F0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASBADGETAG_OFFSET UNITYSDK_OFFSET(0x1CE455A0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOAVATARTAG_OFFSET UNITYSDK_OFFSET(0x1CE459C0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOLIGHTCONETAG_OFFSET UNITYSDK_OFFSET(0x1CE45720)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOMISSIONTAG_OFFSET UNITYSDK_OFFSET(0x1CE45870)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ISPHOTOSLOT_OFFSET UNITYSDK_OFFSET(0x1CE45B10)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_PREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0x1CE45C30)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS__HASTAG_OFFSET UNITYSDK_OFFSET(0x1CE45550)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils_TypeDefinitionIndex = 70110;

	class TrainPartyBuildUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "TrainPartyBuildUtils")->GetStaticField(0x33410);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_BADGE_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "TrainPartyBuildUtils")->GetStaticField(0x33418);
		}

		static ::System::Boolean _HasTag(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS__HASTAG_OFFSET))(a1, a2);
		}

		static ::System::Boolean HasBadgeTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASBADGETAG_OFFSET))(a1);
		}

		static ::System::Boolean HasPhotoLightConeTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOLIGHTCONETAG_OFFSET))(a1);
		}

		static ::System::Boolean HasPhotoMissionTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOMISSIONTAG_OFFSET))(a1);
		}

		static ::System::Boolean HasPhotoAvatarTag(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOAVATARTAG_OFFSET))(a1);
		}

		static ::System::Boolean IsPhotoSlot(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_ISPHOTOSLOT_OFFSET))(a1);
		}

		static ::System::Void PreviewPhoto(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_PREVIEWPHOTO_OFFSET))(a1, a2);
		}

		static ::System::Void CancelPreviewPhoto(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_CANCELPREVIEWPHOTO_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* AssembleDisplayAreaInfo(::OIIPJFDNPAH* a1, ::RPG::GameCore::GenderType a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)(::OIIPJFDNPAH*, ::RPG::GameCore::GenderType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFO_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* AssembleDisplayAreaInfoByLocalPlayerData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFOBYLOCALPLAYERDATA_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>* CreateFakeSlotIDToDIYItemDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_CREATEFAKESLOTIDTODIYITEMDICT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GetPhotoWorldDataList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETPHOTOWORLDDATALIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GetAvatarPhotoRarityDataList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETAVATARPHOTORARITYDATALIST_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* GetLightConePhotoRarityDataList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GETLIGHTCONEPHOTORARITYDATALIST_OFFSET))();
		}

		static ::System::UInt32 get_BADGE_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_TAG_OFFSET))();
		}

		static ::System::UInt32 get_PHOTO_LIGHT_CONE_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_LIGHT_CONE_TAG_OFFSET))();
		}

		static ::System::UInt32 get_PHOTO_MISSION_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_MISSION_TAG_OFFSET))();
		}

		static ::System::UInt32 get_PHOTO_AVATAR_TAG()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_AVATAR_TAG_OFFSET))();
		}

		static ::System::UInt32 get_DISPLAY_WALL_AREA_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_AREA_ID_OFFSET))();
		}

		static ::System::UInt32 get_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID_OFFSET))();
		}

		static ::System::UInt32 get_MAP_GO_HOME_UNLOCK_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_UNLOCK_ID_OFFSET))();
		}

		static ::System::UInt32 get_MAP_GO_HOME_GOTO_ID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_GOTO_ID_OFFSET))();
		}

		static ::System::String* get_HOVER_MATERIAL_PATH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_HOVER_MATERIAL_PATH_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_OFFSET))();
		}

		static ::System::String* get_OUTLINE_ROOT_PATH()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_OUTLINE_ROOT_PATH_OFFSET))();
		}

		static ::System::UInt32 get_BadgeSubAreaID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGESUBAREAID_OFFSET))();
		}

	};
}
