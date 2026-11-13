#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/RPG/GameCore/FiveDimGameplayMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICHCIEDADNP.h"
#include "unitysdk/NHNEFBGBCOJ.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CAKDOEKHBMK_DDEEKICBJIN;
class CKOLIMBFFBD;
class DBGGPBEKFNL;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class FiveDimAnimatorStateListenerConfig; }
namespace RPG::GameCore { class FiveDimBaseCameraConfig; }
namespace RPG::GameCore { class FiveDimChestConfig; }
namespace RPG::GameCore { class FiveDimDragonDogPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimEventReceiverConfig; }
namespace RPG::GameCore { class FiveDimFloatingSpiritPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimGravityWalkBoardConfig; }
namespace RPG::GameCore { class FiveDimLevelSettings; }
namespace RPG::GameCore { class FiveDimPipePortalConfig; }
namespace RPG::GameCore { class FiveDimPropMoveComponentConfig; }
namespace RPG::GameCore { class FiveDimPropMoveConfig; }
namespace RPG::GameCore { class FiveDimPropSpawnerParam; }
namespace RPG::GameCore { class FiveDimSplineMoveComponentConfig; }
namespace RPG::GameCore { class FiveDimSurfaceConfig; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterConfig; }
namespace RPG::GameCore { class FiveDimTriggerEventEmitterListConfig; }
namespace RPG::GameCore { class FiveDimViewBakedInfo; }
namespace RPG::GameCore { class FiveDimWaterReflectionConfig; }
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace RPG::GameCore { class LittleGameCustomLoadConfig; }
namespace RPG::GameCore { class LittleGameDynamicVar; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameEntityPreset; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class LittleGameLevelVarBindingMap; }
namespace RPG::GameCore { class LittleGameLevelVariableCollection; }
namespace RPG::GameCore { class LittleGameViewComponentConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class Collider; }

