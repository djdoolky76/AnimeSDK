#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIDDFDEAEGB_EntitySideType.h"
#include "unitysdk/FDKKDPIHFKL.h"
#include "unitysdk/RPG/GameCore/LevelGroupLoadSide.h"
#include "unitysdk/System/ValueTuple.h"
class BFAGAEJHEJH;
class BOJKDLCIJCN;
class CPFGNNGMPDJ;
class DKFNBJOGFME;
class EPAJKAFCJME;
class GFDENAMMEHM;
class JLBDIAMCOME;
class JOKACBOADHJ;
class MKNOAOJPALD;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Proto { class EntitySnapshot; }
namespace Proto { class GroupSnapshot; }
namespace Proto { class SceneEntityInfo; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class GroupPropertyConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define BIDDFDEAEGB_ABNPEGHPKAE_OFFSET UNITYSDK_OFFSET(0xB4A1850)
#define BIDDFDEAEGB_ADALELKCHEB_OFFSET UNITYSDK_OFFSET(0xB49BB50)
#define BIDDFDEAEGB_AFPCPGOMCDM_OFFSET UNITYSDK_OFFSET(0xB49FB40)
#define BIDDFDEAEGB_AIKCCBJPBAB_OFFSET UNITYSDK_OFFSET(0xB49E350)
#define BIDDFDEAEGB_AKGPDAHGOJN_OFFSET UNITYSDK_OFFSET(0xB4A0AE0)
#define BIDDFDEAEGB_BINFKOJKGBH_OFFSET UNITYSDK_OFFSET(0xB49F730)
#define BIDDFDEAEGB_BIOPAHGNKLJ_OFFSET UNITYSDK_OFFSET(0xB499640)
#define BIDDFDEAEGB_BNBOPJMCNOK_OFFSET UNITYSDK_OFFSET(0xB4A1C60)
#define BIDDFDEAEGB_CKIALIFBMCC_OFFSET UNITYSDK_OFFSET(0xB4A0180)
#define BIDDFDEAEGB_CLEMCPLGCJF_OFFSET UNITYSDK_OFFSET(0xB4A1F40)
#define BIDDFDEAEGB_COLEGJDACDI_OFFSET UNITYSDK_OFFSET(0xB498F90)
#define BIDDFDEAEGB_CTOR_OFFSET UNITYSDK_OFFSET(0xB49FE40)
#define BIDDFDEAEGB_DELONJKKHBM_OFFSET UNITYSDK_OFFSET(0xB49B9D0)
#define BIDDFDEAEGB_DFCBNHGDAAK_OFFSET UNITYSDK_OFFSET(0xB4A0DD0)
#define BIDDFDEAEGB_DHBIGLBAOLL_OFFSET UNITYSDK_OFFSET(0xB49B960)
#define BIDDFDEAEGB_DIHLAJPJHLB_OFFSET UNITYSDK_OFFSET(0xB49BCD0)
#define BIDDFDEAEGB_DJKLMEOPFIF_OFFSET UNITYSDK_OFFSET(0xB4A1E80)
#define BIDDFDEAEGB_DNOODJPKIPJ_OFFSET UNITYSDK_OFFSET(0xB49BEE0)
#define BIDDFDEAEGB_DPBLBAHAKBK_OFFSET UNITYSDK_OFFSET(0xB49BE50)
#define BIDDFDEAEGB_EOMKBJDBNCL_OFFSET UNITYSDK_OFFSET(0xB49AF10)
#define BIDDFDEAEGB_FABIKLEMFPO_OFFSET UNITYSDK_OFFSET(0xB49B880)
#define BIDDFDEAEGB_FDPMDNMBHFP_OFFSET UNITYSDK_OFFSET(0xB49F4E0)
#define BIDDFDEAEGB_FKGALHECBNH_OFFSET UNITYSDK_OFFSET(0xB49BBC0)
#define BIDDFDEAEGB_FNGHOKKMFMN_OFFSET UNITYSDK_OFFSET(0xB49FC00)
#define BIDDFDEAEGB_GBIHNLADLFN_OFFSET UNITYSDK_OFFSET(0xB4A0E80)
#define BIDDFDEAEGB_GBKAGHNIJKF_OFFSET UNITYSDK_OFFSET(0xB49AB10)
#define BIDDFDEAEGB_GCOMFPLMNGM_OFFSET UNITYSDK_OFFSET(0xB4A0D20)
#define BIDDFDEAEGB_GET_RAWGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xB4A1E60)
#define BIDDFDEAEGB_GIDGIAMIIFP_OFFSET UNITYSDK_OFFSET(0xB4A1E20)
#define BIDDFDEAEGB_GMKPIBLMACM_OFFSET UNITYSDK_OFFSET(0xB4A0A50)
#define BIDDFDEAEGB_HAIEJENPAMD_OFFSET UNITYSDK_OFFSET(0xB49B130)
#define BIDDFDEAEGB_HCHFOCAAGJO_OFFSET UNITYSDK_OFFSET(0xB49B240)
#define BIDDFDEAEGB_HCPGNAKBOHK_OFFSET UNITYSDK_OFFSET(0xB498F30)
#define BIDDFDEAEGB_HOIEJMICBOG_OFFSET UNITYSDK_OFFSET(0xB49B1B0)
#define BIDDFDEAEGB_HPPHPPMOLPH_OFFSET UNITYSDK_OFFSET(0xB4A1170)
#define BIDDFDEAEGB_JGMBDICJMDK_OFFSET UNITYSDK_OFFSET(0xB4A1340)
#define BIDDFDEAEGB_JLAEJHHFJHO_OFFSET UNITYSDK_OFFSET(0xB4A0470)
#define BIDDFDEAEGB_JMHLJDFJOIL_OFFSET UNITYSDK_OFFSET(0xB49B500)
#define BIDDFDEAEGB_KAIEODKAFMN_OFFSET UNITYSDK_OFFSET(0xB496370)
#define BIDDFDEAEGB_KANNLKGCHHK_OFFSET UNITYSDK_OFFSET(0xB498860)
#define BIDDFDEAEGB_KEOLGNLFBGE_OFFSET UNITYSDK_OFFSET(0xB4A1D70)
#define BIDDFDEAEGB_KKLNJJHAMOF_OFFSET UNITYSDK_OFFSET(0xB49BD40)
#define BIDDFDEAEGB_KLLLPHCKNCK_OFFSET UNITYSDK_OFFSET(0xB49B350)
#define BIDDFDEAEGB_LBHDJNLNLDN_1_OFFSET UNITYSDK_OFFSET(0xB49A330)
#define BIDDFDEAEGB_LBHDJNLNLDN_OFFSET UNITYSDK_OFFSET(0xB499B00)
#define BIDDFDEAEGB_LOEBJOKKFPC_OFFSET UNITYSDK_OFFSET(0xB49F3A0)
#define BIDDFDEAEGB_MFCFABPGFGB_OFFSET UNITYSDK_OFFSET(0xB49B460)
#define BIDDFDEAEGB_MIBCHALDIHB_1_OFFSET UNITYSDK_OFFSET(0xB49D8A0)
#define BIDDFDEAEGB_MIBCHALDIHB_OFFSET UNITYSDK_OFFSET(0xB49C160)
#define BIDDFDEAEGB_MJCLCGAOBKJ_OFFSET UNITYSDK_OFFSET(0xB4A1290)
#define BIDDFDEAEGB_MOFAGKMICKL_OFFSET UNITYSDK_OFFSET(0xB49C9B0)
#define BIDDFDEAEGB_MPMLMMMDLAA_OFFSET UNITYSDK_OFFSET(0xB49A9C0)
#define BIDDFDEAEGB_NENFFHDGOLI_OFFSET UNITYSDK_OFFSET(0xB49B8F0)
#define BIDDFDEAEGB_NKAKNFDILBL_OFFSET UNITYSDK_OFFSET(0xB49FC90)
#define BIDDFDEAEGB_NOOANDLJBON_OFFSET UNITYSDK_OFFSET(0xB4977D0)
#define BIDDFDEAEGB_OBMHHICIOCI_OFFSET UNITYSDK_OFFSET(0xB497570)
#define BIDDFDEAEGB_OEKDCPJOOHB_OFFSET UNITYSDK_OFFSET(0xB4A0F30)
#define BIDDFDEAEGB_OHBELIHPNOA_OFFSET UNITYSDK_OFFSET(0xB49BA40)
#define BIDDFDEAEGB_OPFNFFLOIIH_OFFSET UNITYSDK_OFFSET(0xB4A0760)
#define BIDDFDEAEGB_OPOFMILOFIL_OFFSET UNITYSDK_OFFSET(0xB497E60)
#define BIDDFDEAEGB_OPOLENAHOBO_OFFSET UNITYSDK_OFFSET(0xB49F260)
#define BIDDFDEAEGB_PDPOGMDAMLC_OFFSET UNITYSDK_OFFSET(0xB4963C0)
#define BIDDFDEAEGB_PGIMOICDCKP_OFFSET UNITYSDK_OFFSET(0xB498420)
#define BIDDFDEAEGB_PGPOJGBLGCD_OFFSET UNITYSDK_OFFSET(0xB49B5F0)
#define BIDDFDEAEGB_PHADIIJCOOE_OFFSET UNITYSDK_OFFSET(0xB4982B0)
#define BIDDFDEAEGB_PJEEHOFDCDM_OFFSET UNITYSDK_OFFSET(0xB4A1F00)
#define BIDDFDEAEGB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB4A1BB0)
#define BIDDFDEAEGB_PLBFAAMOLFH_OFFSET UNITYSDK_OFFSET(0xB4A1050)
#define BIDDFDEAEGB_POIFGAFCOLE_OFFSET UNITYSDK_OFFSET(0xB49F1E0)
#define BIDDFDEAEGB_SET_RAWGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xB4A1E70)

inline static constexpr unsigned int BIDDFDEAEGB_TypeDefinitionIndex = 62109;

