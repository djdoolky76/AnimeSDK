#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNHLGDABFJN_DitherProcessType.h"
#include "unitysdk/DNHLGDABFJN_DitherRayType.h"
#include "unitysdk/MDILEMALGNC.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/DNHLGDABFJN_OHFOLIOAOHI.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CJADIOHCKFH;
class CJEEJFDPPNG;
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraModuleConfigCollection; }
namespace RPG::Client { class DitherModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class PipelineCameraGlobalConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define DNHLGDABFJN_AIPJFPCNFPJ_OFFSET UNITYSDK_OFFSET(0x12CCDBD0)
#define DNHLGDABFJN_BBGDEIHDICH_OFFSET UNITYSDK_OFFSET(0x12CCDE80)
#define DNHLGDABFJN_BLKDEEIJHMH_OFFSET UNITYSDK_OFFSET(0x12CCCBD0)
#define DNHLGDABFJN_BPNCLJAFKKP_OFFSET UNITYSDK_OFFSET(0x12CD2760)
#define DNHLGDABFJN_CBIPLMOKPHG_OFFSET UNITYSDK_OFFSET(0x12CC6A00)
#define DNHLGDABFJN_CGBEPNNKBMF_OFFSET UNITYSDK_OFFSET(0x12CCBE00)
#define DNHLGDABFJN_CLFNIAKBHPI_OFFSET UNITYSDK_OFFSET(0x12CC6460)
#define DNHLGDABFJN_CNBKLHGJJBC_OFFSET UNITYSDK_OFFSET(0x12CC65E0)
#define DNHLGDABFJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x12CC5170)
#define DNHLGDABFJN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC50E0)
#define DNHLGDABFJN_DEOBANHOLCI_OFFSET UNITYSDK_OFFSET(0x12CCE920)
#define DNHLGDABFJN_DHKGKOIFDPL_OFFSET UNITYSDK_OFFSET(0x12CD2000)
#define DNHLGDABFJN_DIDIHPMALGE_OFFSET UNITYSDK_OFFSET(0x12CD0F40)
#define DNHLGDABFJN_EBJNNOMHEAP_OFFSET UNITYSDK_OFFSET(0x12CC7E50)
#define DNHLGDABFJN_FHLAHFOOMBM_OFFSET UNITYSDK_OFFSET(0x12CC8140)
#define DNHLGDABFJN_GBHEIEBGDEG_OFFSET UNITYSDK_OFFSET(0x12CD26C0)
#define DNHLGDABFJN_GLBGMECOPFP_OFFSET UNITYSDK_OFFSET(0x12CCF060)
#define DNHLGDABFJN_HAKIMEBMMCJ_OFFSET UNITYSDK_OFFSET(0x12CCF0F0)
#define DNHLGDABFJN_HDMHEOFEEPN_OFFSET UNITYSDK_OFFSET(0x12CCD700)
#define DNHLGDABFJN_IADLJDMKBLK_OFFSET UNITYSDK_OFFSET(0x12CCF6D0)
#define DNHLGDABFJN_IHEBLKMGDEG_OFFSET UNITYSDK_OFFSET(0x12CC7C70)
#define DNHLGDABFJN_IMPMHJPCPCK_OFFSET UNITYSDK_OFFSET(0x12CD03D0)
#define DNHLGDABFJN_INEEBDDHACJ_OFFSET UNITYSDK_OFFSET(0x12CCCE90)
#define DNHLGDABFJN_INJDICIAHMD_OFFSET UNITYSDK_OFFSET(0x12CCE080)
#define DNHLGDABFJN_IPPAMMAKMDG_OFFSET UNITYSDK_OFFSET(0x12CCE9E0)
#define DNHLGDABFJN_JBIKAAECIEL_OFFSET UNITYSDK_OFFSET(0x12CC5B90)
#define DNHLGDABFJN_JDJFOEOFLCC_OFFSET UNITYSDK_OFFSET(0x12CD2160)
#define DNHLGDABFJN_KFOPKEFOHFE_OFFSET UNITYSDK_OFFSET(0x12CC7DE0)
#define DNHLGDABFJN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12CC5340)
#define DNHLGDABFJN_LDPMHPFECMF_OFFSET UNITYSDK_OFFSET(0x12CCE7E0)
#define DNHLGDABFJN_LKDONPBGHKP_OFFSET UNITYSDK_OFFSET(0x12CD11A0)
#define DNHLGDABFJN_LNNMAODHAOP_OFFSET UNITYSDK_OFFSET(0x12CD2360)
#define DNHLGDABFJN_LONILBIGCGP_OFFSET UNITYSDK_OFFSET(0x12CD22F0)
#define DNHLGDABFJN_MBKOEDNGLIO_OFFSET UNITYSDK_OFFSET(0x12CD16E0)
#define DNHLGDABFJN_MCEAINFKCJK_OFFSET UNITYSDK_OFFSET(0x12CCEB50)
#define DNHLGDABFJN_MCPOGKAEFFJ_OFFSET UNITYSDK_OFFSET(0x12CD2570)
#define DNHLGDABFJN_MFIDINFCGNP_OFFSET UNITYSDK_OFFSET(0x12CCBC10)
#define DNHLGDABFJN_MKOPPJKFLEE_OFFSET UNITYSDK_OFFSET(0x12CC79A0)
#define DNHLGDABFJN_MLLONJDKMPO_OFFSET UNITYSDK_OFFSET(0x12CCE370)
#define DNHLGDABFJN_MOGJDBIAHBM_OFFSET UNITYSDK_OFFSET(0x12CD2960)
#define DNHLGDABFJN_MPDBFJPJKIE_OFFSET UNITYSDK_OFFSET(0x12CCC3B0)
#define DNHLGDABFJN_NAEFJEMHFII_OFFSET UNITYSDK_OFFSET(0x12CD27B0)
#define DNHLGDABFJN_NHEDINBLOIH_OFFSET UNITYSDK_OFFSET(0x12CC5C90)
#define DNHLGDABFJN_NIALPLNAOBA_OFFSET UNITYSDK_OFFSET(0x12CCD130)
#define DNHLGDABFJN_OCEGLONNEAF_OFFSET UNITYSDK_OFFSET(0x12CCF2B0)
#define DNHLGDABFJN_ODLLPALAIJJ_OFFSET UNITYSDK_OFFSET(0x12CCE890)
#define DNHLGDABFJN_OEGKIAIHGNJ_OFFSET UNITYSDK_OFFSET(0x12CC7710)
#define DNHLGDABFJN_OLEDPPEBLDA_OFFSET UNITYSDK_OFFSET(0x12CCA070)
#define DNHLGDABFJN_OMELKKICGAF_OFFSET UNITYSDK_OFFSET(0x12CC8B10)
#define DNHLGDABFJN_OMFJLCJELII_OFFSET UNITYSDK_OFFSET(0x12CD2710)
#define DNHLGDABFJN_PALFJPGGLKO_OFFSET UNITYSDK_OFFSET(0x12CC9010)
#define DNHLGDABFJN_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x12CC8D00)
#define DNHLGDABFJN_PNPBEOLAKIG_OFFSET UNITYSDK_OFFSET(0x12CC7D60)
#define DNHLGDABFJN_PPOACKHGLOM_OFFSET UNITYSDK_OFFSET(0x12CD2870)

inline static constexpr unsigned int DNHLGDABFJN_TypeDefinitionIndex = 71573;

