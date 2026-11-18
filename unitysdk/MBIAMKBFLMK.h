#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class JKNLCCEJEAH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBIAMKBFLMK_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1779B3A0)
#define MBIAMKBFLMK_COFPMAHJABI_OFFSET UNITYSDK_OFFSET(0x1779B580)
#define MBIAMKBFLMK_COKKLAOIIBM_OFFSET UNITYSDK_OFFSET(0x1779B430)
#define MBIAMKBFLMK_HBALCEFGOKO_OFFSET UNITYSDK_OFFSET(0x1779B260)
#define MBIAMKBFLMK_ONSTART_OFFSET UNITYSDK_OFFSET(0x1779B160)
#define MBIAMKBFLMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1779B250)

inline static constexpr unsigned int MBIAMKBFLMK_TypeDefinitionIndex = 41916;

class MBIAMKBFLMK : public ::JGELKBLKFHE
{
public:
	::JKNLCCEJEAH* LJMJLHDNOGC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIAMKBFLMK__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIAMKBFLMK_ONSTART_OFFSET))(this);
	}

	::System::Void HBALCEFGOKO(::System::UInt32 LJMPICLENII, ::System::Int32 IODEMLBELKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MBIAMKBFLMK_HBALCEFGOKO_OFFSET))(this, LJMPICLENII, IODEMLBELKO);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBIAMKBFLMK_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void COKKLAOIIBM(::System::UInt32 LJMPICLENII, ::System::UInt32 LHELFLPAKGL, ::System::Boolean PEKHACFGJJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MBIAMKBFLMK_COKKLAOIIBM_OFFSET))(this, LJMPICLENII, LHELFLPAKGL, PEKHACFGJJI);
	}

	::System::Void COFPMAHJABI(::System::Int32 PKMFBJMJCOO, ::System::Int32 HJKAFBFHGOO, ::System::Int32 HFOELHGAIPM, ::System::Int32 IJJNBBIOIMJ, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JFAJHLHHHPM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + MBIAMKBFLMK_COFPMAHJABI_OFFSET))(this, PKMFBJMJCOO, HJKAFBFHGOO, HFOELHGAIPM, IJJNBBIOIMJ, JFAJHLHHHPM);
	}
};
