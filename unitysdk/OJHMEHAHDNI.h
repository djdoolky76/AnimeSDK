#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDHINPLKOPK;
class CFEFOGNGCMH;
class DCNNAGMLENM;
class EHNCBICHIGP;
class GNOCLCNNAPD;
class IDCOJJANCCK;
class JLJMMKPGDGH;
class JNNPOLGAAHB;
class KBKFLNHFHPF;
class KHKFODPFGEA;
class MDJGEHDPFPI;
class NBAGBJEKGNK;
class PANDNBODLAP;
class PJAPDCPOBGC;
class PPEJPEMHNAO;
namespace RPG::Client { class RaidModule; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJHMEHAHDNI_AODFDAMLGNJ_OFFSET UNITYSDK_OFFSET(0xBEB8B90)
#define OJHMEHAHDNI_BBEECIABFBE_OFFSET UNITYSDK_OFFSET(0xBEB81F0)
#define OJHMEHAHDNI_CJNCDIMHNPI_OFFSET UNITYSDK_OFFSET(0xBEB9440)
#define OJHMEHAHDNI_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB9D30)
#define OJHMEHAHDNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB8A50)
#define OJHMEHAHDNI_DKAMOMNGKBO_OFFSET UNITYSDK_OFFSET(0xBEB7C40)
#define OJHMEHAHDNI_DKJMOAKJHJJ_OFFSET UNITYSDK_OFFSET(0xBEB80D0)
#define OJHMEHAHDNI_ELFMKOPHLOC_OFFSET UNITYSDK_OFFSET(0xBEB7F90)
#define OJHMEHAHDNI_FGNNLKDECCA_OFFSET UNITYSDK_OFFSET(0xBEB8BF0)
#define OJHMEHAHDNI_FGOHHAMAIIE_OFFSET UNITYSDK_OFFSET(0xBEB9290)
#define OJHMEHAHDNI_FPPEBKCCBIO_OFFSET UNITYSDK_OFFSET(0xBEB8F70)
#define OJHMEHAHDNI_GET_MATCHFLOWSERVICE_OFFSET UNITYSDK_OFFSET(0xBEB7760)
#define OJHMEHAHDNI_GGGDDCFHJNI_OFFSET UNITYSDK_OFFSET(0xBEB8030)
#define OJHMEHAHDNI_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0xBEB7780)
#define OJHMEHAHDNI_HCPAGBODMFM_OFFSET UNITYSDK_OFFSET(0xBEB8260)
#define OJHMEHAHDNI_HKIMMGHGGKP_OFFSET UNITYSDK_OFFSET(0xBEB8340)
#define OJHMEHAHDNI_IKICLMJFJME_OFFSET UNITYSDK_OFFSET(0xBEB9AC0)
#define OJHMEHAHDNI_JHGKBANJIDE_OFFSET UNITYSDK_OFFSET(0xBEB9BF0)
#define OJHMEHAHDNI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBEB9190)
#define OJHMEHAHDNI_LBOPKJLCIHB_OFFSET UNITYSDK_OFFSET(0xBEB9760)
#define OJHMEHAHDNI_MBAFLKGCPLD_OFFSET UNITYSDK_OFFSET(0xBEB8CA0)
#define OJHMEHAHDNI_NIMGOOFHCLG_OFFSET UNITYSDK_OFFSET(0xBEB8480)
#define OJHMEHAHDNI_OCJPCNLJKDC_OFFSET UNITYSDK_OFFSET(0xBEB9560)
#define OJHMEHAHDNI_OHEGAFONEED_OFFSET UNITYSDK_OFFSET(0xBEB7880)
#define OJHMEHAHDNI_OMEHNHMOPDP_OFFSET UNITYSDK_OFFSET(0xBEB9950)
#define OJHMEHAHDNI_ONFGDPKEJKD_OFFSET UNITYSDK_OFFSET(0xBEB7ED0)
#define OJHMEHAHDNI_SET_MATCHFLOWSERVICE_OFFSET UNITYSDK_OFFSET(0xBEB7770)
#define OJHMEHAHDNI_START_OFFSET UNITYSDK_OFFSET(0xBEB8710)
#define OJHMEHAHDNI_STOP_OFFSET UNITYSDK_OFFSET(0xBEB8880)
#define OJHMEHAHDNI__STARTCYCLEASYNC_B__31_0_OFFSET UNITYSDK_OFFSET(0xBEB9D40)
#define OJHMEHAHDNI__STARTCYCLEASYNC_B__31_1_OFFSET UNITYSDK_OFFSET(0xBEB9DB0)
#define OJHMEHAHDNI___ONMAPCREATED_B__34_0_OFFSET UNITYSDK_OFFSET(0xBEB9DF0)

inline static constexpr unsigned int OJHMEHAHDNI_TypeDefinitionIndex = 81730;