	class DNHLGDABFJN : public ::MDILEMALGNC
	{
	public:
		::RPG::GameCore::GameEntity* MEOLFFJPGKM; // 0x38
		::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* MBGENCDIJDO; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* FKKGGHHLJCP; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* HJKIFELHBEN; // 0x50
		::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* ANJBPKEHDDN; // 0x58
		::Il2CppArray<::UnityEngine::Ray>* MFONEHFABPN; // 0x60
		::Il2CppArray<::UnityEngine::Collider*>* OANFPAMAMBI; // 0x68
		::RPG::GameCore::GameEntity* BPMAKMACNDA; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* JDEBCGDKNCA; // 0x78
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* GKJPDBIFIEI; // 0x80
		::RPG::Client::DitherModuleConfig* DOKOAADJEAK; // 0x88
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* IIGLDAAADJJ; // 0x90
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* COEANINFHAJ; // 0x98
		::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* NPKPHKKLDFP; // 0xA0
		::Il2CppArray<::UnityEngine::Ray>* OMGFLCKFGNN; // 0xA8
		::RPG::GameCore::GameEntity* GKMOGADINMH; // 0xB0
		::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* NHGINPBHDHF; // 0xB8
		::Il2CppArray<::UnityEngine::RaycastHit>* IGGMLNOGABB; // 0xC0
		::RPG::GameCore::GameEntity* DKOMNJBFINL; // 0xC8
		::Il2CppArray<::System::Single>* MAMDKOJENAA; // 0xD0
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* LFKEALMLBGJ; // 0xD8
		::RPG::GameCore::GameEntity* ENOOKMCPPBN; // 0xE0
		::System::Single DFIBHEDHIEA; // 0xE8
		::System::Single BLMLMMEECLE; // 0xEC
		::DNHLGDABFJN_DitherProcessType JNFBKDAFNHJ; // 0xF0
		::System::Boolean HIBJICDOAHD; // 0xF4
		::System::Boolean AINGEMCIOJB; // 0xF5
		::System::Byte _padding0[0x2];
		::System::Single CDCDFLIFHCM; // 0xF8
		::System::Int32 CLMGNJJCEHD; // 0xFC
		::System::Single MOEDHFMFAOA; // 0x100
		::System::Boolean NNFNIAFGJGH; // 0x104
		::System::Boolean AKEHNDAPAAK; // 0x105
		::System::Boolean NKNBOPBKLHJ; // 0x106
		::System::Boolean FHIGCOIMPAH; // 0x107
		::System::Single DDADBIBKCOP; // 0x108
		::System::Int32 KEJKANPPOBF; // 0x10C
		::System::Single PALCKKFLKKK; // 0x110
		::System::Single DNHPELCKBLD; // 0x114
		::System::Single ENNLCECIFPA; // 0x118
		::System::Single CJMMCKEIHGJ; // 0x11C
		::System::Single MNECAFNEDAD; // 0x120
		::System::Single CIICHGLMGLH; // 0x124
		::System::Int32 NJCCBHKMHKN; // 0x128
		::System::Int32 GAAIIOLNPDC; // 0x12C
		// static const ::System::Object FPLMHHPPJNA; // 0x0
		// static const ::System::String* PEKEDMKOPDD; // 0x0
		// static const ::System::String* CEOPIOIEIEP; // 0x0
		// static const ::System::Object FGJNDNNAOPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraModuleConfigCollection* a2, ::RPG::Client::PipelineCameraGlobalConfig* a3, ::RPG::Client::CameraDataAndFlags* a4, ::RPG::Client::CameraModuleType a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraModuleConfigCollection*, ::RPG::Client::PipelineCameraGlobalConfig*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + DNHLGDABFJN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JBIKAAECIEL(::CJADIOHCKFH* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CJADIOHCKFH*, ::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_JBIKAAECIEL_OFFSET))(this, a1, a2);
		}

