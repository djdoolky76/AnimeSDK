#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class ALOHJILIGNK;
class LIJCFPKKBOD;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::LimaoNews { class LimaoNewsLimaoData; }
namespace RPG::Client::LimaoNews { class LimaoNewsLocationData; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyContentData; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyItem; }
namespace RPG::Client::LimaoNews { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1DFBFD80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBFE00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DFC0080)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_FETCHFIRSTJUMPABLESUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1DFC1100)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETBIGMAPICON_OFFSET UNITYSDK_OFFSET(0x1DFC1380)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETLIMAODATA_OFFSET UNITYSDK_OFFSET(0x1DFC0860)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETLOACTIONDATA_OFFSET UNITYSDK_OFFSET(0x1DFC09E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETSURVEYTYPEDATA_OFFSET UNITYSDK_OFFSET(0x1DFC08C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTDATAS_OFFSET UNITYSDK_OFFSET(0x1DFC0E80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTID_OFFSET UNITYSDK_OFFSET(0x1DFC0D00)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DFC0B80)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_DISPLAYREWARDID_OFFSET UNITYSDK_OFFSET(0x1DFC0260)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_FINISHCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1DFC0710)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_HIDEREWARDAFTERSTART_OFFSET UNITYSDK_OFFSET(0x1DFC0360)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_ISMISSIONTARGET_OFFSET UNITYSDK_OFFSET(0x1DFC14A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_LIMAOID_OFFSET UNITYSDK_OFFSET(0x1DFC0130)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_PICTUREPATH_OFFSET UNITYSDK_OFFSET(0x1DFC0150)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_SHOWCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1DFC0470)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_STARTCONDITIONIDS_OFFSET UNITYSDK_OFFSET(0x1DFC05C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_SURVEYID_OFFSET UNITYSDK_OFFSET(0x1DFC0110)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_REFRESH_OFFSET UNITYSDK_OFFSET(0x1DFC00C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_SET_LIMAOID_OFFSET UNITYSDK_OFFSET(0x1DFC0140)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_SET_SURVEYID_OFFSET UNITYSDK_OFFSET(0x1DFC0120)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__GETFIRSTJUMPABLESUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1DFC1500)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__GETFIRSTSTARTANDHASWAYPOINTSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1DFC15E0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__GETSURVEYROW_OFFSET UNITYSDK_OFFSET(0x1DFC0200)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__INITTRACKDATALIST_OFFSET UNITYSDK_OFFSET(0x1DFBFE40)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsOfficeSurveyItem_TypeDefinitionIndex = 83070;

	class LimaoNewsOfficeSurveyItem : public ::System::Object
	{
	public:
		::RPG::Client::LimaoNews::LimaoNewsLocationData* _LocationData; // 0x10
		::System::Collections::Generic::List_1<::ALOHJILIGNK*>* TrackDataList; // 0x18
		::RPG::Client::LimaoNews::LimaoNewsLimaoData* _LimaoData; // 0x20
		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* _SurveyTypeData; // 0x28
		::System::UInt32 _LimaoId_k__BackingField; // 0x30
		::System::UInt32 _SurveyID_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_CREATE_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_DISPOSE_OFFSET))(this);
		}

		::System::Void Refresh(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_REFRESH_OFFSET))(this, a1);
		}

		::System::UInt32 get_SurveyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_SURVEYID_OFFSET))(this);
		}

		::System::Void set_SurveyID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_SET_SURVEYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LimaoId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_LIMAOID_OFFSET))(this);
		}

		::System::Void set_LimaoId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_SET_LIMAOID_OFFSET))(this, a1);
		}

		::System::String* get_PicturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_PICTUREPATH_OFFSET))(this);
		}

		::System::UInt32 get_DisplayRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_DISPLAYREWARDID_OFFSET))(this);
		}

		::System::Boolean get_HideRewardAfterStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_HIDEREWARDAFTERSTART_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ShowConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_SHOWCONDITIONIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_StartConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_STARTCONDITIONIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FinishConditionIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_FINISHCONDITIONIDS_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsLimaoData* GetLimaoData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLimaoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETLIMAODATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData* GetSurveyTypeData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETSURVEYTYPEDATA_OFFSET))(this);
		}

		::RPG::Client::LimaoNews::LimaoNewsLocationData* GetLoactionData()
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsLocationData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETLOACTIONDATA_OFFSET))(this);
		}

		::LIJCFPKKBOD* _GetSurveyRow()
		{
			return ((::LIJCFPKKBOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__GETSURVEYROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_DESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyContentData*>* get_CurContentDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsOfficeSurveyContentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTDATAS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_CurContentID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_CURCONTENTID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::SubMissionData*>* FetchFirstJumpableSubMissionData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::SubMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_FETCHFIRSTJUMPABLESUBMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::IBigMapIcon* GetBigMapIcon()
		{
			return ((::RPG::Client::IBigMapIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GETBIGMAPICON_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* _GetFirstJumpableSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__GETFIRSTJUMPABLESUBMISSIONDATA_OFFSET))(this, a1);
		}

		::RPG::Client::SubMissionData* _GetFirstStartAndHasWaypointSubMissionData(::RPG::Client::MainMissionData* a1)
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__GETFIRSTSTARTANDHASWAYPOINTSUBMISSIONDATA_OFFSET))(this, a1);
		}

		::System::Void _InitTrackDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM__INITTRACKDATALIST_OFFSET))(this);
		}

		::System::Boolean get_IsMissionTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSOFFICESURVEYITEM_GET_ISMISSIONTARGET_OFFSET))(this);
		}

	};
}
