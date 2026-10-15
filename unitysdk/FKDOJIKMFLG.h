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

#define FKDOJIKMFLG_AGIJFEPDKMM_1_OFFSET UNITYSDK_OFFSET(0x157E1310)
#define FKDOJIKMFLG_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x157E1150)
#define FKDOJIKMFLG_AHMLHFNPFGJ_OFFSET UNITYSDK_OFFSET(0x157E1560)
#define FKDOJIKMFLG_AOODHACBLAB_OFFSET UNITYSDK_OFFSET(0x157E0C40)
#define FKDOJIKMFLG_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x157E2470)
#define FKDOJIKMFLG_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x157E27C0)
#define FKDOJIKMFLG_BAKGPPDHHGA_OFFSET UNITYSDK_OFFSET(0x157E1470)
#define FKDOJIKMFLG_BGAOLEIIFPF_OFFSET UNITYSDK_OFFSET(0x157E1010)
#define FKDOJIKMFLG_BHBCLBBOPFL_OFFSET UNITYSDK_OFFSET(0x157E0B80)
#define FKDOJIKMFLG_CBKENKHAJJC_OFFSET UNITYSDK_OFFSET(0x157E2030)
#define FKDOJIKMFLG_CTOR_OFFSET UNITYSDK_OFFSET(0x157E2AE0)
#define FKDOJIKMFLG_DCEPIJAHFLO_OFFSET UNITYSDK_OFFSET(0x157E0F40)
#define FKDOJIKMFLG_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x157E0440)
#define FKDOJIKMFLG_DJKOOKBHCOE_OFFSET UNITYSDK_OFFSET(0x157E0D00)
#define FKDOJIKMFLG_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x157E04A0)
#define FKDOJIKMFLG_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x157E0700)
#define FKDOJIKMFLG_FEHOPJLGLOB_OFFSET UNITYSDK_OFFSET(0x157E22F0)
#define FKDOJIKMFLG_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x157E0AC0)
#define FKDOJIKMFLG_GDNKPFDOFEA_OFFSET UNITYSDK_OFFSET(0x157E1DB0)
#define FKDOJIKMFLG_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x157E19D0)
#define FKDOJIKMFLG_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x157E15D0)
#define FKDOJIKMFLG_HDHBKAOAOOH_OFFSET UNITYSDK_OFFSET(0x157E0940)
#define FKDOJIKMFLG_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x157E19F0)
#define FKDOJIKMFLG_IGPJHNAIBKO_OFFSET UNITYSDK_OFFSET(0x157E1960)
#define FKDOJIKMFLG_IJFNEODDFMN_OFFSET UNITYSDK_OFFSET(0x157E0E80)
#define FKDOJIKMFLG_IKLPNHHGMNG_OFFSET UNITYSDK_OFFSET(0x157E1C70)
#define FKDOJIKMFLG_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x157E1EF0)
#define FKDOJIKMFLG_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x157E2230)
#define FKDOJIKMFLG_KFIECBFDHJL_OFFSET UNITYSDK_OFFSET(0x157E1B30)
#define FKDOJIKMFLG_KOBMGNDBFJD_OFFSET UNITYSDK_OFFSET(0x157E1840)
#define FKDOJIKMFLG_LEHJAPMONNN_OFFSET UNITYSDK_OFFSET(0x157E1880)
#define FKDOJIKMFLG_MIIHAJHPKAF_OFFSET UNITYSDK_OFFSET(0x157E0850)
#define FKDOJIKMFLG_NEEFLPBIKMH_OFFSET UNITYSDK_OFFSET(0x157E23B0)
#define FKDOJIKMFLG_NEOPCPKMFKK_OFFSET UNITYSDK_OFFSET(0x157E07C0)
#define FKDOJIKMFLG_OJBIALMLCCO_OFFSET UNITYSDK_OFFSET(0x157E2170)
#define FKDOJIKMFLG_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x157E0DC0)
#define FKDOJIKMFLG_PBNCLIOGPLD_OFFSET UNITYSDK_OFFSET(0x157E12B0)
#define FKDOJIKMFLG_SET_ENTITY_OFFSET UNITYSDK_OFFSET(0x157E19E0)
#define FKDOJIKMFLG__ONBIND_OFFSET UNITYSDK_OFFSET(0x157E0110)
#define FKDOJIKMFLG___ONBINDHANDLERS_B__6_1_OFFSET UNITYSDK_OFFSET(0x157E2B40)

inline static constexpr unsigned int FKDOJIKMFLG_TypeDefinitionIndex = 72350;

	class FKDOJIKMFLG : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animator* CFNGLMDMENE; // 0x60
		::Il2CppArray<::PKKFCCHPDEL*>* CHFBMOMHNJM; // 0x68
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x70
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x78
		::System::Int32 JBCBNGCPAKP; // 0x80
		::System::Int32 EJNMGLJJEOO; // 0x84
		::System::Int32 BFLNNOEKIGE; // 0x88
		::System::Boolean IHHFAHFPBCA; // 0x8C
		::System::Boolean APAFFLMAEPB; // 0x8D
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