	class OJHMEHAHDNI : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* OMDHLKPAGPI; // 0x10
		::IDCOJJANCCK* MPFFGNPIDOA; // 0x18
		::GNOCLCNNAPD* BJCIIJFDINF; // 0x20
		::KBKFLNHFHPF* APIINPIAPFI; // 0x28
		::DCNNAGMLENM* GOLMEABPOHP; // 0x30
		::JLJMMKPGDGH* MJHHLOPFDNK; // 0x38
		::EHNCBICHIGP* PGJDKJPNJFN; // 0x40
		::BDHINPLKOPK* GKLKOIJJEKJ; // 0x48
		::CFEFOGNGCMH* _MatchFlowService_k__BackingField; // 0x50
		::NBAGBJEKGNK* MKMLLLNBNCI; // 0x58
		::PJAPDCPOBGC* FCCMAEFHDIA; // 0x60
		::PPEJPEMHNAO* APPIHABBCGK; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_CTOR_OFFSET))(this);
		}

		::CFEFOGNGCMH* get_MatchFlowService()
		{
			return ((::CFEFOGNGCMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_GET_MATCHFLOWSERVICE_OFFSET))(this);
		}

		::System::Void set_MatchFlowService(::CFEFOGNGCMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFEFOGNGCMH*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_SET_MATCHFLOWSERVICE_OFFSET))(this, a1);
		}

		::System::Boolean GMHFMPLLPDL(::DCNNAGMLENM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCNNAGMLENM*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_GMHFMPLLPDL_OFFSET))(this, a1);
		}

		::System::Void OHEGAFONEED(::DCNNAGMLENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNNAGMLENM*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_OHEGAFONEED_OFFSET))(this, a1);
		}

		::System::Void DKAMOMNGKBO(::DCNNAGMLENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNNAGMLENM*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_DKAMOMNGKBO_OFFSET))(this, a1);
		}

		static ::System::Boolean ONFGDPKEJKD(::RPG::Client::RaidModule* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::RaidModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_ONFGDPKEJKD_OFFSET))(a1, a2);
		}

		::System::Void ELFMKOPHLOC(::DCNNAGMLENM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNNAGMLENM*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_ELFMKOPHLOC_OFFSET))(this, a1);
		}

		::System::Void DKJMOAKJHJJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_DKJMOAKJHJJ_OFFSET))(this, a1);
		}

		::System::Void BBEECIABFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_BBEECIABFBE_OFFSET))(this);
		}

		::System::Void GGGDDCFHJNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_GGGDDCFHJNI_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* HCPAGBODMFM()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_HCPAGBODMFM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* HKIMMGHGGKP()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_HKIMMGHGGKP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NIMGOOFHCLG()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_NIMGOOFHCLG_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_STOP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FGNNLKDECCA(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_FGNNLKDECCA_OFFSET))(this, a1);
		}

		::System::Void FPPEBKCCBIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_FPPEBKCCBIO_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* FGOHHAMAIIE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_FGOHHAMAIIE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void CJNCDIMHNPI(::KHKFODPFGEA* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHKFODPFGEA*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_CJNCDIMHNPI_OFFSET))(this, a1, a2);
		}

		::System::Void OCJPCNLJKDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_OCJPCNLJKDC_OFFSET))(this, a1);
		}

		::System::Void LBOPKJLCIHB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_LBOPKJLCIHB_OFFSET))(this, a1);
		}

		::System::Void AODFDAMLGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_AODFDAMLGNJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MBAFLKGCPLD(::System::String* a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_MBAFLKGCPLD_OFFSET))(this, a1, a2);
		}

		::System::Void OMEHNHMOPDP(::JNNPOLGAAHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNNPOLGAAHB*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_OMEHNHMOPDP_OFFSET))(this, a1);
		}

		::System::Void JHGKBANJIDE(::MDJGEHDPFPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDJGEHDPFPI*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_JHGKBANJIDE_OFFSET))(this, a1);
		}

		::System::Void IKICLMJFJME(::PANDNBODLAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANDNBODLAP*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI_IKICLMJFJME_OFFSET))(this, a1);
		}

		::System::Void _StartCycleAsync_b__31_0(::PANDNBODLAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PANDNBODLAP*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI__STARTCYCLEASYNC_B__31_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _StartCycleAsync_b__31_1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI__STARTCYCLEASYNC_B__31_1_OFFSET))(this);
		}

		::System::Void __OnMapCreated_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___ONMAPCREATED_B__34_0_OFFSET))(this);
		}

	};
