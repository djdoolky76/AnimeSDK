#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"
class AGKHOGNMPMO;
class CBEBICGIOAB;
class GGJFAFONDHN;
class ODGPPIHLOFF;
class ONCAOGIEEIG;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDDAELGEKFF_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x162E2550)
#define BDDAELGEKFF_ACDCFENLKCB_OFFSET UNITYSDK_OFFSET(0x162E3800)
#define BDDAELGEKFF_AEBDLCKFJCO_OFFSET UNITYSDK_OFFSET(0x162E48B0)
#define BDDAELGEKFF_ALMBHCMPKNF_OFFSET UNITYSDK_OFFSET(0x162E1830)
#define BDDAELGEKFF_BLAMBCJBILN_1_OFFSET UNITYSDK_OFFSET(0x162E4460)
#define BDDAELGEKFF_BLAMBCJBILN_OFFSET UNITYSDK_OFFSET(0x162E3F90)
#define BDDAELGEKFF_BNBIBNMHAOF_OFFSET UNITYSDK_OFFSET(0x162E1980)
#define BDDAELGEKFF_BPEDDFIGPHG_OFFSET UNITYSDK_OFFSET(0x162E4BF0)
#define BDDAELGEKFF_CCJPDHADIAE_OFFSET UNITYSDK_OFFSET(0x162E18D0)
#define BDDAELGEKFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x162E4F70)
#define BDDAELGEKFF_COLFKNCHHJP_OFFSET UNITYSDK_OFFSET(0x162E1FC0)
#define BDDAELGEKFF_CPNJHKIELCN_OFFSET UNITYSDK_OFFSET(0x162E4590)
#define BDDAELGEKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x162E4D40)
#define BDDAELGEKFF_DMEDLCMMIJA_OFFSET UNITYSDK_OFFSET(0x162E1310)
#define BDDAELGEKFF_EBJEBCKCFAI_OFFSET UNITYSDK_OFFSET(0x162E3C80)
#define BDDAELGEKFF_EDHHBOFCOBA_OFFSET UNITYSDK_OFFSET(0x162E2A10)
#define BDDAELGEKFF_FGFDGBDLOLO_OFFSET UNITYSDK_OFFSET(0x162E3DB0)
#define BDDAELGEKFF_FKFDNJBDHAL_OFFSET UNITYSDK_OFFSET(0x162E1510)
#define BDDAELGEKFF_GANCBMHHDGL_OFFSET UNITYSDK_OFFSET(0x162E3EB0)
#define BDDAELGEKFF_GBPAFKOGLJE_OFFSET UNITYSDK_OFFSET(0x162E16D0)
#define BDDAELGEKFF_GNNODDNJJCB_OFFSET UNITYSDK_OFFSET(0x162E4760)
#define BDDAELGEKFF_HDADLKMMNJB_OFFSET UNITYSDK_OFFSET(0x162E4150)
#define BDDAELGEKFF_HDKIGPHNMEM_OFFSET UNITYSDK_OFFSET(0x162E39E0)
#define BDDAELGEKFF_IOOHKPNEJMB_OFFSET UNITYSDK_OFFSET(0x162E3A90)
#define BDDAELGEKFF_JJLHOLDGEAH_OFFSET UNITYSDK_OFFSET(0x162E10F0)
#define BDDAELGEKFF_KCPAPAGCDAA_OFFSET UNITYSDK_OFFSET(0x162E4950)
#define BDDAELGEKFF_KDCAFMIAALF_OFFSET UNITYSDK_OFFSET(0x162E3210)
#define BDDAELGEKFF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x162E2200)
#define BDDAELGEKFF_LGNHCKNEIAG_OFFSET UNITYSDK_OFFSET(0x162E13C0)
#define BDDAELGEKFF_LIDOHKLGAGN_OFFSET UNITYSDK_OFFSET(0x162E1C30)
#define BDDAELGEKFF_LJOGPJFGEDL_OFFSET UNITYSDK_OFFSET(0x162E2AB0)
#define BDDAELGEKFF_LLINLKHGCJA_OFFSET UNITYSDK_OFFSET(0x162E26E0)
#define BDDAELGEKFF_LMGFGNBEPKL_OFFSET UNITYSDK_OFFSET(0x162E1C90)
#define BDDAELGEKFF_LNHEOALDNGH_OFFSET UNITYSDK_OFFSET(0x162E1A40)
#define BDDAELGEKFF_MLIHFHGDAPO_OFFSET UNITYSDK_OFFSET(0x162E1630)
#define BDDAELGEKFF_NAONJFILFHJ_OFFSET UNITYSDK_OFFSET(0x162E1100)
#define BDDAELGEKFF_NBPDFLMCOIL_OFFSET UNITYSDK_OFFSET(0x162E38B0)
#define BDDAELGEKFF_NFKCINJOEPG_OFFSET UNITYSDK_OFFSET(0x162E11E0)
#define BDDAELGEKFF_NGEIHDNKKGN_OFFSET UNITYSDK_OFFSET(0x162E1590)
#define BDDAELGEKFF_OGDFFNBFJCJ_OFFSET UNITYSDK_OFFSET(0x162E3C10)
#define BDDAELGEKFF_OPGMGEDGJIM_1_OFFSET UNITYSDK_OFFSET(0x162E4AB0)
#define BDDAELGEKFF_OPGMGEDGJIM_OFFSET UNITYSDK_OFFSET(0x162E1270)
#define BDDAELGEKFF_PDOPJNBJOCI_OFFSET UNITYSDK_OFFSET(0x162E2920)
#define BDDAELGEKFF_PPABMJFMOHN_OFFSET UNITYSDK_OFFSET(0x162E1DB0)
#define BDDAELGEKFF_PPAMKAAHJHE_OFFSET UNITYSDK_OFFSET(0x162E4650)
#define BDDAELGEKFF__REFRESHHOLDLAYER_B__51_0_OFFSET UNITYSDK_OFFSET(0x162E4FD0)

