#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DepletablePool/DepletablePool___c__DisplayClass7_0.h"
class APAMFCKFHLL;
class JGLCNFPHNEA;
namespace RPG::Client::DepletablePool { class DepletablePool; }
namespace RPG::Client::DepletablePool { class DepletablePoolContent; }
namespace RPG::Client::DepletablePool { class DepletablePoolPrize; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_APPLYDRAWRESULT_1_OFFSET UNITYSDK_OFFSET(0x1B802160)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_APPLYDRAWRESULT_OFFSET UNITYSDK_OFFSET(0x1B8020F0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_APPLYFULLSTATE_OFFSET UNITYSDK_OFFSET(0x1B8013E0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_CHECKVIDEOEXIST_OFFSET UNITYSDK_OFFSET(0x1B801380)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B801030)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B801020)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GETPRIZE_OFFSET UNITYSDK_OFFSET(0x1B801130)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1B802A90)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_CONTENTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B802A50)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1B802C90)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_COSTPLANID_OFFSET UNITYSDK_OFFSET(0x1B802A70)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1B802AB0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_FINISHEDDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x1B802AD0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1B802CF0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x1B802A30)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_TAKENCOUNT_OFFSET UNITYSDK_OFFSET(0x1B802AF0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_UIPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B802CB0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B802CD0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_BEGINTIME_OFFSET UNITYSDK_OFFSET(0x1B802AA0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_CONTENTGROUPID_OFFSET UNITYSDK_OFFSET(0x1B802A60)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0x1B802CA0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_COSTPLANID_OFFSET UNITYSDK_OFFSET(0x1B802A80)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1B802AC0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_FINISHEDDRAWCOUNT_OFFSET UNITYSDK_OFFSET(0x1B802AE0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_POOLID_OFFSET UNITYSDK_OFFSET(0x1B802A40)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_UIPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1B802CC0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1B802CE0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_TRYGETPRIZE_OFFSET UNITYSDK_OFFSET(0x1B801240)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL__APPLYDRAWRESULT_G__TRYENQUEUE_7_0_OFFSET UNITYSDK_OFFSET(0x1B8028C0)

namespace RPG::Client::DepletablePool
{
	inline static constexpr unsigned int DepletablePool_TypeDefinitionIndex = 76970;

	class DepletablePool : public ::System::Object
	{
	public:
		::System::String* _UIPrefabPath_k__BackingField; // 0x10
		::RPG::Client::DepletablePool::DepletablePoolContent* _Content_k__BackingField; // 0x18
		::System::UInt32 _FinishedDrawCount_k__BackingField; // 0x20
		::System::UInt32 _CostPlanId_k__BackingField; // 0x24
		::System::UInt32 _VideoID_k__BackingField; // 0x28
		::System::UInt32 _PoolId_k__BackingField; // 0x2C
		::System::UInt32 _ContentGroupId_k__BackingField; // 0x30
		::System::Byte _padding0[0x4];
		::System::Int64 _BeginTime_k__BackingField; // 0x38
		::System::Int64 _EndTime_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DepletablePool::DepletablePool* Create(::JGLCNFPHNEA* a1, ::RPG::Client::DepletablePool::DepletablePoolContent* a2)
		{
			return ((::RPG::Client::DepletablePool::DepletablePool*(*)(::JGLCNFPHNEA*, ::RPG::Client::DepletablePool::DepletablePoolContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::DepletablePool::DepletablePoolPrize* GetPrize(::System::UInt32 a1)
		{
			return ((::RPG::Client::DepletablePool::DepletablePoolPrize*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GETPRIZE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetPrize(::System::UInt32 a1, ::RPG::Client::DepletablePool::DepletablePoolPrize* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DepletablePool::DepletablePoolPrize*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_TRYGETPRIZE_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckVideoExist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_CHECKVIDEOEXIST_OFFSET))(this);
		}

		::System::Void ApplyFullState(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_APPLYFULLSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ApplyDrawResult(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_APPLYDRAWRESULT_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean ApplyDrawResult_1(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a3, ::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_APPLYDRAWRESULT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 get_PoolId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_POOLID_OFFSET))(this);
		}

		::System::Void set_PoolId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_POOLID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ContentGroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_CONTENTGROUPID_OFFSET))(this);
		}

		::System::Void set_ContentGroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_CONTENTGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CostPlanId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_COSTPLANID_OFFSET))(this);
		}

		::System::Void set_CostPlanId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_COSTPLANID_OFFSET))(this, a1);
		}

		::System::Int64 get_BeginTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_BEGINTIME_OFFSET))(this);
		}

		::System::Void set_BeginTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_BEGINTIME_OFFSET))(this, a1);
		}

		::System::Int64 get_EndTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_ENDTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedDrawCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_FINISHEDDRAWCOUNT_OFFSET))(this);
		}

		::System::Void set_FinishedDrawCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_FINISHEDDRAWCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_TakenCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_TAKENCOUNT_OFFSET))(this);
		}

		::RPG::Client::DepletablePool::DepletablePoolContent* get_Content()
		{
			return ((::RPG::Client::DepletablePool::DepletablePoolContent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::DepletablePool::DepletablePoolContent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DepletablePool::DepletablePoolContent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::String* get_UIPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_UIPREFABPATH_OFFSET))(this);
		}

		::System::Void set_UIPrefabPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_UIPREFABPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_SET_VIDEOID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL_GET_ISFINISHED_OFFSET))(this);
		}

		static ::System::Void _ApplyDrawResult_g__TryEnqueue_7_0(::System::UInt32 a1, ::RPG::Client::DepletablePool::DepletablePool___c__DisplayClass7_0 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::Client::DepletablePool::DepletablePool___c__DisplayClass7_0))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOL__APPLYDRAWRESULT_G__TRYENQUEUE_7_0_OFFSET))(a1, a2);
		}

	};
}
