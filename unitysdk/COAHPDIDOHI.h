#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHHPIFHIEIB.h"
#include "unitysdk/COAHPDIDOHI_FinalRotationState.h"
#include "unitysdk/JGCJNMMCEHA.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvNavigationState.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class AAGOHNBBHNP;
class EDJNAGDJEKB;
class FOOIINCDBFA;
class KFELGAIGHAP;
class NFGIHNCHEDO;
class NNKDKMBKFHC;
class PCFGFOGMLNN;
class PEDAPLLONJD;
class POPMABHOCDI;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class PetPartyStopFacingConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define COAHPDIDOHI_ABJDGPMIGPN_OFFSET UNITYSDK_OFFSET(0xE5F7360)
#define COAHPDIDOHI_ABMHNHPLBGM_OFFSET UNITYSDK_OFFSET(0xE5F6D40)
#define COAHPDIDOHI_ANCMFKGKMDE_OFFSET UNITYSDK_OFFSET(0xE5F86F0)
#define COAHPDIDOHI_BANEGNBFOBM_OFFSET UNITYSDK_OFFSET(0xE5FC360)
#define COAHPDIDOHI_BCHGNKAAFJI_OFFSET UNITYSDK_OFFSET(0xE5F9030)
#define COAHPDIDOHI_BEHMKCBFNKN_OFFSET UNITYSDK_OFFSET(0xE5FD660)
#define COAHPDIDOHI_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0xE5FDC90)
#define COAHPDIDOHI_BFIMDHLMDAH_OFFSET UNITYSDK_OFFSET(0xE5FAD60)
#define COAHPDIDOHI_BHHGAGOMDJP_OFFSET UNITYSDK_OFFSET(0xE5FB930)
#define COAHPDIDOHI_BKLKPPFFGJC_OFFSET UNITYSDK_OFFSET(0xE5FAE80)
#define COAHPDIDOHI_BPLHGGOHOMB_OFFSET UNITYSDK_OFFSET(0xE5F6CE0)
#define COAHPDIDOHI_CCTOR_OFFSET UNITYSDK_OFFSET(0xE5FDD60)
#define COAHPDIDOHI_CGELDICNAAL_OFFSET UNITYSDK_OFFSET(0xE5FA4D0)
#define COAHPDIDOHI_CGKEJPMGGPJ_OFFSET UNITYSDK_OFFSET(0xE5F6E60)
#define COAHPDIDOHI_CTOR_OFFSET UNITYSDK_OFFSET(0xE5F69A0)
#define COAHPDIDOHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5FDC40)
#define COAHPDIDOHI_DNMOEDBBLBD_OFFSET UNITYSDK_OFFSET(0xE5FD820)
#define COAHPDIDOHI_DPCPFGHNOCI_OFFSET UNITYSDK_OFFSET(0xE5F9DB0)
#define COAHPDIDOHI_EAEOHCFMAKH_OFFSET UNITYSDK_OFFSET(0xE5F6FE0)
#define COAHPDIDOHI_EDHPIJPKIDO_OFFSET UNITYSDK_OFFSET(0xE5FC300)
#define COAHPDIDOHI_ELLNMINFMHE_OFFSET UNITYSDK_OFFSET(0xE5FB490)
#define COAHPDIDOHI_ENIMCCDEAII_OFFSET UNITYSDK_OFFSET(0xE5FC3D0)
#define COAHPDIDOHI_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0xE5F7EE0)
#define COAHPDIDOHI_GNPAPJFDAJM_OFFSET UNITYSDK_OFFSET(0xE5FA780)
#define COAHPDIDOHI_GPCAEICGFMM_OFFSET UNITYSDK_OFFSET(0xE5F70D0)
#define COAHPDIDOHI_HDAGACEJMJL_OFFSET UNITYSDK_OFFSET(0xE5FBA40)
#define COAHPDIDOHI_HHLNHDADKEG_OFFSET UNITYSDK_OFFSET(0xE5F6C50)
#define COAHPDIDOHI_ICCIBKFIDMA_OFFSET UNITYSDK_OFFSET(0xE5F95A0)
#define COAHPDIDOHI_IEJGBMLMHOA_OFFSET UNITYSDK_OFFSET(0xE5FD160)
#define COAHPDIDOHI_IGIDEAILFHN_OFFSET UNITYSDK_OFFSET(0xE5FD270)
#define COAHPDIDOHI_IIECMNAACJI_OFFSET UNITYSDK_OFFSET(0xE5FB200)
#define COAHPDIDOHI_ILPNFJDKAPN_OFFSET UNITYSDK_OFFSET(0xE5FB6B0)
#define COAHPDIDOHI_JAFIJEPAOOL_OFFSET UNITYSDK_OFFSET(0xE5F71F0)
#define COAHPDIDOHI_JKLPHHILKJE_OFFSET UNITYSDK_OFFSET(0xE5FCDD0)
#define COAHPDIDOHI_KCCJHGMPEBH_OFFSET UNITYSDK_OFFSET(0xE5FC5B0)
#define COAHPDIDOHI_KMBMCHDDHKD_OFFSET UNITYSDK_OFFSET(0xE5F98F0)
#define COAHPDIDOHI_LDIIJODIBOK_OFFSET UNITYSDK_OFFSET(0xE5FB430)
#define COAHPDIDOHI_LEAMMPFEHJG_OFFSET UNITYSDK_OFFSET(0xE5F7620)
#define COAHPDIDOHI_LEHBJIAAIAD_OFFSET UNITYSDK_OFFSET(0xE5F7510)
#define COAHPDIDOHI_LLCDDOBNLBJ_OFFSET UNITYSDK_OFFSET(0xE5FB0C0)
#define COAHPDIDOHI_LMLOBFJFJOP_OFFSET UNITYSDK_OFFSET(0xE5FB120)
#define COAHPDIDOHI_MFIIEPJDFMF_OFFSET UNITYSDK_OFFSET(0xE5F9D10)
#define COAHPDIDOHI_NBEBDEPNBLC_OFFSET UNITYSDK_OFFSET(0xE5FB270)
#define COAHPDIDOHI_NCDLAIAFBGP_OFFSET UNITYSDK_OFFSET(0xE5FB600)
#define COAHPDIDOHI_NCEJKKFOKDN_OFFSET UNITYSDK_OFFSET(0xE5F8EB0)
#define COAHPDIDOHI_NFODBDONHGD_OFFSET UNITYSDK_OFFSET(0xE5FA0E0)
#define COAHPDIDOHI_NFONKEFILEI_OFFSET UNITYSDK_OFFSET(0xE5FCA00)
#define COAHPDIDOHI_NKMPEIAGGIG_OFFSET UNITYSDK_OFFSET(0xE5F8790)
#define COAHPDIDOHI_NOBHLMDJPCE_OFFSET UNITYSDK_OFFSET(0xE5F9750)
#define COAHPDIDOHI_OFLEBHLIKIP_OFFSET UNITYSDK_OFFSET(0xE5F8520)
#define COAHPDIDOHI_OIKODAGECCL_OFFSET UNITYSDK_OFFSET(0xE5F6E70)
#define COAHPDIDOHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xE5F76A0)
#define COAHPDIDOHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xE5FD7D0)
#define COAHPDIDOHI_PEOGMPHCAEI_OFFSET UNITYSDK_OFFSET(0xE5F8D40)
#define COAHPDIDOHI_TICK_OFFSET UNITYSDK_OFFSET(0xE5F7FB0)

