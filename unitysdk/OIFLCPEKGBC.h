#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConeIntersectResult.h"
#include "unitysdk/RPG/Client/TSCRenderStateNegative.h"
#include "unitysdk/RPG/Client/TSCRenderStatePositive.h"
#include "unitysdk/RPG/Client/TSCRendererType.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
class BGOILLLFNBH;
class IDEFMHBFDKL;
class JPHKBAHBDGB;
class OIFLCPEKGBC;
class OIFLCPEKGBC_GDPIMLBKDKE;
namespace RPG::Client { class TimeSpaceCrisscrossAdditionsBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossGroupBehavior; }
namespace RPG::Client { class TimeSpaceCrisscrossLightsBehavior; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define OIFLCPEKGBC_AKFCFHHOMMD_OFFSET UNITYSDK_OFFSET(0xBE7D160)
#define OIFLCPEKGBC_ANEGAILPNOP_OFFSET UNITYSDK_OFFSET(0xBE849D0)
#define OIFLCPEKGBC_BCCLJHKOLFJ_OFFSET UNITYSDK_OFFSET(0xBE7CF90)
#define OIFLCPEKGBC_BGLKLCJKIII_OFFSET UNITYSDK_OFFSET(0xBE881B0)
#define OIFLCPEKGBC_BKJELLDNGNO_OFFSET UNITYSDK_OFFSET(0xBE7C3B0)
#define OIFLCPEKGBC_BMOHGGHPKNN_OFFSET UNITYSDK_OFFSET(0xBE7CAA0)
#define OIFLCPEKGBC_BOADDHIOAIO_OFFSET UNITYSDK_OFFSET(0xBE7E8E0)
#define OIFLCPEKGBC_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE8E0D0)
#define OIFLCPEKGBC_CDABFGBJAJF_OFFSET UNITYSDK_OFFSET(0xBE7CB90)
#define OIFLCPEKGBC_CELHILDINCL_OFFSET UNITYSDK_OFFSET(0xBE7C8E0)
#define OIFLCPEKGBC_CHECPMPFLKO_OFFSET UNITYSDK_OFFSET(0xBE863E0)
#define OIFLCPEKGBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBE7BF40)
#define OIFLCPEKGBC_DAOOKMNHAMI_OFFSET UNITYSDK_OFFSET(0xBE86EA0)
#define OIFLCPEKGBC_DEAEEIPOIBJ_OFFSET UNITYSDK_OFFSET(0xBE858A0)
#define OIFLCPEKGBC_DFOIKBCFEDO_OFFSET UNITYSDK_OFFSET(0xBE7D1E0)
#define OIFLCPEKGBC_DHFPNICDBBC_OFFSET UNITYSDK_OFFSET(0xBE87240)
#define OIFLCPEKGBC_DHJDGKMLMHP_OFFSET UNITYSDK_OFFSET(0xBE7D020)
#define OIFLCPEKGBC_DJOALBMNGNH_OFFSET UNITYSDK_OFFSET(0xBE7DAB0)
#define OIFLCPEKGBC_DPHLEDNIPDC_OFFSET UNITYSDK_OFFSET(0xBE7C410)
#define OIFLCPEKGBC_ECCGCBEADNH_OFFSET UNITYSDK_OFFSET(0xBE7DBD0)
#define OIFLCPEKGBC_EEIDMFDMHLB_OFFSET UNITYSDK_OFFSET(0xBE87760)
#define OIFLCPEKGBC_EMKDFLBCHED_OFFSET UNITYSDK_OFFSET(0xBE7CDA0)
#define OIFLCPEKGBC_EOCFKCOKEKD_OFFSET UNITYSDK_OFFSET(0xBE877B0)
#define OIFLCPEKGBC_FEJADKEIMPN_OFFSET UNITYSDK_OFFSET(0xBE81A00)
#define OIFLCPEKGBC_FJNEOLINOHI_OFFSET UNITYSDK_OFFSET(0xBE7D100)
#define OIFLCPEKGBC_FMBDJKACNFA_OFFSET UNITYSDK_OFFSET(0xBE7EE80)
#define OIFLCPEKGBC_FOFENPFEIDB_OFFSET UNITYSDK_OFFSET(0xBE7C8C0)
#define OIFLCPEKGBC_GBCPFFBBIOP_OFFSET UNITYSDK_OFFSET(0xBE7FFA0)
#define OIFLCPEKGBC_GDJHHPNHJJC_OFFSET UNITYSDK_OFFSET(0xBE84A20)
#define OIFLCPEKGBC_GEEEIHICLDN_OFFSET UNITYSDK_OFFSET(0xBE7F610)
#define OIFLCPEKGBC_GET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0xBE7C820)
#define OIFLCPEKGBC_GET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0xBE7D250)
#define OIFLCPEKGBC_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xBE7BE50)
#define OIFLCPEKGBC_GIDFFGFAODN_OFFSET UNITYSDK_OFFSET(0xBE85FC0)
#define OIFLCPEKGBC_GJPFNJBMGCI_OFFSET UNITYSDK_OFFSET(0xBE80060)
#define OIFLCPEKGBC_GOFGNOMPABL_OFFSET UNITYSDK_OFFSET(0xBE7CEF0)
#define OIFLCPEKGBC_GPGEKMLGFBA_OFFSET UNITYSDK_OFFSET(0xBE82220)
#define OIFLCPEKGBC_HCKCGPDGPHA_OFFSET UNITYSDK_OFFSET(0xBE84EE0)
#define OIFLCPEKGBC_HECNGOCJLKD_OFFSET UNITYSDK_OFFSET(0xBE83780)
#define OIFLCPEKGBC_HGOJNFKDIMA_OFFSET UNITYSDK_OFFSET(0xBE7C4D0)
#define OIFLCPEKGBC_IAEHDACOKOE_OFFSET UNITYSDK_OFFSET(0xBE83930)
#define OIFLCPEKGBC_IDDCNJHDECB_OFFSET UNITYSDK_OFFSET(0xBE7D450)
#define OIFLCPEKGBC_IHNHALJHMKB_OFFSET UNITYSDK_OFFSET(0xBE7D240)
#define OIFLCPEKGBC_IOPLALJKHDJ_OFFSET UNITYSDK_OFFSET(0xBE834B0)
#define OIFLCPEKGBC_IPMMKKNPFFB_OFFSET UNITYSDK_OFFSET(0xBE7C840)
#define OIFLCPEKGBC_JAJLMNKAFNI_OFFSET UNITYSDK_OFFSET(0xBE851D0)
#define OIFLCPEKGBC_JGPBJCDKOEK_OFFSET UNITYSDK_OFFSET(0xBE853E0)
#define OIFLCPEKGBC_JJBMMKOGMJG_OFFSET UNITYSDK_OFFSET(0xBE7CE00)
#define OIFLCPEKGBC_JLFHOGEBGIN_OFFSET UNITYSDK_OFFSET(0xBE7ECD0)
#define OIFLCPEKGBC_JNJFGHFLKBP_OFFSET UNITYSDK_OFFSET(0xBE7CEE0)
#define OIFLCPEKGBC_KBDJFHEPHGG_OFFSET UNITYSDK_OFFSET(0xBE7CC10)
#define OIFLCPEKGBC_KBMFAKDFCJC_OFFSET UNITYSDK_OFFSET(0xBE7D270)
#define OIFLCPEKGBC_KECLKFEABCD_OFFSET UNITYSDK_OFFSET(0xBE87710)
#define OIFLCPEKGBC_KFBIMIJAKFG_OFFSET UNITYSDK_OFFSET(0xBE7CB20)
#define OIFLCPEKGBC_KFCBEOINKFM_OFFSET UNITYSDK_OFFSET(0xBE809C0)
#define OIFLCPEKGBC_KKGFEFBGDND_OFFSET UNITYSDK_OFFSET(0xBE7CA40)
#define OIFLCPEKGBC_KKHEFCHFOFJ_OFFSET UNITYSDK_OFFSET(0xBE835E0)
#define OIFLCPEKGBC_KOMJLADOLKJ_OFFSET UNITYSDK_OFFSET(0xBE85310)
#define OIFLCPEKGBC_LNAEILDBIMK_OFFSET UNITYSDK_OFFSET(0xBE7CB80)
#define OIFLCPEKGBC_LNNPHMPCABP_OFFSET UNITYSDK_OFFSET(0xBE7EC00)
#define OIFLCPEKGBC_LOHOCNALLBP_OFFSET UNITYSDK_OFFSET(0xBE7C460)
#define OIFLCPEKGBC_LPOKHOBDFPM_OFFSET UNITYSDK_OFFSET(0xBE7C6F0)
#define OIFLCPEKGBC_MBCGFGMKOOF_OFFSET UNITYSDK_OFFSET(0xBE7CF70)
#define OIFLCPEKGBC_MCFMEKMBOJB_OFFSET UNITYSDK_OFFSET(0xBE7EDD0)
#define OIFLCPEKGBC_MCMEJOCPFEJ_OFFSET UNITYSDK_OFFSET(0xBE84980)
#define OIFLCPEKGBC_MDAGCCIOHEI_OFFSET UNITYSDK_OFFSET(0xBE82A40)
#define OIFLCPEKGBC_MINOPAEBEHO_OFFSET UNITYSDK_OFFSET(0xBE7C470)
#define OIFLCPEKGBC_MPPEABCFDEA_OFFSET UNITYSDK_OFFSET(0xBE87890)
#define OIFLCPEKGBC_NAFHBHNHGPI_OFFSET UNITYSDK_OFFSET(0xBE7E9C0)
#define OIFLCPEKGBC_NBDLMJNCBHB_OFFSET UNITYSDK_OFFSET(0xBE85B90)
#define OIFLCPEKGBC_NKAOOBDACCL_OFFSET UNITYSDK_OFFSET(0xBE7C960)
#define OIFLCPEKGBC_OBDDNPGHCBI_OFFSET UNITYSDK_OFFSET(0xBE7CE80)
#define OIFLCPEKGBC_OGJFNLFECGB_OFFSET UNITYSDK_OFFSET(0xBE7CC30)
#define OIFLCPEKGBC_OGKEFFIHEOE_OFFSET UNITYSDK_OFFSET(0xBE7E0D0)
#define OIFLCPEKGBC_OJHHHMKEHMI_OFFSET UNITYSDK_OFFSET(0xBE811E0)
#define OIFLCPEKGBC_ONIHINPIGDF_OFFSET UNITYSDK_OFFSET(0xBE7D4A0)
#define OIFLCPEKGBC_ONPCHPCJNML_OFFSET UNITYSDK_OFFSET(0xBE7D510)
#define OIFLCPEKGBC_OPKJPNKGPHG_OFFSET UNITYSDK_OFFSET(0xBE83420)
#define OIFLCPEKGBC_PPPDPOIEJGH_OFFSET UNITYSDK_OFFSET(0xBE7CCC0)
#define OIFLCPEKGBC_SET_FORCESYNCNEXTACTIVE_OFFSET UNITYSDK_OFFSET(0xBE7C830)
#define OIFLCPEKGBC_SET_FROZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0xBE7D260)
#define OIFLCPEKGBC__MARKFORCESYNCNEXTACTIVE_B__115_0_OFFSET UNITYSDK_OFFSET(0xBE8E270)
#define OIFLCPEKGBC__MARKFORCESYNCNEXTACTIVE_B__115_1_OFFSET UNITYSDK_OFFSET(0xBE8E390)

inline static constexpr unsigned int OIFLCPEKGBC_TypeDefinitionIndex = 70220;

