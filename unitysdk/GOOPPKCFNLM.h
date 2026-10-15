#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOOPPKCFNLM_CatStatType.h"
#include "unitysdk/GOOPPKCFNLM_ModifyType.h"
#include "unitysdk/System/Object.h"
class PBGNKMMDBGD;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOOPPKCFNLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C61A010)
#define GOOPPKCFNLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C61A130)
#define GOOPPKCFNLM_DPAODJHLDAA_OFFSET UNITYSDK_OFFSET(0x1C61B350)
#define GOOPPKCFNLM_FFDEJANPJBO_OFFSET UNITYSDK_OFFSET(0x1C61A830)
#define GOOPPKCFNLM_FPDIIJOFKLI_OFFSET UNITYSDK_OFFSET(0x1C61B150)
#define GOOPPKCFNLM_GABEFLEDMAN_OFFSET UNITYSDK_OFFSET(0x1C61A9E0)
#define GOOPPKCFNLM_GET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x1C61D750)
#define GOOPPKCFNLM_GET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x1C61D770)
#define GOOPPKCFNLM_HNPGCLNBPGM_OFFSET UNITYSDK_OFFSET(0x1C61BDD0)
#define GOOPPKCFNLM_IEAACLGMBHM_OFFSET UNITYSDK_OFFSET(0x1C5F9880)
#define GOOPPKCFNLM_JDJOKOCAKPP_OFFSET UNITYSDK_OFFSET(0x1C6187B0)
#define GOOPPKCFNLM_JKIKLOBBILC_OFFSET UNITYSDK_OFFSET(0x1C61A180)
#define GOOPPKCFNLM_KDGMOMKDDAF_OFFSET UNITYSDK_OFFSET(0x1C61AB80)
#define GOOPPKCFNLM_NAPHOIMDDJO_OFFSET UNITYSDK_OFFSET(0x1C61AD60)
#define GOOPPKCFNLM_OEBFBJOJJLI_OFFSET UNITYSDK_OFFSET(0x1C61B3B0)
#define GOOPPKCFNLM_SET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x1C61D760)
#define GOOPPKCFNLM_SET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x1C61D780)

inline static constexpr unsigned int GOOPPKCFNLM_TypeDefinitionIndex = 37327;

	class GOOPPKCFNLM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _PlayerStats_k__BackingField; // 0x10
		::System::String* HNEPHOKFEFC; // 0x18
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _CatStats_k__BackingField; // 0x28
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_DISPOSE_OFFSET))(this);
		}

		::System::Void JKIKLOBBILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_JKIKLOBBILC_OFFSET))(this);
		}

		::System::Void IEAACLGMBHM(::System::UInt32 a1, ::GOOPPKCFNLM_CatStatType a2, ::GOOPPKCFNLM_ModifyType a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::GOOPPKCFNLM_CatStatType, ::GOOPPKCFNLM_ModifyType, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_IEAACLGMBHM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 FFDEJANPJBO(::System::UInt32 a1, ::GOOPPKCFNLM_CatStatType a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::GOOPPKCFNLM_CatStatType))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_FFDEJANPJBO_OFFSET))(this, a1, a2);
		}

		::System::Void GABEFLEDMAN(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_GABEFLEDMAN_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 KDGMOMKDDAF(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_KDGMOMKDDAF_OFFSET))(this, a1, a2);
		}

		::System::Void NAPHOIMDDJO(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_NAPHOIMDDJO_OFFSET))(this, a1, a2);
		}

		::System::Void FPDIIJOFKLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_FPDIIJOFKLI_OFFSET))(this);
		}

		::System::Void DPAODJHLDAA(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_DPAODJHLDAA_OFFSET))(this, a1);
		}

		::System::Void JDJOKOCAKPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_JDJOKOCAKPP_OFFSET))(this, a1);
		}

		::System::Void OEBFBJOJJLI(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_OEBFBJOJJLI_OFFSET))(this, a1, a2);
		}

		::System::Void HNPGCLNBPGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_HNPGCLNBPGM_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* get_CatStats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_GET_CATSTATS_OFFSET))(this);
		}

		::System::Void set_CatStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_SET_CATSTATS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* get_PlayerStats()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_GET_PLAYERSTATS_OFFSET))(this);
		}

		::System::Void set_PlayerStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>*))((::PBYTE)hIl2Cpp + GOOPPKCFNLM_SET_PLAYERSTATS_OFFSET))(this, a1);
		}

	};
