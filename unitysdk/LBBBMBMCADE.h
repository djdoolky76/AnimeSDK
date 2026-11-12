#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/RPG/Client/TextID.h"
class FHNIKPHKIOH;
class GBGMLPOAIFI;
class GKEPCDFBABH;
class HAIEHHIHIGC;
class LDFEDNEMOCD;
class LFIKNHJBDBJ;
class MGFFCMONLJG;
class MJCMGOEMKCC;
class NDPFAOKFLLJ;
class OBJANKHLNGO;
class PAMDEKPLLEL;
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LBBBMBMCADE_AMMICDENKIB_OFFSET UNITYSDK_OFFSET(0xBE80710)
#define LBBBMBMCADE_BDBPHGLPNMG_OFFSET UNITYSDK_OFFSET(0xBE80990)
#define LBBBMBMCADE_BEODKGHEPGH_OFFSET UNITYSDK_OFFSET(0xBE81720)
#define LBBBMBMCADE_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7F9D0)
#define LBBBMBMCADE_DHEOBABAHHP_OFFSET UNITYSDK_OFFSET(0xBE81980)
#define LBBBMBMCADE_DIAHEFHBIEH_OFFSET UNITYSDK_OFFSET(0xBE80DE0)
#define LBBBMBMCADE_DJEOAAEGLDL_OFFSET UNITYSDK_OFFSET(0xBE80630)
#define LBBBMBMCADE_FAGFEPPGHOG_OFFSET UNITYSDK_OFFSET(0xBE81240)
#define LBBBMBMCADE_FEANOPCNDLB_OFFSET UNITYSDK_OFFSET(0xBE7FB40)
#define LBBBMBMCADE_FMADDJOEGAI_OFFSET UNITYSDK_OFFSET(0xBE80830)
#define LBBBMBMCADE_GFCFMJMNDCA_OFFSET UNITYSDK_OFFSET(0xBE80B30)
#define LBBBMBMCADE_GHLHCDAKAJP_OFFSET UNITYSDK_OFFSET(0xBE81110)
#define LBBBMBMCADE_GOMEGKEGPEA_OFFSET UNITYSDK_OFFSET(0xBE812F0)
#define LBBBMBMCADE_IGFMKGADJHA_OFFSET UNITYSDK_OFFSET(0xBE80420)
#define LBBBMBMCADE_IMAKAIEGBJM_OFFSET UNITYSDK_OFFSET(0xBE804E0)
#define LBBBMBMCADE_JBDADPIOCEH_OFFSET UNITYSDK_OFFSET(0xBE80C90)
#define LBBBMBMCADE_JBHMMAJAGAG_OFFSET UNITYSDK_OFFSET(0xBE7FB90)
#define LBBBMBMCADE_JOHGIFEPEKF_OFFSET UNITYSDK_OFFSET(0xBE808A0)
#define LBBBMBMCADE_KBAMBOOHAMH_OFFSET UNITYSDK_OFFSET(0xBE809E0)
#define LBBBMBMCADE_LCGPGJGDMIG_OFFSET UNITYSDK_OFFSET(0xBE80C20)
#define LBBBMBMCADE_PMPBAAEDOJM_OFFSET UNITYSDK_OFFSET(0xBE81290)
#define LBBBMBMCADE_START_OFFSET UNITYSDK_OFFSET(0xBE802D0)
#define LBBBMBMCADE_STOP_OFFSET UNITYSDK_OFFSET(0xBE803B0)
#define LBBBMBMCADE__TRYREGISTERACTIVITYCLOSEMESSAGE_B__15_0_OFFSET UNITYSDK_OFFSET(0xBE81AC0)
#define LBBBMBMCADE___SENDFULLSYNC_B__16_0_OFFSET UNITYSDK_OFFSET(0xBE81B10)