	class OIFLCPEKGBC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::IDEFMHBFDKL*>* PECIDMCNMFB; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossLightsBehavior*>* PHGEHEAPIIG; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::System::Object*>>* HMAHGBIPPFP; // 0x20
		::Il2CppArray<::UnityEngine::Plane>* OICHPCDBBED; // 0x28
		::Il2CppArray<::UnityEngine::Plane>* GBCDMIMDFGL; // 0x30
		::Il2CppArray<::UnityEngine::Plane>* PJEEFHBPODN; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* NOMKCGIDCII; // 0x40
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* ELMOGLNJAEM; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossGroupBehavior*>* ACOMDJCHHHB; // 0x50
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::IDEFMHBFDKL*>*>* ABBGHDGBBJC; // 0x58
		::System::Collections::Generic::List_1<::IDEFMHBFDKL*>* JJEAPIDNKMI; // 0x60
		::Il2CppArray<::UnityEngine::Plane>* CJGMCEMKDHM; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*>* GBHFBCOAGMG; // 0x70
		::Il2CppArray<::UnityEngine::Plane>* EMOAIEBLNAC; // 0x78
		::BGOILLLFNBH* DFBDOBLCOLK; // 0x80
		::Il2CppArray<::UnityEngine::Plane>* APKNBFGLEMN; // 0x88
		::BGOILLLFNBH* IPNBNINLMMO; // 0x90
		::OIFLCPEKGBC_GDPIMLBKDKE* KJIBBAPBLGL; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* BJGOFKIKKFO; // 0xA0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::IDEFMHBFDKL*>*>* INPFKLBJLDO; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* ENLFFEHBBKP; // 0xB0
		::System::Int32 JCJPKMPDJPB; // 0xB8
		::UnityEngine::Vector3 BPLELFECBOM; // 0xBC
		::UnityEngine::Vector3 GCECKEIJMIB; // 0xC8
		::System::Single CACJJCPBFGK; // 0xD4
		::System::Boolean GDNCKELOLMM; // 0xD8
		::System::Nullable_1<::System::Boolean> PGEDJOOPPJA; // 0xD9
		::System::Boolean JJIAMHINBFH; // 0xDB
		::System::Boolean MAJKPNJEDFG; // 0xDC
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 FHLCEELANFI; // 0xE0
		::System::Int32 ONLGEPCKMPI; // 0xEC
		::System::Single KLICCHKDFDO; // 0xF0
		::System::Boolean IGMAILJPJDO; // 0xF4
		::System::Boolean IBEMPNANEHP; // 0xF5
		::System::Boolean _ForceSyncNextActive_k__BackingField; // 0xF6
		::System::Boolean BIANLKIBCHF; // 0xF7
		::UnityEngine::Vector3 KEIBOLNBIKF; // 0xF8
		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState HBJENOFOBKP; // 0x104
		::System::Single AMFMDINBGLC; // 0x108
		::UnityEngine::Vector3 EINHBNEHECB; // 0x10C
		::UnityEngine::Vector3 HGKPODIFKHK; // 0x118
		::System::Int32 DNGPKCMPFIO; // 0x124
		::System::Int32 OFGACCPLHJF; // 0x128
		::System::Single ECPFFCLLDDM; // 0x12C
		::System::Single CIMGLDKHFGA; // 0x130
		::System::Boolean _FrozeDefaultState_k__BackingField; // 0x134
		::System::Boolean ALEPDCLFIMM; // 0x135
		::System::Boolean OJBFFIECFML; // 0x136
		::System::Boolean JMLFCNLGLGC; // 0x137
		::System::Single FDFMOOGFJML; // 0x138
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_DBGFHFGAGGD()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C760);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_IGFHCHFLMFB()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C768);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_IIPFLMHGFMF()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C770);
		}

		static ::OIFLCPEKGBC** StaticGet_FLMODBLFAGD()
		{
			return (::OIFLCPEKGBC**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C778);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_DIFAMJALMLP()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C780);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_GGHAIBHMLFF()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C788);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_OCPKGMLOCIF()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C790);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_AFAHFFLMJIG()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C798);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_OCNLGOLJLDD()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C7A0);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CAEGGMGHCCD()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C7A8);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_HDMHNGAPHLP()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C7B0);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_GMBALOHHHKL()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C7B8);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_FADEFDJMBLO()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C7C0);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_GOMEBNCBCHK()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "OIFLCPEKGBC")->GetStaticField(0x1C7C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIFLCPEKGBC_CCTOR_OFFSET))();
		}

		static ::OIFLCPEKGBC* GGBLHEHJBDO()
		{
			return ((::OIFLCPEKGBC*(*)())((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GGBLHEHJBDO_OFFSET))();
		}

		::System::Boolean BKJELLDNGNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_BKJELLDNGNO_OFFSET))(this);
		}

		::System::Boolean DPHLEDNIPDC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_DPHLEDNIPDC_OFFSET))(this);
		}

		::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState LOHOCNALLBP()
		{
			return ((::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_LOHOCNALLBP_OFFSET))(this);
		}

		::System::Void MINOPAEBEHO(::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_MINOPAEBEHO_OFFSET))(this, a1);
		}

		::System::Boolean LPOKHOBDFPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_LPOKHOBDFPM_OFFSET))(this);
		}

		::System::Boolean get_ForceSyncNextActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GET_FORCESYNCNEXTACTIVE_OFFSET))(this);
		}

		::System::Void set_ForceSyncNextActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_SET_FORCESYNCNEXTACTIVE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IPMMKKNPFFB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_IPMMKKNPFFB_OFFSET))(this);
		}

		::System::Void FOFENPFEIDB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_FOFENPFEIDB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CELHILDINCL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_CELHILDINCL_OFFSET))(this);
		}

		::System::Void NKAOOBDACCL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_NKAOOBDACCL_OFFSET))(this, a1);
		}

		::System::Single KKGFEFBGDND()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KKGFEFBGDND_OFFSET))(this);
		}

		::System::Void BMOHGGHPKNN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_BMOHGGHPKNN_OFFSET))(this, a1);
		}

		::System::Single KFBIMIJAKFG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KFBIMIJAKFG_OFFSET))(this);
		}

		::System::Void LNAEILDBIMK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_LNAEILDBIMK_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CDABFGBJAJF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_CDABFGBJAJF_OFFSET))(this);
		}

		::System::Void KBDJFHEPHGG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KBDJFHEPHGG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OGJFNLFECGB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_OGJFNLFECGB_OFFSET))(this);
		}

		::System::Void PPPDPOIEJGH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_PPPDPOIEJGH_OFFSET))(this, a1);
		}

		::System::Single EMKDFLBCHED()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_EMKDFLBCHED_OFFSET))(this);
		}

		::System::Void JJBMMKOGMJG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_JJBMMKOGMJG_OFFSET))(this, a1);
		}

		::System::Single OBDDNPGHCBI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_OBDDNPGHCBI_OFFSET))(this);
		}

		::System::Void JNJFGHFLKBP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_JNJFGHFLKBP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GOFGNOMPABL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GOFGNOMPABL_OFFSET))(this);
		}

		::System::Void MBCGFGMKOOF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_MBCGFGMKOOF_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 BCCLJHKOLFJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_BCCLJHKOLFJ_OFFSET))(this);
		}

		::System::Void DHJDGKMLMHP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_DHJDGKMLMHP_OFFSET))(this, a1);
		}

		::System::Single FJNEOLINOHI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_FJNEOLINOHI_OFFSET))(this);
		}

		::System::Void AKFCFHHOMMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_AKFCFHHOMMD_OFFSET))(this, a1);
		}

		::System::Single DFOIKBCFEDO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_DFOIKBCFEDO_OFFSET))(this);
		}

		::System::Void IHNHALJHMKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_IHNHALJHMKB_OFFSET))(this, a1);
		}

		::System::Boolean get_FrozeDefaultState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GET_FROZEDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void set_FrozeDefaultState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_SET_FROZEDEFAULTSTATE_OFFSET))(this, a1);
		}

		::System::Void KBMFAKDFCJC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::System::Single a7, ::System::Single a8, ::UnityEngine::Vector3 a9, ::UnityEngine::Vector3 a10, ::System::Single a11, ::System::Single a12, ::System::Boolean a13, ::System::Boolean a14, ::System::Boolean a15, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a16)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KBMFAKDFCJC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
		}

		::System::Void IDDCNJHDECB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_IDDCNJHDECB_OFFSET))(this);
		}

		::System::Void ONIHINPIGDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_ONIHINPIGDF_OFFSET))(this);
		}

		::System::Void ONPCHPCJNML(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_ONPCHPCJNML_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::System::Object*>>* DJOALBMNGNH()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::UnityEngine::Renderer*, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_DJOALBMNGNH_OFFSET))(this);
		}

		::System::Void ECCGCBEADNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_ECCGCBEADNH_OFFSET))(this);
		}

		::System::Void OGKEFFIHEOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_OGKEFFIHEOE_OFFSET))(this);
		}

		::System::Void BOADDHIOAIO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_BOADDHIOAIO_OFFSET))(this, a1, a2);
		}

		::System::Void NAFHBHNHGPI(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_NAFHBHNHGPI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNNPHMPCABP(::System::Boolean a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_LNNPHMPCABP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JLFHOGEBGIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_JLFHOGEBGIN_OFFSET))(this);
		}

		::System::Void MCFMEKMBOJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_MCFMEKMBOJB_OFFSET))(this);
		}

		::System::Void FMBDJKACNFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_FMBDJKACNFA_OFFSET))(this, a1);
		}

		static ::System::Void GBCPFFBBIOP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GBCPFFBBIOP_OFFSET))();
		}

		static ::System::Void GJPFNJBMGCI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GJPFNJBMGCI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void GEEEIHICLDN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GEEEIHICLDN_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void KFCBEOINKFM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KFCBEOINKFM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void OJHHHMKEHMI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_OJHHHMKEHMI_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FEJADKEIMPN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_FEJADKEIMPN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GPGEKMLGFBA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GPGEKMLGFBA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MDAGCCIOHEI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_MDAGCCIOHEI_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::Client::ConeIntersectResult OPKJPNKGPHG(::UnityEngine::Bounds a1, ::Il2CppArray<::UnityEngine::Plane>* a2, ::Il2CppArray<::UnityEngine::Plane>* a3)
		{
			return ((::RPG::Client::ConeIntersectResult(*)(::UnityEngine::Bounds, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_OPKJPNKGPHG_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConeIntersectResult IOPLALJKHDJ(::UnityEngine::Vector3 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::Plane>* a3, ::Il2CppArray<::UnityEngine::Plane>* a4)
		{
			return ((::RPG::Client::ConeIntersectResult(*)(::UnityEngine::Vector3, ::System::Single, ::Il2CppArray<::UnityEngine::Plane>*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_IOPLALJKHDJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void KKHEFCHFOFJ(::Il2CppArray<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::System::Object*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KKHEFCHFOFJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HECNGOCJLKD(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_HECNGOCJLKD_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::ConeIntersectResult IAEHDACOKOE(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::Il2CppArray<::UnityEngine::Vector3>* a4)
		{
			return ((::RPG::Client::ConeIntersectResult(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_IAEHDACOKOE_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::TSCRenderStatePositive MCMEJOCPFEJ(::RPG::Client::ConeIntersectResult a1)
		{
			return ((::RPG::Client::TSCRenderStatePositive(*)(::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_MCMEJOCPFEJ_OFFSET))(a1);
		}

		static ::RPG::Client::TSCRenderStateNegative ANEGAILPNOP(::RPG::Client::ConeIntersectResult a1)
		{
			return ((::RPG::Client::TSCRenderStateNegative(*)(::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_ANEGAILPNOP_OFFSET))(a1);
		}

		::System::Void GDJHHPNHJJC(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GDJHHPNHJJC_OFFSET))(this, a1);
		}

		::System::Void HCKCGPDGPHA(::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossAdditionsBehavior*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_HCKCGPDGPHA_OFFSET))(this, a1);
		}

		::System::Void JAJLMNKAFNI(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_JAJLMNKAFNI_OFFSET))(this, a1);
		}

		::System::Void KOMJLADOLKJ(::RPG::Client::TimeSpaceCrisscrossLightsBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossLightsBehavior*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KOMJLADOLKJ_OFFSET))(this, a1);
		}

		::System::Void JGPBJCDKOEK(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_JGPBJCDKOEK_OFFSET))(this, a1);
		}

		::System::Void DEAEEIPOIBJ(::RPG::Client::TimeSpaceCrisscrossGroupBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TimeSpaceCrisscrossGroupBehavior*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_DEAEEIPOIBJ_OFFSET))(this, a1);
		}

		::System::Void NBDLMJNCBHB(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_NBDLMJNCBHB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GIDFFGFAODN(::UnityEngine::Renderer* a1, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState a2, ::RPG::Client::TSCRendererType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState, ::RPG::Client::TSCRendererType, ::System::Boolean))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_GIDFFGFAODN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CHECPMPFLKO(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_CHECPMPFLKO_OFFSET))(this, a1);
		}

		::System::Void DAOOKMNHAMI(::System::Collections::Generic::List_1<::JPHKBAHBDGB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JPHKBAHBDGB*>*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_DAOOKMNHAMI_OFFSET))(this, a1);
		}

		::System::Void DHFPNICDBBC(::System::Collections::Generic::List_1<::JPHKBAHBDGB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JPHKBAHBDGB*>*))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_DHFPNICDBBC_OFFSET))(this, a1);
		}

		::System::Boolean KECLKFEABCD(::RPG::Client::ConeIntersectResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_KECLKFEABCD_OFFSET))(this, a1);
		}

		::System::Boolean EEIDMFDMHLB(::RPG::Client::ConeIntersectResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ConeIntersectResult))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_EEIDMFDMHLB_OFFSET))(this, a1);
		}

		::System::Void EOCFKCOKEKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_EOCFKCOKEKD_OFFSET))(this);
		}

		::System::Void BGLKLCJKIII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_BGLKLCJKIII_OFFSET))(this);
		}

		::System::Void MPPEABCFDEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_MPPEABCFDEA_OFFSET))(this);
		}

		::System::Void HGOJNFKDIMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC_HGOJNFKDIMA_OFFSET))(this);
		}

		::System::Void _MarkForceSyncNextActive_b__115_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC__MARKFORCESYNCNEXTACTIVE_B__115_0_OFFSET))(this);
		}

		::System::Void _MarkForceSyncNextActive_b__115_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFLCPEKGBC__MARKFORCESYNCNEXTACTIVE_B__115_1_OFFSET))(this);
		}

	};
