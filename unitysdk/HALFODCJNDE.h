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

#define HALFODCJNDE_ACJMBOAGDDN_OFFSET UNITYSDK_OFFSET(0x17DEFD40)
#define HALFODCJNDE_AEMBFCFKIJE_OFFSET UNITYSDK_OFFSET(0x17DEBE00)
#define HALFODCJNDE_BHFKMLOPNHB_OFFSET UNITYSDK_OFFSET(0x17DE9560)
#define HALFODCJNDE_BLBLKHCNEGC_OFFSET UNITYSDK_OFFSET(0x17DED130)
#define HALFODCJNDE_CBNDCNAPCPB_OFFSET UNITYSDK_OFFSET(0x17DE9A50)
#define HALFODCJNDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x17DF10C0)
#define HALFODCJNDE_CIBFHIGIGPA_OFFSET UNITYSDK_OFFSET(0x17DED0F0)
#define HALFODCJNDE_COECJFJDDOE_OFFSET UNITYSDK_OFFSET(0x17DED3D0)
#define HALFODCJNDE_CTOR_OFFSET UNITYSDK_OFFSET(0x17DE7F20)
#define HALFODCJNDE_DEKKMBAKNKO_OFFSET UNITYSDK_OFFSET(0x17DED050)
#define HALFODCJNDE_DIECCNMPELP_OFFSET UNITYSDK_OFFSET(0x17DEE850)
#define HALFODCJNDE_EKJIEEAAGJD_OFFSET UNITYSDK_OFFSET(0x17DE8420)
#define HALFODCJNDE_ELGMDJPFKIO_OFFSET UNITYSDK_OFFSET(0x17DED990)
#define HALFODCJNDE_EOECLDHAPKJ_OFFSET UNITYSDK_OFFSET(0x17DE94F0)
#define HALFODCJNDE_FFIBFCDFHMP_OFFSET UNITYSDK_OFFSET(0x17DF0010)
#define HALFODCJNDE_FHNAKNHJEPF_OFFSET UNITYSDK_OFFSET(0x17DEFDF0)
#define HALFODCJNDE_FHPDFEBLPJA_OFFSET UNITYSDK_OFFSET(0x17DE8880)
#define HALFODCJNDE_FJCAKJOBJFO_OFFSET UNITYSDK_OFFSET(0x17DEE1E0)
#define HALFODCJNDE_FJKFNBANEMG_OFFSET UNITYSDK_OFFSET(0x17DE8F90)
#define HALFODCJNDE_FKDIHLENHMG_OFFSET UNITYSDK_OFFSET(0x17DED390)
#define HALFODCJNDE_GBJGLFDICGO_OFFSET UNITYSDK_OFFSET(0x17DED1B0)
#define HALFODCJNDE_GEMKFCFDNDO_OFFSET UNITYSDK_OFFSET(0x17DE94A0)
#define HALFODCJNDE_GET_RESOURCEREVISION_OFFSET UNITYSDK_OFFSET(0x17DE82F0)
#define HALFODCJNDE_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x17DE7E10)
#define HALFODCJNDE_HAMJKNHKFPK_OFFSET UNITYSDK_OFFSET(0x17DED250)
#define HALFODCJNDE_HGEANCHJNDA_OFFSET UNITYSDK_OFFSET(0x17DEC050)
#define HALFODCJNDE_HNLIMJDMPAD_OFFSET UNITYSDK_OFFSET(0x17DEDFA0)
#define HALFODCJNDE_IEEMPCKBDMB_OFFSET UNITYSDK_OFFSET(0x17DE8B50)
#define HALFODCJNDE_IKLFLLHAODA_OFFSET UNITYSDK_OFFSET(0x17DE8360)
#define HALFODCJNDE_ILAPOHHBOBM_OFFSET UNITYSDK_OFFSET(0x17DEBF10)
#define HALFODCJNDE_IONMKGCDHFD_OFFSET UNITYSDK_OFFSET(0x17DED350)
#define HALFODCJNDE_JFNDLJJODDJ_OFFSET UNITYSDK_OFFSET(0x17DED170)
#define HALFODCJNDE_JMJABMEJHNE_OFFSET UNITYSDK_OFFSET(0x17DE88F0)
#define HALFODCJNDE_KCFBPIOJLPO_OFFSET UNITYSDK_OFFSET(0x17DEFE40)
#define HALFODCJNDE_KELLJBNLHAD_OFFSET UNITYSDK_OFFSET(0x17DEDF90)
#define HALFODCJNDE_LIAONBCHNBA_OFFSET UNITYSDK_OFFSET(0x17DED200)
#define HALFODCJNDE_LNLDJKBAJJM_OFFSET UNITYSDK_OFFSET(0x17DE9340)
#define HALFODCJNDE_MAILMBGPHGE_OFFSET UNITYSDK_OFFSET(0x17DED310)
#define HALFODCJNDE_NONOPLOBLAI_OFFSET UNITYSDK_OFFSET(0x17DEBE80)
#define HALFODCJNDE_ODJDJBBKGBK_OFFSET UNITYSDK_OFFSET(0x17DECE30)
#define HALFODCJNDE_OEPNHLKKPDH_OFFSET UNITYSDK_OFFSET(0x17DEF220)
#define HALFODCJNDE_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x17DE8310)
#define HALFODCJNDE_OJHKPGOMOLK_OFFSET UNITYSDK_OFFSET(0x17DEA690)
#define HALFODCJNDE_PDBEAGNMGEL_OFFSET UNITYSDK_OFFSET(0x17DEED70)
#define HALFODCJNDE_PNKJAMGMLBJ_OFFSET UNITYSDK_OFFSET(0x17DEB570)
#define HALFODCJNDE_SET_RESOURCEREVISION_OFFSET UNITYSDK_OFFSET(0x17DE8300)

