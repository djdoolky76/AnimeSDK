#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Rendering/SDFAtlasLayout.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/HALFODCJNDE_COHMJPDBLPK.h"
class HALFODCJNDE;
class HALFODCJNDE_GFBLMIHCFDC;
namespace RPG::Client { class SDFObjectMonoPlugin; }
namespace RPG::SimpRTX { class BakedSDFInstanceData; }
namespace RPG::SimpRTX { class BakedSDFPrefabData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }

#define HALFODCJNDE_ACJMBOAGDDN_OFFSET UNITYSDK_OFFSET(0x15B8E210)
#define HALFODCJNDE_AEMBFCFKIJE_OFFSET UNITYSDK_OFFSET(0x15B8A310)
#define HALFODCJNDE_BHFKMLOPNHB_OFFSET UNITYSDK_OFFSET(0x15B87A60)
#define HALFODCJNDE_BLBLKHCNEGC_OFFSET UNITYSDK_OFFSET(0x15B8B640)
#define HALFODCJNDE_CBNDCNAPCPB_OFFSET UNITYSDK_OFFSET(0x15B87F60)
#define HALFODCJNDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B8F5A0)
#define HALFODCJNDE_CIBFHIGIGPA_OFFSET UNITYSDK_OFFSET(0x15B8B5F0)
#define HALFODCJNDE_COECJFJDDOE_OFFSET UNITYSDK_OFFSET(0x15B8B900)
#define HALFODCJNDE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B86430)
#define HALFODCJNDE_DEKKMBAKNKO_OFFSET UNITYSDK_OFFSET(0x15B8B550)
#define HALFODCJNDE_DIECCNMPELP_OFFSET UNITYSDK_OFFSET(0x15B8CD20)
#define HALFODCJNDE_EKJIEEAAGJD_OFFSET UNITYSDK_OFFSET(0x15B86930)
#define HALFODCJNDE_ELGMDJPFKIO_OFFSET UNITYSDK_OFFSET(0x15B8BEA0)
#define HALFODCJNDE_EOECLDHAPKJ_OFFSET UNITYSDK_OFFSET(0x15B879F0)
#define HALFODCJNDE_FFIBFCDFHMP_OFFSET UNITYSDK_OFFSET(0x15B8E4E0)
#define HALFODCJNDE_FHNAKNHJEPF_OFFSET UNITYSDK_OFFSET(0x15B8E2C0)
#define HALFODCJNDE_FHPDFEBLPJA_OFFSET UNITYSDK_OFFSET(0x15B86D90)
#define HALFODCJNDE_FJCAKJOBJFO_OFFSET UNITYSDK_OFFSET(0x15B8C6B0)
#define HALFODCJNDE_FJKFNBANEMG_OFFSET UNITYSDK_OFFSET(0x15B87490)
#define HALFODCJNDE_FKDIHLENHMG_OFFSET UNITYSDK_OFFSET(0x15B8B8B0)
#define HALFODCJNDE_GBJGLFDICGO_OFFSET UNITYSDK_OFFSET(0x15B8B6C0)
#define HALFODCJNDE_GEMKFCFDNDO_OFFSET UNITYSDK_OFFSET(0x15B879A0)
#define HALFODCJNDE_GET_RESOURCEREVISION_OFFSET UNITYSDK_OFFSET(0x15B86800)
#define HALFODCJNDE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x15B86320)
#define HALFODCJNDE_HAMJKNHKFPK_OFFSET UNITYSDK_OFFSET(0x15B8B760)
#define HALFODCJNDE_HGEANCHJNDA_OFFSET UNITYSDK_OFFSET(0x15B8A560)
#define HALFODCJNDE_HNLIMJDMPAD_OFFSET UNITYSDK_OFFSET(0x15B8C470)
#define HALFODCJNDE_IEEMPCKBDMB_OFFSET UNITYSDK_OFFSET(0x15B87050)
#define HALFODCJNDE_IKLFLLHAODA_OFFSET UNITYSDK_OFFSET(0x15B86870)
#define HALFODCJNDE_ILAPOHHBOBM_OFFSET UNITYSDK_OFFSET(0x15B8A420)
#define HALFODCJNDE_IONMKGCDHFD_OFFSET UNITYSDK_OFFSET(0x15B8B870)
#define HALFODCJNDE_JFNDLJJODDJ_OFFSET UNITYSDK_OFFSET(0x15B8B680)
#define HALFODCJNDE_JMJABMEJHNE_OFFSET UNITYSDK_OFFSET(0x15B86E00)
#define HALFODCJNDE_KCFBPIOJLPO_OFFSET UNITYSDK_OFFSET(0x15B8E310)
#define HALFODCJNDE_KELLJBNLHAD_OFFSET UNITYSDK_OFFSET(0x15B8C460)
#define HALFODCJNDE_LIAONBCHNBA_OFFSET UNITYSDK_OFFSET(0x15B8B710)
#define HALFODCJNDE_LNLDJKBAJJM_OFFSET UNITYSDK_OFFSET(0x15B87840)
#define HALFODCJNDE_MAILMBGPHGE_OFFSET UNITYSDK_OFFSET(0x15B8B820)
#define HALFODCJNDE_NONOPLOBLAI_OFFSET UNITYSDK_OFFSET(0x15B8A390)
#define HALFODCJNDE_ODJDJBBKGBK_OFFSET UNITYSDK_OFFSET(0x15B8B330)
#define HALFODCJNDE_OEPNHLKKPDH_OFFSET UNITYSDK_OFFSET(0x15B8D700)
#define HALFODCJNDE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15B86820)
#define HALFODCJNDE_OJHKPGOMOLK_OFFSET UNITYSDK_OFFSET(0x15B88BA0)
#define HALFODCJNDE_PDBEAGNMGEL_OFFSET UNITYSDK_OFFSET(0x15B8D240)
#define HALFODCJNDE_PNKJAMGMLBJ_OFFSET UNITYSDK_OFFSET(0x15B89A80)
#define HALFODCJNDE_SET_RESOURCEREVISION_OFFSET UNITYSDK_OFFSET(0x15B86810)

