#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOFHFCGJHA.h"
class BHPDOLFOBCJ;
class JMJBBPILOIC;
class LBAHPOFBBAJ;
class MDJOFODHIMD;
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define JHECDIHOLFH_ABNKIIKKKAC_OFFSET UNITYSDK_OFFSET(0x19365000)
#define JHECDIHOLFH_AMPHOFLEPKA_OFFSET UNITYSDK_OFFSET(0x19365970)
#define JHECDIHOLFH_CHECKCANSKIP_OFFSET UNITYSDK_OFFSET(0x193651C0)
#define JHECDIHOLFH_CHECKISPLAYING_OFFSET UNITYSDK_OFFSET(0x19365100)
#define JHECDIHOLFH_CHECKISREPLAYING_OFFSET UNITYSDK_OFFSET(0x19365140)
#define JHECDIHOLFH_CPDNFOIBENE_OFFSET UNITYSDK_OFFSET(0x193659F0)
#define JHECDIHOLFH_CTOR_OFFSET UNITYSDK_OFFSET(0x19364C20)
#define JHECDIHOLFH_EDEMFFEJEHB_OFFSET UNITYSDK_OFFSET(0x193650B0)
#define JHECDIHOLFH_EGCDPKEOBPH_OFFSET UNITYSDK_OFFSET(0x19365B70)
#define JHECDIHOLFH_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x19365460)
#define JHECDIHOLFH_GADDJBNDLFL_OFFSET UNITYSDK_OFFSET(0x19365D00)
#define JHECDIHOLFH_GELGBAMKKOG_OFFSET UNITYSDK_OFFSET(0x19365860)
#define JHECDIHOLFH_HLHDLLKNOKH_OFFSET UNITYSDK_OFFSET(0x19365750)
#define JHECDIHOLFH_IABLEODFFKK_OFFSET UNITYSDK_OFFSET(0x19364FB0)
#define JHECDIHOLFH_IDOBHAKELJJ_OFFSET UNITYSDK_OFFSET(0x19364F60)
#define JHECDIHOLFH_LFPFOPBCLCJ_OFFSET UNITYSDK_OFFSET(0x193658B0)
#define JHECDIHOLFH_MPDOBFNJHEO_OFFSET UNITYSDK_OFFSET(0x19365B10)
#define JHECDIHOLFH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19364E20)
#define JHECDIHOLFH_REPLAY_OFFSET UNITYSDK_OFFSET(0x19365180)
#define JHECDIHOLFH_TRYSKIP_OFFSET UNITYSDK_OFFSET(0x19365310)

inline static constexpr unsigned int JHECDIHOLFH_TypeDefinitionIndex = 74497;

	class JHECDIHOLFH : public ::BLOFHFCGJHA
	{
	public:
		::System::Collections::Generic::Queue_1<::MDJOFODHIMD*>* GCDKBALKCFI; // 0x20
		::MDJOFODHIMD* EOMLMNOEKDJ; // 0x28
		::System::Boolean PPOMEPFFDNP; // 0x30
		::System::Boolean OFEPHLEKKCD; // 0x31
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
