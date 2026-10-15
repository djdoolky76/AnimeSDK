#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/TrashSummonPeriodState.h"
#include "unitysdk/IGKFNIEJGLM.h"
class PKKFCCHPDEL;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SetTrashSummonHUDState; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define FKDOJIKMFLG_AGIJFEPDKMM_1_OFFSET UNITYSDK_OFFSET(0x157ECF60)
#define FKDOJIKMFLG_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x157ECDA0)
#define FKDOJIKMFLG_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x157ED1B0)
#define FKDOJIKMFLG_AOODHACBLAB_OFFSET UNITYSDK_OFFSET(0x157EC890)
#define FKDOJIKMFLG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x157EE0C0)
#define FKDOJIKMFLG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x157EE410)
#define FKDOJIKMFLG_BAKGPPDHHGA_OFFSET UNITYSDK_OFFSET(0x157ED0C0)
#define FKDOJIKMFLG_BGAOLEIIFPF_OFFSET UNITYSDK_OFFSET(0x157ECC60)
#define FKDOJIKMFLG_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x157EC7D0)
#define FKDOJIKMFLG_CBKENKHAJJC_OFFSET UNITYSDK_OFFSET(0x157EDC80)
#define FKDOJIKMFLG_CTOR_OFFSET UNITYSDK_OFFSET(0x157EE730)
#define FKDOJIKMFLG_DCEPIJAHFLO_OFFSET UNITYSDK_OFFSET(0x157ECB90)
#define FKDOJIKMFLG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x157EC090)
#define FKDOJIKMFLG_DJKOOKBHCOE_OFFSET UNITYSDK_OFFSET(0x157EC950)
#define FKDOJIKMFLG_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x157EC0F0)
#define FKDOJIKMFLG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x157EC350)
#define FKDOJIKMFLG_FEHOPJLGLOB_OFFSET UNITYSDK_OFFSET(0x157EDF40)
#define FKDOJIKMFLG_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x157EC710)
#define FKDOJIKMFLG_GDNKPFDOFEA_OFFSET UNITYSDK_OFFSET(0x157EDA00)
#define FKDOJIKMFLG_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x157ED620)
#define FKDOJIKMFLG_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x157ED220)
#define FKDOJIKMFLG_HDHBKAOAOOH_OFFSET UNITYSDK_OFFSET(0x157EC590)
#define FKDOJIKMFLG_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x157ED640)
#define FKDOJIKMFLG_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0x157ED5B0)
#define FKDOJIKMFLG_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0x157ECAD0)
#define FKDOJIKMFLG_IKLPNHHGMNG_OFFSET UNITYSDK_OFFSET(0x157ED8C0)
#define FKDOJIKMFLG_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x157EDB40)
#define FKDOJIKMFLG_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x157EDE80)
#define FKDOJIKMFLG_KFIECBFDHJL_OFFSET UNITYSDK_OFFSET(0x157ED780)
#define FKDOJIKMFLG_KOBMGNDBFJD_OFFSET UNITYSDK_OFFSET(0x157ED490)
#define FKDOJIKMFLG_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x157ED4D0)
#define FKDOJIKMFLG_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x157EC4A0)
#define FKDOJIKMFLG_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0x157EE000)
#define FKDOJIKMFLG_NEOPCPKMFKK_OFFSET UNITYSDK_OFFSET(0x157EC410)
#define FKDOJIKMFLG_OJBIALMLCCO_OFFSET UNITYSDK_OFFSET(0x157EDDC0)
#define FKDOJIKMFLG_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x157ECA10)
#define FKDOJIKMFLG_PBNCLIOGPLD_OFFSET UNITYSDK_OFFSET(0x157ECF00)
#define FKDOJIKMFLG_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x157ED630)
#define FKDOJIKMFLG__ONBIND_OFFSET UNITYSDK_OFFSET(0x157EBD60)
#define FKDOJIKMFLG___ONBINDHANDLERS_B__6_1_OFFSET UNITYSDK_OFFSET(0x157EE790)

