#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOOPPKCFNLM_CatStatType.h"
#include "unitysdk/GOOPPKCFNLM_ModifyType.h"
#include "unitysdk/System/Object.h"
class PBGNKMMDBGD;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GOOPPKCFNLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6483C0)
#define GOOPPKCFNLM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6484E0)
#define GOOPPKCFNLM_DPAODJHLDAA_OFFSET UNITYSDK_OFFSET(0x1C649700)
#define GOOPPKCFNLM_FFDEJANPJBO_OFFSET UNITYSDK_OFFSET(0x1C648BE0)
#define GOOPPKCFNLM_FPDIIJOFKLI_OFFSET UNITYSDK_OFFSET(0x1C649500)
#define GOOPPKCFNLM_GABEFLEDMAN_OFFSET UNITYSDK_OFFSET(0x1C648D90)
#define GOOPPKCFNLM_GET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x1C64BB10)
#define GOOPPKCFNLM_GET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x1C64BB30)
#define GOOPPKCFNLM_HNPGCLNBPGM_OFFSET UNITYSDK_OFFSET(0x1C64A190)
#define GOOPPKCFNLM_IEAACLGMBHM_OFFSET UNITYSDK_OFFSET(0x1C627C40)
#define GOOPPKCFNLM_JDJOKOCAKPP_OFFSET UNITYSDK_OFFSET(0x1C646B70)
#define GOOPPKCFNLM_JKIKLOBBILC_OFFSET UNITYSDK_OFFSET(0x1C648530)
#define GOOPPKCFNLM_KDGMOMKDDAF_OFFSET UNITYSDK_OFFSET(0x1C648F30)
#define GOOPPKCFNLM_NAPHOIMDDJO_OFFSET UNITYSDK_OFFSET(0x1C649110)
#define GOOPPKCFNLM_OEBFBJOJJLI_OFFSET UNITYSDK_OFFSET(0x1C649760)
#define GOOPPKCFNLM_SET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x1C64BB20)
#define GOOPPKCFNLM_SET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x1C64BB40)

inline static constexpr unsigned int GOOPPKCFNLM_TypeDefinitionIndex = 37327;

	class GOOPPKCFNLM : public ::System::Object
	{
	public:
		::System::String* HNEPHOKFEFC; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _PlayerStats_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* _CatStats_k__BackingField; // 0x20
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x28
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