#define NFFPKHMKOBJ_AAMKKANNLHH_OFFSET UNITYSDK_OFFSET(0x18E6CC90)
#define NFFPKHMKOBJ_ADIILDKHKMC_OFFSET UNITYSDK_OFFSET(0x18E609C0)
#define NFFPKHMKOBJ_AFPJNHKBCGI_OFFSET UNITYSDK_OFFSET(0x18E691D0)
#define NFFPKHMKOBJ_AMAAAALGJPG_OFFSET UNITYSDK_OFFSET(0x18E64960)
#define NFFPKHMKOBJ_APLGKLIMENP_OFFSET UNITYSDK_OFFSET(0x18E6F590)
#define NFFPKHMKOBJ_BAPMDLDPPHK_OFFSET UNITYSDK_OFFSET(0x18E6BA20)
#define NFFPKHMKOBJ_BBNIEJCDHBC_OFFSET UNITYSDK_OFFSET(0x18E60AB0)
#define NFFPKHMKOBJ_BBPIDONNBKP_OFFSET UNITYSDK_OFFSET(0x18E6D9A0)
#define NFFPKHMKOBJ_BCFOJFGPMJG_OFFSET UNITYSDK_OFFSET(0x18E6B610)
#define NFFPKHMKOBJ_BGOFIAAMEDC_OFFSET UNITYSDK_OFFSET(0x18E6A810)
#define NFFPKHMKOBJ_BHGANHAEPDD_OFFSET UNITYSDK_OFFSET(0x18E707C0)
#define NFFPKHMKOBJ_BLMGCNIPLAH_1_OFFSET UNITYSDK_OFFSET(0x18E63C10)
#define NFFPKHMKOBJ_BLMGCNIPLAH_OFFSET UNITYSDK_OFFSET(0x18E62160)
#define NFFPKHMKOBJ_BMFLAPDAKGN_OFFSET UNITYSDK_OFFSET(0x18E70440)
#define NFFPKHMKOBJ_BMMIIANDIBG_OFFSET UNITYSDK_OFFSET(0x18E655F0)
#define NFFPKHMKOBJ_CBBBJJCFOEI_OFFSET UNITYSDK_OFFSET(0x18E64060)
#define NFFPKHMKOBJ_CCEFHHJKLME_OFFSET UNITYSDK_OFFSET(0x18E627E0)
#define NFFPKHMKOBJ_CEFLLCMGGPN_OFFSET UNITYSDK_OFFSET(0x18E641D0)
#define NFFPKHMKOBJ_CHHHOKCOIKC_OFFSET UNITYSDK_OFFSET(0x18E69DA0)
#define NFFPKHMKOBJ_CJAPPJMPGMP_OFFSET UNITYSDK_OFFSET(0x18E6FB40)
#define NFFPKHMKOBJ_CKIPGDIODDK_OFFSET UNITYSDK_OFFSET(0x18E6E550)
#define NFFPKHMKOBJ_COOFEAONDEP_OFFSET UNITYSDK_OFFSET(0x18E60BD0)
#define NFFPKHMKOBJ_CPCPDNKNGMI_OFFSET UNITYSDK_OFFSET(0x18E6A330)
#define NFFPKHMKOBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18E606D0)
#define NFFPKHMKOBJ_DBBPLFNNDPN_OFFSET UNITYSDK_OFFSET(0x18E69160)
#define NFFPKHMKOBJ_DCFGFKAKDFI_OFFSET UNITYSDK_OFFSET(0x18E6E950)
#define NFFPKHMKOBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18E60930)
#define NFFPKHMKOBJ_DLNCIAAAGBA_OFFSET UNITYSDK_OFFSET(0x18E64380)
#define NFFPKHMKOBJ_DMHDLHCACHA_OFFSET UNITYSDK_OFFSET(0x18E6F000)
#define NFFPKHMKOBJ_DMJPOGCLBFM_OFFSET UNITYSDK_OFFSET(0x18E60B60)
#define NFFPKHMKOBJ_DOONNBIGBCN_OFFSET UNITYSDK_OFFSET(0x18E6EE40)
#define NFFPKHMKOBJ_ECMKDLEOGIO_OFFSET UNITYSDK_OFFSET(0x18E6FEF0)
#define NFFPKHMKOBJ_EFKFPGOBAFP_OFFSET UNITYSDK_OFFSET(0x18E690A0)
#define NFFPKHMKOBJ_EGFHNIJLOHC_OFFSET UNITYSDK_OFFSET(0x18E64C10)
#define NFFPKHMKOBJ_ELEBHHPHGKC_OFFSET UNITYSDK_OFFSET(0x18E68D90)
#define NFFPKHMKOBJ_ENCLIKIGAOL_OFFSET UNITYSDK_OFFSET(0x18E6E7D0)
#define NFFPKHMKOBJ_FBNEDAFBAFF_OFFSET UNITYSDK_OFFSET(0x18E61250)
#define NFFPKHMKOBJ_FHHPCKLGEAL_OFFSET UNITYSDK_OFFSET(0x18E66BF0)
#define NFFPKHMKOBJ_FIDFNNEBBDD_OFFSET UNITYSDK_OFFSET(0x18E6CC10)
#define NFFPKHMKOBJ_FJKGEMKMGKF_OFFSET UNITYSDK_OFFSET(0x18E620A0)
#define NFFPKHMKOBJ_GEKKHHCLIJM_OFFSET UNITYSDK_OFFSET(0x18E6AD30)
#define NFFPKHMKOBJ_GLDEKGOHCON_OFFSET UNITYSDK_OFFSET(0x18E6E610)
#define NFFPKHMKOBJ_GNAFNADKJFM_OFFSET UNITYSDK_OFFSET(0x18E65DC0)
#define NFFPKHMKOBJ_GOGHJLELOAE_OFFSET UNITYSDK_OFFSET(0x18E61E30)
#define NFFPKHMKOBJ_GOIKMEJICPC_OFFSET UNITYSDK_OFFSET(0x18E66340)
#define NFFPKHMKOBJ_HKCLGAFANGI_OFFSET UNITYSDK_OFFSET(0x18E64A90)
#define NFFPKHMKOBJ_HMPHHPFKLBC_OFFSET UNITYSDK_OFFSET(0x18E6AFF0)
#define NFFPKHMKOBJ_HOELCNEKKGK_OFFSET UNITYSDK_OFFSET(0x18E6F100)
#define NFFPKHMKOBJ_IAMNJHPDONJ_OFFSET UNITYSDK_OFFSET(0x18E69D00)
#define NFFPKHMKOBJ_IBBLDJOFKHL_OFFSET UNITYSDK_OFFSET(0x18E612D0)
#define NFFPKHMKOBJ_IBONECBAPEK_OFFSET UNITYSDK_OFFSET(0x18E62550)
#define NFFPKHMKOBJ_IHLKNCNMLIN_OFFSET UNITYSDK_OFFSET(0x18E64ED0)
#define NFFPKHMKOBJ_IJNJCDPPOEP_OFFSET UNITYSDK_OFFSET(0x18E6E0F0)
#define NFFPKHMKOBJ_IKAKJHHEANN_1_OFFSET UNITYSDK_OFFSET(0x18E6E490)
#define NFFPKHMKOBJ_IKAKJHHEANN_OFFSET UNITYSDK_OFFSET(0x18E67310)
#define NFFPKHMKOBJ_IMCLCBIODGN_OFFSET UNITYSDK_OFFSET(0x18E701C0)
#define NFFPKHMKOBJ_INNNFOJJHHO_OFFSET UNITYSDK_OFFSET(0x18E702E0)
#define NFFPKHMKOBJ_INPPGMJHBIJ_OFFSET UNITYSDK_OFFSET(0x18E6DE20)
#define NFFPKHMKOBJ_IPGBHEPGDMK_OFFSET UNITYSDK_OFFSET(0x18E6A0C0)
#define NFFPKHMKOBJ_JAIMBAANDPG_OFFSET UNITYSDK_OFFSET(0x18E6AAD0)
#define NFFPKHMKOBJ_JJIOFPINBKD_OFFSET UNITYSDK_OFFSET(0x18E65A40)
#define NFFPKHMKOBJ_JNFFCJFEKKN_1_OFFSET UNITYSDK_OFFSET(0x18E61F10)
#define NFFPKHMKOBJ_JNFFCJFEKKN_2_OFFSET UNITYSDK_OFFSET(0x18E673C0)
#define NFFPKHMKOBJ_JNFFCJFEKKN_OFFSET UNITYSDK_OFFSET(0x18E64650)
#define NFFPKHMKOBJ_KEDIFOJPCCD_OFFSET UNITYSDK_OFFSET(0x18E64760)
#define NFFPKHMKOBJ_KHNJFLFONFB_OFFSET UNITYSDK_OFFSET(0x18E61120)
#define NFFPKHMKOBJ_KIDCJANKGBF_OFFSET UNITYSDK_OFFSET(0x18E6C490)
#define NFFPKHMKOBJ_KJALIJMBLEP_OFFSET UNITYSDK_OFFSET(0x18E6BF30)
#define NFFPKHMKOBJ_KJJLMBKDMKG_OFFSET UNITYSDK_OFFSET(0x18E6B140)
#define NFFPKHMKOBJ_KKHLNMPAAAF_1_OFFSET UNITYSDK_OFFSET(0x18E6AC30)
#define NFFPKHMKOBJ_KKHLNMPAAAF_OFFSET UNITYSDK_OFFSET(0x18E68F70)
#define NFFPKHMKOBJ_KNGHLGKJNPG_OFFSET UNITYSDK_OFFSET(0x18E6DD70)
#define NFFPKHMKOBJ_LBPANJNEBFE_OFFSET UNITYSDK_OFFSET(0x18E643E0)
#define NFFPKHMKOBJ_LDEPPMLDOHD_1_OFFSET UNITYSDK_OFFSET(0x18E704A0)
#define NFFPKHMKOBJ_LDEPPMLDOHD_OFFSET UNITYSDK_OFFSET(0x18E6CE40)
#define NFFPKHMKOBJ_LDNKDLABFBD_OFFSET UNITYSDK_OFFSET(0x18E68FE0)
#define NFFPKHMKOBJ_LELACAIEGKB_OFFSET UNITYSDK_OFFSET(0x18E6FC00)
#define NFFPKHMKOBJ_LMHDBFMFHAB_OFFSET UNITYSDK_OFFSET(0x18E6A6F0)
#define NFFPKHMKOBJ_LNKCHELAONM_OFFSET UNITYSDK_OFFSET(0x18E63F50)
#define NFFPKHMKOBJ_MAHAEELONEA_OFFSET UNITYSDK_OFFSET(0x18E66820)
#define NFFPKHMKOBJ_MKHOKBKIBBG_OFFSET UNITYSDK_OFFSET(0x18E6DC70)
#define NFFPKHMKOBJ_MOKFCBLELNA_OFFSET UNITYSDK_OFFSET(0x18E6FF70)
#define NFFPKHMKOBJ_NBNHKENPLAL_OFFSET UNITYSDK_OFFSET(0x18E61650)
#define NFFPKHMKOBJ_NDAAEKHMHBD_OFFSET UNITYSDK_OFFSET(0x18E70610)
#define NFFPKHMKOBJ_NDENOPIIGGG_OFFSET UNITYSDK_OFFSET(0x18E6E150)
#define NFFPKHMKOBJ_OCGBMKFFNKI_OFFSET UNITYSDK_OFFSET(0x18E706E0)
#define NFFPKHMKOBJ_OCOLNCHHGFB_OFFSET UNITYSDK_OFFSET(0x18E60F70)
#define NFFPKHMKOBJ_OGOKNGNALFE_OFFSET UNITYSDK_OFFSET(0x18E66F90)
#define NFFPKHMKOBJ_PKDFNAKHPCA_OFFSET UNITYSDK_OFFSET(0x18E6CD20)
#define NFFPKHMKOBJ_PKEBCCPDAIF_OFFSET UNITYSDK_OFFSET(0x18E61530)
#define NFFPKHMKOBJ_PONKIMPHJNH_OFFSET UNITYSDK_OFFSET(0x18E6AEF0)

