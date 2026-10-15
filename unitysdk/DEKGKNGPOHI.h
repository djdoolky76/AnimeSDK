#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
class AKCBJBGMPNC;
class FHOLDPBFDLO;
class HNIICFCDBGB;
class IMHNJGALBDG;
class KBGKAMMKDCE;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DEKGKNGPOHI_ACDGPABGIFE_OFFSET UNITYSDK_OFFSET(0xE5140C0)
#define DEKGKNGPOHI_AEGJCIGEHED_OFFSET UNITYSDK_OFFSET(0xE5154E0)
#define DEKGKNGPOHI_AJDCANKOGBK_OFFSET UNITYSDK_OFFSET(0xE513CF0)
#define DEKGKNGPOHI_BDIEOHAPKGC_OFFSET UNITYSDK_OFFSET(0xE5158C0)
#define DEKGKNGPOHI_BGMDKAECGNE_OFFSET UNITYSDK_OFFSET(0xE515EF0)
#define DEKGKNGPOHI_CCTOR_OFFSET UNITYSDK_OFFSET(0xE516BE0)
#define DEKGKNGPOHI_CTOR_OFFSET UNITYSDK_OFFSET(0xE513D40)
#define DEKGKNGPOHI_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xE515170)
#define DEKGKNGPOHI_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xE5167E0)
#define DEKGKNGPOHI_DOFMEOAHABE_OFFSET UNITYSDK_OFFSET(0xE5155F0)
#define DEKGKNGPOHI_EBDHJDLHNON_OFFSET UNITYSDK_OFFSET(0xE516070)
#define DEKGKNGPOHI_ECDDKACHMPF_OFFSET UNITYSDK_OFFSET(0xE5163D0)
#define DEKGKNGPOHI_EJPICBFCJEI_OFFSET UNITYSDK_OFFSET(0xE514020)
#define DEKGKNGPOHI_ELDIKCEFHLB_OFFSET UNITYSDK_OFFSET(0xE515200)
#define DEKGKNGPOHI_EMDOFIBOJJH_OFFSET UNITYSDK_OFFSET(0xE516310)
#define DEKGKNGPOHI_EMOMPIBLCOO_OFFSET UNITYSDK_OFFSET(0xE516240)
#define DEKGKNGPOHI_ENOFMLEPAHC_OFFSET UNITYSDK_OFFSET(0xE515A10)
#define DEKGKNGPOHI_FFEOOBGDLCN_OFFSET UNITYSDK_OFFSET(0xE516730)
#define DEKGKNGPOHI_GCJBMGDPDFG_OFFSET UNITYSDK_OFFSET(0xE516960)
#define DEKGKNGPOHI_GLPNDKECPJB_OFFSET UNITYSDK_OFFSET(0xE514CA0)
#define DEKGKNGPOHI_IAAOCKOEJEN_OFFSET UNITYSDK_OFFSET(0xE515720)
#define DEKGKNGPOHI_JDDHAIEOPKN_OFFSET UNITYSDK_OFFSET(0xE515770)
#define DEKGKNGPOHI_JLFLBLBEHEL_OFFSET UNITYSDK_OFFSET(0xE5152E0)
#define DEKGKNGPOHI_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0xE5168A0)
#define DEKGKNGPOHI_KJENKNDONNL_OFFSET UNITYSDK_OFFSET(0xE515400)
#define DEKGKNGPOHI_LHMCNGLPNGM_OFFSET UNITYSDK_OFFSET(0xE513B80)
#define DEKGKNGPOHI_LHMOBPFNLAF_OFFSET UNITYSDK_OFFSET(0xE513C70)
#define DEKGKNGPOHI_LKCJDGEHBIG_OFFSET UNITYSDK_OFFSET(0xE514570)
#define DEKGKNGPOHI_NLHCGMDBKCB_OFFSET UNITYSDK_OFFSET(0xE516B90)
#define DEKGKNGPOHI_NMCNHOPDFPI_OFFSET UNITYSDK_OFFSET(0xE515BF0)
#define DEKGKNGPOHI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xE514760)
#define DEKGKNGPOHI_ONIJAOKLMNC_OFFSET UNITYSDK_OFFSET(0xE5165B0)
#define DEKGKNGPOHI_OODNNFMLDCH_OFFSET UNITYSDK_OFFSET(0xE514F70)
#define DEKGKNGPOHI_PMAAMFLFLCL_OFFSET UNITYSDK_OFFSET(0xE515D70)