		::System::Boolean NHEDINBLOIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_NHEDINBLOIH_OFFSET))(this);
		}

		::System::Void KFOPKEFOHFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_KFOPKEFOHFE_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void EBJNNOMHEAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_EBJNNOMHEAP_OFFSET))(this);
		}

		::System::Void CNBKLHGJJBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_CNBKLHGJJBC_OFFSET))(this);
		}

		::System::Void MFIDINFCGNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MFIDINFCGNP_OFFSET))(this);
		}

		::System::Boolean PALFJPGGLKO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_PALFJPGGLKO_OFFSET))(this, a1);
		}

		::System::Void OLEDPPEBLDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_OLEDPPEBLDA_OFFSET))(this);
		}

		::System::Void MPDBFJPJKIE(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MPDBFJPJKIE_OFFSET))(this, a1, a2);
		}

		::System::Void CBIPLMOKPHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_CBIPLMOKPHG_OFFSET))(this, a1);
		}

		::System::Void MLLONJDKMPO(::UnityEngine::GameObject* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MLLONJDKMPO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void INJDICIAHMD(::UnityEngine::Transform* a1, ::CJEEJFDPPNG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_INJDICIAHMD_OFFSET))(this, a1, a2);
		}

		::DNHLGDABFJN_OHFOLIOAOHI LDPMHPFECMF(::System::Int32 a1)
		{
			return ((::DNHLGDABFJN_OHFOLIOAOHI(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNHLGDABFJN_LDPMHPFECMF_OFFSET))(this, a1);
		}

		::System::Void ODLLPALAIJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_ODLLPALAIJJ_OFFSET))(this);
		}

		::System::Void DEOBANHOLCI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_DEOBANHOLCI_OFFSET))(this, a1);
		}

		::System::Void OEGKIAIHGNJ(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_OEGKIAIHGNJ_OFFSET))(this, a1, a2);
		}

		::System::Void AIPJFPCNFPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_AIPJFPCNFPJ_OFFSET))(this);
		}

		::System::Int32 GLBGMECOPFP(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_GLBGMECOPFP_OFFSET))(this, a1);
		}

		::System::Void BLKDEEIJHMH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_BLKDEEIJHMH_OFFSET))(this, a1);
		}

		::System::Void INEEBDDHACJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_INEEBDDHACJ_OFFSET))(this, a1);
		}

		::System::Void HAKIMEBMMCJ(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::CJEEJFDPPNG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::CJEEJFDPPNG*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_HAKIMEBMMCJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HDMHEOFEEPN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_HDMHEOFEEPN_OFFSET))(this, a1);
		}

		::System::Void BBGDEIHDICH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_BBGDEIHDICH_OFFSET))(this, a1);
		}

		::System::Void OCEGLONNEAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_OCEGLONNEAF_OFFSET))(this);
		}

		::System::Void MCEAINFKCJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MCEAINFKCJK_OFFSET))(this);
		}

		::System::Void OMELKKICGAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_OMELKKICGAF_OFFSET))(this);
		}

		::System::Void IPPAMMAKMDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_IPPAMMAKMDG_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Ray>* IADLJDMKBLK()
		{
			return ((::Il2CppArray<::UnityEngine::Ray>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_IADLJDMKBLK_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Ray>* IMPMHJPCPCK(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Ray>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DNHLGDABFJN_IMPMHJPCPCK_OFFSET))(this, a1);
		}

		::System::Void DIDIHPMALGE(::System::Int32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_DIDIHPMALGE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void FHLAHFOOMBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_FHLAHFOOMBM_OFFSET))(this);
		}

		::System::Void LKDONPBGHKP(::Il2CppArray<::UnityEngine::Ray>* a1, ::System::Int32 a2, ::DNHLGDABFJN_DitherRayType a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Ray>*, ::System::Int32, ::DNHLGDABFJN_DitherRayType))((::PBYTE)hIl2Cpp + DNHLGDABFJN_LKDONPBGHKP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MBKOEDNGLIO(::System::Int32 a1, ::System::Boolean a2, ::DNHLGDABFJN_DitherRayType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::DNHLGDABFJN_DitherRayType))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MBKOEDNGLIO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CGBEPNNKBMF(::RPG::Client::BaseShaderPropertyTransition* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseShaderPropertyTransition*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_CGBEPNNKBMF_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CLFNIAKBHPI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_CLFNIAKBHPI_OFFSET))(this, a1);
		}

		::System::Void IHEBLKMGDEG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_IHEBLKMGDEG_OFFSET))(this, a1);
		}

		::System::Single JDJFOEOFLCC(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_JDJFOEOFLCC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MKOPPJKFLEE(::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::RPG::Client::BaseShaderPropertyTransition*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MKOPPJKFLEE_OFFSET))(this, a1, a2);
		}

		::System::Boolean NIALPLNAOBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_NIALPLNAOBA_OFFSET))(this);
		}

		::System::Boolean PNPBEOLAKIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHLGDABFJN_PNPBEOLAKIG_OFFSET))(this);
		}

		::UnityEngine::Ray DHKGKOIFDPL(::UnityEngine::Ray a1, ::System::Single a2)
		{
			return ((::UnityEngine::Ray(*)(::PVOID, ::UnityEngine::Ray, ::System::Single))((::PBYTE)hIl2Cpp + DNHLGDABFJN_DHKGKOIFDPL_OFFSET))(this, a1, a2);
		}

		::System::Void LONILBIGCGP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_LONILBIGCGP_OFFSET))(this, a1);
		}

		::System::Void LNNMAODHAOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_LNNMAODHAOP_OFFSET))(this, a1);
		}

		::System::Void MCPOGKAEFFJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MCPOGKAEFFJ_OFFSET))(this, a1);
		}

		::System::Void GBHEIEBGDEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_GBHEIEBGDEG_OFFSET))(this, a1);
		}

		::System::Void OMFJLCJELII(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_OMFJLCJELII_OFFSET))(this, a1);
		}

		::System::Void BPNCLJAFKKP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_BPNCLJAFKKP_OFFSET))(this, a1);
		}

		::System::Void NAEFJEMHFII(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_NAEFJEMHFII_OFFSET))(this, a1);
		}

		::System::Void PPOACKHGLOM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_PPOACKHGLOM_OFFSET))(this, a1);
		}

		::System::Void MOGJDBIAHBM(::Il2CppArray<::UnityEngine::Ray>* a1, ::Il2CppArray<::UnityEngine::Ray>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Ray>*, ::Il2CppArray<::UnityEngine::Ray>*))((::PBYTE)hIl2Cpp + DNHLGDABFJN_MOGJDBIAHBM_OFFSET))(this, a1, a2);
		}

	};
