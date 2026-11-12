#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/JGELGFLEHJF.h"
class CEPONMEPANA;
class ELEOGEGAAFP;
class MMNEBIHLBFM;
class NANHPCDCLDG;
namespace RPG::Client::DepletablePool { class DepletablePool; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xD5679E0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD568090)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_DRAWASYNC_OFFSET UNITYSDK_OFFSET(0xD5690B0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_DRAW_OFFSET UNITYSDK_OFFSET(0xD568AE0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GETALLPOOLS_OFFSET UNITYSDK_OFFSET(0xD569530)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GETFIRSTPOOL_OFFSET UNITYSDK_OFFSET(0xD5692D0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GETPOOL_OFFSET UNITYSDK_OFFSET(0xD569220)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GET_POOLCOUNT_OFFSET UNITYSDK_OFFSET(0xD569670)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xD567A80)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xD567D00)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xD567E60)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_TRYGETPOOL_OFFSET UNITYSDK_OFFSET(0xD569460)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xD568150)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__ONDRAWSCRSP_OFFSET UNITYSDK_OFFSET(0xD5687C0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__ONGETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xD5682E0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__RESOLVEPENDINGDRAW_OFFSET UNITYSDK_OFFSET(0xD567F60)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__SENDDRAW_OFFSET UNITYSDK_OFFSET(0xD568E80)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__TRYGETDRAWDATA_OFFSET UNITYSDK_OFFSET(0xD568BB0)

namespace RPG::Client::DepletablePool
{
	inline static constexpr unsigned int DepletablePoolModule_TypeDefinitionIndex = 76978;

	class DepletablePoolModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DepletablePool::DepletablePool*>* _Pools; // 0x10
		::RPG::Client::Promises::Promise_1<::System::Boolean>* _PendingDrawPromise; // 0x18
		::ELEOGEGAAFP* _NeedProvider; // 0x20
		::CEPONMEPANA* _Consts; // 0x28
		::NANHPCDCLDG* _CostStrategy; // 0x30
		::MMNEBIHLBFM* _Factory; // 0x38
		::System::UInt32 _PendingDrawPoolId; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__ONGETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnDrawScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__ONDRAWSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean Draw(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_DRAW_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* DrawAsync(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_DRAWASYNC_OFFSET))(this, a1);
		}

		::System::Boolean _TryGetDrawData(::System::UInt32 a1, ::RPG::Client::DepletablePool::DepletablePool* a2, ::JGELGFLEHJF a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DepletablePool::DepletablePool*, ::JGELGFLEHJF))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__TRYGETDRAWDATA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ResolvePendingDraw(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__RESOLVEPENDINGDRAW_OFFSET))(this, a1, a2);
		}

		::System::Void _SendDraw(::RPG::Client::DepletablePool::DepletablePool* a1, ::JGELGFLEHJF a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DepletablePool::DepletablePool*, ::JGELGFLEHJF))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE__SENDDRAW_OFFSET))(this, a1, a2);
		}

		::RPG::Client::DepletablePool::DepletablePool* GetPool(::System::UInt32 a1)
		{
			return ((::RPG::Client::DepletablePool::DepletablePool*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GETPOOL_OFFSET))(this, a1);
		}

		::RPG::Client::DepletablePool::DepletablePool* GetFirstPool()
		{
			return ((::RPG::Client::DepletablePool::DepletablePool*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GETFIRSTPOOL_OFFSET))(this);
		}

		::System::Boolean TryGetPool(::System::UInt32 a1, ::RPG::Client::DepletablePool::DepletablePool* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DepletablePool::DepletablePool*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_TRYGETPOOL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePool*>* GetAllPools()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePool*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GETALLPOOLS_OFFSET))(this);
		}

		::System::Int32 get_PoolCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLMODULE_GET_POOLCOUNT_OFFSET))(this);
		}

	};
}