inline static constexpr unsigned int DEKGKNGPOHI_TypeDefinitionIndex = 69222;

	class DEKGKNGPOHI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HNIICFCDBGB*>* MDKIMAKNDAH; // 0x10
		::System::Collections::Generic::List_1<::HNIICFCDBGB*>* AOFKNONOOLG; // 0x18
		::System::Collections::Generic::List_1<::IMHNJGALBDG*>* EBCMIBHOJFF; // 0x20
		::System::Collections::Generic::List_1<::IMHNJGALBDG*>* HJKJGLPLBBL; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::IMHNJGALBDG*>* PGLPLEJPMAH; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AKCBJBGMPNC*>* OCJJJIFPIBE; // 0x38
		::System::Collections::Generic::List_1<::AKCBJBGMPNC*>* EGMMEMMOBCE; // 0x40
		::RPG::Client::MapDef* MJKJCCNJACA; // 0x48
		::System::UInt32 PELCILIFOIC; // 0x50
		::System::Boolean BGJFGKGKCEB; // 0x54
		::System::Boolean AAECOAAJBFE; // 0x55
		static ::RPG::Client::RPGProfilerMarker** StaticGet_GDOHBENCCAK()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEKGKNGPOHI")->GetStaticField(0x5FEC0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_ODLJIEMLKOB()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEKGKNGPOHI")->GetStaticField(0x5FEC8);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_BGBDPNBLCFF()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEKGKNGPOHI")->GetStaticField(0x5FED0);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_COJFOGNEPJP()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "DEKGKNGPOHI")->GetStaticField(0x5FED8);
		}

		static ::System::Int32* StaticGet_JLJALPHMPJL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DEKGKNGPOHI")->GetStaticField(0x14530);
		}

		// static const ::System::Object LJIJHAALCAJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEKGKNGPOHI_CCTOR_OFFSET))();
		}

		::System::Boolean LHMCNGLPNGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_LHMCNGLPNGM_OFFSET))(this);
		}

		::System::Single LHMOBPFNLAF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_LHMOBPFNLAF_OFFSET))(this);
		}

		::System::Boolean AJDCANKOGBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_AJDCANKOGBK_OFFSET))(this);
		}

		::System::Void ACDGPABGIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_ACDGPABGIFE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void GLPNDKECPJB(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_GLPNDKECPJB_OFFSET))(this, a1, a2);
		}

		::System::Void AEGJCIGEHED(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_AEGJCIGEHED_OFFSET))(this, a1);
		}

		::System::Void DOFMEOAHABE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_DOFMEOAHABE_OFFSET))(this, a1);
		}

		::System::UInt32 IAAOCKOEJEN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_IAAOCKOEJEN_OFFSET))(this);
		}

		::System::Void JLFLBLBEHEL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_JLFLBLBEHEL_OFFSET))(this, a1);
		}

		::System::Void JDDHAIEOPKN(::System::String* a1, ::HNIICFCDBGB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HNIICFCDBGB*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_JDDHAIEOPKN_OFFSET))(this, a1, a2);
		}

		::HNIICFCDBGB* BDIEOHAPKGC(::System::String* a1)
		{
			return ((::HNIICFCDBGB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_BDIEOHAPKGC_OFFSET))(this, a1);
		}

		::System::Boolean ENOFMLEPAHC(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_ENOFMLEPAHC_OFFSET))(this, a1);
		}

		::System::Void NMCNHOPDFPI(::System::String* a1, ::IMHNJGALBDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::IMHNJGALBDG*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_NMCNHOPDFPI_OFFSET))(this, a1, a2);
		}

		::System::Void PMAAMFLFLCL(::System::String* a1, ::IMHNJGALBDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::IMHNJGALBDG*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_PMAAMFLFLCL_OFFSET))(this, a1, a2);
		}

		::System::Void BGMDKAECGNE(::System::String* a1, ::IMHNJGALBDG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::IMHNJGALBDG*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_BGMDKAECGNE_OFFSET))(this, a1, a2);
		}

		::System::Void EBDHJDLHNON(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_EBDHJDLHNON_OFFSET))(this, a1);
		}

		::System::Void EMOMPIBLCOO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_EMOMPIBLCOO_OFFSET))(this, a1);
		}

		::System::Void OODNNFMLDCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_OODNNFMLDCH_OFFSET))(this);
		}

		::IMHNJGALBDG* ECDDKACHMPF(::KBGKAMMKDCE* a1, ::System::String* a2, ::System::String* a3, ::FHOLDPBFDLO* a4, ::System::Action_1<::IMHNJGALBDG*>* a5)
		{
			return ((::IMHNJGALBDG*(*)(::PVOID, ::KBGKAMMKDCE*, ::System::String*, ::System::String*, ::FHOLDPBFDLO*, ::System::Action_1<::IMHNJGALBDG*>*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_ECDDKACHMPF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ONIJAOKLMNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_ONIJAOKLMNC_OFFSET))(this, a1);
		}

		::AKCBJBGMPNC* EMDOFIBOJJH(::System::UInt32 a1)
		{
			return ((::AKCBJBGMPNC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_EMDOFIBOJJH_OFFSET))(this, a1);
		}

		::System::Void FFEOOBGDLCN(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Int32 a5, ::FHOLDPBFDLO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::FHOLDPBFDLO*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_FFEOOBGDLCN_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void EJPICBFCJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_EJPICBFCJEI_OFFSET))(this);
		}

		::System::Void GCJBMGDPDFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_GCJBMGDPDFG_OFFSET))(this, a1);
		}

		::System::Void LKCJDGEHBIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_LKCJDGEHBIG_OFFSET))(this);
		}

		::System::Void ELDIKCEFHLB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_ELDIKCEFHLB_OFFSET))(this, a1);
		}

		::System::Void KJENKNDONNL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_KJENKNDONNL_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityClassifyType NLHCGMDBKCB(::RPG::GameCore::RuntimeGroupInfo* a1)
		{
			return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + DEKGKNGPOHI_NLHCGMDBKCB_OFFSET))(this, a1);
		}

	};
