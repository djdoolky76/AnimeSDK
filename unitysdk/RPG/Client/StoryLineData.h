#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class MAOBMOAAFGK;
class MCMFHHKJDEE;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class StoryLineData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::GameCore { class StoryLineConfigRow; }
namespace RPG::GameCore { class StoryLineUIDataRow; }
namespace RPG::GameCore { class StroyLineTrialAvatarDataRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STORYLINEDATA_CANSWITCH_OFFSET UNITYSDK_OFFSET(0x1CCDA3A0)
#define RPG_CLIENT_STORYLINEDATA_CREATEBRANCHLINE_OFFSET UNITYSDK_OFFSET(0x1CCD9A00)
#define RPG_CLIENT_STORYLINEDATA_CREATEMAINLINE_OFFSET UNITYSDK_OFFSET(0x1CCD98C0)
#define RPG_CLIENT_STORYLINEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD9840)
#define RPG_CLIENT_STORYLINEDATA_GETALLFLOORIDS_OFFSET UNITYSDK_OFFSET(0x1CCDAD40)
#define RPG_CLIENT_STORYLINEDATA_GETCONTENTID_OFFSET UNITYSDK_OFFSET(0x1CCDAF20)
#define RPG_CLIENT_STORYLINEDATA_GETSTORYLINEFLOOR_OFFSET UNITYSDK_OFFSET(0x1CCDAC50)
#define RPG_CLIENT_STORYLINEDATA_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x1CCDAA60)
#define RPG_CLIENT_STORYLINEDATA_GET_CHRONICLEICONPATH_OFFSET UNITYSDK_OFFSET(0x1CCD96B0)
#define RPG_CLIENT_STORYLINEDATA_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x1CCD95A0)
#define RPG_CLIENT_STORYLINEDATA_GET_FIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1CCD9530)
#define RPG_CLIENT_STORYLINEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CCD93E0)
#define RPG_CLIENT_STORYLINEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CCD9370)
#define RPG_CLIENT_STORYLINEDATA_GET_ISMAINLINE_OFFSET UNITYSDK_OFFSET(0x1CCD9390)
#define RPG_CLIENT_STORYLINEDATA_GET_ISSKIPJOINLINEUP_OFFSET UNITYSDK_OFFSET(0x1CCD9720)
#define RPG_CLIENT_STORYLINEDATA_GET_LARGEFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1CCD94C0)
#define RPG_CLIENT_STORYLINEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CCD9610)
#define RPG_CLIENT_STORYLINEDATA_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0x1CCD9450)
#define RPG_CLIENT_STORYLINEDATA_ISFLOORUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1CCDABE0)
#define RPG_CLIENT_STORYLINEDATA_ONACTIVATED_OFFSET UNITYSDK_OFFSET(0x1CCD9DA0)
#define RPG_CLIENT_STORYLINEDATA_ONDEACTIVATED_OFFSET UNITYSDK_OFFSET(0x1CCD9D60)
#define RPG_CLIENT_STORYLINEDATA_ONGETHEROBASICTYPEINFO_OFFSET UNITYSDK_OFFSET(0x1CCD9F10)
#define RPG_CLIENT_STORYLINEDATA_PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x1CCDA060)
#define RPG_CLIENT_STORYLINEDATA_SETMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x1CCD9EC0)
#define RPG_CLIENT_STORYLINEDATA_SETTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1CCDA520)
#define RPG_CLIENT_STORYLINEDATA_SETUNLOCKBYSERVER_OFFSET UNITYSDK_OFFSET(0x1CCDAA10)
#define RPG_CLIENT_STORYLINEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CCD9380)
#define RPG_CLIENT_STORYLINEDATA__GETSTORYLINETRIALAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1CCD97D0)
#define RPG_CLIENT_STORYLINEDATA__GETSTORYLINEUIDATAROW_OFFSET UNITYSDK_OFFSET(0x1CCD9F60)
#define RPG_CLIENT_STORYLINEDATA__INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CCD99B0)
#define RPG_CLIENT_STORYLINEDATA__INITSTORYLINEFLOORDATA_OFFSET UNITYSDK_OFFSET(0x1CCD9B30)
#define RPG_CLIENT_STORYLINEDATA__ISITEMVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CCDB130)
#define RPG_CLIENT_STORYLINEDATA__PREPAREFLOORDATA_OFFSET UNITYSDK_OFFSET(0x1CCDA250)

namespace RPG::Client
{
	inline static constexpr unsigned int StoryLineData_TypeDefinitionIndex = 69933;

