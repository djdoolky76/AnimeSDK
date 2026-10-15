#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DBGDNLLDPFI;
class FCOEMCEDLNL;
class HIOAMIPNLIN;
class MBBEBLGELAP;
namespace Google::Protobuf { class ByteString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AOLHNHEPKNO_ABCGMGLLIDN_OFFSET UNITYSDK_OFFSET(0x158BD520)
#define AOLHNHEPKNO_ABLDGPIDOMA_OFFSET UNITYSDK_OFFSET(0x158C01C0)
#define AOLHNHEPKNO_AGBEACHGNBK_OFFSET UNITYSDK_OFFSET(0x158BF160)
#define AOLHNHEPKNO_AGIPJLGAFIF_OFFSET UNITYSDK_OFFSET(0x158BD580)
#define AOLHNHEPKNO_ALMDDJNMAPK_OFFSET UNITYSDK_OFFSET(0x158BC800)
#define AOLHNHEPKNO_AOILLPLGMII_OFFSET UNITYSDK_OFFSET(0x158BBCA0)
#define AOLHNHEPKNO_AOOAGAGJGPL_OFFSET UNITYSDK_OFFSET(0x158BBC00)
#define AOLHNHEPKNO_APNPCLLKMMF_OFFSET UNITYSDK_OFFSET(0x158BED50)
#define AOLHNHEPKNO_BEBCDAOLICG_OFFSET UNITYSDK_OFFSET(0x158BD770)
#define AOLHNHEPKNO_BEOHDCHMEPJ_OFFSET UNITYSDK_OFFSET(0x158BD300)
#define AOLHNHEPKNO_BFDDNODHLLM_OFFSET UNITYSDK_OFFSET(0x158BE0B0)
#define AOLHNHEPKNO_BKFGEDNAGJI_OFFSET UNITYSDK_OFFSET(0x158BB6B0)
#define AOLHNHEPKNO_CCTOR_OFFSET UNITYSDK_OFFSET(0x158C0E00)
#define AOLHNHEPKNO_CEADDKDIAAO_OFFSET UNITYSDK_OFFSET(0x158BF5A0)
#define AOLHNHEPKNO_CGAEAFLHGHL_OFFSET UNITYSDK_OFFSET(0x158BCFC0)
#define AOLHNHEPKNO_CGFPGMFCGAJ_OFFSET UNITYSDK_OFFSET(0x158BF360)
#define AOLHNHEPKNO_CHBOIEGABBM_OFFSET UNITYSDK_OFFSET(0x158BEA00)
#define AOLHNHEPKNO_CJMELLLIEDE_OFFSET UNITYSDK_OFFSET(0x158C0150)
#define AOLHNHEPKNO_CJNGHPNENPM_OFFSET UNITYSDK_OFFSET(0x158BF7B0)
#define AOLHNHEPKNO_CMKEJANJJNP_OFFSET UNITYSDK_OFFSET(0x158BFE30)
#define AOLHNHEPKNO_CNPPPMHMDLH_OFFSET UNITYSDK_OFFSET(0x158BEC90)
#define AOLHNHEPKNO_COIAFGOIKLD_OFFSET UNITYSDK_OFFSET(0x158BFBB0)
#define AOLHNHEPKNO_CPCADMBBKCA_OFFSET UNITYSDK_OFFSET(0x158BD130)
#define AOLHNHEPKNO_DBOILDBCLDF_OFFSET UNITYSDK_OFFSET(0x158BFEE0)
#define AOLHNHEPKNO_DCMEDOCPNAB_OFFSET UNITYSDK_OFFSET(0x158BC370)
#define AOLHNHEPKNO_DCMLEJOKKBJ_OFFSET UNITYSDK_OFFSET(0x158BE420)
#define AOLHNHEPKNO_DCOAEDMHBHH_OFFSET UNITYSDK_OFFSET(0x158BCEA0)
#define AOLHNHEPKNO_DGEBGGLEEOE_OFFSET UNITYSDK_OFFSET(0x158BDE60)
#define AOLHNHEPKNO_DGHMBAIGJDI_OFFSET UNITYSDK_OFFSET(0x158BD250)
#define AOLHNHEPKNO_DKNBJGPCNHI_OFFSET UNITYSDK_OFFSET(0x158C0C10)
#define AOLHNHEPKNO_DNGDGNDDNJO_OFFSET UNITYSDK_OFFSET(0x158BCBD0)
#define AOLHNHEPKNO_DPAKJGIMECJ_OFFSET UNITYSDK_OFFSET(0x158BFD80)
#define AOLHNHEPKNO_EAENFNLOAKE_OFFSET UNITYSDK_OFFSET(0x158BB600)
#define AOLHNHEPKNO_EEPKOLENKDA_OFFSET UNITYSDK_OFFSET(0x158BF480)
#define AOLHNHEPKNO_EMIHBEEJAPD_OFFSET UNITYSDK_OFFSET(0x158BEF30)
#define AOLHNHEPKNO_FAJEIGMCAJL_OFFSET UNITYSDK_OFFSET(0x158BE260)
#define AOLHNHEPKNO_FBFEKDOOFNE_OFFSET UNITYSDK_OFFSET(0x158BF650)
#define AOLHNHEPKNO_FCOPDIAEIKM_OFFSET UNITYSDK_OFFSET(0x158BE580)
#define AOLHNHEPKNO_FFPJCCIPHHM_OFFSET UNITYSDK_OFFSET(0x158BD9A0)
#define AOLHNHEPKNO_FIEJIJFPFCG_OFFSET UNITYSDK_OFFSET(0x158BD830)
#define AOLHNHEPKNO_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x158BB2E0)
#define AOLHNHEPKNO_GFJNCBFLFJF_OFFSET UNITYSDK_OFFSET(0x158C0D90)
#define AOLHNHEPKNO_GHJANFOAHMF_OFFSET UNITYSDK_OFFSET(0x158BEB20)
#define AOLHNHEPKNO_GNAIOCIAEAK_OFFSET UNITYSDK_OFFSET(0x158BF860)
#define AOLHNHEPKNO_GNIFCELHGFI_OFFSET UNITYSDK_OFFSET(0x158BBB60)
#define AOLHNHEPKNO_HAMEFLLOCJB_OFFSET UNITYSDK_OFFSET(0x158BFCD0)
#define AOLHNHEPKNO_HDHHOPOEIGB_OFFSET UNITYSDK_OFFSET(0x158C02A0)
#define AOLHNHEPKNO_ICGBAILNPBJ_OFFSET UNITYSDK_OFFSET(0x158C0D20)
#define AOLHNHEPKNO_ICKPFFJBANE_OFFSET UNITYSDK_OFFSET(0x158BBB00)
#define AOLHNHEPKNO_IHAIKIFOMLB_OFFSET UNITYSDK_OFFSET(0x158BE160)
#define AOLHNHEPKNO_IIKDLCGKKKH_OFFSET UNITYSDK_OFFSET(0x158BDF80)
#define AOLHNHEPKNO_IOPJBNICMOG_OFFSET UNITYSDK_OFFSET(0x158BB990)
#define AOLHNHEPKNO_JAJFOLFEEJO_OFFSET UNITYSDK_OFFSET(0x158BCD80)
#define AOLHNHEPKNO_JFDGMIAGNDH_OFFSET UNITYSDK_OFFSET(0x158BF020)
#define AOLHNHEPKNO_JFFOJHKEBLG_OFFSET UNITYSDK_OFFSET(0x158BCA30)
#define AOLHNHEPKNO_JMAIGHHBDEJ_OFFSET UNITYSDK_OFFSET(0x158BF700)
#define AOLHNHEPKNO_KBPLMDGIEHI_OFFSET UNITYSDK_OFFSET(0x158BBD50)
#define AOLHNHEPKNO_KGNNCPMIONA_OFFSET UNITYSDK_OFFSET(0x158BEE40)
#define AOLHNHEPKNO_KIDMFPOCPDK_OFFSET UNITYSDK_OFFSET(0x158BDA50)
#define AOLHNHEPKNO_KJPOFNAHEJC_OFFSET UNITYSDK_OFFSET(0x158BC430)
#define AOLHNHEPKNO_KMLFNEMIGJF_OFFSET UNITYSDK_OFFSET(0x158B9010)
#define AOLHNHEPKNO_KNPMDHNGNKP_OFFSET UNITYSDK_OFFSET(0x158BFF90)
#define AOLHNHEPKNO_LCBPALDBCGA_OFFSET UNITYSDK_OFFSET(0x158C0CE0)
#define AOLHNHEPKNO_LCDFPJOFCHL_OFFSET UNITYSDK_OFFSET(0x158C0630)
#define AOLHNHEPKNO_LDDBKFGPPOP_OFFSET UNITYSDK_OFFSET(0x158BC910)
#define AOLHNHEPKNO_LEKNCCOPLNE_OFFSET UNITYSDK_OFFSET(0x158BC6A0)
#define AOLHNHEPKNO_LFLDAOBJKEH_OFFSET UNITYSDK_OFFSET(0x158BC090)
#define AOLHNHEPKNO_LFMHPLEKINH_OFFSET UNITYSDK_OFFSET(0x158C0C70)
#define AOLHNHEPKNO_LHMADKDKFFC_OFFSET UNITYSDK_OFFSET(0x158BDD40)
#define AOLHNHEPKNO_LJKLELKAGGI_OFFSET UNITYSDK_OFFSET(0x158BB7C0)
#define AOLHNHEPKNO_LKIMELNBKDI_OFFSET UNITYSDK_OFFSET(0x158BE740)
#define AOLHNHEPKNO_MDDMKLNCPAM_OFFSET UNITYSDK_OFFSET(0x158C0CD0)
#define AOLHNHEPKNO_MFPNGMEODNJ_OFFSET UNITYSDK_OFFSET(0x158BFA00)
#define AOLHNHEPKNO_MGEOPGHGJMG_OFFSET UNITYSDK_OFFSET(0x158BC170)
#define AOLHNHEPKNO_MHJPIHPNABH_OFFSET UNITYSDK_OFFSET(0x158BDB10)
#define AOLHNHEPKNO_MIFPCMPFDMM_OFFSET UNITYSDK_OFFSET(0x158BBED0)
#define AOLHNHEPKNO_MINHLIPFPHK_1_OFFSET UNITYSDK_OFFSET(0x158C05C0)
#define AOLHNHEPKNO_MINHLIPFPHK_OFFSET UNITYSDK_OFFSET(0x158C0560)
#define AOLHNHEPKNO_MJAAMBBKFHG_OFFSET UNITYSDK_OFFSET(0x158BF940)
#define AOLHNHEPKNO_MKHDBALAEKB_OFFSET UNITYSDK_OFFSET(0x158BFB10)
#define AOLHNHEPKNO_MMAIEBNPIBD_OFFSET UNITYSDK_OFFSET(0x158C0B00)
#define AOLHNHEPKNO_NBHHOFPKJEC_OFFSET UNITYSDK_OFFSET(0x158BDBC0)
#define AOLHNHEPKNO_NCKJCCNOFJK_OFFSET UNITYSDK_OFFSET(0x158BB8D0)
#define AOLHNHEPKNO_NCNMGMBGGGL_OFFSET UNITYSDK_OFFSET(0x158BB440)
#define AOLHNHEPKNO_NEKFAPAAMJG_OFFSET UNITYSDK_OFFSET(0x158BE8A0)
#define AOLHNHEPKNO_NHJKCFGNGGB_OFFSET UNITYSDK_OFFSET(0x158BD8F0)
#define AOLHNHEPKNO_NJMJLNAKIMF_OFFSET UNITYSDK_OFFSET(0x158BB550)
#define AOLHNHEPKNO_NJPOKIFCHLH_OFFSET UNITYSDK_OFFSET(0x158BC270)
#define AOLHNHEPKNO_NKOOBCIFFPP_OFFSET UNITYSDK_OFFSET(0x158C0A40)
#define AOLHNHEPKNO_NPHLNOAHPOB_OFFSET UNITYSDK_OFFSET(0x158C0970)
#define AOLHNHEPKNO_OBCJDKNHPEP_OFFSET UNITYSDK_OFFSET(0x158C0460)
#define AOLHNHEPKNO_ODGFDOLCIOC_OFFSET UNITYSDK_OFFSET(0x158C0880)
#define AOLHNHEPKNO_ODOBPCAECLG_OFFSET UNITYSDK_OFFSET(0x158BC570)
#define AOLHNHEPKNO_OIILECPMMFL_OFFSET UNITYSDK_OFFSET(0x158C0690)
#define AOLHNHEPKNO_PLNGNLAPOPF_OFFSET UNITYSDK_OFFSET(0x158BF2A0)
#define AOLHNHEPKNO_PNAIBACBHDO_OFFSET UNITYSDK_OFFSET(0x158BD6B0)

