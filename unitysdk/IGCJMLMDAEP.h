#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesCellType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDirection.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesToastStyleType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
class PDNNJOEOMLM;
namespace Entitas { template <typename T> class IMatcher_1; }
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesView; }
namespace RPG::GameCore { class ChenLingFesPosition; }
namespace RPG::GameCore { class ChenLingFesPropertyModifier; }
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IGCJMLMDAEP_AKHCKEMBLLJ_OFFSET UNITYSDK_OFFSET(0x163F5F50)
#define IGCJMLMDAEP_ANIIHHNLEPD_OFFSET UNITYSDK_OFFSET(0x163F8150)
#define IGCJMLMDAEP_BMIDMFMMCHB_OFFSET UNITYSDK_OFFSET(0x163FAD00)
#define IGCJMLMDAEP_BNOLOMNDDAJ_OFFSET UNITYSDK_OFFSET(0x163F84D0)
#define IGCJMLMDAEP_CCTOR_OFFSET UNITYSDK_OFFSET(0x16401120)
#define IGCJMLMDAEP_CEPBIIDFJFK_OFFSET UNITYSDK_OFFSET(0x16400AB0)
#define IGCJMLMDAEP_CMLLECNEJKI_OFFSET UNITYSDK_OFFSET(0x163F6400)
#define IGCJMLMDAEP_CMPNCFCJCNE_1_OFFSET UNITYSDK_OFFSET(0x163FFB30)
#define IGCJMLMDAEP_CMPNCFCJCNE_OFFSET UNITYSDK_OFFSET(0x163FF970)
#define IGCJMLMDAEP_DBEFHAPFJKF_OFFSET UNITYSDK_OFFSET(0x163FCE60)
#define IGCJMLMDAEP_DFFGICDOKEG_OFFSET UNITYSDK_OFFSET(0x163F9240)
#define IGCJMLMDAEP_DHMJMEBEBNB_OFFSET UNITYSDK_OFFSET(0x163FC980)
#define IGCJMLMDAEP_EAGCICDIGMB_OFFSET UNITYSDK_OFFSET(0x163F63C0)
#define IGCJMLMDAEP_ECCEMBIIJPF_OFFSET UNITYSDK_OFFSET(0x163F5920)
#define IGCJMLMDAEP_EDMCHJFGMNL_OFFSET UNITYSDK_OFFSET(0x163F5550)
#define IGCJMLMDAEP_EHFGIFJEICA_OFFSET UNITYSDK_OFFSET(0x163F6B70)
#define IGCJMLMDAEP_ELEPDOMDAGA_OFFSET UNITYSDK_OFFSET(0x163F5070)
#define IGCJMLMDAEP_FAAPKMJABLF_OFFSET UNITYSDK_OFFSET(0x163F9090)
#define IGCJMLMDAEP_FJOFEMBFOLE_OFFSET UNITYSDK_OFFSET(0x16400E90)
#define IGCJMLMDAEP_FPEIMBLNILD_OFFSET UNITYSDK_OFFSET(0x163FA760)
#define IGCJMLMDAEP_GBLKCKFGJDH_OFFSET UNITYSDK_OFFSET(0x163FBAC0)
#define IGCJMLMDAEP_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0x16401060)
#define IGCJMLMDAEP_GIMPFCJJGNA_OFFSET UNITYSDK_OFFSET(0x163F50B0)
#define IGCJMLMDAEP_GKMEDOHJHIK_OFFSET UNITYSDK_OFFSET(0x163F5880)
#define IGCJMLMDAEP_GLEJMLGNPFD_OFFSET UNITYSDK_OFFSET(0x163F8C80)
#define IGCJMLMDAEP_GLLEMGOOMLB_OFFSET UNITYSDK_OFFSET(0x163F8310)
#define IGCJMLMDAEP_GPLBDDDMDHP_OFFSET UNITYSDK_OFFSET(0x163F95A0)
#define IGCJMLMDAEP_HBDCLBMAHAF_OFFSET UNITYSDK_OFFSET(0x163FB290)
#define IGCJMLMDAEP_HCBGEHDBDFC_1_OFFSET UNITYSDK_OFFSET(0x163F7270)
#define IGCJMLMDAEP_HCBGEHDBDFC_OFFSET UNITYSDK_OFFSET(0x163F6CE0)
#define IGCJMLMDAEP_HENOGNIPABI_OFFSET UNITYSDK_OFFSET(0x163F8EA0)
#define IGCJMLMDAEP_HGGKHNJGNPA_1_OFFSET UNITYSDK_OFFSET(0x163F72F0)
#define IGCJMLMDAEP_HGGKHNJGNPA_OFFSET UNITYSDK_OFFSET(0x163F6900)
#define IGCJMLMDAEP_HKDBPLHGHBA_OFFSET UNITYSDK_OFFSET(0x163FF870)
#define IGCJMLMDAEP_HNBDFJGDBJC_OFFSET UNITYSDK_OFFSET(0x163FA270)
#define IGCJMLMDAEP_HOHBBIPLBDA_OFFSET UNITYSDK_OFFSET(0x163FD790)
#define IGCJMLMDAEP_HOKGNFMDCBL_OFFSET UNITYSDK_OFFSET(0x163F5390)
#define IGCJMLMDAEP_HPIBGFGOMPG_OFFSET UNITYSDK_OFFSET(0x16400C20)
#define IGCJMLMDAEP_IADENLBKLLD_1_OFFSET UNITYSDK_OFFSET(0x163FC5B0)
#define IGCJMLMDAEP_IADENLBKLLD_OFFSET UNITYSDK_OFFSET(0x163FBCA0)
#define IGCJMLMDAEP_IAHOFDNPBAB_OFFSET UNITYSDK_OFFSET(0x163F5B40)
#define IGCJMLMDAEP_IAOOLEIOKKK_OFFSET UNITYSDK_OFFSET(0x163FC910)
#define IGCJMLMDAEP_IFOOEPKGGAG_OFFSET UNITYSDK_OFFSET(0x163FF650)
#define IGCJMLMDAEP_IGOFLKEBFLA_OFFSET UNITYSDK_OFFSET(0x163FD3B0)
#define IGCJMLMDAEP_IOPFOGAMOFA_1_OFFSET UNITYSDK_OFFSET(0x163F5230)
#define IGCJMLMDAEP_IOPFOGAMOFA_OFFSET UNITYSDK_OFFSET(0x163F5190)
#define IGCJMLMDAEP_JACOODAOBMI_OFFSET UNITYSDK_OFFSET(0x163F9950)
#define IGCJMLMDAEP_JCGACNBKMAF_OFFSET UNITYSDK_OFFSET(0x16400970)
#define IGCJMLMDAEP_JDJKCGGFPBM_OFFSET UNITYSDK_OFFSET(0x163F5720)
#define IGCJMLMDAEP_JIPBBMPODME_OFFSET UNITYSDK_OFFSET(0x163F73E0)
#define IGCJMLMDAEP_JJJBDGPNBEF_OFFSET UNITYSDK_OFFSET(0x163FF0A0)
#define IGCJMLMDAEP_JKGGPOJPJDP_OFFSET UNITYSDK_OFFSET(0x163F9780)
#define IGCJMLMDAEP_JKKFFLJAHKI_OFFSET UNITYSDK_OFFSET(0x163F7620)
#define IGCJMLMDAEP_JKPBOGAEKKM_OFFSET UNITYSDK_OFFSET(0x16400490)
#define IGCJMLMDAEP_JONOFIGIPPH_OFFSET UNITYSDK_OFFSET(0x163FFA30)
#define IGCJMLMDAEP_KDMLGDGABBG_OFFSET UNITYSDK_OFFSET(0x163F6FD0)
#define IGCJMLMDAEP_KEKELJDGDOF_OFFSET UNITYSDK_OFFSET(0x163FA070)
#define IGCJMLMDAEP_KFIFKFJKONN_OFFSET UNITYSDK_OFFSET(0x163F6F50)
#define IGCJMLMDAEP_KFLOLHDIBIM_OFFSET UNITYSDK_OFFSET(0x163F7DD0)
#define IGCJMLMDAEP_KJCMCBJEGND_OFFSET UNITYSDK_OFFSET(0x163FCBE0)
#define IGCJMLMDAEP_KJHNEKEMOMK_OFFSET UNITYSDK_OFFSET(0x163FE7A0)
#define IGCJMLMDAEP_KLFGGICJGHG_OFFSET UNITYSDK_OFFSET(0x163FB7E0)
#define IGCJMLMDAEP_LEBAPGHDEFH_OFFSET UNITYSDK_OFFSET(0x163F5D60)
#define IGCJMLMDAEP_LFGNLMGHHLI_OFFSET UNITYSDK_OFFSET(0x163FFF30)
#define IGCJMLMDAEP_LIDJOJDLBEM_1_OFFSET UNITYSDK_OFFSET(0x163FEAD0)
#define IGCJMLMDAEP_LIDJOJDLBEM_OFFSET UNITYSDK_OFFSET(0x163FDBF0)
#define IGCJMLMDAEP_LIKKFDLFPAP_OFFSET UNITYSDK_OFFSET(0x163FDA20)
#define IGCJMLMDAEP_LOIKDMBJGOP_OFFSET UNITYSDK_OFFSET(0x163F87A0)
#define IGCJMLMDAEP_MCLDDHJMEGK_OFFSET UNITYSDK_OFFSET(0x163FCD30)
#define IGCJMLMDAEP_MGJNJFKMIJC_OFFSET UNITYSDK_OFFSET(0x163FE980)
#define IGCJMLMDAEP_MNKPHLMLPCO_OFFSET UNITYSDK_OFFSET(0x163F7F90)
#define IGCJMLMDAEP_NEFHFBBGPCL_OFFSET UNITYSDK_OFFSET(0x163FA5D0)
#define IGCJMLMDAEP_NJPNLPAAEBB_OFFSET UNITYSDK_OFFSET(0x163FF1C0)
#define IGCJMLMDAEP_NKFECCPMBJN_OFFSET UNITYSDK_OFFSET(0x163FC720)
#define IGCJMLMDAEP_NNEHJLAHPCK_OFFSET UNITYSDK_OFFSET(0x163F9DE0)
#define IGCJMLMDAEP_NNIABFKELNC_OFFSET UNITYSDK_OFFSET(0x163F66E0)
#define IGCJMLMDAEP_OKLCPLFKKKL_OFFSET UNITYSDK_OFFSET(0x163FD070)
#define IGCJMLMDAEP_PADMPHNKECI_OFFSET UNITYSDK_OFFSET(0x163F9AB0)
#define IGCJMLMDAEP_PAHMFNJPGCD_OFFSET UNITYSDK_OFFSET(0x163FED80)
#define IGCJMLMDAEP_PAPIIJCGINF_OFFSET UNITYSDK_OFFSET(0x163FAF70)
#define IGCJMLMDAEP_PEOOHJOEOAM_OFFSET UNITYSDK_OFFSET(0x16400B20)
#define IGCJMLMDAEP_PLGLNGADBIE_1_OFFSET UNITYSDK_OFFSET(0x163FB550)
#define IGCJMLMDAEP_PLGLNGADBIE_OFFSET UNITYSDK_OFFSET(0x163FAA20)
#define IGCJMLMDAEP_PPBCPAFKCNB_OFFSET UNITYSDK_OFFSET(0x163F58D0)
#define IGCJMLMDAEP_SET_SERVICES_OFFSET UNITYSDK_OFFSET(0x164010C0)

	class IGCJMLMDAEP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_LDGOJCHIFBO()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)UnitySDK::FromName("", "IGCJMLMDAEP")->GetStaticField(0xBF20);
		}

		static ::OAIPJANPCEK** StaticGet__Services_k__BackingField()
		{
			return (::OAIPJANPCEK**)UnitySDK::FromName("", "IGCJMLMDAEP")->GetStaticField(0xBF28);
		}

		// static const ::System::String* BANDPMBKDCP; // 0x0
		// static const ::System::Object BEPJBGABGND; // 0x0
		// static const ::System::String* BAMBFCGIHFC; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGCJMLMDAEP_CCTOR_OFFSET))();
		}

		static ::System::Void ELEPDOMDAGA(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_ELEPDOMDAGA_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2Int GIMPFCJJGNA(::RPG::GameCore::ChenLingFesDirection a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::RPG::GameCore::ChenLingFesDirection))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_GIMPFCJJGNA_OFFSET))(a1);
		}

		static ::System::Int32 IOPFOGAMOFA(::RPG::GameCore::ChenLingFesDirection a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::ChenLingFesDirection))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IOPFOGAMOFA_OFFSET))(a1);
		}

		static ::System::Int32 IOPFOGAMOFA_1(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IOPFOGAMOFA_1_OFFSET))(a1);
		}

		static ::System::UInt32 HOKGNFMDCBL(::UnityEngine::Quaternion a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HOKGNFMDCBL_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* EDMCHJFGMNL(::NGFHCJIAOLH* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_EDMCHJFGMNL_OFFSET))(a1);
		}

		static ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView* JDJKCGGFPBM(::NGFHCJIAOLH* a1)
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesView*(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JDJKCGGFPBM_OFFSET))(a1);
		}

		static ::System::Int32 GKMEDOHJHIK(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_GKMEDOHJHIK_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2Int PPBCPAFKCNB(::RPG::GameCore::ChenLingFesPosition* a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::RPG::GameCore::ChenLingFesPosition*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_PPBCPAFKCNB_OFFSET))(a1);
		}

		static ::NGFHCJIAOLH* ECCEMBIIJPF(::System::Int32 a1)
		{
			return ((::NGFHCJIAOLH*(*)(::System::Int32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_ECCEMBIIJPF_OFFSET))(a1);
		}

		static ::UnityEngine::Transform* IAHOFDNPBAB(::NGFHCJIAOLH* a1)
		{
			return ((::UnityEngine::Transform*(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IAHOFDNPBAB_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 LEBAPGHDEFH(::NGFHCJIAOLH* a1)
		{
			return ((::UnityEngine::Vector3(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_LEBAPGHDEFH_OFFSET))(a1);
		}

		static ::System::Void EAGCICDIGMB(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_EAGCICDIGMB_OFFSET))(a1);
		}

		static ::System::Void CMLLECNEJKI(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_CMLLECNEJKI_OFFSET))(a1);
		}

		static ::System::Single EHFGIFJEICA(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesProperty a2)
		{
			return ((::System::Single(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesProperty))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_EHFGIFJEICA_OFFSET))(a1, a2);
		}

		static ::System::Boolean HCBGEHDBDFC(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesDialogStyleType a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HCBGEHDBDFC_OFFSET))(a1, a2);
		}

		static ::System::Boolean HGGKHNJGNPA(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesDialogStyleType a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HGGKHNJGNPA_OFFSET))(a1, a2);
		}

		static ::System::Void KFIFKFJKONN(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_KFIFKFJKONN_OFFSET))(a1);
		}

		static ::System::Boolean KDMLGDGABBG(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_KDMLGDGABBG_OFFSET))(a1);
		}

		static ::System::Void NNIABFKELNC(::NGFHCJIAOLH* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::RPG::GameCore::ChenLingFesProperty a5, ::RPG::GameCore::ChenLingFesDialogStyleType a6, ::System::Boolean a7, ::System::Boolean a8)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::ChenLingFesProperty, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_NNIABFKELNC_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void HCBGEHDBDFC_1(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HCBGEHDBDFC_1_OFFSET))(a1);
		}

		static ::System::Void HGGKHNJGNPA_1(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HGGKHNJGNPA_1_OFFSET))(a1);
		}

		static ::System::Void JIPBBMPODME(::NGFHCJIAOLH* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::Single a5, ::RPG::GameCore::ChenLingFesToastStyleType a6, ::System::Single a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::System::String*, ::System::String*, ::System::String*, ::System::Single, ::RPG::GameCore::ChenLingFesToastStyleType, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JIPBBMPODME_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Int32 JKKFFLJAHKI(::NGFHCJIAOLH* a1)
		{
			return ((::System::Int32(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JKKFFLJAHKI_OFFSET))(a1);
		}

		static ::System::Boolean KFLOLHDIBIM(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_KFLOLHDIBIM_OFFSET))(a1);
		}

		static ::System::Boolean MNKPHLMLPCO(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_MNKPHLMLPCO_OFFSET))(a1);
		}

		static ::System::Boolean ANIIHHNLEPD(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_ANIIHHNLEPD_OFFSET))(a1);
		}

		static ::System::Boolean GLLEMGOOMLB(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_GLLEMGOOMLB_OFFSET))(a1);
		}

		static ::System::Boolean BNOLOMNDDAJ(::NGFHCJIAOLH* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_BNOLOMNDDAJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LOIKDMBJGOP(::NGFHCJIAOLH* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_LOIKDMBJGOP_OFFSET))(a1, a2, a3);
		}

		static ::System::Void GLEJMLGNPFD(::NGFHCJIAOLH* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_GLEJMLGNPFD_OFFSET))(a1, a2);
		}

		static ::System::Boolean HENOGNIPABI(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HENOGNIPABI_OFFSET))(a1);
		}

		static ::System::Boolean FAAPKMJABLF(::UnityEngine::Vector2Int a1, ::RPG::GameCore::ChenLingFesCellType a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::RPG::GameCore::ChenLingFesCellType))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_FAAPKMJABLF_OFFSET))(a1, a2);
		}

		static ::System::Boolean DFFGICDOKEG(::UnityEngine::Vector2Int a1, ::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2Int, ::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_DFFGICDOKEG_OFFSET))(a1, a2);
		}

		static ::System::Int32 GPLBDDDMDHP(::NGFHCJIAOLH* a1)
		{
			return ((::System::Int32(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_GPLBDDDMDHP_OFFSET))(a1);
		}

		static ::System::UInt32 JKGGPOJPJDP(::NGFHCJIAOLH* a1)
		{
			return ((::System::UInt32(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JKGGPOJPJDP_OFFSET))(a1);
		}

		static ::NGFHCJIAOLH* JACOODAOBMI(::NGFHCJIAOLH* a1)
		{
			return ((::NGFHCJIAOLH*(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JACOODAOBMI_OFFSET))(a1);
		}

		static ::System::Void PADMPHNKECI(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_PADMPHNKECI_OFFSET))(a1, a2);
		}

		static ::System::Void NNEHJLAHPCK(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_NNEHJLAHPCK_OFFSET))(a1, a2);
		}

		static ::System::Void KEKELJDGDOF(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_KEKELJDGDOF_OFFSET))(a1, a2);
		}

		static ::System::Void HNBDFJGDBJC(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HNBDFJGDBJC_OFFSET))(a1, a2);
		}

		static ::System::Void FPEIMBLNILD(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_FPEIMBLNILD_OFFSET))(a1, a2);
		}

		static ::System::Void PLGLNGADBIE(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_PLGLNGADBIE_OFFSET))(a1, a2);
		}

		static ::System::Void BMIDMFMMCHB(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_BMIDMFMMCHB_OFFSET))(a1, a2);
		}

		static ::System::Void PAPIIJCGINF(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_PAPIIJCGINF_OFFSET))(a1, a2);
		}

		static ::System::Void HBDCLBMAHAF(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HBDCLBMAHAF_OFFSET))(a1, a2);
		}

		static ::System::Boolean PLGLNGADBIE_1(::NGFHCJIAOLH* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_PLGLNGADBIE_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean KLFGGICJGHG(::NGFHCJIAOLH* a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_KLFGGICJGHG_OFFSET))(a1, a2);
		}

		static ::System::Boolean GBLKCKFGJDH(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_GBLKCKFGJDH_OFFSET))(a1, a2);
		}

		static ::System::Boolean IADENLBKLLD(::NGFHCJIAOLH* a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IADENLBKLLD_OFFSET))(a1, a2);
		}

		static ::System::Boolean IADENLBKLLD_1(::NGFHCJIAOLH* a1, ::System::Collections::Generic::HashSet_1<::NGFHCJIAOLH*>* a2, ::NGFHCJIAOLH* a3)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::System::Collections::Generic::HashSet_1<::NGFHCJIAOLH*>*, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IADENLBKLLD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NKFECCPMBJN(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_NKFECCPMBJN_OFFSET))(a1);
		}

		static ::System::Boolean IAOOLEIOKKK(::NGFHCJIAOLH* a1)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IAOOLEIOKKK_OFFSET))(a1);
		}

		static ::System::Void DHMJMEBEBNB(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_DHMJMEBEBNB_OFFSET))(a1);
		}

		static ::System::Void KJCMCBJEGND(::NGFHCJIAOLH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_KJCMCBJEGND_OFFSET))(a1, a2);
		}

		static ::System::Void MCLDDHJMEGK(::NGFHCJIAOLH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::System::Boolean))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_MCLDDHJMEGK_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 DBEFHAPFJKF(::NGFHCJIAOLH* a1)
		{
			return ((::UnityEngine::Vector3(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_DBEFHAPFJKF_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 AKHCKEMBLLJ(::NGFHCJIAOLH* a1)
		{
			return ((::UnityEngine::Vector3(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_AKHCKEMBLLJ_OFFSET))(a1);
		}

		static ::System::Boolean OKLCPLFKKKL(::NGFHCJIAOLH* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_OKLCPLFKKKL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 IGOFLKEBFLA(::NGFHCJIAOLH* a1)
		{
			return ((::UnityEngine::Vector3(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IGOFLKEBFLA_OFFSET))(a1);
		}

		static ::System::Void HOHBBIPLBDA(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HOHBBIPLBDA_OFFSET))(a1);
		}

		static ::System::Void LIKKFDLFPAP(::NGFHCJIAOLH* a1)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_LIKKFDLFPAP_OFFSET))(a1);
		}

		static ::System::Void NEFHFBBGPCL(::NGFHCJIAOLH* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::System::Int32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_NEFHFBBGPCL_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* LIDJOJDLBEM(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesTargetType a2, ::RPG::GameCore::LittleGameEntityType a3)
		{
			return ((::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesTargetType, ::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_LIDJOJDLBEM_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* LIDJOJDLBEM_1(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesTargetConfig* a2)
		{
			return ((::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesTargetConfig*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_LIDJOJDLBEM_1_OFFSET))(a1, a2);
		}

		static ::System::Void MGJNJFKMIJC(::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_MGJNJFKMIJC_OFFSET))(a1);
		}

		static ::System::Boolean PAHMFNJPGCD(::NGFHCJIAOLH* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_PAHMFNJPGCD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JJJBDGPNBEF(::System::Collections::Generic::List_1<::NGFHCJIAOLH*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NGFHCJIAOLH*>*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JJJBDGPNBEF_OFFSET))(a1);
		}

		static ::Entitas::IMatcher_1<::NGFHCJIAOLH*>* KJHNEKEMOMK(::RPG::GameCore::LittleGameEntityType a1)
		{
			return ((::Entitas::IMatcher_1<::NGFHCJIAOLH*>*(*)(::RPG::GameCore::LittleGameEntityType))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_KJHNEKEMOMK_OFFSET))(a1);
		}

		static ::System::Single NJPNLPAAEBB(::System::String* a1, ::Il2CppArray<::System::Single>* a2, ::System::Int32 a3)
		{
			return ((::System::Single(*)(::System::String*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_NJPNLPAAEBB_OFFSET))(a1, a2, a3);
		}

		static ::System::Void IFOOEPKGGAG(::NGFHCJIAOLH* a1, ::PDNNJOEOMLM* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::PDNNJOEOMLM*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_IFOOEPKGGAG_OFFSET))(a1, a2);
		}

		static ::System::Void CMPNCFCJCNE(::NGFHCJIAOLH* a1, ::PDNNJOEOMLM* a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::PDNNJOEOMLM*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_CMPNCFCJCNE_OFFSET))(a1, a2);
		}

		static ::System::Void CMPNCFCJCNE_1(::NGFHCJIAOLH* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_CMPNCFCJCNE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void HKDBPLHGHBA(::NGFHCJIAOLH* a1, ::Il2CppArray<::RPG::GameCore::ChenLingFesPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::Il2CppArray<::RPG::GameCore::ChenLingFesPropertyModifier*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HKDBPLHGHBA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JONOFIGIPPH(::NGFHCJIAOLH* a1, ::Il2CppArray<::RPG::GameCore::ChenLingFesPropertyModifier*>* a2, ::Il2CppArray<::System::Single>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::Il2CppArray<::RPG::GameCore::ChenLingFesPropertyModifier*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JONOFIGIPPH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean JCGACNBKMAF(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesPropertyModifier* a2)
		{
			return ((::System::Boolean(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesPropertyModifier*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JCGACNBKMAF_OFFSET))(a1, a2);
		}

		static ::System::Void LFGNLMGHHLI(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesPropertyModifier*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_LFGNLMGHHLI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void JKPBOGAEKKM(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesPropertyModifier* a2, ::Il2CppArray<::System::Single>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesPropertyModifier*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_JKPBOGAEKKM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CEPBIIDFJFK(::NGFHCJIAOLH* a1, ::RPG::GameCore::ChenLingFesProperty a2)
		{
			return ((::System::Void(*)(::NGFHCJIAOLH*, ::RPG::GameCore::ChenLingFesProperty))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_CEPBIIDFJFK_OFFSET))(a1, a2);
		}

		static ::System::UInt32 PEOOHJOEOAM(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::UInt32(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_PEOOHJOEOAM_OFFSET))(a1, a2);
		}

		static ::System::Boolean HPIBGFGOMPG()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + IGCJMLMDAEP_HPIBGFGOMPG_OFFSET))();
		}

		static ::System::Single FJOFEMBFOLE()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + IGCJMLMDAEP_FJOFEMBFOLE_OFFSET))();
		}

		static ::OAIPJANPCEK* get_Services()
		{
			return ((::OAIPJANPCEK*(*)())((::PBYTE)hIl2Cpp + IGCJMLMDAEP_GET_SERVICES_OFFSET))();
		}

		static ::System::Void set_Services(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + IGCJMLMDAEP_SET_SERVICES_OFFSET))(a1);
		}

	};
