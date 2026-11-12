#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
namespace RPG::Client::DepletablePool { class DepletablePoolPrize; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_APPLYDRAWRESULT_OFFSET UNITYSDK_OFFSET(0xD566770)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_APPLYNEXTDRAWDISPLAYRATES_OFFSET UNITYSDK_OFFSET(0xD5659C0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_APPLYTAKENCONTENTIDS_OFFSET UNITYSDK_OFFSET(0xD5652B0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0xD566BB0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETPRIZE_OFFSET UNITYSDK_OFFSET(0xD564FD0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETREMAINPRIZEDISPLAYRATETEXT_OFFSET UNITYSDK_OFFSET(0xD567010)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETREMAINPRIZEDISPLAYRATEUNITS_OFFSET UNITYSDK_OFFSET(0xD566F50)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETREMAINPRIZERATE_OFFSET UNITYSDK_OFFSET(0xD566EF0)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GET_GRANDPRIZE_OFFSET UNITYSDK_OFFSET(0xD567180)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GET_PRIZES_OFFSET UNITYSDK_OFFSET(0xD567170)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GET_TAKENCOUNT_OFFSET UNITYSDK_OFFSET(0xD566980)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_SET_GRANDPRIZE_OFFSET UNITYSDK_OFFSET(0xD567190)
#define RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_TRYGETPRIZE_OFFSET UNITYSDK_OFFSET(0xD5650F0)

namespace RPG::Client::DepletablePool
{
	inline static constexpr unsigned int DepletablePoolContent_TypeDefinitionIndex = 76974;

	class DepletablePoolContent : public ::System::Object
	{
	public:
		::RPG::Client::DepletablePool::DepletablePoolPrize* _GrandPrize_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>* _Prizes_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::DepletablePool::DepletablePoolPrize*>* _PrizeByContentId; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _DisplayRateByContentId; // 0x28
		// static const ::System::Object PrizeCount; // 0x0
		// static const ::System::Object _DisplayRateTotalUnits; // 0x0
		::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::DepletablePool::DepletablePoolPrize* GetPrize(::System::UInt32 a1)
		{
			return ((::RPG::Client::DepletablePool::DepletablePoolPrize*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETPRIZE_OFFSET))(this, a1);
		}

		::System::Boolean TryGetPrize(::System::UInt32 a1, ::RPG::Client::DepletablePool::DepletablePoolPrize* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::DepletablePool::DepletablePoolPrize*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_TRYGETPRIZE_OFFSET))(this, a1, a2);
		}

		::System::Single GetRemainPrizeRate(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETREMAINPRIZERATE_OFFSET))(this, a1);
		}

		::System::Int32 GetRemainPrizeDisplayRateUnits(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETREMAINPRIZEDISPLAYRATEUNITS_OFFSET))(this, a1);
		}

		::System::String* GetRemainPrizeDisplayRateText(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GETREMAINPRIZEDISPLAYRATETEXT_OFFSET))(this, a1);
		}

		::System::Void ApplyNextDrawDisplayRates(::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::APAMFCKFHLL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_APPLYNEXTDRAWDISPLAYRATES_OFFSET))(this, a1);
		}

		::System::Boolean ApplyTakenContentIds(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_APPLYTAKENCONTENTIDS_OFFSET))(this, a1);
		}

		::System::Boolean ApplyDrawResult(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_APPLYDRAWRESULT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>* get_Prizes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DepletablePool::DepletablePoolPrize*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GET_PRIZES_OFFSET))(this);
		}

		::RPG::Client::DepletablePool::DepletablePoolPrize* get_GrandPrize()
		{
			return ((::RPG::Client::DepletablePool::DepletablePoolPrize*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GET_GRANDPRIZE_OFFSET))(this);
		}

		::System::Void set_GrandPrize(::RPG::Client::DepletablePool::DepletablePoolPrize* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DepletablePool::DepletablePoolPrize*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_SET_GRANDPRIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_TakenCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEPLETABLEPOOL_DEPLETABLEPOOLCONTENT_GET_TAKENCOUNT_OFFSET))(this);
		}

	};
}
