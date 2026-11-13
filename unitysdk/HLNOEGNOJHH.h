#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLNOEGNOJHH_PlaceInteractState.h"
#include "unitysdk/HLNOEGNOJHH_PlaceValidateResult.h"
#include "unitysdk/RPG/Client/PropSelectionState.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
class PGIEBMKMECE;
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesPreviewCellView; }
namespace RPG::GameCore { class ChenLingFesItemConfig; }
namespace RPG::GameCore { class ChenLingFesRegionItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }

#define HLNOEGNOJHH_ACGIFFPFGAC_OFFSET UNITYSDK_OFFSET(0x198B4020)
#define HLNOEGNOJHH_ADJCOHAPPGM_OFFSET UNITYSDK_OFFSET(0x198AD690)
#define HLNOEGNOJHH_AFAKBHHKEGO_OFFSET UNITYSDK_OFFSET(0x198AE400)
#define HLNOEGNOJHH_AHFGKLDBOOE_OFFSET UNITYSDK_OFFSET(0x198AF8B0)
#define HLNOEGNOJHH_AHJAFCPEPLM_OFFSET UNITYSDK_OFFSET(0x198AE0C0)
#define HLNOEGNOJHH_APKJKHGKDLG_OFFSET UNITYSDK_OFFSET(0x198A9260)
#define HLNOEGNOJHH_BEABDFOAFNL_OFFSET UNITYSDK_OFFSET(0x198B0BD0)
#define HLNOEGNOJHH_BEGOMFKAKJH_OFFSET UNITYSDK_OFFSET(0x198ACE70)
#define HLNOEGNOJHH_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x198B4010)
#define HLNOEGNOJHH_BJBAOFEAIMN_OFFSET UNITYSDK_OFFSET(0x198B50C0)
#define HLNOEGNOJHH_BJMPMBPMDHG_OFFSET UNITYSDK_OFFSET(0x198AC6F0)
#define HLNOEGNOJHH_BOGBGKOHMFO_OFFSET UNITYSDK_OFFSET(0x198A8AC0)
#define HLNOEGNOJHH_CAJCNFAPHPD_OFFSET UNITYSDK_OFFSET(0x198A88F0)
#define HLNOEGNOJHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x198B6240)
#define HLNOEGNOJHH_CGFHMNEKIBG_OFFSET UNITYSDK_OFFSET(0x198B44A0)
#define HLNOEGNOJHH_CGKMINADPJL_OFFSET UNITYSDK_OFFSET(0x198AE4C0)
#define HLNOEGNOJHH_CMLDJMNJDPM_OFFSET UNITYSDK_OFFSET(0x198B6140)
#define HLNOEGNOJHH_CTOR_OFFSET UNITYSDK_OFFSET(0x198A8B40)
#define HLNOEGNOJHH_DAPHFDMJFLN_OFFSET UNITYSDK_OFFSET(0x198B15A0)
#define HLNOEGNOJHH_DEIIIDGCIPE_OFFSET UNITYSDK_OFFSET(0x198AC150)
#define HLNOEGNOJHH_DIIICBEJJFP_OFFSET UNITYSDK_OFFSET(0x198ABD20)
#define HLNOEGNOJHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x198A8FC0)
#define HLNOEGNOJHH_DJCNBILPDFL_OFFSET UNITYSDK_OFFSET(0x198B5F60)
#define HLNOEGNOJHH_EBCGEBEPOJJ_OFFSET UNITYSDK_OFFSET(0x198AA640)
#define HLNOEGNOJHH_EEIKKAKEBDF_OFFSET UNITYSDK_OFFSET(0x198AC1B0)
#define HLNOEGNOJHH_EIILCKGACEN_OFFSET UNITYSDK_OFFSET(0x198B0EE0)
#define HLNOEGNOJHH_EJKEFDKJOKL_OFFSET UNITYSDK_OFFSET(0x198AE210)
#define HLNOEGNOJHH_EKAMFBADKEA_OFFSET UNITYSDK_OFFSET(0x198B0DB0)
#define HLNOEGNOJHH_FGONKMBCKCI_OFFSET UNITYSDK_OFFSET(0x198AD3D0)
#define HLNOEGNOJHH_FKCHMOPFLLF_OFFSET UNITYSDK_OFFSET(0x198B3F60)
#define HLNOEGNOJHH_FMPGEALKHIL_OFFSET UNITYSDK_OFFSET(0x198A8A40)
#define HLNOEGNOJHH_FNJBAHBAONE_OFFSET UNITYSDK_OFFSET(0x198ADF60)
#define HLNOEGNOJHH_FOLFOKLNOMJ_OFFSET UNITYSDK_OFFSET(0x198AB8B0)
#define HLNOEGNOJHH_FPJKAIKBFKN_OFFSET UNITYSDK_OFFSET(0x198AD8F0)
#define HLNOEGNOJHH_GGEBHJHAFDD_OFFSET UNITYSDK_OFFSET(0x198ABFC0)
#define HLNOEGNOJHH_GMMCKGHHDKN_OFFSET UNITYSDK_OFFSET(0x198B2320)
#define HLNOEGNOJHH_GOJIAANFBIF_OFFSET UNITYSDK_OFFSET(0x198AA480)
#define HLNOEGNOJHH_GOLBCFGDMKN_OFFSET UNITYSDK_OFFSET(0x198AC670)
#define HLNOEGNOJHH_HBKHOMFNODB_OFFSET UNITYSDK_OFFSET(0x198B3CD0)
#define HLNOEGNOJHH_HDBCHONIJEO_OFFSET UNITYSDK_OFFSET(0x198AC920)
#define HLNOEGNOJHH_HEEEGEGLJNK_OFFSET UNITYSDK_OFFSET(0x198B0D70)
#define HLNOEGNOJHH_HGNCHDHBKEL_OFFSET UNITYSDK_OFFSET(0x198ABE10)
#define HLNOEGNOJHH_HLDOEOOMJNB_OFFSET UNITYSDK_OFFSET(0x198B4130)
#define HLNOEGNOJHH_HMPDGGCCENF_OFFSET UNITYSDK_OFFSET(0x198AC3D0)
#define HLNOEGNOJHH_HOAMAAEKFHO_OFFSET UNITYSDK_OFFSET(0x198AE260)
#define HLNOEGNOJHH_IEOBDNPIELL_OFFSET UNITYSDK_OFFSET(0x198AD340)
#define HLNOEGNOJHH_IFNCGMDKJJL_OFFSET UNITYSDK_OFFSET(0x198AC750)
#define HLNOEGNOJHH_IFNOFKAIFGB_OFFSET UNITYSDK_OFFSET(0x198A89C0)
#define HLNOEGNOJHH_IGOCHIIOHDC_OFFSET UNITYSDK_OFFSET(0x198B5E60)
#define HLNOEGNOJHH_IKBKDCLPACI_OFFSET UNITYSDK_OFFSET(0x198B1F70)
#define HLNOEGNOJHH_IMGNICPIMEE_OFFSET UNITYSDK_OFFSET(0x198A9AF0)
#define HLNOEGNOJHH_IOOHKKAMHFF_OFFSET UNITYSDK_OFFSET(0x198A8970)
#define HLNOEGNOJHH_IPHDGPDNGMP_OFFSET UNITYSDK_OFFSET(0x198B0B60)
#define HLNOEGNOJHH_IPMPBBEFHIC_OFFSET UNITYSDK_OFFSET(0x198AE030)
#define HLNOEGNOJHH_JBBLEFKALOA_OFFSET UNITYSDK_OFFSET(0x198ABCA0)
#define HLNOEGNOJHH_JBGIFDLCGGC_OFFSET UNITYSDK_OFFSET(0x198AEFA0)
#define HLNOEGNOJHH_JEBLNGGOALM_1_OFFSET UNITYSDK_OFFSET(0x198B0250)
#define HLNOEGNOJHH_JEBLNGGOALM_OFFSET UNITYSDK_OFFSET(0x198AFC90)
#define HLNOEGNOJHH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x198A91F0)
#define HLNOEGNOJHH_JOAIEHFEDEJ_OFFSET UNITYSDK_OFFSET(0x198AB1F0)
#define HLNOEGNOJHH_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x198ACD10)
#define HLNOEGNOJHH_KEHLEGIMEPH_OFFSET UNITYSDK_OFFSET(0x198AEBF0)
#define HLNOEGNOJHH_KFHKLLNDKCN_OFFSET UNITYSDK_OFFSET(0x198AC090)
#define HLNOEGNOJHH_KFPMFHJNJDN_OFFSET UNITYSDK_OFFSET(0x198B54B0)
#define HLNOEGNOJHH_KGKJIJJCLBA_OFFSET UNITYSDK_OFFSET(0x198AC9F0)
#define HLNOEGNOJHH_KHBEMJJHHKC_OFFSET UNITYSDK_OFFSET(0x198B56C0)
#define HLNOEGNOJHH_KNIHEANJCAA_OFFSET UNITYSDK_OFFSET(0x198B0D30)
#define HLNOEGNOJHH_LLCGNACPKDE_OFFSET UNITYSDK_OFFSET(0x198ACEE0)
#define HLNOEGNOJHH_MAIAMAEBEIJ_OFFSET UNITYSDK_OFFSET(0x198B3FC0)
#define HLNOEGNOJHH_MFNKDHBGBLK_OFFSET UNITYSDK_OFFSET(0x198B4F60)
#define HLNOEGNOJHH_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0x198ABAF0)
#define HLNOEGNOJHH_MPEBFCPEHPC_OFFSET UNITYSDK_OFFSET(0x198B5020)
#define HLNOEGNOJHH_NAAFCMODNGI_OFFSET UNITYSDK_OFFSET(0x198ABF50)
#define HLNOEGNOJHH_NAGADEEMABM_OFFSET UNITYSDK_OFFSET(0x198B1BE0)
#define HLNOEGNOJHH_NBPKHPHLMLN_OFFSET UNITYSDK_OFFSET(0x198AD100)
#define HLNOEGNOJHH_NGBJLHMGFAN_OFFSET UNITYSDK_OFFSET(0x198AC8D0)
#define HLNOEGNOJHH_NHDMHAEDAGG_OFFSET UNITYSDK_OFFSET(0x198ACE20)
#define HLNOEGNOJHH_NJAIKJOMIAP_OFFSET UNITYSDK_OFFSET(0x198ACFB0)
#define HLNOEGNOJHH_NJGDNOAABOA_OFFSET UNITYSDK_OFFSET(0x198AD050)
#define HLNOEGNOJHH_NLABBKNACLF_OFFSET UNITYSDK_OFFSET(0x198ACDA0)
#define HLNOEGNOJHH_NNDJBACCGPD_OFFSET UNITYSDK_OFFSET(0x198AC270)
#define HLNOEGNOJHH_OBNLEHOANJI_OFFSET UNITYSDK_OFFSET(0x198B5E10)
#define HLNOEGNOJHH_OGHAPMLCEKA_OFFSET UNITYSDK_OFFSET(0x198B1D40)
#define HLNOEGNOJHH_PDMDGKJJJDI_OFFSET UNITYSDK_OFFSET(0x198ADB40)
#define HLNOEGNOJHH_PEGFNKDJJMH_OFFSET UNITYSDK_OFFSET(0x198AC540)
#define HLNOEGNOJHH_PNDNBAECABD_OFFSET UNITYSDK_OFFSET(0x198B21D0)
#define HLNOEGNOJHH_POJEGGEHIAE_OFFSET UNITYSDK_OFFSET(0x198B5610)
#define HLNOEGNOJHH_PPGILLLAABD_OFFSET UNITYSDK_OFFSET(0x198AAAB0)