	class AOLHNHEPKNO : public ::System::Object
	{
	public:
		static ::Il2CppArray<::DBGDNLLDPFI*>** StaticGet_KHFBEGBEDAN()
		{
			return (::Il2CppArray<::DBGDNLLDPFI*>**)UnitySDK::FromName("", "AOLHNHEPKNO")->GetStaticField(0xC0E0);
		}

		static ::FCOEMCEDLNL** StaticGet_NPKMKOPEPHM()
		{
			return (::FCOEMCEDLNL**)UnitySDK::FromName("", "AOLHNHEPKNO")->GetStaticField(0xC0E8);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_ABFMNJGIKFJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)UnitySDK::FromName("", "AOLHNHEPKNO")->GetStaticField(0xC0F0);
		}

		static ::System::Int32* StaticGet_GHPPKNNPMNN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AOLHNHEPKNO")->GetStaticField(0x2A30);
		}

		static ::System::Boolean* StaticGet_AHHJFBAHGHK()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "AOLHNHEPKNO")->GetStaticField(0x2A34);
		}

		static ::System::Int32* StaticGet_JDBFLDMNJBC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AOLHNHEPKNO")->GetStaticField(0x2A38);
		}

		// static const ::System::String* ENCJFPDBHLH; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CCTOR_OFFSET))();
		}

		static ::System::Void KMLFNEMIGJF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_KMLFNEMIGJF_OFFSET))();
		}

		static ::DBGDNLLDPFI* FPKLDCGAJGP()
		{
			return ((::DBGDNLLDPFI*(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_FPKLDCGAJGP_OFFSET))();
		}

		static ::System::Void NJMJLNAKIMF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NJMJLNAKIMF_OFFSET))(a1);
		}

		static ::System::Void EAENFNLOAKE(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_EAENFNLOAKE_OFFSET))(a1);
		}

		static ::System::Void BKFGEDNAGJI(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_BKFGEDNAGJI_OFFSET))(a1, a2);
		}

		static ::System::Void LJKLELKAGGI(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LJKLELKAGGI_OFFSET))(a1, a2);
		}

		static ::System::Void NCKJCCNOFJK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NCKJCCNOFJK_OFFSET))(a1, a2);
		}

		static ::System::Void IOPJBNICMOG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_IOPJBNICMOG_OFFSET))(a1, a2);
		}

		static ::System::Void GNIFCELHGFI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_GNIFCELHGFI_OFFSET))();
		}

		static ::System::Void AOOAGAGJGPL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_AOOAGAGJGPL_OFFSET))();
		}

		static ::System::Void AOILLPLGMII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_AOILLPLGMII_OFFSET))(a1);
		}

		static ::System::Void KBPLMDGIEHI(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_KBPLMDGIEHI_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MIFPCMPFDMM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Byte a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MIFPCMPFDMM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void LFLDAOBJKEH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LFLDAOBJKEH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MGEOPGHGJMG(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MGEOPGHGJMG_OFFSET))(a1);
		}

		static ::System::Void NJPOKIFCHLH(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NJPOKIFCHLH_OFFSET))(a1);
		}

		static ::System::Void DCMEDOCPNAB(::System::UInt32 a1, ::RPG::GameCore::TurnState a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DCMEDOCPNAB_OFFSET))(a1, a2);
		}

		static ::System::Void KJPOFNAHEJC(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_KJPOFNAHEJC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ODOBPCAECLG(::RPG::GameCore::GameEntity* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_ODOBPCAECLG_OFFSET))(a1, a2);
		}

		static ::System::Void LEKNCCOPLNE(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4, ::System::Byte a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Int32, ::System::String*, ::System::String*, ::System::Byte))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LEKNCCOPLNE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ALMDDJNMAPK(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_ALMDDJNMAPK_OFFSET))(a1, a2);
		}

		static ::System::Void LDDBKFGPPOP(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::Byte a3)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LDDBKFGPPOP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JFFOJHKEBLG(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_JFFOJHKEBLG_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void DNGDGNDDNJO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DNGDGNDDNJO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void JAJFOLFEEJO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_JAJFOLFEEJO_OFFSET))(a1);
		}

		static ::System::Void DCOAEDMHBHH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DCOAEDMHBHH_OFFSET))(a1);
		}

		static ::System::Void CGAEAFLHGHL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CGAEAFLHGHL_OFFSET))(a1, a2);
		}

		static ::System::Void CPCADMBBKCA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CPCADMBBKCA_OFFSET))(a1);
		}

		static ::System::Void DGHMBAIGJDI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DGHMBAIGJDI_OFFSET))(a1);
		}

		static ::System::Void BEOHDCHMEPJ(::HIOAMIPNLIN* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::GameEntity* a6)
		{
			return ((::System::Void(*)(::HIOAMIPNLIN*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_BEOHDCHMEPJ_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void AGIPJLGAFIF(::RPG::GameCore::GameEntity* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Byte))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_AGIPJLGAFIF_OFFSET))(a1, a2);
		}

		static ::System::Void PNAIBACBHDO(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_PNAIBACBHDO_OFFSET))(a1, a2);
		}

		static ::System::Void BEBCDAOLICG(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_BEBCDAOLICG_OFFSET))(a1, a2);
		}

		static ::System::Void FIEJIJFPFCG(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_FIEJIJFPFCG_OFFSET))(a1, a2);
		}

		static ::System::Void NHJKCFGNGGB(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NHJKCFGNGGB_OFFSET))(a1);
		}

		static ::System::Void FFPJCCIPHHM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_FFPJCCIPHHM_OFFSET))(a1);
		}

		static ::System::Void KIDMFPOCPDK(::RPG::GameCore::TurnState a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnState, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_KIDMFPOCPDK_OFFSET))(a1, a2);
		}

		static ::System::Void MHJPIHPNABH(::RPG::GameCore::TurnState a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MHJPIHPNABH_OFFSET))(a1);
		}

		static ::System::Void NBHHOFPKJEC(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NBHHOFPKJEC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LHMADKDKFFC(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LHMADKDKFFC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DGEBGGLEEOE(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DGEBGGLEEOE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IIKDLCGKKKH(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_IIKDLCGKKKH_OFFSET))(a1, a2);
		}

		static ::System::Void BFDDNODHLLM(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_BFDDNODHLLM_OFFSET))(a1);
		}

		static ::System::Void IHAIKIFOMLB(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_IHAIKIFOMLB_OFFSET))(a1);
		}

		static ::System::Void FAJEIGMCAJL(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_FAJEIGMCAJL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DCMLEJOKKBJ(::HIOAMIPNLIN* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::HIOAMIPNLIN*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DCMLEJOKKBJ_OFFSET))(a1, a2);
		}

		static ::System::Void FCOPDIAEIKM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_FCOPDIAEIKM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void LKIMELNBKDI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LKIMELNBKDI_OFFSET))(a1, a2);
		}

		static ::System::Void NEKFAPAAMJG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NEKFAPAAMJG_OFFSET))(a1, a2);
		}

		static ::System::Void CHBOIEGABBM(::System::String* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CHBOIEGABBM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GHJANFOAHMF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::RPG::GameCore::TaskContext* a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::System::Boolean, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_GHJANFOAHMF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CNPPPMHMDLH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CNPPPMHMDLH_OFFSET))(a1, a2);
		}

		static ::System::Void APNPCLLKMMF(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_APNPCLLKMMF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void KGNNCPMIONA(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_KGNNCPMIONA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EMIHBEEJAPD(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_EMIHBEEJAPD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JFDGMIAGNDH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_JFDGMIAGNDH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void AGBEACHGNBK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_AGBEACHGNBK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void PLNGNLAPOPF(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_PLNGNLAPOPF_OFFSET))(a1, a2);
		}

		static ::System::Void CGFPGMFCGAJ(::RPG::GameCore::TaskContext* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CGFPGMFCGAJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EEPKOLENKDA(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_EEPKOLENKDA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CEADDKDIAAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CEADDKDIAAO_OFFSET))(a1);
		}

		static ::System::Void FBFEKDOOFNE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_FBFEKDOOFNE_OFFSET))(a1);
		}

		static ::System::Void JMAIGHHBDEJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_JMAIGHHBDEJ_OFFSET))(a1);
		}

		static ::System::Void CJNGHPNENPM(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CJNGHPNENPM_OFFSET))(a1);
		}

		static ::System::Void GNAIOCIAEAK(::System::Int32 a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::System::Int32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_GNAIOCIAEAK_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MJAAMBBKFHG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MJAAMBBKFHG_OFFSET))(a1, a2);
		}

		static ::System::Void MFPNGMEODNJ(::RPG::GameCore::TaskContext* a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::Byte))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MFPNGMEODNJ_OFFSET))(a1, a2);
		}

		static ::System::Void MKHDBALAEKB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MKHDBALAEKB_OFFSET))();
		}

		static ::System::Void COIAFGOIKLD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_COIAFGOIKLD_OFFSET))(a1);
		}

		static ::System::Void HAMEFLLOCJB(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_HAMEFLLOCJB_OFFSET))(a1);
		}

		static ::System::Void DPAKJGIMECJ(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DPAKJGIMECJ_OFFSET))(a1);
		}

		static ::System::Void CMKEJANJJNP(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CMKEJANJJNP_OFFSET))(a1);
		}

		static ::System::Void DBOILDBCLDF(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DBOILDBCLDF_OFFSET))(a1);
		}

		static ::System::Void KNPMDHNGNKP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_KNPMDHNGNKP_OFFSET))();
		}

		static ::System::Void CJMELLLIEDE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_CJMELLLIEDE_OFFSET))();
		}

		static ::System::Void ABLDGPIDOMA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_ABLDGPIDOMA_OFFSET))();
		}

		static ::Google::Protobuf::ByteString* HDHHOPOEIGB()
		{
			return ((::Google::Protobuf::ByteString*(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_HDHHOPOEIGB_OFFSET))();
		}

		static ::System::Void OBCJDKNHPEP(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_OBCJDKNHPEP_OFFSET))(a1);
		}

		static ::System::Void MINHLIPFPHK(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MINHLIPFPHK_OFFSET))(a1);
		}

		static ::System::Void MINHLIPFPHK_1(::RPG::GameCore::TaskContext* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MINHLIPFPHK_1_OFFSET))(a1, a2);
		}

		static ::System::Void LCDFPJOFCHL(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LCDFPJOFCHL_OFFSET))(a1);
		}

		static ::System::Int32 OIILECPMMFL(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_OIILECPMMFL_OFFSET))(a1);
		}

		static ::System::String* ODGFDOLCIOC(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_ODGFDOLCIOC_OFFSET))(a1);
		}

		static ::System::Void NPHLNOAHPOB(::FCOEMCEDLNL* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NPHLNOAHPOB_OFFSET))(a1, a2);
		}

		static ::System::Void NKOOBCIFFPP(::FCOEMCEDLNL* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NKOOBCIFFPP_OFFSET))(a1, a2);
		}

		static ::System::Boolean MMAIEBNPIBD(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MMAIEBNPIBD_OFFSET))(a1, a2);
		}

		static ::DBGDNLLDPFI* NCNMGMBGGGL(::RPG::GameCore::LogSamplerType a1)
		{
			return ((::DBGDNLLDPFI*(*)(::RPG::GameCore::LogSamplerType))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_NCNMGMBGGGL_OFFSET))(a1);
		}

		static ::System::Boolean DKNBJGPCNHI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_DKNBJGPCNHI_OFFSET))();
		}

		static ::System::UInt64 LFMHPLEKINH()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LFMHPLEKINH_OFFSET))();
		}

		static ::System::Boolean MDDMKLNCPAM()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_MDDMKLNCPAM_OFFSET))();
		}

		static ::System::Boolean LCBPALDBCGA()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AOLHNHEPKNO_LCBPALDBCGA_OFFSET))();
		}

		static ::System::String* ICKPFFJBANE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_ICKPFFJBANE_OFFSET))(a1);
		}

		static ::System::String* ICGBAILNPBJ(::MBBEBLGELAP* a1)
		{
			return ((::System::String*(*)(::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_ICGBAILNPBJ_OFFSET))(a1);
		}

		static ::System::String* ABCGMGLLIDN(::HIOAMIPNLIN* a1)
		{
			return ((::System::String*(*)(::HIOAMIPNLIN*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_ABCGMGLLIDN_OFFSET))(a1);
		}

		static ::System::Boolean GFJNCBFLFJF(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + AOLHNHEPKNO_GFJNCBFLFJF_OFFSET))(a1);
		}

	};
