#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEDKNEFIADK.h"
#include "unitysdk/JGCJNMMCEHA.h"
#include "unitysdk/LAGHOLOAMHP.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/NNKDKMBKFHC_ALMGLLHJOBD.h"
#include "unitysdk/System/Nullable_1.h"
class AAGOHNBBHNP;
class BAFJOHPAGFI;
class EDJNAGDJEKB;
class GDOMKEEOFFI;
class GKCNCLIOFDA;
class NNKDKMBKFHC_CKLDEKJJGKA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NNKDKMBKFHC_ABGCOPAOJFE_OFFSET UNITYSDK_OFFSET(0x179F8D70)
#define NNKDKMBKFHC_AFNDIGEDLPK_OFFSET UNITYSDK_OFFSET(0x179F4A10)
#define NNKDKMBKFHC_AHCJBLGPAIK_OFFSET UNITYSDK_OFFSET(0x179F3AF0)
#define NNKDKMBKFHC_AINNHKELMCP_OFFSET UNITYSDK_OFFSET(0x179F4460)
#define NNKDKMBKFHC_AJNLJKKCKCE_OFFSET UNITYSDK_OFFSET(0x179F3250)
#define NNKDKMBKFHC_AKIHIIJMINO_OFFSET UNITYSDK_OFFSET(0x179FF3F0)
#define NNKDKMBKFHC_APEDEKNCENG_OFFSET UNITYSDK_OFFSET(0x179FE700)
#define NNKDKMBKFHC_BDJKNBGFLBL_OFFSET UNITYSDK_OFFSET(0x179F3D20)
#define NNKDKMBKFHC_BEMFALPGCEL_OFFSET UNITYSDK_OFFSET(0x179F1F30)
#define NNKDKMBKFHC_BJJJAFIGBEP_OFFSET UNITYSDK_OFFSET(0x179F1A80)
#define NNKDKMBKFHC_BLGCGALODIA_OFFSET UNITYSDK_OFFSET(0x179FF000)
#define NNKDKMBKFHC_CBPAFCNOKMJ_OFFSET UNITYSDK_OFFSET(0x179F2220)
#define NNKDKMBKFHC_CGELDICNAAL_OFFSET UNITYSDK_OFFSET(0x179FDDB0)
#define NNKDKMBKFHC_CNFCJIGGDCP_OFFSET UNITYSDK_OFFSET(0x179FEBD0)
#define NNKDKMBKFHC_CTOR_OFFSET UNITYSDK_OFFSET(0x179F13C0)
#define NNKDKMBKFHC_DAHNMLNLDFH_OFFSET UNITYSDK_OFFSET(0x179FA0A0)
#define NNKDKMBKFHC_DAICFKLCNDL_OFFSET UNITYSDK_OFFSET(0x179F5610)
#define NNKDKMBKFHC_DDAGMHMKLIF_OFFSET UNITYSDK_OFFSET(0x179F1A70)
#define NNKDKMBKFHC_DLEFFOBNIHC_OFFSET UNITYSDK_OFFSET(0x179F2890)
#define NNKDKMBKFHC_DOEJAKGOAPG_OFFSET UNITYSDK_OFFSET(0x179FE790)
#define NNKDKMBKFHC_DPMFOBHJMEC_OFFSET UNITYSDK_OFFSET(0x179F91D0)
#define NNKDKMBKFHC_EDBKAKJEFAI_OFFSET UNITYSDK_OFFSET(0x179FF240)
#define NNKDKMBKFHC_EEIGBIFHMKL_OFFSET UNITYSDK_OFFSET(0x179F3900)
#define NNKDKMBKFHC_EFLFIBMEPPI_OFFSET UNITYSDK_OFFSET(0x179F5E80)
#define NNKDKMBKFHC_EJFDNMNGKPF_OFFSET UNITYSDK_OFFSET(0x179F2DD0)
#define NNKDKMBKFHC_EJOCIOMKOOJ_OFFSET UNITYSDK_OFFSET(0x179FE900)
#define NNKDKMBKFHC_FFDMEDIJALF_OFFSET UNITYSDK_OFFSET(0x179F52B0)
#define NNKDKMBKFHC_FICCDPAHLJI_OFFSET UNITYSDK_OFFSET(0x179F5FB0)
#define NNKDKMBKFHC_FJONADMKLAK_OFFSET UNITYSDK_OFFSET(0x179F3C70)
#define NNKDKMBKFHC_FKHKOGIMJGF_OFFSET UNITYSDK_OFFSET(0x179FC540)
#define NNKDKMBKFHC_FKNEOFHHKMI_OFFSET UNITYSDK_OFFSET(0x179FE9D0)
#define NNKDKMBKFHC_FPGLLEJNJML_OFFSET UNITYSDK_OFFSET(0x179F3320)
#define NNKDKMBKFHC_GAMDKALFBLO_OFFSET UNITYSDK_OFFSET(0x179F5580)
#define NNKDKMBKFHC_GCOPNIDEOJJ_OFFSET UNITYSDK_OFFSET(0x179F3850)
#define NNKDKMBKFHC_GJJOFFJKCAM_OFFSET UNITYSDK_OFFSET(0x179F4B50)
#define NNKDKMBKFHC_GLACNLCPGBO_OFFSET UNITYSDK_OFFSET(0x179F1C60)
#define NNKDKMBKFHC_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0x179F37F0)
#define NNKDKMBKFHC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x179FE060)
#define NNKDKMBKFHC_HCBOAPBAOOC_OFFSET UNITYSDK_OFFSET(0x179F1D50)
#define NNKDKMBKFHC_HFFHIOFCCBG_OFFSET UNITYSDK_OFFSET(0x179F37A0)
#define NNKDKMBKFHC_HLIPCODPNJA_OFFSET UNITYSDK_OFFSET(0x179F4BC0)
#define NNKDKMBKFHC_ICJGMELMLGO_OFFSET UNITYSDK_OFFSET(0x179F3D90)
#define NNKDKMBKFHC_ILLNHBFACKF_OFFSET UNITYSDK_OFFSET(0x179F4040)
#define NNKDKMBKFHC_INFDANLLHOL_OFFSET UNITYSDK_OFFSET(0x179F8040)
#define NNKDKMBKFHC_INPOHJHJJOK_OFFSET UNITYSDK_OFFSET(0x179F7620)
#define NNKDKMBKFHC_JEHMGJGPDJC_OFFSET UNITYSDK_OFFSET(0x179F39B0)
#define NNKDKMBKFHC_JHCEMNAFDLC_OFFSET UNITYSDK_OFFSET(0x179FE450)
#define NNKDKMBKFHC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x179F84E0)
#define NNKDKMBKFHC_KCFCPFNHLDB_1_OFFSET UNITYSDK_OFFSET(0x179F2F10)
#define NNKDKMBKFHC_KCFCPFNHLDB_OFFSET UNITYSDK_OFFSET(0x179F2E60)
#define NNKDKMBKFHC_KDFAPPMHPHO_OFFSET UNITYSDK_OFFSET(0x179FE590)
#define NNKDKMBKFHC_KDFIAIJEMHM_OFFSET UNITYSDK_OFFSET(0x179FA4D0)
#define NNKDKMBKFHC_KKDCNIDNKJA_OFFSET UNITYSDK_OFFSET(0x179F21F0)
#define NNKDKMBKFHC_KKHFAKEAJBN_OFFSET UNITYSDK_OFFSET(0x179FC2F0)
#define NNKDKMBKFHC_KLOBGCPPFHB_OFFSET UNITYSDK_OFFSET(0x179F2210)
#define NNKDKMBKFHC_KMPAFKCLHPJ_OFFSET UNITYSDK_OFFSET(0x179F2190)
#define NNKDKMBKFHC_KNIAGDJNEGO_OFFSET UNITYSDK_OFFSET(0x179F4320)
#define NNKDKMBKFHC_KPGIKIHCEMH_OFFSET UNITYSDK_OFFSET(0x179FEAC0)
#define NNKDKMBKFHC_LBPCCBGMGIC_OFFSET UNITYSDK_OFFSET(0x179F4490)
#define NNKDKMBKFHC_LEBFAONPPIA_OFFSET UNITYSDK_OFFSET(0x179FA220)
#define NNKDKMBKFHC_LEPFENKFGHG_OFFSET UNITYSDK_OFFSET(0x179F50F0)
#define NNKDKMBKFHC_LFCENDPIBMA_OFFSET UNITYSDK_OFFSET(0x179F5C60)
#define NNKDKMBKFHC_LFFKNMMGNOG_OFFSET UNITYSDK_OFFSET(0x179F99D0)
#define NNKDKMBKFHC_LFJHKGPGMKN_OFFSET UNITYSDK_OFFSET(0x179FEE50)
#define NNKDKMBKFHC_LHAEOMLKLLH_OFFSET UNITYSDK_OFFSET(0x179F7C50)
#define NNKDKMBKFHC_LHJEBOLGKFG_OFFSET UNITYSDK_OFFSET(0x179F35F0)
#define NNKDKMBKFHC_LOLEOEHHAKE_OFFSET UNITYSDK_OFFSET(0x179F8CB0)
#define NNKDKMBKFHC_MEJPHDLDCEC_OFFSET UNITYSDK_OFFSET(0x179F68A0)
#define NNKDKMBKFHC_MHDCKCMOCOD_OFFSET UNITYSDK_OFFSET(0x179F2010)
#define NNKDKMBKFHC_MILNMPBANCB_OFFSET UNITYSDK_OFFSET(0x179F3960)
#define NNKDKMBKFHC_MLJKJIMBAJO_OFFSET UNITYSDK_OFFSET(0x179F1B60)
#define NNKDKMBKFHC_MLMLKDFJIID_OFFSET UNITYSDK_OFFSET(0x179F1A60)
#define NNKDKMBKFHC_MMGINGGKOJO_OFFSET UNITYSDK_OFFSET(0x179F36C0)
#define NNKDKMBKFHC_MNFFHLEFKBN_OFFSET UNITYSDK_OFFSET(0x179F8EB0)
#define NNKDKMBKFHC_MOIECIDLCKM_OFFSET UNITYSDK_OFFSET(0x179F60E0)
#define NNKDKMBKFHC_NNPIDFONJHD_OFFSET UNITYSDK_OFFSET(0x179F90E0)
#define NNKDKMBKFHC_OCADFDKDAAD_OFFSET UNITYSDK_OFFSET(0x179FF1B0)
#define NNKDKMBKFHC_ODIFCNMCMAE_OFFSET UNITYSDK_OFFSET(0x179FCD00)
#define NNKDKMBKFHC_OGFIDGKJCHH_OFFSET UNITYSDK_OFFSET(0x179F8BC0)
#define NNKDKMBKFHC_OLEFDHPCMCL_OFFSET UNITYSDK_OFFSET(0x179F2CC0)
#define NNKDKMBKFHC_PDODHFFKGOA_OFFSET UNITYSDK_OFFSET(0x179F80D0)
#define NNKDKMBKFHC_PFNJHIMJPJD_OFFSET UNITYSDK_OFFSET(0x179FC0E0)
#define NNKDKMBKFHC_PGDNIOBKLHK_OFFSET UNITYSDK_OFFSET(0x179F8FF0)
#define NNKDKMBKFHC_PJNNDMJAOFF_OFFSET UNITYSDK_OFFSET(0x179F7E80)
#define NNKDKMBKFHC_PPIAGJGCNOF_OFFSET UNITYSDK_OFFSET(0x179FC8F0)

