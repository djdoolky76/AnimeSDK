#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityVersionHotData.h"
#include "unitysdk/RPG/GameCore/ActivityHotTagType.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class IActivityHotData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x18D107A0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D11D50)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x18D12450)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D12120)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x18D118A0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_GOTOPARAMS_OFFSET UNITYSDK_OFFSET(0x18D119D0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18D11770)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x18D120A0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ISSHOWGOTOBUTTON_OFFSET UNITYSDK_OFFSET(0x18D11B00)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D11470)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_NOTBEGIN_OFFSET UNITYSDK_OFFSET(0x18D11C30)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_SOURCEDATALIST_OFFSET UNITYSDK_OFFSET(0x18D124B0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0x18D11640)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET__NOWSTAMP_OFFSET UNITYSDK_OFFSET(0x18D11C90)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET__REPRESENTATIVEDATA_OFFSET UNITYSDK_OFFSET(0x18D115C0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA__MERGEITEMS_OFFSET UNITYSDK_OFFSET(0x18D10950)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityVersionHotMergedData_TypeDefinitionIndex = 62929;

	class ActivityVersionHotMergedData : public ::RPG::Client::ActivityVersionHotData
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* _SourceDataList; // 0x28
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IActivityHotData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _MergeItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA__MERGEITEMS_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::ActivityHotTagType get_TagType()
		{
			return ((::RPG::GameCore::ActivityHotTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_TAGTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_GOTOID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GotoParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_GOTOPARAMS_OFFSET))(this);
		}

		::System::Boolean get_IsShowGotoButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ISSHOWGOTOBUTTON_OFFSET))(this);
		}

		::System::Boolean get_NotBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_NOTBEGIN_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_Ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ENDED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IActivityHotData*>* get_SourceDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IActivityHotData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET_SOURCEDATALIST_OFFSET))(this);
		}

		::RPG::Client::IActivityHotData* get__RepresentativeData()
		{
			return ((::RPG::Client::IActivityHotData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET__REPRESENTATIVEDATA_OFFSET))(this);
		}

		::System::UInt32 get__NowStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTMERGEDDATA_GET__NOWSTAMP_OFFSET))(this);
		}

	};
}
