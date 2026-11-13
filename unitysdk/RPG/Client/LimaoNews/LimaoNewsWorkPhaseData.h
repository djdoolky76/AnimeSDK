#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LimaoNews { class LimaoNewsWorkPhaseData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1CBCD7D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCDFB0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GETWORKEMPLOYEEICONPATHLIST_OFFSET UNITYSDK_OFFSET(0x1CBCDFC0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_ISNEXTRESULT_OFFSET UNITYSDK_OFFSET(0x1CBCE380)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_NEXTPARAMIDLIST_OFFSET UNITYSDK_OFFSET(0x1CBCE3A0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_PERFORMANCETEXTLIST_OFFSET UNITYSDK_OFFSET(0x1CBCE3C0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKEMPLOYEELIST_OFFSET UNITYSDK_OFFSET(0x1CBCE340)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKID_OFFSET UNITYSDK_OFFSET(0x1CBCE300)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKPHASEID_OFFSET UNITYSDK_OFFSET(0x1CBCE320)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKPHASEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBCE360)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_ISNEXTRESULT_OFFSET UNITYSDK_OFFSET(0x1CBCE390)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_NEXTPARAMIDLIST_OFFSET UNITYSDK_OFFSET(0x1CBCE3B0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_PERFORMANCETEXTLIST_OFFSET UNITYSDK_OFFSET(0x1CBCE3D0)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKEMPLOYEELIST_OFFSET UNITYSDK_OFFSET(0x1CBCE350)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKID_OFFSET UNITYSDK_OFFSET(0x1CBCE310)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKPHASEID_OFFSET UNITYSDK_OFFSET(0x1CBCE330)
#define RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKPHASEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CBCE370)

namespace RPG::Client::LimaoNews
{
	inline static constexpr unsigned int LimaoNewsWorkPhaseData_TypeDefinitionIndex = 83083;

	class LimaoNewsWorkPhaseData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _PerformanceTextList_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _WorkEmployeeList_k__BackingField; // 0x18
		::Il2CppArray<::System::UInt32>* _NextParamIDList_k__BackingField; // 0x20
		::System::UInt32 _WorkPhaseMessage_k__BackingField; // 0x28
		::System::UInt32 _WorkID_k__BackingField; // 0x2C
		::System::Boolean _IsNextResult_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 _WorkPhaseID_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::LimaoNews::LimaoNewsWorkPhaseData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetWorkEmployeeIconPathList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GETWORKEMPLOYEEICONPATHLIST_OFFSET))(this);
		}

		::System::UInt32 get_WorkID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKID_OFFSET))(this);
		}

		::System::Void set_WorkID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKID_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkPhaseID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKPHASEID_OFFSET))(this);
		}

		::System::Void set_WorkPhaseID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKPHASEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_WorkEmployeeList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKEMPLOYEELIST_OFFSET))(this);
		}

		::System::Void set_WorkEmployeeList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKEMPLOYEELIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_WorkPhaseMessage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_WORKPHASEMESSAGE_OFFSET))(this);
		}

		::System::Void set_WorkPhaseMessage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_WORKPHASEMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNextResult()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_ISNEXTRESULT_OFFSET))(this);
		}

		::System::Void set_IsNextResult(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_ISNEXTRESULT_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NextParamIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_NEXTPARAMIDLIST_OFFSET))(this);
		}

		::System::Void set_NextParamIDList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_NEXTPARAMIDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* get_PerformanceTextList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_GET_PERFORMANCETEXTLIST_OFFSET))(this);
		}

		::System::Void set_PerformanceTextList(::System::Collections::Generic::List_1<::RPG::Client::TextID>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LIMAONEWS_LIMAONEWSWORKPHASEDATA_SET_PERFORMANCETEXTLIST_OFFSET))(this, a1);
		}

	};
}