inline static constexpr unsigned int NNKDKMBKFHC_TypeDefinitionIndex = 54671;

	class NNKDKMBKFHC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::BAFJOHPAGFI*>* EEMLILALOJM; // 0x10
		::System::Collections::Generic::HashSet_1<::BAFJOHPAGFI*>* BMLFKMJJBAE; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* FAJDHMOLCOG; // 0x20
		::System::Collections::Generic::Dictionary_2<::BAFJOHPAGFI*, ::JGCJNMMCEHA>* BEDGJAEKBAB; // 0x28
		::GKCNCLIOFDA* OPFHJALFFIC; // 0x30
		::System::Collections::Generic::Dictionary_2<::BAFJOHPAGFI*, ::System::Object*>* CHCDHHEOAJM; // 0x38
		::System::Collections::Generic::Dictionary_2<::BAFJOHPAGFI*, ::System::Object*>* AGCEFDCJMLA; // 0x40
		::System::Collections::Generic::Dictionary_2<::BAFJOHPAGFI*, ::JGCJNMMCEHA>* LAKDKADGDOG; // 0x48
		::LAGHOLOAMHP JBOIEOFDKOI; // 0x50
		::RPG::GameCore::GameEntity* JEHJFCMOBMG; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::GEDKNEFIADK>* GFDLDMDNKIN; // 0x98
		::System::Collections::Generic::List_1<::System::String*>* MECIBHOOBGJ; // 0xA0
		::AAGOHNBBHNP* BFFNIDADIDB; // 0xA8
		::System::String* FAIIEALMDLF; // 0xB0
		::RPG::GameCore::GameEntity* GCHANFIGNGK; // 0xB8
		::System::Collections::Generic::List_1<::System::Object*>* NBIKFIIJIOF; // 0xC0
		::System::Collections::Generic::Dictionary_2<::BAFJOHPAGFI*, ::System::Boolean>* FLODDKDFMHP; // 0xC8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* JKECGKBANML; // 0xD0
		::System::Collections::Generic::Dictionary_2<::BAFJOHPAGFI*, ::System::Object*>* EJNHDCIEICH; // 0xD8
		::System::Collections::Generic::Dictionary_2<::BAFJOHPAGFI*, ::System::Boolean>* JHDMPNENIAN; // 0xE0
		::EDJNAGDJEKB* HGOBDCDBJAN; // 0xE8
		::GDOMKEEOFFI* FLANFCPMIPC; // 0xF0
		::System::Collections::Generic::HashSet_1<::BAFJOHPAGFI*>* BLEELPFDBJL; // 0xF8
		::System::Collections::Generic::HashSet_1<::System::String*>* LHKPNEDAOFI; // 0x100
		::System::String* BAMDNDPOPIJ; // 0x108
		::System::Single GPBLOEFMMMM; // 0x110
		::UnityEngine::Quaternion NBNLOMPDPJB; // 0x114
		::System::Single KPAHMJKNJFP; // 0x124
		::UnityEngine::Vector3 NEDAKBDEEFA; // 0x128
		::System::Single HEMHNCMKEKE; // 0x134
		::UnityEngine::Vector3 ANMBJBINFJJ; // 0x138
		::System::Boolean CGMNFKIFHDD; // 0x144
		::System::Boolean DALKJPIGDNO; // 0x145
		::System::Boolean ENABLLBONPL; // 0x146
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 DJPCBJNHMKO; // 0x148
		// static const ::System::Object DILBKLHALOI; // 0x0
		// static const ::System::Object DHCCNNJIKNK; // 0x0
		// static const ::System::Object OOICFICLKPE; // 0x0
		// static const ::System::Object BIDLMPJAKDF; // 0x0
		// static const ::System::Object HPKELDKJAGP; // 0x0
		// static const ::System::Object AFFMEJJIILG; // 0x0
		// static const ::System::Object EDAINDMPFEF; // 0x0
		// static const ::System::Object BHBAMKAHLGD; // 0x0
		// static const ::System::Object BPPEGFEINHC; // 0x0
		// static const ::System::Object ODNABANCGON; // 0x0
		// static const ::System::Object GNJKJOMEEJB; // 0x0
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_CTOR_OFFSET))(this, a1);
		}

		::System::String* MLMLKDFJIID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MLMLKDFJIID_OFFSET))(this);
		}

		::System::String* DDAGMHMKLIF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_DDAGMHMKLIF_OFFSET))(this);
		}

		::System::Void BJJJAFIGBEP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_BJJJAFIGBEP_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* BEMFALPGCEL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_BEMFALPGCEL_OFFSET))(this);
		}

		::AAGOHNBBHNP* KMPAFKCLHPJ()
		{
			return ((::AAGOHNBBHNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KMPAFKCLHPJ_OFFSET))(this);
		}

		::System::Boolean KKDCNIDNKJA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KKDCNIDNKJA_OFFSET))(this);
		}

		::System::Boolean KLOBGCPPFHB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KLOBGCPPFHB_OFFSET))(this);
		}

		::System::Boolean CBPAFCNOKMJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_CBPAFCNOKMJ_OFFSET))(this, a1);
		}

		::System::Boolean DLEFFOBNIHC(::System::String* a1, ::RPG::GameCore::GameEntity* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_DLEFFOBNIHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OLEFDHPCMCL(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_OLEFDHPCMCL_OFFSET))(this, a1, a2);
		}

		static ::System::String* EJFDNMNGKPF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_EJFDNMNGKPF_OFFSET))(a1);
		}

		static ::System::Boolean KCFCPFNHLDB(::RPG::GameCore::GameWorld* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::GameEntity* a4)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameWorld*, ::System::String*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KCFCPFNHLDB_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean KCFCPFNHLDB_1(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KCFCPFNHLDB_1_OFFSET))(this, a1, a2);
		}

		::System::Void AJNLJKKCKCE(::System::Collections::Generic::Dictionary_2<::System::String*, ::GEDKNEFIADK>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::GEDKNEFIADK>*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_AJNLJKKCKCE_OFFSET))(this, a1);
		}

		::System::Void LHJEBOLGKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LHJEBOLGKFG_OFFSET))(this);
		}

		::System::Void GLACNLCPGBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_GLACNLCPGBO_OFFSET))(this);
		}

		::UnityEngine::Vector3 FPGLLEJNJML()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_FPGLLEJNJML_OFFSET))(this);
		}

		::System::Int32 HFFHIOFCCBG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_HFFHIOFCCBG_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::Boolean GCOPNIDEOJJ(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_GCOPNIDEOJJ_OFFSET))(this, a1, a2);
		}

		::System::Void EEIGBIFHMKL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_EEIGBIFHMKL_OFFSET))(this, a1);
		}

		::System::Void MILNMPBANCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MILNMPBANCB_OFFSET))(this);
		}

		::System::Boolean JEHMGJGPDJC(::RPG::GameCore::GameEntity* a1, ::System::String* a2, ::System::Int32 a3, ::System::Action* a4, ::System::UInt32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Int32, ::System::Action*, ::System::UInt32))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_JEHMGJGPDJC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean FJONADMKLAK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_FJONADMKLAK_OFFSET))(this, a1);
		}

		::System::Void BDJKNBGFLBL(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_BDJKNBGFLBL_OFFSET))(this, a1, a2);
		}

		::System::Void ICJGMELMLGO(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_ICJGMELMLGO_OFFSET))(this, a1);
		}

		::System::Void ILLNHBFACKF(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_ILLNHBFACKF_OFFSET))(this, a1);
		}

		::System::Boolean KNIAGDJNEGO(::BAFJOHPAGFI* a1, ::JGCJNMMCEHA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KNIAGDJNEGO_OFFSET))(this, a1, a2);
		}

		::LAGHOLOAMHP AINNHKELMCP()
		{
			return ((::LAGHOLOAMHP(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_AINNHKELMCP_OFFSET))(this);
		}

		::System::Void LBPCCBGMGIC(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LBPCCBGMGIC_OFFSET))(this, a1);
		}

		::System::Boolean GAMDKALFBLO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_GAMDKALFBLO_OFFSET))(this, a1);
		}

		::System::Void DAICFKLCNDL(::BAFJOHPAGFI* a1, ::RPG::GameCore::AdvNavigationFailReason a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*, ::RPG::GameCore::AdvNavigationFailReason, ::System::UInt32))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_DAICFKLCNDL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EFLFIBMEPPI(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_EFLFIBMEPPI_OFFSET))(this, a1);
		}

		::System::Void FICCDPAHLJI(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_FICCDPAHLJI_OFFSET))(this, a1);
		}

		::System::Void MOIECIDLCKM(::System::Single a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MOIECIDLCKM_OFFSET))(this, a1, a2);
		}

		::System::Boolean MEJPHDLDCEC(::BAFJOHPAGFI* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MEJPHDLDCEC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean INPOHJHJJOK(::BAFJOHPAGFI* a1, ::System::Nullable_1<::UnityEngine::Vector3> a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*, ::System::Nullable_1<::UnityEngine::Vector3>, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_INPOHJHJJOK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LFCENDPIBMA(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LFCENDPIBMA_OFFSET))(this, a1);
		}

		::System::Boolean LHAEOMLKLLH(::BAFJOHPAGFI* a1, ::JGCJNMMCEHA a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LHAEOMLKLLH_OFFSET))(this, a1, a2);
		}

		::System::Boolean PJNNDMJAOFF(::BAFJOHPAGFI* a1, ::JGCJNMMCEHA a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*, ::JGCJNMMCEHA, ::System::Boolean))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_PJNNDMJAOFF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean INFDANLLHOL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_INFDANLLHOL_OFFSET))(this, a1);
		}

		::System::Void PDODHFFKGOA(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_PDODHFFKGOA_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LOLEOEHHAKE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LOLEOEHHAKE_OFFSET))(this, a1);
		}

		::System::Boolean PPIAGJGCNOF(::GKCNCLIOFDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKCNCLIOFDA*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_PPIAGJGCNOF_OFFSET))(this, a1);
		}

		::System::Void FKHKOGIMJGF(::GKCNCLIOFDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKCNCLIOFDA*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_FKHKOGIMJGF_OFFSET))(this, a1);
		}

		::BAFJOHPAGFI* AHCJBLGPAIK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::BAFJOHPAGFI*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_AHCJBLGPAIK_OFFSET))(this, a1);
		}

		::System::Void ABGCOPAOJFE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_ABGCOPAOJFE_OFFSET))(this, a1);
		}

		::System::Void MLJKJIMBAJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MLJKJIMBAJO_OFFSET))(this);
		}

		::System::Void ODIFCNMCMAE(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_ODIFCNMCMAE_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 CGELDICNAAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_CGELDICNAAL_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void PGDNIOBKLHK(::LAGHOLOAMHP a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAGHOLOAMHP))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_PGDNIOBKLHK_OFFSET))(this, a1);
		}

		static ::LAGHOLOAMHP MNFFHLEFKBN(::AAGOHNBBHNP* a1)
		{
			return ((::LAGHOLOAMHP(*)(::AAGOHNBBHNP*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MNFFHLEFKBN_OFFSET))(a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void NNPIDFONJHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_NNPIDFONJHD_OFFSET))(this);
		}

		::System::Void OGFIDGKJCHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_OGFIDGKJCHH_OFFSET))(this);
		}

		::BAFJOHPAGFI* MHDCKCMOCOD()
		{
			return ((::BAFJOHPAGFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MHDCKCMOCOD_OFFSET))(this);
		}

		::System::Void MMGINGGKOJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_MMGINGGKOJO_OFFSET))(this);
		}

		::System::Void FFDMEDIJALF(::BAFJOHPAGFI* a1, ::JGCJNMMCEHA a2)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_FFDMEDIJALF_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 GJJOFFJKCAM(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_GJJOFFJKCAM_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion LEPFENKFGHG(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Nullable_1<::UnityEngine::Vector3> a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LEPFENKFGHG_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 KDFAPPMHPHO(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KDFAPPMHPHO_OFFSET))(a1);
		}

		static ::System::Boolean JHCEMNAFDLC(::JGCJNMMCEHA a1, ::JGCJNMMCEHA a2)
		{
			return ((::System::Boolean(*)(::JGCJNMMCEHA, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_JHCEMNAFDLC_OFFSET))(a1, a2);
		}

		::System::Void DPMFOBHJMEC(::BAFJOHPAGFI* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_DPMFOBHJMEC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KDFIAIJEMHM(::BAFJOHPAGFI* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KDFIAIJEMHM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CNFCJIGGDCP(::BAFJOHPAGFI* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_CNFCJIGGDCP_OFFSET))(this, a1, a2);
		}

		::System::Boolean HLIPCODPNJA(::BAFJOHPAGFI* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Nullable_1<::UnityEngine::Vector3> a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_HLIPCODPNJA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DAHNMLNLDFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_DAHNMLNLDFH_OFFSET))(this);
		}

		::System::Void LFFKNMMGNOG(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LFFKNMMGNOG_OFFSET))(this, a1);
		}

		::System::Void LEBFAONPPIA(::BAFJOHPAGFI* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*, ::System::Single))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LEBFAONPPIA_OFFSET))(this, a1, a2);
		}

		::System::Void PFNJHIMJPJD(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_PFNJHIMJPJD_OFFSET))(this, a1);
		}

		::System::Void OCADFDKDAAD(::NNKDKMBKFHC_CKLDEKJJGKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNKDKMBKFHC_CKLDEKJJGKA*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_OCADFDKDAAD_OFFSET))(this, a1);
		}

		::System::Boolean KPGIKIHCEMH(::BAFJOHPAGFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KPGIKIHCEMH_OFFSET))(this, a1);
		}

		::System::Void EJOCIOMKOOJ(::BAFJOHPAGFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_EJOCIOMKOOJ_OFFSET))(this, a1);
		}

		::System::Boolean BLGCGALODIA(::NNKDKMBKFHC_CKLDEKJJGKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNKDKMBKFHC_CKLDEKJJGKA*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_BLGCGALODIA_OFFSET))(this, a1);
		}

		::System::Boolean EDBKAKJEFAI(::NNKDKMBKFHC_CKLDEKJJGKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNKDKMBKFHC_CKLDEKJJGKA*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_EDBKAKJEFAI_OFFSET))(this, a1);
		}

		::System::Void KKHFAKEAJBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_KKHFAKEAJBN_OFFSET))(this, a1);
		}

		::System::Void HCBOAPBAOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_HCBOAPBAOOC_OFFSET))(this);
		}

		static ::System::Boolean FKNEOFHHKMI(::BAFJOHPAGFI* a1)
		{
			return ((::System::Boolean(*)(::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_FKNEOFHHKMI_OFFSET))(a1);
		}

		static ::System::Boolean LFJHKGPGMKN(::BAFJOHPAGFI* a1)
		{
			return ((::System::Boolean(*)(::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_LFJHKGPGMKN_OFFSET))(a1);
		}

		static ::System::Int32 AKIHIIJMINO(::NNKDKMBKFHC_ALMGLLHJOBD a1, ::NNKDKMBKFHC_ALMGLLHJOBD a2)
		{
			return ((::System::Int32(*)(::NNKDKMBKFHC_ALMGLLHJOBD, ::NNKDKMBKFHC_ALMGLLHJOBD))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_AKIHIIJMINO_OFFSET))(a1, a2);
		}

		::System::Boolean DOEJAKGOAPG(::BAFJOHPAGFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_DOEJAKGOAPG_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector3> AFNDIGEDLPK(::BAFJOHPAGFI* a1)
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::BAFJOHPAGFI*))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_AFNDIGEDLPK_OFFSET))(this, a1);
		}

		static ::System::Boolean APEDEKNCENG(::UnityEngine::Quaternion a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NNKDKMBKFHC_APEDEKNCENG_OFFSET))(a1);
		}

	};
