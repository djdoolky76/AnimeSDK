#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPHCPLJMDKL_FileLoadMode.h"
#include "unitysdk/NOPCGMDDHGI.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolLoadMode.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolPathType.h"
#include "unitysdk/System/Object.h"
class DPHCPLJMDKL_NKHDBCDBOGK;
class LELCKJPOPAO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }

#define DPHCPLJMDKL_AFEJHOPDKFC_OFFSET UNITYSDK_OFFSET(0x11FFE1B0)
#define DPHCPLJMDKL_AFOMHKFOONF_OFFSET UNITYSDK_OFFSET(0x11FFF040)
#define DPHCPLJMDKL_AHANHAKBCHI_OFFSET UNITYSDK_OFFSET(0x11FF9930)
#define DPHCPLJMDKL_ANJFGDGLFDA_OFFSET UNITYSDK_OFFSET(0x11FFAD60)
#define DPHCPLJMDKL_BBOOOGIENPE_OFFSET UNITYSDK_OFFSET(0x11FFFBD0)
#define DPHCPLJMDKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x12000EA0)
#define DPHCPLJMDKL_CDJHHEJNDJI_OFFSET UNITYSDK_OFFSET(0x11FFCD10)
#define DPHCPLJMDKL_DBIELBAPKIK_OFFSET UNITYSDK_OFFSET(0x11FF7CB0)
#define DPHCPLJMDKL_DFEKHKCCPBK_OFFSET UNITYSDK_OFFSET(0x11FFACB0)
#define DPHCPLJMDKL_DGCBIDOMKNP_OFFSET UNITYSDK_OFFSET(0x11FFF760)
#define DPHCPLJMDKL_DLBCDCDBMFN_OFFSET UNITYSDK_OFFSET(0x11FFB430)
#define DPHCPLJMDKL_ECDNAOKHDJF_OFFSET UNITYSDK_OFFSET(0x12000430)
#define DPHCPLJMDKL_ECIEIJKPFEM_OFFSET UNITYSDK_OFFSET(0x11FFAFC0)
#define DPHCPLJMDKL_EDEMHJFMFDI_OFFSET UNITYSDK_OFFSET(0x11FFF640)
#define DPHCPLJMDKL_EJCIEPPKJBJ_OFFSET UNITYSDK_OFFSET(0x11FFF240)
#define DPHCPLJMDKL_FDIHNAALIGI_OFFSET UNITYSDK_OFFSET(0x11FFE590)
#define DPHCPLJMDKL_FGKKABEOCAH_OFFSET UNITYSDK_OFFSET(0x11FFBEC0)
#define DPHCPLJMDKL_FHOPOHHBBHG_OFFSET UNITYSDK_OFFSET(0x11FFD0E0)
#define DPHCPLJMDKL_FMDIIDPEKLB_OFFSET UNITYSDK_OFFSET(0x11FFB3A0)
#define DPHCPLJMDKL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x12000CB0)
#define DPHCPLJMDKL_HFDFOBDOADI_OFFSET UNITYSDK_OFFSET(0x11FFB4B0)
#define DPHCPLJMDKL_HHKCOOICEHH_OFFSET UNITYSDK_OFFSET(0x11FFB920)
#define DPHCPLJMDKL_HOLKGIGDDIO_OFFSET UNITYSDK_OFFSET(0x11FFFDE0)
#define DPHCPLJMDKL_IJHILICELBL_OFFSET UNITYSDK_OFFSET(0x11FFC230)
#define DPHCPLJMDKL_IOJKIOIMBNN_OFFSET UNITYSDK_OFFSET(0x11FFCFA0)
#define DPHCPLJMDKL_JEOGJIOEKFO_OFFSET UNITYSDK_OFFSET(0x11FFF370)
#define DPHCPLJMDKL_JKLKLAGCMMA_OFFSET UNITYSDK_OFFSET(0x11FFCAA0)
#define DPHCPLJMDKL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12000D10)
#define DPHCPLJMDKL_JNFMOBLFJBI_OFFSET UNITYSDK_OFFSET(0x12000E40)
#define DPHCPLJMDKL_KFGJGJLMFHP_OFFSET UNITYSDK_OFFSET(0x11FFF940)
#define DPHCPLJMDKL_KGAENKIANDD_OFFSET UNITYSDK_OFFSET(0x11FFB190)
#define DPHCPLJMDKL_KIOCJCAGOOO_OFFSET UNITYSDK_OFFSET(0x11FFC560)
#define DPHCPLJMDKL_KOBJMOHIOHJ_OFFSET UNITYSDK_OFFSET(0x11FF7B80)
#define DPHCPLJMDKL_KPAIKKMKPID_OFFSET UNITYSDK_OFFSET(0x11FFBC00)
#define DPHCPLJMDKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12000BF0)
#define DPHCPLJMDKL_LHFLJPKPGLF_OFFSET UNITYSDK_OFFSET(0x11FF7780)
#define DPHCPLJMDKL_LHMHHCJHENA_OFFSET UNITYSDK_OFFSET(0x11FFA8A0)
#define DPHCPLJMDKL_MEMCPFHMIDN_OFFSET UNITYSDK_OFFSET(0x11FFC610)
#define DPHCPLJMDKL_MMBEPONAMLF_OFFSET UNITYSDK_OFFSET(0x11FF9760)
#define DPHCPLJMDKL_MOHHIKOAOCM_OFFSET UNITYSDK_OFFSET(0x11FFCD80)
#define DPHCPLJMDKL_MPHEFOPILCN_OFFSET UNITYSDK_OFFSET(0x11FFADF0)
#define DPHCPLJMDKL_NMNCOLJPGFF_OFFSET UNITYSDK_OFFSET(0x11FFECA0)
#define DPHCPLJMDKL_OAALLBFMALD_OFFSET UNITYSDK_OFFSET(0x11FFEEB0)
#define DPHCPLJMDKL_ODEDBIIJDHL_OFFSET UNITYSDK_OFFSET(0x11FFB470)
#define DPHCPLJMDKL_OEKEFHDDOHG_OFFSET UNITYSDK_OFFSET(0x11FFAAE0)
#define DPHCPLJMDKL_ONPDFEJLDBD_OFFSET UNITYSDK_OFFSET(0x12000A70)
#define DPHCPLJMDKL_PCPLKAAAOGP_OFFSET UNITYSDK_OFFSET(0x11FFEAA0)
#define DPHCPLJMDKL_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x12000DD0)
#define DPHCPLJMDKL_PFBOJCPAIKM_OFFSET UNITYSDK_OFFSET(0x11FFFF60)