inline static constexpr unsigned int HLNOEGNOJHH_TypeDefinitionIndex = 80490;

	class HLNOEGNOJHH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* NECDGPFFIGA; // 0x10
		::System::Collections::Generic::HashSet_1<::NGFHCJIAOLH*>* EIPDOAIHBFB; // 0x18
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* HDEGNFAKKAA; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CAKBKJKBLOC; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* MDKEMDHKCIB; // 0x30
		::OAIPJANPCEK* PDENFEFCAGN; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesPreviewCellView*>* DLLPFEEMDBA; // 0x40
		::UnityEngine::GameObject* BMONMGAKNDD; // 0x48
		::UnityEngine::GameObject* IKPEMLLKGEP; // 0x50
		::System::Collections::Generic::HashSet_1<::System::Int32>* JDJHCDMLKHN; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChenLingFes::ChenLingFesPreviewCellView*>* BHKBELEMFJB; // 0x60
		::NGFHCJIAOLH* HMLIIPNPCCC; // 0x68
		::RPG::MVector2 NIECDKAALBB; // 0x70
		::UnityEngine::Vector2Int PHAMGIAIPHD; // 0x78
		::System::Int32 DJDFPFOEEKP; // 0x80
		::System::Boolean HELOEOOKPML; // 0x84
		::System::Boolean IHDMFDBECLF; // 0x85
		::System::Boolean PABPMFAHLLO; // 0x86
		::System::Boolean HLPJADFGMAG; // 0x87
		::UnityEngine::Vector2Int KEADPEJDFBB; // 0x88
		::System::Nullable_1<::System::Single> NJEFKAGBOIB; // 0x90
		::System::Single AMPPEIABOCN; // 0x98
		::HLNOEGNOJHH_PlaceInteractState DLNIGFGLPLJ; // 0x9C
		static ::System::String** StaticGet_BKBIENPOPFL()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19EC0);
		}

		static ::System::String** StaticGet_CDIBFPGBEKL()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19EC8);
		}

		static ::System::String** StaticGet_BIKHDOCHFLB()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19ED0);
		}

		static ::System::String** StaticGet_AGKEFENEKJC()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19ED8);
		}

		static ::System::String** StaticGet_GBJIANJOILJ()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19EE0);
		}

		static ::System::String** StaticGet_HGAMMICDBOP()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19EE8);
		}

		static ::System::String** StaticGet_OAENANLDKOL()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19EF0);
		}

		static ::System::String** StaticGet_IOFKDKNHJKL()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19EF8);
		}

		static ::System::String** StaticGet_OGGOBAEKOCN()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19F00);
		}

		static ::System::String** StaticGet_KCPPAPDPHOF()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19F08);
		}

		static ::System::String** StaticGet_CHNJIAMLAHL()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19F10);
		}

		static ::System::String** StaticGet_IFJKFKJMIFM()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19F18);
		}

		static ::System::String** StaticGet_ECLGLOGIDHF()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19F20);
		}

		static ::System::String** StaticGet_IABALJKFABE()
		{
			return (::System::String**)UnitySDK::FromName("", "HLNOEGNOJHH")->GetStaticField(0x19F28);
		}

		// static const ::System::Object ADONOHPNGCI; // 0x0
		// static const ::System::Object IMICMBPMPCH; // 0x0
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLNOEGNOJHH_CCTOR_OFFSET))();
		}

		::System::Boolean CAJCNFAPHPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_CAJCNFAPHPD_OFFSET))(this);
		}

		::System::Boolean IFNOFKAIFGB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IFNOFKAIFGB_OFFSET))(this);
		}

		::System::Boolean FMPGEALKHIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_FMPGEALKHIL_OFFSET))(this);
		}

		::System::Boolean BOGBGKOHMFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_BOGBGKOHMFO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void EBCGEBEPOJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_EBCGEBEPOJJ_OFFSET))(this);
		}

		::System::Boolean FOLFOKLNOMJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_FOLFOKLNOMJ_OFFSET))(this, a1);
		}

		::System::Boolean MIDKKNAGOFA(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_MIDKKNAGOFA_OFFSET))(this, a1);
		}

		::System::Boolean DEIIIDGCIPE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_DEIIIDGCIPE_OFFSET))(this);
		}

		::System::Boolean JBBLEFKALOA(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_JBBLEFKALOA_OFFSET))(this, a1);
		}

		::System::Boolean GOLBCFGDMKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_GOLBCFGDMKN_OFFSET))(this);
		}

		::System::Boolean IFNCGMDKJJL(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IFNCGMDKJJL_OFFSET))(this, a1);
		}

		::System::Boolean KAOLPGACCID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_KAOLPGACCID_OFFSET))(this);
		}

		::System::Boolean BEGOMFKAKJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_BEGOMFKAKJH_OFFSET))(this);
		}

		::System::Boolean LLCGNACPKDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_LLCGNACPKDE_OFFSET))(this);
		}

		::System::Boolean NJAIKJOMIAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NJAIKJOMIAP_OFFSET))(this);
		}

		::System::Void HDBCHONIJEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_HDBCHONIJEO_OFFSET))(this);
		}

		::System::Boolean HGNCHDHBKEL(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_HGNCHDHBKEL_OFFSET))(this, a1);
		}

		::System::Boolean EEIKKAKEBDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_EEIKKAKEBDF_OFFSET))(this);
		}

		::System::Boolean NAAFCMODNGI(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NAAFCMODNGI_OFFSET))(this, a1);
		}

		::System::Boolean NNDJBACCGPD(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NNDJBACCGPD_OFFSET))(this, a1);
		}

		::System::Void GGEBHJHAFDD(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_GGEBHJHAFDD_OFFSET))(this, a1);
		}

		::System::Void KFHKLLNDKCN(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_KFHKLLNDKCN_OFFSET))(this, a1);
		}

		::System::Void NJGDNOAABOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NJGDNOAABOA_OFFSET))(this);
		}

		::System::Boolean PEGFNKDJJMH(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_PEGFNKDJJMH_OFFSET))(this, a1);
		}

		::System::Boolean HMPDGGCCENF(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_HMPDGGCCENF_OFFSET))(this, a1);
		}

		::System::Boolean BJMPMBPMDHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_BJMPMBPMDHG_OFFSET))(this);
		}

		::System::Boolean IPMPBBEFHIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IPMPBBEFHIC_OFFSET))(this);
		}

		::System::Void AHJAFCPEPLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_AHJAFCPEPLM_OFFSET))(this);
		}

		::System::Void EJKEFDKJOKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_EJKEFDKJOKL_OFFSET))(this);
		}

		::System::Boolean NGBJLHMGFAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NGBJLHMGFAN_OFFSET))(this);
		}

		::System::Void KGKJIJJCLBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_KGKJIJJCLBA_OFFSET))(this);
		}

		::System::Boolean NLABBKNACLF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NLABBKNACLF_OFFSET))(this);
		}

		::System::Boolean NHDMHAEDAGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NHDMHAEDAGG_OFFSET))(this);
		}

		::System::Void KEHLEGIMEPH(::System::UInt32 a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_KEHLEGIMEPH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JEBLNGGOALM(::RPG::GameCore::ChenLingFesRegionItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesRegionItemConfig*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_JEBLNGGOALM_OFFSET))(this, a1);
		}

		::System::Void JEBLNGGOALM_1(::PGIEBMKMECE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGIEBMKMECE*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_JEBLNGGOALM_1_OFFSET))(this, a1);
		}

		::System::UInt32 IPHDGPDNGMP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IPHDGPDNGMP_OFFSET))(this);
		}

		::HLNOEGNOJHH_PlaceValidateResult HOAMAAEKFHO()
		{
			return ((::HLNOEGNOJHH_PlaceValidateResult(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_HOAMAAEKFHO_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::NGFHCJIAOLH*>* KNIHEANJCAA()
		{
			return ((::System::Collections::Generic::HashSet_1<::NGFHCJIAOLH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_KNIHEANJCAA_OFFSET))(this);
		}

		::NGFHCJIAOLH* HEEEGEGLJNK()
		{
			return ((::NGFHCJIAOLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_HEEEGEGLJNK_OFFSET))(this);
		}

		::System::Void EKAMFBADKEA(::NGFHCJIAOLH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_EKAMFBADKEA_OFFSET))(this, a1, a2);
		}

		::System::Void JOAIEHFEDEJ(::NGFHCJIAOLH* a1, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_JOAIEHFEDEJ_OFFSET))(this, a1, a2);
		}

		::System::Void EIILCKGACEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_EIILCKGACEN_OFFSET))(this);
		}

		::System::Void DAPHFDMJFLN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_DAPHFDMJFLN_OFFSET))(this, a1);
		}

		::System::Void DIIICBEJJFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_DIIICBEJJFP_OFFSET))(this);
		}

		::System::Void NAGADEEMABM(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NAGADEEMABM_OFFSET))(this, a1);
		}

		::System::Void IKBKDCLPACI(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IKBKDCLPACI_OFFSET))(this, a1);
		}

		::System::Void OGHAPMLCEKA(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_OGHAPMLCEKA_OFFSET))(this, a1);
		}

		::System::Void AFAKBHHKEGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_AFAKBHHKEGO_OFFSET))(this);
		}

		::System::Void APKJKHGKDLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_APKJKHGKDLG_OFFSET))(this);
		}

		::System::Void PNDNBAECABD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_PNDNBAECABD_OFFSET))(this);
		}

		::System::Int32 GMMCKGHHDKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_GMMCKGHHDKN_OFFSET))(this);
		}

		::System::Void FNJBAHBAONE(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_FNJBAHBAONE_OFFSET))(this, a1);
		}

		::System::Void FKCHMOPFLLF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_FKCHMOPFLLF_OFFSET))(this, a1);
		}

		::System::Boolean MAIAMAEBEIJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_MAIAMAEBEIJ_OFFSET))(this);
		}

		::HLNOEGNOJHH_PlaceInteractState BGDKFHEBDFJ()
		{
			return ((::HLNOEGNOJHH_PlaceInteractState(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void FGONKMBCKCI(::HLNOEGNOJHH_PlaceInteractState a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLNOEGNOJHH_PlaceInteractState))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_FGONKMBCKCI_OFFSET))(this, a1);
		}

		::System::Void ACGIFFPFGAC(::HLNOEGNOJHH_PlaceInteractState a1, ::HLNOEGNOJHH_PlaceInteractState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HLNOEGNOJHH_PlaceInteractState, ::HLNOEGNOJHH_PlaceInteractState))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_ACGIFFPFGAC_OFFSET))(this, a1, a2);
		}

		::System::Boolean IOOHKKAMHFF(::HLNOEGNOJHH_PlaceInteractState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLNOEGNOJHH_PlaceInteractState))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IOOHKKAMHFF_OFFSET))(this, a1);
		}

		::System::Void IMGNICPIMEE(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IMGNICPIMEE_OFFSET))(this, a1);
		}

		::System::Void PPGILLLAABD(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_PPGILLLAABD_OFFSET))(this, a1);
		}

		::HLNOEGNOJHH_PlaceValidateResult BEABDFOAFNL(::NGFHCJIAOLH* a1)
		{
			return ((::HLNOEGNOJHH_PlaceValidateResult(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_BEABDFOAFNL_OFFSET))(this, a1);
		}

		::System::Void JBGIFDLCGGC(::RPG::GameCore::ChenLingFesItemConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesItemConfig*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_JBGIFDLCGGC_OFFSET))(this, a1);
		}

		::System::Int32 BJBAOFEAIMN(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_BJBAOFEAIMN_OFFSET))(this, a1);
		}

		::System::Void CGKMINADPJL(::NGFHCJIAOLH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_CGKMINADPJL_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFPMFHJNJDN(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_KFPMFHJNJDN_OFFSET))(this, a1);
		}

		::System::Single POJEGGEHIAE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_POJEGGEHIAE_OFFSET))(this);
		}

		::System::Void NBPKHPHLMLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_NBPKHPHLMLN_OFFSET))(this);
		}

		::System::Void OBNLEHOANJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_OBNLEHOANJI_OFFSET))(this);
		}

		::System::Void HLDOEOOMJNB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_HLDOEOOMJNB_OFFSET))(this, a1);
		}

		::System::Void KHBEMJJHHKC(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_KHBEMJJHHKC_OFFSET))(this, a1);
		}

		::System::Void ADJCOHAPPGM(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_ADJCOHAPPGM_OFFSET))(this, a1);
		}

		::System::Void FPJKAIKBFKN(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_FPJKAIKBFKN_OFFSET))(this, a1);
		}

		::System::Void PDMDGKJJJDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_PDMDGKJJJDI_OFFSET))(this);
		}

		::System::Boolean HBKHOMFNODB(::NGFHCJIAOLH* a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_HBKHOMFNODB_OFFSET))(this, a1, a2);
		}

		::System::Void CGFHMNEKIBG(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_CGFHMNEKIBG_OFFSET))(this, a1);
		}

		::System::Void GOJIAANFBIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_GOJIAANFBIF_OFFSET))(this);
		}

		::System::Void DJCNBILPDFL(::NGFHCJIAOLH* a1, ::RPG::Client::PropSelectionState a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGFHCJIAOLH*, ::RPG::Client::PropSelectionState))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_DJCNBILPDFL_OFFSET))(this, a1, a2);
		}

		::System::Void AHFGKLDBOOE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_AHFGKLDBOOE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* MFNKDHBGBLK()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_MFNKDHBGBLK_OFFSET))(this);
		}

		::System::Void CMLDJMNJDPM(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_CMLDJMNJDPM_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* MPEBFCPEHPC()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_MPEBFCPEHPC_OFFSET))(this);
		}

		::System::Void IGOCHIIOHDC(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IGOCHIIOHDC_OFFSET))(this, a1);
		}

		::System::Boolean IEOBDNPIELL(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + HLNOEGNOJHH_IEOBDNPIELL_OFFSET))(this, a1);
		}

	};