	class BIDDFDEAEGB : public ::FDKKDPIHFKL
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* BJJFEEBDPEH; // 0x28
		::CPFGNNGMPDJ* MJMNDHGGJOI; // 0x30
		::System::Action* NDEGKDCJBNL; // 0x38
		::System::Collections::Generic::HashSet_1<::System::ValueTuple>* PJDABJBGIHH; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MKNOAOJPALD*>* GHHEHDGJLGH; // 0x48
		::JOKACBOADHJ* DNOBPAFNGFM; // 0x50
		::System::UInt32 _RawGroupState_k__BackingField; // 0x58
		::System::Boolean LOLMLFNNMKE; // 0x5C
		::System::Void _ctor(::RPG::Client::MapDef* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KAIEODKAFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_KAIEODKAFMN_OFFSET))(this);
		}

		::System::Void PDPOGMDAMLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_PDPOGMDAMLC_OFFSET))(this);
		}

		::System::Void NOOANDLJBON(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_NOOANDLJBON_OFFSET))(this, a1);
		}

		::System::Void OPOFMILOFIL(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_OPOFMILOFIL_OFFSET))(this, a1);
		}

		::System::Void HCPGNAKBOHK(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_HCPGNAKBOHK_OFFSET))(this, a1);
		}

		::System::Void COLEGJDACDI(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_COLEGJDACDI_OFFSET))(this, a1);
		}

		::System::Void BIOPAHGNKLJ(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_BIOPAHGNKLJ_OFFSET))(this, a1);
		}

		::System::Void KANNLKGCHHK(::Proto::GroupSnapshot* a1, ::Proto::EntitySnapshot* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*, ::Proto::EntitySnapshot*, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_KANNLKGCHHK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGIMOICDCKP(::Proto::GroupSnapshot* a1, ::Proto::EntitySnapshot* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_PGIMOICDCKP_OFFSET))(this, a1, a2);
		}

		::BIDDFDEAEGB_EntitySideType PHADIIJCOOE(::Proto::EntitySnapshot* a1)
		{
			return ((::BIDDFDEAEGB_EntitySideType(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_PHADIIJCOOE_OFFSET))(this, a1);
		}

		::System::Void LBHDJNLNLDN(::BFAGAEJHEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAGAEJHEJH*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_LBHDJNLNLDN_OFFSET))(this, a1);
		}

		::System::Void LBHDJNLNLDN_1(::DKFNBJOGFME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFNBJOGFME*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_LBHDJNLNLDN_1_OFFSET))(this, a1);
		}

		::System::Void GBKAGHNIJKF(::DKFNBJOGFME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFNBJOGFME*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_GBKAGHNIJKF_OFFSET))(this, a1);
		}

		::System::Void OBMHHICIOCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_OBMHHICIOCI_OFFSET))(this);
		}

		::RPG::GameCore::GroupPropertyConfig* EOMKBJDBNCL(::System::String* a1)
		{
			return ((::RPG::GameCore::GroupPropertyConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_EOMKBJDBNCL_OFFSET))(this, a1);
		}

		::System::Int16 HAIEJENPAMD(::System::String* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_HAIEJENPAMD_OFFSET))(this, a1);
		}

		::System::Boolean HOIEJMICBOG(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_HOIEJMICBOG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCHFOCAAGJO(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_HCHFOCAAGJO_OFFSET))(this, a1);
		}

		::System::Boolean KLLLPHCKNCK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_KLLLPHCKNCK_OFFSET))(this, a1);
		}

		::System::Boolean MFCFABPGFGB(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_MFCFABPGFGB_OFFSET))(this, a1, a2);
		}

		::System::Boolean FABIKLEMFPO(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_FABIKLEMFPO_OFFSET))(this, a1, a2);
		}

		::System::Boolean JMHLJDFJOIL(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_JMHLJDFJOIL_OFFSET))(this, a1, a2);
		}

		::System::Boolean PGPOJGBLGCD(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_PGPOJGBLGCD_OFFSET))(this, a1, a2);
		}

		::System::Boolean MPMLMMMDLAA(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_MPMLMMMDLAA_OFFSET))(this, a1, a2);
		}

		::System::Void NENFFHDGOLI(::System::String* a1, ::BOJKDLCIJCN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BOJKDLCIJCN*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_NENFFHDGOLI_OFFSET))(this, a1, a2);
		}

		::System::Void DHBIGLBAOLL(::System::String* a1, ::BOJKDLCIJCN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::BOJKDLCIJCN*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_DHBIGLBAOLL_OFFSET))(this, a1, a2);
		}

		::System::Boolean DELONJKKHBM(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_DELONJKKHBM_OFFSET))(this, a1);
		}

		::System::Boolean ADALELKCHEB(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_ADALELKCHEB_OFFSET))(this, a1);
		}

		::System::Boolean DIHLAJPJHLB(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_DIHLAJPJHLB_OFFSET))(this, a1);
		}

		::System::Boolean DPBLBAHAKBK(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_DPBLBAHAKBK_OFFSET))(this, a1);
		}

		::System::Boolean DNOODJPKIPJ(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_DNOODJPKIPJ_OFFSET))(this, a1);
		}

		::System::Void MIBCHALDIHB(::BFAGAEJHEJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAGAEJHEJH*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_MIBCHALDIHB_OFFSET))(this, a1);
		}

		::System::Void MIBCHALDIHB_1(::DKFNBJOGFME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFNBJOGFME*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_MIBCHALDIHB_1_OFFSET))(this, a1);
		}

		::System::Void AIKCCBJPBAB(::DKFNBJOGFME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFNBJOGFME*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_AIKCCBJPBAB_OFFSET))(this, a1);
		}

		::System::Void BINFKOJKGBH(::DKFNBJOGFME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKFNBJOGFME*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_BINFKOJKGBH_OFFSET))(this, a1);
		}

		::System::Void AFPCPGOMCDM(::Proto::SceneEntityInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_AFPCPGOMCDM_OFFSET))(this, a1);
		}

		::System::Void MOFAGKMICKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_MOFAGKMICKL_OFFSET))(this);
		}

		::System::Void OPOLENAHOBO(::System::UInt32 a1, ::EPAJKAFCJME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::EPAJKAFCJME*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_OPOLENAHOBO_OFFSET))(this, a1, a2);
		}

		::System::Void LOEBJOKKFPC(::System::UInt32 a1, ::JLBDIAMCOME* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JLBDIAMCOME*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_LOEBJOKKFPC_OFFSET))(this, a1, a2);
		}

		::System::Void FDPMDNMBHFP(::System::UInt32 a1, ::Proto::SceneEntityInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Proto::SceneEntityInfo*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_FDPMDNMBHFP_OFFSET))(this, a1, a2);
		}

		::System::Void NKAKNFDILBL(::RPG::Client::MapPropDef* a1, ::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_NKAKNFDILBL_OFFSET))(this, a1, a2);
		}

		::System::Void FNGHOKKMFMN(::RPG::Client::MapPropDef* a1, ::GFDENAMMEHM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*, ::GFDENAMMEHM*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_FNGHOKKMFMN_OFFSET))(this, a1, a2);
		}

		::System::Boolean CKIALIFBMCC(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_CKIALIFBMCC_OFFSET))(this, a1);
		}

		::System::Boolean JLAEJHHFJHO(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_JLAEJHHFJHO_OFFSET))(this, a1);
		}

		::System::Boolean OPFNFFLOIIH(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_OPFNFFLOIIH_OFFSET))(this, a1);
		}

		::System::Boolean GMKPIBLMACM(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_GMKPIBLMACM_OFFSET))(this, a1);
		}

		::System::Boolean AKGPDAHGOJN(::RPG::Client::MapEntityDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_AKGPDAHGOJN_OFFSET))(this, a1);
		}

		::System::Boolean OEKDCPJOOHB(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_OEKDCPJOOHB_OFFSET))(this, a1);
		}

		::System::Boolean PLBFAAMOLFH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_PLBFAAMOLFH_OFFSET))(this, a1);
		}

		::System::Boolean HPPHPPMOLPH(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_HPPHPPMOLPH_OFFSET))(this, a1);
		}

		::System::Boolean MJCLCGAOBKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_MJCLCGAOBKJ_OFFSET))(this);
		}

		::System::Void JGMBDICJMDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_JGMBDICJMDK_OFFSET))(this);
		}

		::System::Void ABNPEGHPKAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_ABNPEGHPKAE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void OHBELIHPNOA(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_OHBELIHPNOA_OFFSET))(this, a1);
		}

		::System::Boolean GCOMFPLMNGM(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_GCOMFPLMNGM_OFFSET))(this, a1);
		}

		::System::Void KKLNJJHAMOF(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_KKLNJJHAMOF_OFFSET))(this, a1);
		}

		::System::Boolean GBIHNLADLFN(::RPG::Client::MapPropDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_GBIHNLADLFN_OFFSET))(this, a1);
		}

		::System::Void FKGALHECBNH(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_FKGALHECBNH_OFFSET))(this, a1);
		}

		::System::Boolean DFCBNHGDAAK(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_DFCBNHGDAAK_OFFSET))(this, a1);
		}

		::System::Void BNBOPJMCNOK(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_BNBOPJMCNOK_OFFSET))(this, a1);
		}

		::System::Boolean KEOLGNLFBGE(::RPG::Client::MapDistrictDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDistrictDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_KEOLGNLFBGE_OFFSET))(this, a1);
		}

		::System::UInt32 GIDGIAMIIFP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_GIDGIAMIIFP_OFFSET))(this);
		}

		::System::Void POIFGAFCOLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_POIFGAFCOLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RawGroupState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_GET_RAWGROUPSTATE_OFFSET))(this);
		}

		::System::Void set_RawGroupState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_SET_RAWGROUPSTATE_OFFSET))(this, a1);
		}

		::RPG::GameCore::LevelGroupLoadSide DJKLMEOPFIF()
		{
			return ((::RPG::GameCore::LevelGroupLoadSide(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_DJKLMEOPFIF_OFFSET))(this);
		}

		::System::Boolean PJEEHOFDCDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_PJEEHOFDCDM_OFFSET))(this);
		}

		::System::Void CLEMCPLGCJF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BIDDFDEAEGB_CLEMCPLGCJF_OFFSET))(this, a1);
		}

	};
