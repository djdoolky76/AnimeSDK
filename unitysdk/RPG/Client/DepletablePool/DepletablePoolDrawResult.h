#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDEOFEHDNNO;
namespace RPG::Client::DepletablePool { class DepletablePool; }
namespace RPG::Client::DepletablePool { class DepletablePoolDrawResult; }
namespace RPG::Client::DepletablePool { class DepletablePoolPrize; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1B803A80)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_DELIVERPRIZES_OFFSET UNITYSDK_OFFSET(0x1B803B30)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_DRAWINDEX_OFFSET UNITYSDK_OFFSET(0x1B803B10)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_DRAWPRIZE_OFFSET UNITYSDK_OFFSET(0x1B803B20)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_ISMULTI_OFFSET UNITYSDK_OFFSET(0x1B803B40)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_POOLID_OFFSET UNITYSDK_OFFSET(0x1B803B00)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT__CREATEDRAWRESULT_OFFSET UNITYSDK_OFFSET(0x1B8033F0)

namespace RPG::Client::DepletablePool
{
	inline static constexpr unsigned int DepletablePoolDrawResult_TypeDefinitionIndex = 76975;

	class DepletablePoolDrawResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>* _DeliverPrizes_k__BackingField; // 0x10
		::RPG::Client::DepletablePool::DepletablePoolPrize* _DrawPrize_k__BackingField; // 0x18
		::System::UInt32 _DrawIndex_k__BackingField; // 0x20
		::System::UInt32 _PoolId_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::DepletablePool::DepletablePoolPrize* a3, ::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::DepletablePool::DepletablePoolPrize*, ::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::RPG::Client::DepletablePool::DepletablePoolDrawResult* _CreateDrawResult(::RPG::Client::DepletablePool::DepletablePool* a1, ::JDEOFEHDNNO* a2)
		{
			return ((::RPG::Client::DepletablePool::DepletablePoolDrawResult*(*)(::RPG::Client::DepletablePool::DepletablePool*, ::JDEOFEHDNNO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT__CREATEDRAWRESULT_OFFSET))(a1, a2);
		}

		::System::UInt32 get_PoolId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_POOLID_OFFSET))(this);
		}

		::System::UInt32 get_DrawIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_DRAWINDEX_OFFSET))(this);
		}

		::RPG::Client::DepletablePool::DepletablePoolPrize* get_DrawPrize()
		{
			return ((::RPG::Client::DepletablePool::DepletablePoolPrize*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_DRAWPRIZE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>* get_DeliverPrizes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_DELIVERPRIZES_OFFSET))(this);
		}

		::System::Boolean get_IsMulti()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLDRAWRESULT_GET_ISMULTI_OFFSET))(this);
		}

	};
}