inline static constexpr unsigned int HALFODCJNDE_TypeDefinitionIndex = 51777;

	class HALFODCJNDE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* LEONEOFCGOE; // 0x10
		::UnityEngine::ComputeBuffer* PPEOOBJCDGJ; // 0x18
		::Il2CppArray<::System::Object*>* EAALCMIFPHE; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* KGKHJBMEDMD; // 0x28
		::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>* IGKKMPHIGFI; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* LDEHGBKHGBP; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* NAFFIHHGHBK; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* BNJHDLBDMJE; // 0x48
		::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>* MCHNHCIIEIN; // 0x50
		::UnityEngine::Texture2DArray* EHFIDCPEOGP; // 0x58
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* KFHEJDPIMCI; // 0x60
		::Il2CppArray<::System::Object*>* CLOCLCGJJOP; // 0x68
		::UnityEngine::RenderTexture* LOFBPJMALCG; // 0x70
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::RPG::Rendering::SDFAtlasLayout>* BKHNMIBIJGH; // 0x78
		::UnityEngine::ComputeBuffer* LBMDCDGJLJF; // 0x80
		::UnityEngine::Texture2DArray* IHHEEBFAPDG; // 0x88
		::System::Collections::Generic::List_1<::System::Object*>* JKALFEJEJGB; // 0x90
		::UnityEngine::Texture2DArray* GPAJOKJIDMK; // 0x98
		::System::Boolean AJMHHLBLKEA; // 0xA0
		::System::Boolean EMHOAKLFPHB; // 0xA1
		::System::Boolean APMLOOBILCE; // 0xA2
		::System::Boolean NMGDBOPMCHE; // 0xA3
		::System::Int32 OCDBKMPGCBO; // 0xA4
		::UnityEngine::Vector3 EFMDMDCCHGG; // 0xA8
		::UnityEngine::Quaternion ACFFHGEFFJA; // 0xB4
		::System::Int32 _ResourceRevision_k__BackingField; // 0xC4
		::System::Int32 KOMIMBIPIEG; // 0xC8
		::System::Int32 JJCFMAOKHJP; // 0xCC
		::System::Int32 KFPDEGNJHNA; // 0xD0
		static ::HALFODCJNDE** StaticGet_EMLNOINPICJ()
		{
			return (::HALFODCJNDE**)UnitySDK::FromName("", "HALFODCJNDE")->GetStaticField(0x6DD70);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_FCOKLIPHHIO()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("", "HALFODCJNDE")->GetStaticField(0x6DD78);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_KJELCLDOCIG()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("", "HALFODCJNDE")->GetStaticField(0x6DD80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HALFODCJNDE_CCTOR_OFFSET))();
		}

		static ::HALFODCJNDE* GGBLHEHJBDO()
		{
			return ((::HALFODCJNDE*(*)())((::PBYTE)hIl2Cpp + HALFODCJNDE_GGBLHEHJBDO_OFFSET))();
		}

		::System::Int32 get_ResourceRevision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_GET_RESOURCEREVISION_OFFSET))(this);
		}

		::System::Void set_ResourceRevision(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_SET_RESOURCEREVISION_OFFSET))(this, a1);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void IKLFLLHAODA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_IKLFLLHAODA_OFFSET))(this);
		}

		::System::Void FHPDFEBLPJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_FHPDFEBLPJA_OFFSET))(this);
		}

		::System::Int32 FJKFNBANEMG(::RPG::Client::SDFObjectMonoPlugin* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + HALFODCJNDE_FJKFNBANEMG_OFFSET))(this, a1);
		}

		::System::Void LNLDJKBAJJM(::RPG::Client::SDFObjectMonoPlugin* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + HALFODCJNDE_LNLDJKBAJJM_OFFSET))(this, a1);
		}

		::System::Void GEMKFCFDNDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_GEMKFCFDNDO_OFFSET))(this);
		}

		::System::Int32 EOECLDHAPKJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_EOECLDHAPKJ_OFFSET))(this);
		}

		::System::Void JMJABMEJHNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_JMJABMEJHNE_OFFSET))(this);
		}

		::System::Int32 BHFKMLOPNHB(::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_BHFKMLOPNHB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CBNDCNAPCPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_CBNDCNAPCPB_OFFSET))(this);
		}

		::System::Void OJHKPGOMOLK(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a1, ::System::Collections::Generic::List_1<::RPG::Rendering::SDFAtlasLayout>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Collections::Generic::List_1<::RPG::Rendering::SDFAtlasLayout>*))((::PBYTE)hIl2Cpp + HALFODCJNDE_OJHKPGOMOLK_OFFSET))(this, a1, a2);
		}

		::System::Void PNKJAMGMLBJ(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* a1, ::UnityEngine::Texture2DArray* a2, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::UnityEngine::Texture2DArray*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>*))((::PBYTE)hIl2Cpp + HALFODCJNDE_PNKJAMGMLBJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NONOPLOBLAI(::UnityEngine::Texture2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + HALFODCJNDE_NONOPLOBLAI_OFFSET))(this, a1);
		}

		::System::Void AEMBFCFKIJE(::UnityEngine::Texture2DArray* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2DArray*))((::PBYTE)hIl2Cpp + HALFODCJNDE_AEMBFCFKIJE_OFFSET))(this, a1);
		}

		::System::Void IEEMPCKBDMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_IEEMPCKBDMB_OFFSET))(this);
		}

		::HALFODCJNDE_COHMJPDBLPK HGEANCHJNDA(::RPG::Client::SDFObjectMonoPlugin* a1)
		{
			return ((::HALFODCJNDE_COHMJPDBLPK(*)(::PVOID, ::RPG::Client::SDFObjectMonoPlugin*))((::PBYTE)hIl2Cpp + HALFODCJNDE_HGEANCHJNDA_OFFSET))(this, a1);
		}

		::System::Void ILAPOHHBOBM(::UnityEngine::ComputeBuffer* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_ILAPOHHBOBM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ODJDJBBKGBK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_ODJDJBBKGBK_OFFSET))(this, a1, a2);
		}

		::System::Void EKJIEEAAGJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_EKJIEEAAGJD_OFFSET))(this);
		}

		::System::Void DEKKMBAKNKO(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_DEKKMBAKNKO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ComputeBuffer* CIBFHIGIGPA()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_CIBFHIGIGPA_OFFSET))(this);
		}

		::UnityEngine::ComputeBuffer* BLBLKHCNEGC()
		{
			return ((::UnityEngine::ComputeBuffer*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_BLBLKHCNEGC_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* JFNDLJJODDJ()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_JFNDLJJODDJ_OFFSET))(this);
		}

		::System::Int32 GBJGLFDICGO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_GBJGLFDICGO_OFFSET))(this);
		}

		::System::Int32 LIAONBCHNBA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_LIAONBCHNBA_OFFSET))(this);
		}

		::System::Boolean HAMJKNHKFPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_HAMJKNHKFPK_OFFSET))(this);
		}

		::UnityEngine::Texture2DArray* MAILMBGPHGE()
		{
			return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_MAILMBGPHGE_OFFSET))(this);
		}

		::UnityEngine::Texture2DArray* IONMKGCDHFD()
		{
			return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_IONMKGCDHFD_OFFSET))(this);
		}

		::UnityEngine::Texture2DArray* FKDIHLENHMG()
		{
			return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_FKDIHLENHMG_OFFSET))(this);
		}

		::HALFODCJNDE_GFBLMIHCFDC* COECJFJDDOE(::System::Int32 a1)
		{
			return ((::HALFODCJNDE_GFBLMIHCFDC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_COECJFJDDOE_OFFSET))(this, a1);
		}

		::HALFODCJNDE_GFBLMIHCFDC* ELGMDJPFKIO(::System::Int32 a1)
		{
			return ((::HALFODCJNDE_GFBLMIHCFDC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_ELGMDJPFKIO_OFFSET))(this, a1);
		}

		::System::Boolean KELLJBNLHAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_KELLJBNLHAD_OFFSET))(this);
		}

		::System::Void HNLIMJDMPAD(::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>* a1, ::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>*, ::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>*))((::PBYTE)hIl2Cpp + HALFODCJNDE_HNLIMJDMPAD_OFFSET))(this, a1, a2);
		}

		::System::Void FJCAKJOBJFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_FJCAKJOBJFO_OFFSET))(this);
		}

		::System::Void DIECCNMPELP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_DIECCNMPELP_OFFSET))(this);
		}

		::System::Void OEPNHLKKPDH(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HALFODCJNDE_OEPNHLKKPDH_OFFSET))(this, a1);
		}

		::System::Int32 PDBEAGNMGEL(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HALFODCJNDE_PDBEAGNMGEL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ACJMBOAGDDN(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HALFODCJNDE_ACJMBOAGDDN_OFFSET))(this, a1, a2);
		}

		::System::Int32 FHNAKNHJEPF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_FHNAKNHJEPF_OFFSET))(this);
		}

		::System::Void KCFBPIOJLPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_KCFBPIOJLPO_OFFSET))(this);
		}

		::System::Void FFIBFCDFHMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALFODCJNDE_FFIBFCDFHMP_OFFSET))(this);
		}

	};