inline static constexpr unsigned int FKDOJIKMFLG_TypeDefinitionIndex = 72351;

	class FKDOJIKMFLG : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::PKKFCCHPDEL*>* CHFBMOMHNJM; // 0x60
		::UnityEngine::Animator* CFNGLMDMENE; // 0x68
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x70
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x78
		::System::Boolean IHHFAHFPBCA; // 0x80
		::System::Boolean APAFFLMAEPB; // 0x81
		::System::Byte _padding0[0x2];
		::System::Int32 JBCBNGCPAKP; // 0x84
		::System::Int32 EJNMGLJJEOO; // 0x88
		::System::Int32 BFLNNOEKIGE; // 0x8C
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* GBEDBOHHMNM; // 0x0
		// static const ::System::String* IFHDBAAMMMC; // 0x0
		// static const ::System::String* DBCFNHCBJIB; // 0x0
		// static const ::System::String* JHHFJDBOCDC; // 0x0
		// static const ::System::String* BLJHNBGFEAI; // 0x0
		// static const ::System::String* OLELGPGPCLJ; // 0x0
		// static const ::System::String* IGAKBNKNHDD; // 0x0
		// static const ::System::String* PJECKCJGCFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void GCODCEFGANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_GCODCEFGANN_OFFSET))(this);
		}

		::System::Void BHBCLBBOPFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_BHBCLBBOPFL_OFFSET))(this);
		}

		::System::Void AOODHACBLAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_AOODHACBLAB_OFFSET))(this);
		}

		::System::Void DJKOOKBHCOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_DJKOOKBHCOE_OFFSET))(this);
		}

		::System::Void OPOCPDBMELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_OPOCPDBMELE_OFFSET))(this);
		}

		::System::Void IJFNEODDFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_IJFNEODDFMN_OFFSET))(this);
		}

		::System::Void DCEPIJAHFLO(::RPG::GameCore::SetTrashSummonHUDState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SetTrashSummonHUDState*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_DCEPIJAHFLO_OFFSET))(this, a1);
		}

		::System::Void BGAOLEIIFPF(::RPG::GameCore::TrashSummonPeriodState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrashSummonPeriodState))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_BGAOLEIIFPF_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM_1(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_AGIJFEPDKMM_1_OFFSET))(this, a1);
		}

		::System::Void PBNCLIOGPLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_PBNCLIOGPLD_OFFSET))(this);
		}

		::System::Void NEOPCPKMFKK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_NEOPCPKMFKK_OFFSET))(this, a1);
		}

		::System::Void HDHBKAOAOOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_HDHBKAOAOOH_OFFSET))(this);
		}

		::System::Boolean BAKGPPDHHGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_BAKGPPDHHGA_OFFSET))(this);
		}

		::System::Void MIIHAJHPKAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_MIIHAJHPKAF_OFFSET))(this);
		}

		::System::Void KOBMGNDBFJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_KOBMGNDBFJD_OFFSET))(this);
		}

		::RPG::GameCore::AvatarEnergyBarState* AHMLHFNPFGJ()
		{
			return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_AHMLHFNPFGJ_OFFSET))(this);
		}

		::System::Void LEHJAPMONNN(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_LEHJAPMONNN_OFFSET))(this, a1);
		}

		::System::Void GGAHGOJJBIP(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void IGPJHNAIBKO(::RPG::GameCore::AvatarEnergyBarState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_IGPJHNAIBKO_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_GET_ENTITY_OFFSET))(this);
		}

		::System::Void set_Entity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_SET_ENTITY_OFFSET))(this, a1);
		}

		::System::Void HGMJKNEAANO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_HGMJKNEAANO_OFFSET))(this, a1);
		}

		::System::Void KFIECBFDHJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_KFIECBFDHJL_OFFSET))(this, a1);
		}

		::System::Void IKLPNHHGMNG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_IKLPNHHGMNG_OFFSET))(this, a1);
		}

		::System::Void GDNKPFDOFEA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_GDNKPFDOFEA_OFFSET))(this, a1);
		}

		::System::Void JFEILMNOCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_JFEILMNOCMK_OFFSET))(this, a1);
		}

		::System::Void CBKENKHAJJC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_CBKENKHAJJC_OFFSET))(this, a1);
		}

		::System::Void OJBIALMLCCO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_OJBIALMLCCO_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void FEHOPJLGLOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_FEHOPJLGLOB_OFFSET))(this, a1);
		}

		::System::Void NEEFLPBIKMH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_NEEFLPBIKMH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __OnBindHandlers_b__6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKDOJIKMFLG___ONBINDHANDLERS_B__6_1_OFFSET))(this);
		}

	};