inline static constexpr unsigned int HALFODCJNDE_TypeDefinitionIndex = 52863;

	class HALFODCJNDE : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* EAALCMIFPHE; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* JKALFEJEJGB; // 0x18
		::UnityEngine::ComputeBuffer* PPEOOBJCDGJ; // 0x20
		::UnityEngine::ComputeBuffer* LBMDCDGJLJF; // 0x28
		::UnityEngine::Texture2DArray* IHHEEBFAPDG; // 0x30
		::Il2CppArray<::RPG::SimpRTX::BakedSDFPrefabData*>* IGKKMPHIGFI; // 0x38
		::UnityEngine::Texture2DArray* EHFIDCPEOGP; // 0x40
		::UnityEngine::Texture2DArray* GPAJOKJIDMK; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* LDEHGBKHGBP; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* LEONEOFCGOE; // 0x58
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* KFHEJDPIMCI; // 0x60
		::Il2CppArray<::System::Object*>* CLOCLCGJJOP; // 0x68
		::UnityEngine::RenderTexture* LOFBPJMALCG; // 0x70
		::Il2CppArray<::RPG::SimpRTX::BakedSDFInstanceData*>* MCHNHCIIEIN; // 0x78
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::RPG::Rendering::SDFAtlasLayout>* BKHNMIBIJGH; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::SDFObjectMonoPlugin*>* BNJHDLBDMJE; // 0x88
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* KGKHJBMEDMD; // 0x90
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Texture2D*, ::System::Int32>* NAFFIHHGHBK; // 0x98
		::System::Int32 JJCFMAOKHJP; // 0xA0
		::System::Int32 KFPDEGNJHNA; // 0xA4
		::System::Int32 _ResourceRevision_k__BackingField; // 0xA8
		::UnityEngine::Vector3 EFMDMDCCHGG; // 0xAC
		::System::Boolean AJMHHLBLKEA; // 0xB8
		::System::Boolean NMGDBOPMCHE; // 0xB9
		::System::Boolean APMLOOBILCE; // 0xBA
		::System::Boolean EMHOAKLFPHB; // 0xBB
		::UnityEngine::Quaternion ACFFHGEFFJA; // 0xBC
		::System::Int32 OCDBKMPGCBO; // 0xCC
		::System::Int32 KOMIMBIPIEG; // 0xD0
		static ::Il2CppArray<::System::Object*>** StaticGet_KJELCLDOCIG()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("", "HALFODCJNDE")->GetStaticField(0x72ED0);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_FCOKLIPHHIO()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("", "HALFODCJNDE")->GetStaticField(0x72ED8);
		}

		static ::HALFODCJNDE** StaticGet_EMLNOINPICJ()
		{
			return (::HALFODCJNDE**)UnitySDK::FromName("", "HALFODCJNDE")->GetStaticField(0x72EE0);
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