inline static constexpr unsigned int LBBBMBMCADE_TypeDefinitionIndex = 84859;

	class LBBBMBMCADE : public ::System::Object
	{
	public:
		::FHNIKPHKIOH* FPNMIGDJBIE; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::Double>>* FLFCEMILGNB; // 0x18
		::NDPFAOKFLLJ* LHJCIFDPFCF; // 0x20
		::LDFEDNEMOCD* MJHHLOPFDNK; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MJCMGOEMKCC*>* NMJMKAKKNPE; // 0x30
		::System::Collections::Generic::List_1<::MJCMGOEMKCC*>* CJIINFGKHCM; // 0x38
		::RPG::Client::Promises::Promise* KNPJABDFCDF; // 0x40
		::OBJANKHLNGO* GJALMBBNNOF; // 0x48
		::System::Boolean HFFELMOEIOL; // 0x50
		::System::Boolean KMEHKIPDFGF; // 0x51
		::System::Boolean FEFDBMKGABN; // 0x52
		::System::Void _ctor(::LDFEDNEMOCD* a1, ::FHNIKPHKIOH* a2, ::OBJANKHLNGO* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LDFEDNEMOCD*, ::FHNIKPHKIOH*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MJCMGOEMKCC*>* FEANOPCNDLB()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MJCMGOEMKCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_FEANOPCNDLB_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_STOP_OFFSET))(this);
		}

		::MJCMGOEMKCC* IGFMKGADJHA(::System::UInt32 a1)
		{
			return ((::MJCMGOEMKCC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBBBMBMCADE_IGFMKGADJHA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* IMAKAIEGBJM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_IMAKAIEGBJM_OFFSET))(this);
		}

		::System::Void FMADDJOEGAI(::LFIKNHJBDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFIKNHJBDBJ*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_FMADDJOEGAI_OFFSET))(this, a1);
		}

		::System::Boolean JOHGIFEPEKF(::System::UInt32 a1, ::System::UInt32 a2, ::System::Double a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Double))((::PBYTE)hIl2Cpp + LBBBMBMCADE_JOHGIFEPEKF_OFFSET))(this, a1, a2, a3);
		}

		::NDPFAOKFLLJ* BDBPHGLPNMG()
		{
			return ((::NDPFAOKFLLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_BDBPHGLPNMG_OFFSET))(this);
		}

		::System::Boolean DJEOAAEGLDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_DJEOAAEGLDL_OFFSET))(this);
		}

		::RPG::Client::TextID KBAMBOOHAMH()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_KBAMBOOHAMH_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* GFCFMJMNDCA(::MGFFCMONLJG* a1)
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID, ::MGFFCMONLJG*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_GFCFMJMNDCA_OFFSET))(this, a1);
		}

		::System::Boolean LCGPGJGDMIG(::MGFFCMONLJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGFFCMONLJG*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_LCGPGJGDMIG_OFFSET))(this, a1);
		}

		::System::UInt32 JBDADPIOCEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_JBDADPIOCEH_OFFSET))(this);
		}

		::System::Void DIAHEFHBIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_DIAHEFHBIEH_OFFSET))(this);
		}

		::System::Void AMMICDENKIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_AMMICDENKIB_OFFSET))(this);
		}

		::System::Void FAGFEPPGHOG(::GKEPCDFBABH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKEPCDFBABH*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_FAGFEPPGHOG_OFFSET))(this, a1);
		}

		::System::Void PMPBAAEDOJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_PMPBAAEDOJM_OFFSET))(this);
		}

		::System::Void GHLHCDAKAJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_GHLHCDAKAJP_OFFSET))(this);
		}

		::System::Void GOMEGKEGPEA(::PAMDEKPLLEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAMDEKPLLEL*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_GOMEGKEGPEA_OFFSET))(this, a1);
		}

		::System::Void BEODKGHEPGH(::GBGMLPOAIFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBGMLPOAIFI*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_BEODKGHEPGH_OFFSET))(this, a1);
		}

		::System::Void DHEOBABAHHP(::System::UInt32 a1, ::HAIEHHIHIGC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::HAIEHHIHIGC*))((::PBYTE)hIl2Cpp + LBBBMBMCADE_DHEOBABAHHP_OFFSET))(this, a1, a2);
		}

		::System::Void JBHMMAJAGAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBBBMBMCADE_JBHMMAJAGAG_OFFSET))(this);
		}

		::System::Void _TryRegisterActivityCloseMessage_b__15_0(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + LBBBMBMCADE__TRYREGISTERACTIVITYCLOSEMESSAGE_B__15_0_OFFSET))(this, a1);
		}

		::System::Void __SendFullSync_b__16_0(::PAMDEKPLLEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAMDEKPLLEL*))((::PBYTE)hIl2Cpp + LBBBMBMCADE___SENDFULLSYNC_B__16_0_OFFSET))(this, a1);
		}

	};