inline static constexpr unsigned int DPHCPLJMDKL_TypeDefinitionIndex = 60023;

	class DPHCPLJMDKL : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_CJLFACFNDMI()
		{
			return (::System::String**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F700);
		}

		static ::System::Object** StaticGet_JKGNOHNLAKA()
		{
			return (::System::Object**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F708);
		}

		static ::System::Object** StaticGet_DBIJKJIMJGK()
		{
			return (::System::Object**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F710);
		}

		static ::NOPCGMDDHGI* StaticGet_IAIBKAJJEEO()
		{
			return (::NOPCGMDDHGI*)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F718);
		}

		static ::System::Object** StaticGet_MODPPBEAFBH()
		{
			return (::System::Object**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F728);
		}

		static ::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>** StaticGet_OFHCCHPEGIB()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::System::String*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F730);
		}

		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_HGNOCANBHBM()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F738);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_NNEMHOPJHEB()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F740);
		}

		static ::System::String** StaticGet_DMKMFMBHJDF()
		{
			return (::System::String**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F748);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>** StaticGet_AAMPBOOKPAJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::IO::MemoryMappedFiles::MemoryMappedFile*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F750);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_IADMHNLIKPO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F758);
		}

		static ::System::String** StaticGet_PFFEFDIPJIJ()
		{
			return (::System::String**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F760);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_PMGFLPJJBJD()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F768);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_FBAFMKDJDOM()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F770);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_HOHCNNKDPJM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F778);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>** StaticGet_AKAONHHKHMA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::System::String*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F780);
		}

		static ::System::Object** StaticGet_JNACIPNELFK()
		{
			return (::System::Object**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F788);
		}

		static ::System::String** StaticGet_LBKKLOPFNMJ()
		{
			return (::System::String**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F790);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::LELCKJPOPAO*>** StaticGet_GBOMKPLKBGE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::LELCKJPOPAO*>**)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x6F798);
		}

		static ::System::Int32* StaticGet_LDBJPPPELJI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x15A00);
		}

		static ::System::Boolean* StaticGet_KHPDJOKEHIL()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x15A04);
		}

		static ::System::Single* StaticGet_ODOELMLPMMO()
		{
			return (::System::Single*)UnitySDK::FromName("", "DPHCPLJMDKL")->GetStaticField(0x15A08);
		}

		// static const ::System::String* IFIEGKLPLLB; // 0x0
		// static const ::System::Object BOBEEFPNEKE; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_CCTOR_OFFSET))();
		}

		static ::System::Int64 LHFLJPKPGLF()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_LHFLJPKPGLF_OFFSET))();
		}

		static ::System::Int32 KOBJMOHIOHJ()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_KOBJMOHIOHJ_OFFSET))();
		}

		static ::System::String* DBIELBAPKIK()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_DBIELBAPKIK_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::String*>* LHMHHCJHENA()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_LHMHHCJHENA_OFFSET))();
		}

		static ::System::String* AHANHAKBCHI(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_AHANHAKBCHI_OFFSET))(a1, a2);
		}

		static ::System::String* MMBEPONAMLF(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_MMBEPONAMLF_OFFSET))(a1);
		}

		static ::System::String* ANJFGDGLFDA(::DPHCPLJMDKL_FileLoadMode a1)
		{
			return ((::System::String*(*)(::DPHCPLJMDKL_FileLoadMode))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_ANJFGDGLFDA_OFFSET))(a1);
		}

		static ::System::String* DFEKHKCCPBK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_DFEKHKCCPBK_OFFSET))(a1, a2);
		}

		static ::System::Int32 MPHEFOPILCN(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_MPHEFOPILCN_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* ECIEIJKPFEM()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_ECIEIJKPFEM_OFFSET))();
		}

		static ::System::Void KGAENKIANDD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_KGAENKIANDD_OFFSET))();
		}

		static ::System::Void FMDIIDPEKLB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_FMDIIDPEKLB_OFFSET))();
		}

		static ::RPG::GameCore::ConfigDataPoolLoadMode DLBCDCDBMFN()
		{
			return ((::RPG::GameCore::ConfigDataPoolLoadMode(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_DLBCDCDBMFN_OFFSET))();
		}

		static ::System::String* ODEDBIIJDHL(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_ODEDBIIJDHL_OFFSET))(a1);
		}

		static ::System::Void HFDFOBDOADI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_HFDFOBDOADI_OFFSET))();
		}

		static ::System::Void HHKCOOICEHH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_HHKCOOICEHH_OFFSET))();
		}

		static ::System::Void KPAIKKMKPID()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_KPAIKKMKPID_OFFSET))();
		}

		static ::System::String* IJHILICELBL(::System::UInt64 a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
		{
			return ((::System::String*(*)(::System::UInt64, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IJHILICELBL_OFFSET))(a1, a2);
		}

		static ::System::String* KIOCJCAGOOO(::System::String* a1, ::RPG::GameCore::ConfigDataPoolPathType a2, ::RPG::GameCore::ConfigDataPoolLoadMode a3)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolPathType, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_KIOCJCAGOOO_OFFSET))(a1, a2, a3);
		}

		static ::System::String* MEMCPFHMIDN(::System::String* a1, ::RPG::GameCore::ConfigDataPoolLoadMode a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_MEMCPFHMIDN_OFFSET))(a1, a2);
		}

		static ::System::String* JKLKLAGCMMA(::System::String* a1, ::RPG::GameCore::ConfigDataPoolPathType a2, ::RPG::GameCore::ConfigDataPoolLoadMode a3)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::GameCore::ConfigDataPoolPathType, ::RPG::GameCore::ConfigDataPoolLoadMode))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_JKLKLAGCMMA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CDJHHEJNDJI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_CDJHHEJNDJI_OFFSET))();
		}

		static ::System::Void MOHHIKOAOCM(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_MOHHIKOAOCM_OFFSET))(a1, a2);
		}

		static ::System::Void IOJKIOIMBNN(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_IOJKIOIMBNN_OFFSET))(a1);
		}

		static ::System::Void FHOPOHHBBHG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_FHOPOHHBBHG_OFFSET))();
		}

		static ::System::IO::MemoryMappedFiles::MemoryMappedFile* AFEJHOPDKFC(::System::String* a1, ::System::Int64 a2)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::System::String*, ::System::Int64))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_AFEJHOPDKFC_OFFSET))(a1, a2);
		}

		static ::System::Void FDIHNAALIGI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_FDIHNAALIGI_OFFSET))(a1);
		}

		static ::DPHCPLJMDKL_NKHDBCDBOGK* PCPLKAAAOGP(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::DPHCPLJMDKL_FileLoadMode a4)
		{
			return ((::DPHCPLJMDKL_NKHDBCDBOGK*(*)(::System::String*, ::System::UInt32, ::System::UInt32, ::DPHCPLJMDKL_FileLoadMode))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_PCPLKAAAOGP_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void NMNCOLJPGFF(::DPHCPLJMDKL_NKHDBCDBOGK* a1)
		{
			return ((::System::Void(*)(::DPHCPLJMDKL_NKHDBCDBOGK*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_NMNCOLJPGFF_OFFSET))(a1);
		}

		static ::System::Void OAALLBFMALD(::System::String* a1, ::DPHCPLJMDKL_NKHDBCDBOGK* a2)
		{
			return ((::System::Void(*)(::System::String*, ::DPHCPLJMDKL_NKHDBCDBOGK*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_OAALLBFMALD_OFFSET))(a1, a2);
		}

		static ::System::Void AFOMHKFOONF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_AFOMHKFOONF_OFFSET))(a1);
		}

		static ::System::Void EJCIEPPKJBJ(::System::String* a1, ::LELCKJPOPAO* a2)
		{
			return ((::System::Void(*)(::System::String*, ::LELCKJPOPAO*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EJCIEPPKJBJ_OFFSET))(a1, a2);
		}

		static ::System::Void JEOGJIOEKFO(::System::String* a1, ::LELCKJPOPAO* a2)
		{
			return ((::System::Void(*)(::System::String*, ::LELCKJPOPAO*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_JEOGJIOEKFO_OFFSET))(a1, a2);
		}

		static ::System::Void EDEMHJFMFDI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_EDEMHJFMFDI_OFFSET))(a1);
		}

		static ::System::Void DGCBIDOMKNP(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_DGCBIDOMKNP_OFFSET))(a1);
		}

		static ::System::Boolean FGKKABEOCAH(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_FGKKABEOCAH_OFFSET))(a1);
		}

		static ::System::Int32 OEKEFHDDOHG(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_OEKEFHDDOHG_OFFSET))(a1);
		}

		static ::LELCKJPOPAO* BBOOOGIENPE(::System::String* a1)
		{
			return ((::LELCKJPOPAO*(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_BBOOOGIENPE_OFFSET))(a1);
		}

		static ::System::Boolean HOLKGIGDDIO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_HOLKGIGDDIO_OFFSET))(a1);
		}

		static ::System::Boolean KFGJGJLMFHP(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_KFGJGJLMFHP_OFFSET))(a1);
		}

		static ::System::Void PFBOJCPAIKM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_PFBOJCPAIKM_OFFSET))();
		}

		static ::System::Void ECDNAOKHDJF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_ECDNAOKHDJF_OFFSET))();
		}

		static ::System::Void ONPDFEJLDBD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_ONPDFEJLDBD_OFFSET))();
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_HADOHLNHHGB_OFFSET))();
		}

		static ::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_JLANKNHFKCN_OFFSET))(a1);
		}

		static ::System::Boolean PEECNCABGFD(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DPHCPLJMDKL_PEECNCABGFD_OFFSET))(a1);
		}

		static ::System::Void JNFMOBLFJBI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DPHCPLJMDKL_JNFMOBLFJBI_OFFSET))();
		}

	};