	class StoryLineData : public ::System::Object
	{
	public:
		::RPG::GameCore::StoryLineUIDataRow* _UIDataRow; // 0x10
		::MAOBMOAAFGK* _UnlockChecker; // 0x18
		::System::Collections::Generic::List_1<::MCMFHHKJDEE*>* _StoryLineFloors; // 0x20
		::RPG::GameCore::StoryLineConfigRow* _StoryLineRow; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _TrialAvatarIDs; // 0x30
		::RPG::GameCore::StroyLineTrialAvatarDataRow* _TrialAvatarData; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::Boolean _UnlockByServer; // 0x44
		::System::Boolean _Activated; // 0x45
		::System::Boolean _MissionDataReady; // 0x46
		// static const ::System::Object MAIN_LINE_ID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMainLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ISMAINLINE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_PortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_PORTRAITPATH_OFFSET))(this);
		}

		::System::String* get_LargeFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_LARGEFIGUREPATH_OFFSET))(this);
		}

		::System::String* get_FigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_FIGUREPATH_OFFSET))(this);
		}

		::System::String* get_Color()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_COLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ChronicleIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_CHRONICLEICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsSkipJoinLineup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GET_ISSKIPJOINLINEUP_OFFSET))(this);
		}

		static ::RPG::Client::StoryLineData* CreateMainLine()
		{
			return ((::RPG::Client::StoryLineData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CREATEMAINLINE_OFFSET))();
		}

		static ::RPG::Client::StoryLineData* CreateBranchLine(::RPG::GameCore::StoryLineConfigRow* a1)
		{
			return ((::RPG::Client::StoryLineData*(*)(::RPG::GameCore::StoryLineConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CREATEBRANCHLINE_OFFSET))(a1);
		}

		::System::Void OnDeactivated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONDEACTIVATED_OFFSET))(this);
		}

		::System::Void OnActivated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONACTIVATED_OFFSET))(this);
		}

		::System::Void SetMissionDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETMISSIONDATAREADY_OFFSET))(this, a1);
		}

		::System::Void OnGetHeroBasicTypeInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ONGETHEROBASICTYPEINFO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_PREPAREDATA_OFFSET))(this);
		}

		::System::Boolean CanSwitch()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_CANSWITCH_OFFSET))(this);
		}

		::System::Void SetTrialAvatarIDs(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETTRIALAVATARIDS_OFFSET))(this, a1);
		}

		::System::Void SetUnlockByServer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_SETUNLOCKBYSERVER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Boolean IsFloorUnlocked(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_ISFLOORUNLOCKED_OFFSET))(this, a1);
		}

		::MCMFHHKJDEE* GetStoryLineFloor(::System::UInt32 a1)
		{
			return ((::MCMFHHKJDEE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETSTORYLINEFLOOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAllFloorIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETALLFLOORIDS_OFFSET))(this);
		}

		::System::UInt32 GetContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA_GETCONTENTID_OFFSET))(this);
		}

		::System::Void _Initialize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__INITIALIZE_OFFSET))(this, a1);
		}

		::RPG::GameCore::StoryLineUIDataRow* _GetStoryLineUIDataRow()
		{
			return ((::RPG::GameCore::StoryLineUIDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__GETSTORYLINEUIDATAROW_OFFSET))(this);
		}

		::RPG::GameCore::StroyLineTrialAvatarDataRow* _GetStoryLineTrialAvatarData()
		{
			return ((::RPG::GameCore::StroyLineTrialAvatarDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__GETSTORYLINETRIALAVATARDATA_OFFSET))(this);
		}

		::System::Boolean _IsItemVisible(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__ISITEMVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _InitStoryLineFloorData(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__INITSTORYLINEFLOORDATA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _PrepareFloorData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA__PREPAREFLOORDATA_OFFSET))(this);
		}

	};
}