inline static constexpr unsigned int BDDAELGEKFF_TypeDefinitionIndex = 49444;

	class BDDAELGEKFF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ONCAOGIEEIG*>* HHFPDLJEJNE; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>* APDHIPDCDEE; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>* HEOHFBCDCBE; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>* FJOIAHCOCBL; // 0x28
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::EnviromentControlPriority>* AFKGKPPHFPN; // 0x30
		::RPG::GameCore::EnviromentControlPriority KPKPEANHMJI; // 0x38
		static ::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>** StaticGet_ENKGNBPNHLJ()
		{
			return (::System::Action_3<::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*>**)UnitySDK::FromName("", "BDDAELGEKFF")->GetStaticField(0x68A60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDDAELGEKFF_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::ONCAOGIEEIG*>* JJLHOLDGEAH()
		{
			return ((::System::Collections::Generic::List_1<::ONCAOGIEEIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_JJLHOLDGEAH_OFFSET))(this);
		}

		::System::Void NAONJFILFHJ(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2, ::GGJFAFONDHN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_NAONJFILFHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OPGMGEDGJIM(::GGJFAFONDHN* a1, ::GGJFAFONDHN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_OPGMGEDGJIM_OFFSET))(this, a1, a2);
		}

		::ONCAOGIEEIG* NFKCINJOEPG(::System::Int32 a1)
		{
			return ((::ONCAOGIEEIG*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDAELGEKFF_NFKCINJOEPG_OFFSET))(this, a1);
		}

		::System::Boolean DMEDLCMMIJA(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_DMEDLCMMIJA_OFFSET))(this, a1, a2);
		}

		::System::Boolean LGNHCKNEIAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDAELGEKFF_LGNHCKNEIAG_OFFSET))(this, a1);
		}

		::System::Int32 NGEIHDNKKGN(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDAELGEKFF_NGEIHDNKKGN_OFFSET))(this, a1);
		}

		::System::Int32 MLIHFHGDAPO(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDAELGEKFF_MLIHFHGDAPO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EnviromentControlPriority>* GBPAFKOGLJE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EnviromentControlPriority>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_GBPAFKOGLJE_OFFSET))(this);
		}

		::System::Void ALMBHCMPKNF(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_ALMBHCMPKNF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* BNBIBNMHAOF(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_BNBIBNMHAOF_OFFSET))(this, a1);
		}

		::System::Boolean LNHEOALDNGH(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_LNHEOALDNGH_OFFSET))(this, a1);
		}

		::RPG::GameCore::EnviromentControlPriority FKFDNJBDHAL()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_FKFDNJBDHAL_OFFSET))(this);
		}

		::RPG::GameCore::EnviromentControlPriority LMGFGNBEPKL()
		{
			return ((::RPG::GameCore::EnviromentControlPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_LMGFGNBEPKL_OFFSET))(this);
		}

		::System::Void PPABMJFMOHN(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_PPABMJFMOHN_OFFSET))(this, a1, a2);
		}

		::System::Void COLFKNCHHJP(::RPG::GameCore::EnviromentControlPriority a1, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_COLFKNCHHJP_OFFSET))(this, a1, a2);
		}

		::System::Boolean LIDOHKLGAGN(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_LIDOHKLGAGN_OFFSET))(this, a1);
		}

		::System::Boolean CCJPDHADIAE(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_CCJPDHADIAE_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void LLINLKHGCJA(::RPG::GameCore::EnviromentControlPriority a1, ::EnviromentSystemV2Space::OutputType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::EnviromentSystemV2Space::OutputType))((::PBYTE)hIl2Cpp + BDDAELGEKFF_LLINLKHGCJA_OFFSET))(this, a1, a2);
		}

		::System::Void PDOPJNBJOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_PDOPJNBJOCI_OFFSET))(this);
		}

		::ODGPPIHLOFF* EDHHBOFCOBA(::System::Collections::Generic::List_1<::GGJFAFONDHN*>* a1, ::RPG::GameCore::EnviromentControlPriority a2, ::CBEBICGIOAB* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Action* a5)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>*, ::RPG::GameCore::EnviromentControlPriority, ::CBEBICGIOAB*, ::EnviromentSystemV2Space::OutputType, ::System::Action*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_EDHHBOFCOBA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::ODGPPIHLOFF* ACDCFENLKCB(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2, ::CBEBICGIOAB* a3, ::EnviromentSystemV2Space::OutputType a4, ::System::Boolean a5, ::System::Action* a6)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean, ::CBEBICGIOAB*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_ACDCFENLKCB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LJOGPJFGEDL(::System::Collections::Generic::List_1<::GGJFAFONDHN*>* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GGJFAFONDHN*>*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_LJOGPJFGEDL_OFFSET))(this, a1, a2);
		}

		::System::Void NBPDFLMCOIL(::RPG::GameCore::EnviromentControlPriority a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::System::Boolean))((::PBYTE)hIl2Cpp + BDDAELGEKFF_NBPDFLMCOIL_OFFSET))(this, a1, a2);
		}

		static ::System::Void HDKIGPHNMEM(::System::Int64 a1, ::System::Boolean a2, ::AGKHOGNMPMO* a3)
		{
			return ((::System::Void(*)(::System::Int64, ::System::Boolean, ::AGKHOGNMPMO*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_HDKIGPHNMEM_OFFSET))(a1, a2, a3);
		}

		::ODGPPIHLOFF* KDCAFMIAALF(::CBEBICGIOAB* a1, ::EnviromentSystemV2Space::OutputType a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::CBEBICGIOAB*, ::EnviromentSystemV2Space::OutputType, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_KDCAFMIAALF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IOOHKPNEJMB(::GGJFAFONDHN* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::System::Boolean))((::PBYTE)hIl2Cpp + BDDAELGEKFF_IOOHKPNEJMB_OFFSET))(this, a1, a2);
		}

		::GGJFAFONDHN* OGDFFNBFJCJ(::System::Int32 a1)
		{
			return ((::GGJFAFONDHN*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDAELGEKFF_OGDFFNBFJCJ_OFFSET))(this, a1);
		}

		::System::Void FGFDGBDLOLO(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + BDDAELGEKFF_FGFDGBDLOLO_OFFSET))(this, a1, a2);
		}

		static ::GGJFAFONDHN* EBJEBCKCFAI(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>* a2)
		{
			return ((::GGJFAFONDHN*(*)(::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGJFAFONDHN*>*))((::PBYTE)hIl2Cpp + BDDAELGEKFF_EBJEBCKCFAI_OFFSET))(a1, a2);
		}

		::System::Void GANCBMHHDGL(::GGJFAFONDHN* a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_GANCBMHHDGL_OFFSET))(this, a1, a2);
		}

		::System::Void BLAMBCJBILN(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_BLAMBCJBILN_OFFSET))(this, a1);
		}

		::System::Void HDADLKMMNJB(::System::Int32 a1, ::RPG::GameCore::EnviromentControlPriority a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF_HDADLKMMNJB_OFFSET))(this, a1, a2);
		}

		::System::Void BLAMBCJBILN_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_BLAMBCJBILN_1_OFFSET))(this);
		}

		::System::Void CPNJHKIELCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_CPNJHKIELCN_OFFSET))(this);
		}

		::System::Void PPAMKAAHJHE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDDAELGEKFF_PPAMKAAHJHE_OFFSET))(this, a1);
		}

		::System::Void GNNODDNJJCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_GNNODDNJJCB_OFFSET))(this);
		}

		::System::Void AEBDLCKFJCO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDDAELGEKFF_AEBDLCKFJCO_OFFSET))(this, a1);
		}

		::EnviromentSystemV2Space::PropertyType KCPAPAGCDAA(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_KCPAPAGCDAA_OFFSET))(this, a1);
		}

		::System::Void OPGMGEDGJIM_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_OPGMGEDGJIM_1_OFFSET))(this);
		}

		::System::Void BPEDDFIGPHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDAELGEKFF_BPEDDFIGPHG_OFFSET))(this);
		}

		::System::Boolean _RefreshHoldLayer_b__51_0(::RPG::GameCore::EnviromentControlPriority a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority))((::PBYTE)hIl2Cpp + BDDAELGEKFF__REFRESHHOLDLAYER_B__51_0_OFFSET))(this, a1);
		}

	};
