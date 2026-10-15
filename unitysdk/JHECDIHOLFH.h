#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOFHFCGJHA.h"
class BHPDOLFOBCJ;
class JMJBBPILOIC;
class LBAHPOFBBAJ;
class MDJOFODHIMD;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JHECDIHOLFH_ABNKIIKKKAC_OFFSET UNITYSDK_OFFSET(0xB1AC240)
#define JHECDIHOLFH_AMPHOFLEPKA_OFFSET UNITYSDK_OFFSET(0xB1ACBB0)
#define JHECDIHOLFH_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0xB1AC400)
#define JHECDIHOLFH_CHECKISPLAYING_OFFSET UNITYSDK_OFFSET(0xB1AC340)
#define JHECDIHOLFH_CHECKISREPLAYING_OFFSET UNITYSDK_OFFSET(0xB1AC380)
#define JHECDIHOLFH_CPDNFOIBENE_OFFSET UNITYSDK_OFFSET(0xB1ACC30)
#define JHECDIHOLFH_CTOR_OFFSET UNITYSDK_OFFSET(0xB1ABE60)
#define JHECDIHOLFH_EDEMFFEJEHB_OFFSET UNITYSDK_OFFSET(0xB1AC2F0)
#define JHECDIHOLFH_EGCDPKEOBPH_OFFSET UNITYSDK_OFFSET(0xB1ACDB0)
#define JHECDIHOLFH_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xB1AC6A0)
#define JHECDIHOLFH_GADDJBNDLFL_OFFSET UNITYSDK_OFFSET(0xB1ACF40)
#define JHECDIHOLFH_GELGBAMKKOG_OFFSET UNITYSDK_OFFSET(0xB1ACAA0)
#define JHECDIHOLFH_HLHDLLKNOKH_OFFSET UNITYSDK_OFFSET(0xB1AC990)
#define JHECDIHOLFH_IABLEODFFKK_OFFSET UNITYSDK_OFFSET(0xB1AC1F0)
#define JHECDIHOLFH_IDOBHAKELJJ_OFFSET UNITYSDK_OFFSET(0xB1AC1A0)
#define JHECDIHOLFH_LFPFOPBCLCJ_OFFSET UNITYSDK_OFFSET(0xB1ACAF0)
#define JHECDIHOLFH_MPDOBFNJHEO_OFFSET UNITYSDK_OFFSET(0xB1ACD50)
#define JHECDIHOLFH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB1AC060)
#define JHECDIHOLFH_REPLAY_OFFSET UNITYSDK_OFFSET(0xB1AC3C0)
#define JHECDIHOLFH_TRYSKIP_OFFSET UNITYSDK_OFFSET(0xB1AC550)

inline static constexpr unsigned int JHECDIHOLFH_TypeDefinitionIndex = 72419;

	class JHECDIHOLFH : public ::BLOFHFCGJHA
	{
	public:
		::System::Collections::Generic::Queue_1<::MDJOFODHIMD*>* GCDKBALKCFI; // 0x20
		::MDJOFODHIMD* EOMLMNOEKDJ; // 0x28
		::System::Boolean OFEPHLEKKCD; // 0x30
		::System::Boolean PPOMEPFFDNP; // 0x31
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHECDIHOLFH_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Boolean CheckIsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_CHECKISPLAYING_OFFSET))(this);
		}

		::System::Boolean CheckIsReplaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_CHECKISREPLAYING_OFFSET))(this);
		}

		::System::Void Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_REPLAY_OFFSET))(this);
		}

		::System::Boolean CheckCanSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_CHECKCANSKIP_OFFSET))(this);
		}

		::System::Boolean TrySkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_TRYSKIP_OFFSET))(this);
		}

		::System::Void ForceSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_FORCESKIP_OFFSET))(this);
		}

		::System::Void GELGBAMKKOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_GELGBAMKKOG_OFFSET))(this);
		}

		::System::Void AMPHOFLEPKA(::LBAHPOFBBAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LBAHPOFBBAJ*))((::PBYTE)hIl2Cpp + JHECDIHOLFH_AMPHOFLEPKA_OFFSET))(this, a1);
		}

		::System::Void CPDNFOIBENE(::BHPDOLFOBCJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPDOLFOBCJ*))((::PBYTE)hIl2Cpp + JHECDIHOLFH_CPDNFOIBENE_OFFSET))(this, a1);
		}

		::System::Void MPDOBFNJHEO(::JMJBBPILOIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMJBBPILOIC*))((::PBYTE)hIl2Cpp + JHECDIHOLFH_MPDOBFNJHEO_OFFSET))(this, a1);
		}

		::System::Void EGCDPKEOBPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_EGCDPKEOBPH_OFFSET))(this);
		}

		::System::Void LFPFOPBCLCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_LFPFOPBCLCJ_OFFSET))(this);
		}

		::System::Boolean IDOBHAKELJJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_IDOBHAKELJJ_OFFSET))(this);
		}

		::System::Void IABLEODFFKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_IABLEODFFKK_OFFSET))(this);
		}

		::System::Void ABNKIIKKKAC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHECDIHOLFH_ABNKIIKKKAC_OFFSET))(this, a1);
		}

		::System::Void EDEMFFEJEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_EDEMFFEJEHB_OFFSET))(this);
		}

		::System::Void GADDJBNDLFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHECDIHOLFH_GADDJBNDLFL_OFFSET))(this);
		}

		::System::Void HLHDLLKNOKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHECDIHOLFH_HLHDLLKNOKH_OFFSET))(this, a1);
		}

	};