inline static constexpr unsigned int NFFPKHMKOBJ_TypeDefinitionIndex = 79221;

	class NFFPKHMKOBJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FiveDimViewBakedInfo*>* JGKNJKKKNDO; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* OIDNKJOBODE; // 0x18
		::Entitas::IGroup_1<::HIOEAKHGILF*>* BOPPBBDNCND; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x30
		::Entitas::IGroup_1<::HIOEAKHGILF*>* MCIKCILKNON; // 0x38
		// static const ::System::String* IMBHLNMGJEO; // 0x0
		// static const ::System::String* GOCGMPABEIB; // 0x0
		// static const ::System::String* ACOHIKOPMOE; // 0x0
		// static const ::System::String* FMMJFLMAPKO; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_DISPOSE_OFFSET))(this);
		}

		::System::Void ADIILDKHKMC(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LittleGameLevelVarBindingMap*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_ADIILDKHKMC_OFFSET))(this, a1, a2, a3);
		}

		::HIOEAKHGILF* FBNEDAFBAFF(::RPG::GameCore::LittleGameEntityConfig* a1, ::NHNEFBGBCOJ a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::NHNEFBGBCOJ))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_FBNEDAFBAFF_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* NBNHKENPLAL(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::DBGGPBEKFNL* a3, ::ICHCIEDADNP a4)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityPreset*, ::DBGGPBEKFNL*, ::ICHCIEDADNP))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_NBNHKENPLAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::HIOEAKHGILF* BLMGCNIPLAH(::HIOEAKHGILF* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BLMGCNIPLAH_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* BLMGCNIPLAH_1(::HIOEAKHGILF* a1, ::System::String* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::UnityEngine::Vector3 a4)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BLMGCNIPLAH_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::HIOEAKHGILF* IBONECBAPEK(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::CAKDOEKHBMK_DDEEKICBJIN* a3)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityPreset*, ::CAKDOEKHBMK_DDEEKICBJIN*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IBONECBAPEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNKCHELAONM(::RPG::GameCore::LittleGameLevelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_LNKCHELAONM_OFFSET))(this, a1);
		}

		::System::Void FJKGEMKMGKF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_FJKGEMKMGKF_OFFSET))(this, a1);
		}

		::System::Void LBPANJNEBFE(::CKOLIMBFFBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKOLIMBFFBD*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_LBPANJNEBFE_OFFSET))(this, a1);
		}

		::System::Void KHNJFLFONFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KHNJFLFONFB_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* IBBLDJOFKHL(::RPG::GameCore::LittleGameEntityConfig* a1, ::NHNEFBGBCOJ a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::NHNEFBGBCOJ))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IBBLDJOFKHL_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* JNFFCJFEKKN(::RPG::GameCore::LittleGameEntityConfig* a1, ::NHNEFBGBCOJ a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::NHNEFBGBCOJ))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_JNFFCJFEKKN_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* JNFFCJFEKKN_1(::RPG::GameCore::LittleGameEntityPreset* a1, ::System::String* a2, ::NHNEFBGBCOJ a3)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityPreset*, ::System::String*, ::NHNEFBGBCOJ))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_JNFFCJFEKKN_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JNFFCJFEKKN_2(::HIOEAKHGILF* a1, ::System::Collections::Generic::IList_1<::RPG::GameCore::LittleGameComponentConfig*>* a2, ::NHNEFBGBCOJ a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Collections::Generic::IList_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::NHNEFBGBCOJ))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_JNFFCJFEKKN_2_OFFSET))(this, a1, a2, a3);
		}

		::HIOEAKHGILF* KEDIFOJPCCD(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KEDIFOJPCCD_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* HKCLGAFANGI(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_HKCLGAFANGI_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* GNAFNADKJFM(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_GNAFNADKJFM_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* GOIKMEJICPC(::RPG::GameCore::LittleGameEntityConfig* a1, ::NHNEFBGBCOJ a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::NHNEFBGBCOJ))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_GOIKMEJICPC_OFFSET))(this, a1, a2);
		}

		::System::Void KKHLNMPAAAF(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameViewComponentConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameViewComponentConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KKHLNMPAAAF_OFFSET))(this, a1, a2);
		}

		::System::Void KKHLNMPAAAF_1(::HIOEAKHGILF* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KKHLNMPAAAF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ELEBHHPHGKC(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_ELEBHHPHGKC_OFFSET))(this, a1, a2);
		}

		::System::Void BGOFIAAMEDC(::HIOEAKHGILF* a1, ::NHNEFBGBCOJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::NHNEFBGBCOJ))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BGOFIAAMEDC_OFFSET))(this, a1, a2);
		}

		::System::Void PKEBCCPDAIF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_PKEBCCPDAIF_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* MAHAEELONEA(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_MAHAEELONEA_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* FHHPCKLGEAL(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_FHHPCKLGEAL_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* OGOKNGNALFE(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_OGOKNGNALFE_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* AMAAAALGJPG(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_AMAAAALGJPG_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* IHLKNCNMLIN(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IHLKNCNMLIN_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* BMMIIANDIBG(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BMMIIANDIBG_OFFSET))(this, a1, a2);
		}

		::System::Void EGFHNIJLOHC(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_EGFHNIJLOHC_OFFSET))(this, a1, a2);
		}

		::System::Void GEKKHHCLIJM(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_GEKKHHCLIJM_OFFSET))(this, a1);
		}

		::System::Void PONKIMPHJNH(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_PONKIMPHJNH_OFFSET))(this, a1);
		}

		::System::Void HMPHHPFKLBC(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_HMPHHPFKLBC_OFFSET))(this, a1);
		}

		::System::Void PKDFNAKHPCA(::HIOEAKHGILF* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_PKDFNAKHPCA_OFFSET))(this, a1, a2);
		}

		::System::Void CBBBJJCFOEI(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CBBBJJCFOEI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimViewBakedInfo* LDEPPMLDOHD(::HIOEAKHGILF* a1)
		{
			return ((::RPG::GameCore::FiveDimViewBakedInfo*(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_LDEPPMLDOHD_OFFSET))(this, a1);
		}

		::System::Void CEFLLCMGGPN(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CEFLLCMGGPN_OFFSET))(this, a1);
		}

		::System::Void DLNCIAAAGBA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_DLNCIAAAGBA_OFFSET))(this, a1);
		}

		::System::Void BBNIEJCDHBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BBNIEJCDHBC_OFFSET))(this);
		}

		::System::Void COOFEAONDEP(::RPG::GameCore::LittleGameLevelConfig* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_COOFEAONDEP_OFFSET))(this, a1, a2);
		}

		::System::Void BBPIDONNBKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BBPIDONNBKP_OFFSET))(this, a1);
		}

		::System::Void MKHOKBKIBBG(::RPG::GameCore::LittleGameLevelVariableCollection* a1, ::RPG::GameCore::LittleGameLevelVarBindingMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelVariableCollection*, ::RPG::GameCore::LittleGameLevelVarBindingMap*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_MKHOKBKIBBG_OFFSET))(this, a1, a2);
		}

		::System::Void DMJPOGCLBFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_DMJPOGCLBFM_OFFSET))(this);
		}

		::System::Void KNGHLGKJNPG(::RPG::GameCore::FiveDimGameplayMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimGameplayMode))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KNGHLGKJNPG_OFFSET))(this, a1);
		}

		::System::Void INPPGMJHBIJ(::RPG::GameCore::FiveDimLevelSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimLevelSettings*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_INPPGMJHBIJ_OFFSET))(this, a1);
		}

		::System::Void OCOLNCHHGFB(::RPG::GameCore::LittleGameLevelConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameLevelConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_OCOLNCHHGFB_OFFSET))(this, a1);
		}

		::System::Void BCFOJFGPMJG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BCFOJFGPMJG_OFFSET))(this, a1);
		}

		::System::Void IJNJCDPPOEP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IJNJCDPPOEP_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* JJIOFPINBKD(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_JJIOFPINBKD_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* NDENOPIIGGG(::HIOEAKHGILF* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_NDENOPIIGGG_OFFSET))(this, a1);
		}

		::System::Void KJJLMBKDMKG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KJJLMBKDMKG_OFFSET))(this, a1);
		}

		::System::Void BAPMDLDPPHK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BAPMDLDPPHK_OFFSET))(this, a1);
		}

		::System::Void CKIPGDIODDK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CKIPGDIODDK_OFFSET))(this, a1);
		}

		::System::Void KJALIJMBLEP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KJALIJMBLEP_OFFSET))(this, a1);
		}

		::System::Void GLDEKGOHCON(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_GLDEKGOHCON_OFFSET))(this, a1, a2);
		}

		::System::Void ENCLIKIGAOL(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_ENCLIKIGAOL_OFFSET))(this, a1, a2);
		}

		::System::Void GOGHJLELOAE(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEntityPreset* a2, ::DBGGPBEKFNL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEntityPreset*, ::DBGGPBEKFNL*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_GOGHJLELOAE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AFPJNHKBCGI(::HIOEAKHGILF* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a2, ::RPG::GameCore::FiveDimPropMoveComponentConfig* a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::RPG::GameCore::FiveDimPropMoveComponentConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_AFPJNHKBCGI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CCEFHHJKLME(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CCEFHHJKLME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DMHDLHCACHA(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::RPG::GameCore::FiveDimPropSpawnerParam* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPropSpawnerParam*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_DMHDLHCACHA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void APLGKLIMENP(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam* a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimFloatingSpiritPropSpawnerParam*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_APLGKLIMENP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HOELCNEKKGK(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimDragonDogPropSpawnerParam*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_HOELCNEKKGK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::LittleGameEntityPreset* CJAPPJMPGMP(::RPG::GameCore::LittleGameEntityPreset* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::LittleGameEntityPreset*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityPreset*, ::System::String*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CJAPPJMPGMP_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* MOKFCBLELNA(::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_MOKFCBLELNA_OFFSET))(this, a1, a2);
		}

		static ::RPG::GameCore::FiveDimChestConfig* IMCLCBIODGN(::RPG::GameCore::FiveDimChestConfig* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::FiveDimChestConfig*(*)(::RPG::GameCore::FiveDimChestConfig*, ::System::String*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IMCLCBIODGN_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LittleGameCustomLoadConfig* INNNFOJJHHO(::RPG::GameCore::LittleGameCustomLoadConfig* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::LittleGameCustomLoadConfig*(*)(::RPG::GameCore::LittleGameCustomLoadConfig*, ::System::String*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_INNNFOJJHHO_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LittleGameDynamicVar* BMFLAPDAKGN(::System::String* a1)
		{
			return ((::RPG::GameCore::LittleGameDynamicVar*(*)(::System::String*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BMFLAPDAKGN_OFFSET))(a1);
		}

		static ::System::String* ECMKDLEOGIO(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_ECMKDLEOGIO_OFFSET))(a1);
		}

		::UnityEngine::Vector3 LELACAIEGKB(::HIOEAKHGILF* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_LELACAIEGKB_OFFSET))(this, a1);
		}

		::System::Boolean DOONNBIGBCN(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a1, ::UnityEngine::Bounds a2, ::UnityEngine::Bounds a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_DOONNBIGBCN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FiveDimViewBakedInfo* LDEPPMLDOHD_1(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>* a1)
		{
			return ((::RPG::GameCore::FiveDimViewBakedInfo*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::LittleGameComponentConfig*>*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_LDEPPMLDOHD_1_OFFSET))(this, a1);
		}

		::System::Void IAMNJHPDONJ(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimSplineMoveComponentConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimSplineMoveComponentConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IAMNJHPDONJ_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* DCFGFKAKDFI(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPropMoveConfig* a2, ::System::Boolean a3)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPropMoveConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_DCFGFKAKDFI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CHHHOKCOIKC(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimGravityWalkBoardConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimGravityWalkBoardConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CHHHOKCOIKC_OFFSET))(this, a1, a2);
		}

		::System::Void KIDCJANKGBF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_KIDCJANKGBF_OFFSET))(this, a1);
		}

		::System::Void NDAAEKHMHBD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_NDAAEKHMHBD_OFFSET))(this, a1);
		}

		::System::Void OCGBMKFFNKI(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_OCGBMKFFNKI_OFFSET))(this, a1);
		}

		::System::Void IPGBHEPGDMK(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimPipePortalConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimPipePortalConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IPGBHEPGDMK_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* AAMKKANNLHH(::System::String* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::String*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_AAMKKANNLHH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAIMBAANDPG(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimBaseCameraConfig* a2, ::RPG::GameCore::FiveDimCameraPriority a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimBaseCameraConfig*, ::RPG::GameCore::FiveDimCameraPriority))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_JAIMBAANDPG_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean FIDFNNEBBDD(::RPG::GameCore::FiveDimBaseCameraConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FiveDimBaseCameraConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_FIDFNNEBBDD_OFFSET))(this, a1);
		}

		::System::Void LDNKDLABFBD(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_LDNKDLABFBD_OFFSET))(this, a1, a2);
		}

		::System::Void EFKFPGOBAFP(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimTriggerEventEmitterListConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_EFKFPGOBAFP_OFFSET))(this, a1, a2);
		}

		::System::Void DBBPLFNNDPN(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimEventReceiverConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimEventReceiverConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_DBBPLFNNDPN_OFFSET))(this, a1, a2);
		}

		::System::Void LMHDBFMFHAB(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimAnimatorStateListenerConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_LMHDBFMFHAB_OFFSET))(this, a1, a2);
		}

		::System::Void BHGANHAEPDD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_BHGANHAEPDD_OFFSET))(this, a1);
		}

		::System::Void CPCPDNKNGMI(::HIOEAKHGILF* a1, ::RPG::GameCore::FiveDimWaterReflectionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::FiveDimWaterReflectionConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_CPCPDNKNGMI_OFFSET))(this, a1, a2);
		}

		static ::System::String* IKAKJHHEANN(::System::String* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::System::String*(*)(::System::String*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IKAKJHHEANN_OFFSET))(a1, a2);
		}

		static ::System::String* IKAKJHHEANN_1(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + NFFPKHMKOBJ_IKAKJHHEANN_1_OFFSET))(a1, a2);
		}

	};
