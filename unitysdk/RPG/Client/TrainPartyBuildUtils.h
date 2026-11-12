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

#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFOBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xED69CC0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ASSEMBLEDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0xED69C50)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CANCELPREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0xED69BC0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_CREATEFAKESLOTIDTODIYITEMDICT_OFFSET UNITYSDK_OFFSET(0xED69D00)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETAVATARPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0xED6A5B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETLIGHTCONEPHOTORARITYDATALIST_OFFSET UNITYSDK_OFFSET(0xED6AD40)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GETPHOTOWORLDDATALIST_OFFSET UNITYSDK_OFFSET(0xED6A300)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGESUBAREAID_OFFSET UNITYSDK_OFFSET(0xED6BEB0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_ITEM_COMMON_DYNAMIC_ITEM_ID_OFFSET UNITYSDK_OFFSET(0xED6B5F0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_BADGE_TAG_OFFSET UNITYSDK_OFFSET(0xED69460)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_AREA_ID_OFFSET UNITYSDK_OFFSET(0xED6B520)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_BADGE_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0xED6BC00)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY_OFFSET UNITYSDK_OFFSET(0xED6B9B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_HOVER_MATERIAL_PATH_OFFSET UNITYSDK_OFFSET(0xED6B8F0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_GOTO_ID_OFFSET UNITYSDK_OFFSET(0xED6B7F0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_MAP_GO_HOME_UNLOCK_ID_OFFSET UNITYSDK_OFFSET(0xED6B6F0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_OUTLINE_ROOT_PATH_OFFSET UNITYSDK_OFFSET(0xED6BE50)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_AVATAR_TAG_OFFSET UNITYSDK_OFFSET(0xED69880)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_LIGHT_CONE_TAG_OFFSET UNITYSDK_OFFSET(0xED695E0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_GET_PHOTO_MISSION_TAG_OFFSET UNITYSDK_OFFSET(0xED69730)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASBADGETAG_OFFSET UNITYSDK_OFFSET(0xED693E0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOAVATARTAG_OFFSET UNITYSDK_OFFSET(0xED69800)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOLIGHTCONETAG_OFFSET UNITYSDK_OFFSET(0xED69560)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_HASPHOTOMISSIONTAG_OFFSET UNITYSDK_OFFSET(0xED696B0)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_ISPHOTOSLOT_OFFSET UNITYSDK_OFFSET(0xED69950)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS_PREVIEWPHOTO_OFFSET UNITYSDK_OFFSET(0xED69A70)
#define RPG_CLIENT_TRAINPARTYBUILDUTILS__HASTAG_OFFSET UNITYSDK_OFFSET(0xED69390)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainPartyBuildUtils_TypeDefinitionIndex = 70110;

	class TrainPartyBuildUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_BADGE_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "TrainPartyBuildUtils")->GetStaticField(0x32C00);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DISPLAY_WALL_PHOTO_SLOT_ID_ARRAY()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("RPG.Client", "TrainPartyBuildUtils")->GetStaticField(0x32C08);
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
