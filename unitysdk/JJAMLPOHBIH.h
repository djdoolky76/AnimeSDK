#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJAMLPOHBIH;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJAMLPOHBIH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB200360)
#define JJAMLPOHBIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB2003F0)
#define JJAMLPOHBIH_GET_GAINBASICCOIN_OFFSET UNITYSDK_OFFSET(0xB200320)
#define JJAMLPOHBIH_GET_GAINBONUSCOINS_OFFSET UNITYSDK_OFFSET(0xB200340)
#define JJAMLPOHBIH_GET_GAINTOTALCOIN_OFFSET UNITYSDK_OFFSET(0xB200300)
#define JJAMLPOHBIH_SET_GAINBASICCOIN_OFFSET UNITYSDK_OFFSET(0xB200330)
#define JJAMLPOHBIH_SET_GAINBONUSCOINS_OFFSET UNITYSDK_OFFSET(0xB200350)
#define JJAMLPOHBIH_SET_GAINTOTALCOIN_OFFSET UNITYSDK_OFFSET(0xB200310)

	class JJAMLPOHBIH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _GainBonusCoins_k__BackingField; // 0x10
		::System::UInt32 _GainBasicCoin_k__BackingField; // 0x18
		::System::UInt32 _GainTotalCoin_k__BackingField; // 0x1C
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_GainTotalCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_GET_GAINTOTALCOIN_OFFSET))(this);
		}

		::System::Void set_GainTotalCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_SET_GAINTOTALCOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_GainBasicCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_GET_GAINBASICCOIN_OFFSET))(this);
		}

		::System::Void set_GainBasicCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_SET_GAINBASICCOIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GainBonusCoins()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_GET_GAINBONUSCOINS_OFFSET))(this);
		}

		::System::Void set_GainBonusCoins(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_SET_GAINBONUSCOINS_OFFSET))(this, a1);
		}

		static ::JJAMLPOHBIH* BPLPBPMEODA(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
		{
			return ((::JJAMLPOHBIH*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JJAMLPOHBIH_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