inline static constexpr unsigned int COAHPDIDOHI_TypeDefinitionIndex = 53319;

	class COAHPDIDOHI
	{
	public:
		::KFELGAIGHAP* EBBKDAJNAMB; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* MAPFPOBHGPK; // 0x30
		::NFGIHNCHEDO* HHCIHLGDHOO; // 0x38
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x40
		::System::String* KCPDNGDEMKH; // 0x48
		::System::String* IJMGEMMNNPI; // 0x50
		::Il2CppArray<::System::Single>* ANFPMGBOICF; // 0x58
		::PEDAPLLONJD* CNHKGFBJFNK; // 0x60
		::NNKDKMBKFHC* IEEOLIHJOIK; // 0x68
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x70
		::KFELGAIGHAP* DDCOIPBBDBI; // 0x78
		::PCFGFOGMLNN* LLMPMHJKOCF; // 0x80
		::PEDAPLLONJD* KPJMDJAALJF; // 0x88
		::EDJNAGDJEKB* CLEJPDMEOHE; // 0x90
		::FOOIINCDBFA* CNPNMBNLKFJ; // 0x98
		::Il2CppArray<::System::Single>* GMIEJLLCMLD; // 0xA0
		::POPMABHOCDI* GBLEMMBAAOK; // 0xA8
		::JGCJNMMCEHA FHENGMHHFML; // 0xB0
		::System::Int32 PLGMPIDECKN; // 0xE8
		::System::Nullable_1<::UnityEngine::Vector3> MEGKPDGFOBL; // 0xEC
		::System::Byte _padding0[0x8];
		::System::UInt32 HHPGJDAFKKM; // 0xFC
		::System::UInt32 MNLCONKOFHM; // 0x100
		::System::UInt32 EHKGELGDIFD; // 0x104
		::System::Int32 BFMMEDALEBH; // 0x108
		::System::Boolean LJPKHHCHMNN; // 0x10C
		::System::Boolean GHCIDONEONG; // 0x10D
		::System::Boolean LHLGOFCIIPH; // 0x10E
		::System::Boolean HNALEMBOBFE; // 0x10F
		::System::UInt32 GGIAIMGEADO; // 0x110
		::System::Int32 KOBMKLBOBDF; // 0x114
		::RPG::GameCore::CharacterMotionFlag CPFECINDNEE; // 0x118
		::System::UInt32 HOGMFAMFHHD; // 0x11C
		::System::Boolean KBAJODLOGMF; // 0x120
		::System::Boolean MMFFJIBAJCB; // 0x121
		::COAHPDIDOHI_FinalRotationState DEIHMACBGPN; // 0x122
		::System::Boolean JFMJNCKAFKF; // 0x123
		::BHHPIFHIEIB PGOBCIDJGOI; // 0x124
		static ::RPG::GameCore::StringHash* StaticGet_EEFMDFABALL()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "COAHPDIDOHI")->GetStaticField(0xD190);
		}

		// static const ::System::String* ODLCPHNIBBD; // 0x0
		// static const ::System::Object ANBEHFELCIB; // 0x0
		// static const ::System::Object JKCIDFIIJHC; // 0x0
		// static const ::System::Object ANKNBGLKLAI; // 0x0
		// static const ::System::Object JLDMIDGNLEM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AAGOHNBBHNP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AAGOHNBBHNP*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COAHPDIDOHI_CCTOR_OFFSET))();
		}

		::RPG::GameCore::GameEntity* HHLNHDADKEG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_HHLNHDADKEG_OFFSET))(this);
		}

		::System::String* BPLHGGOHOMB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BPLHGGOHOMB_OFFSET))(this);
		}

		::AAGOHNBBHNP* CGKEJPMGGPJ()
		{
			return ((::AAGOHNBBHNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_CGKEJPMGGPJ_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OIKODAGECCL()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_OIKODAGECCL_OFFSET))(this);
		}

		::System::Void EAEOHCFMAKH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_EAEOHCFMAKH_OFFSET))(this, a1);
		}

		::System::String* ABMHNHPLBGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ABMHNHPLBGM_OFFSET))(this);
		}

		::System::String* JAFIJEPAOOL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_JAFIJEPAOOL_OFFSET))(this);
		}

		::System::Void ABJDGPMIGPN(::NNKDKMBKFHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNKDKMBKFHC*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ABJDGPMIGPN_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_TICK_OFFSET))(this, a1);
		}

		::System::Void BCHGNKAAFJI(::JGCJNMMCEHA a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BCHGNKAAFJI_OFFSET))(this, a1);
		}

		::System::Void NFODBDONHGD(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NFODBDONHGD_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 CGELDICNAAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + COAHPDIDOHI_CGELDICNAAL_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void MFIIEPJDFMF(::JGCJNMMCEHA a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + COAHPDIDOHI_MFIIEPJDFMF_OFFSET))(this, a1);
		}

		::System::Void DPCPFGHNOCI(::JGCJNMMCEHA a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA))((::PBYTE)hIl2Cpp + COAHPDIDOHI_DPCPFGHNOCI_OFFSET))(this, a1);
		}

		::System::Void NOBHLMDJPCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NOBHLMDJPCE_OFFSET))(this);
		}

		::System::Void ICCIBKFIDMA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ICCIBKFIDMA_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 BFIMDHLMDAH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::AdvNavigationState a4)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::AdvNavigationState))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BFIMDHLMDAH_OFFSET))(a1, a2, a3, a4);
		}

		::UnityEngine::Vector3 BKLKPPFFGJC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::GameCore::AdvNavigationState a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::GameCore::AdvNavigationState))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BKLKPPFFGJC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GNPAPJFDAJM(::JGCJNMMCEHA a1, ::RPG::GameCore::AdvNavigationState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JGCJNMMCEHA, ::RPG::GameCore::AdvNavigationState))((::PBYTE)hIl2Cpp + COAHPDIDOHI_GNPAPJFDAJM_OFFSET))(this, a1, a2);
		}

		::System::Void LLCDDOBNLBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LLCDDOBNLBJ_OFFSET))(this);
		}

		::System::Void IIECMNAACJI(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + COAHPDIDOHI_IIECMNAACJI_OFFSET))(this, a1);
		}

		::System::Void LMLOBFJFJOP(::PEDAPLLONJD* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*, ::System::UInt32))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LMLOBFJFJOP_OFFSET))(this, a1, a2);
		}

		::System::Boolean ANCMFKGKMDE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ANCMFKGKMDE_OFFSET))(this);
		}

		::System::Void LEHBJIAAIAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LEHBJIAAIAD_OFFSET))(this);
		}

		::System::Void OFLEBHLIKIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_OFLEBHLIKIP_OFFSET))(this);
		}

		::System::Void NBEBDEPNBLC(::PEDAPLLONJD* a1, ::RPG::GameCore::AdvNavigationFailReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NBEBDEPNBLC_OFFSET))(this, a1, a2);
		}

		::System::Void NKMPEIAGGIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NKMPEIAGGIG_OFFSET))(this, a1);
		}

		::System::Void ELLNMINFMHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ELLNMINFMHE_OFFSET))(this);
		}

		::System::Void NCDLAIAFBGP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NCDLAIAFBGP_OFFSET))(this, a1);
		}

		::System::Single ILPNFJDKAPN(::RPG::GameCore::CharacterMotionFlag a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ILPNFJDKAPN_OFFSET))(this, a1);
		}

		::RPG::GameCore::PetPartyStopFacingConfig* PEOGMPHCAEI()
		{
			return ((::RPG::GameCore::PetPartyStopFacingConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_PEOGMPHCAEI_OFFSET))(this);
		}

		::System::Void NCEJKKFOKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NCEJKKFOKDN_OFFSET))(this);
		}

		::System::Void KMBMCHDDHKD(::RPG::GameCore::PetPartyStopFacingConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyStopFacingConfig*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_KMBMCHDDHKD_OFFSET))(this, a1);
		}

		::System::Void EDHPIJPKIDO(::PEDAPLLONJD* a1, ::RPG::GameCore::AdvNavigationFailReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + COAHPDIDOHI_EDHPIJPKIDO_OFFSET))(this, a1, a2);
		}

		::System::Void BANEGNBFOBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BANEGNBFOBM_OFFSET))(this);
		}

		::System::Void GPCAEICGFMM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_GPCAEICGFMM_OFFSET))(this, a1);
		}

		::System::Void ENIMCCDEAII(::PEDAPLLONJD* a1, ::RPG::GameCore::AdvNavigationFailReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEDAPLLONJD*, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ENIMCCDEAII_OFFSET))(this, a1, a2);
		}

		static ::System::String* IEJGBMLMHOA(::UnityEngine::Vector3 a1)
		{
			return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COAHPDIDOHI_IEJGBMLMHOA_OFFSET))(a1);
		}

		::System::Void IGIDEAILFHN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_IGIDEAILFHN_OFFSET))(this, a1);
		}

		::System::Void BEHMKCBFNKN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BEHMKCBFNKN_OFFSET))(this, a1);
		}

		::System::Single KCCJHGMPEBH(::RPG::GameCore::PetPartyStopFacingConfig* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::PetPartyStopFacingConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COAHPDIDOHI_KCCJHGMPEBH_OFFSET))(this, a1, a2);
		}

		::System::Boolean HDAGACEJMJL(::RPG::GameCore::PetPartyStopFacingConfig* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PetPartyStopFacingConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + COAHPDIDOHI_HDAGACEJMJL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean NFONKEFILEI(::RPG::GameCore::PetPartyStopFacingConfig* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PetPartyStopFacingConfig*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_NFONKEFILEI_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean BHHGAGOMDJP(::RPG::GameCore::PetPartyStopFacingConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PetPartyStopFacingConfig*))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BHHGAGOMDJP_OFFSET))(a1);
		}

		::System::Void JKLPHHILKJE(::System::Int32 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + COAHPDIDOHI_JKLPHHILKJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LDIIJODIBOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LDIIJODIBOK_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_DISPOSE_OFFSET))(this);
		}

		::System::Void DNMOEDBBLBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_DNMOEDBBLBD_OFFSET))(this);
		}

		::System::Void LEAMMPFEHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_LEAMMPFEHJG_OFFSET))(this);
		}

		::System::Void EOIBMFKIIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_EOIBMFKIIHL_OFFSET))(this);
		}

		::System::Void BEPBDGBNNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COAHPDIDOHI_BEPBDGBNNBC_OFFSET))(this);
		}

	};
