#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNNGLBEGIKB;
class INGKNDHECNF;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class MonopolyBuffDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYBUFFINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD886150)
#define RPG_CLIENT_MONOPOLYBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8852D0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_GET_BUFFMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xD885F70)
#define RPG_CLIENT_MONOPOLYBUFFINFO_GET_EMPTYPERMANENTBUFF_OFFSET UNITYSDK_OFFSET(0xD8860D0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD884F90)
#define RPG_CLIENT_MONOPOLYBUFFINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0xD8859D0)
#define RPG_CLIENT_MONOPOLYBUFFINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xD885410)
#define RPG_CLIENT_MONOPOLYBUFFINFO_UNINIT_OFFSET UNITYSDK_OFFSET(0xD885290)
#define RPG_CLIENT_MONOPOLYBUFFINFO__ADDBUFF_OFFSET UNITYSDK_OFFSET(0xD885850)
#define RPG_CLIENT_MONOPOLYBUFFINFO__REFRESHBUFFTURN_OFFSET UNITYSDK_OFFSET(0xD885DA0)
#define RPG_CLIENT_MONOPOLYBUFFINFO__REMOVEBUFF_OFFSET UNITYSDK_OFFSET(0xD885C10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBuffInfo_TypeDefinitionIndex = 66218;

	class MonopolyBuffInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyBuffDataItem*>* BuffDict; // 0x10
		::RPG::Client::MonopolyBuffDataItem* _EmptyPermanentBuff; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyBuffDataItem*>* BuffList; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyBuffDataItem*>* ActivatedBuff; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_UNINIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::INGKNDHECNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGKNDHECNF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_MODIFY_OFFSET))(this, a1);
		}

		::System::Void _AddBuff(::GNNGLBEGIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNGLBEGIKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__ADDBUFF_OFFSET))(this, a1);
		}

		::System::Void _RemoveBuff(::GNNGLBEGIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNGLBEGIKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__REMOVEBUFF_OFFSET))(this, a1);
		}

		::System::Void _RefreshBuffTurn(::GNNGLBEGIKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNNGLBEGIKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO__REFRESHBUFFTURN_OFFSET))(this, a1);
		}

		::System::UInt32 get_BuffMultiplier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_GET_BUFFMULTIPLIER_OFFSET))(this);
		}

		::RPG::Client::MonopolyBuffDataItem* get_EmptyPermanentBuff()
		{
			return ((::RPG::Client::MonopolyBuffDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFINFO_GET_EMPTYPERMANENTBUFF_OFFSET))(this);
		}

	};
}
