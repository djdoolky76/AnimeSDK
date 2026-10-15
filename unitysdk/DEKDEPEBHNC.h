#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEKDEPEBHNC_GetSkillByTagType.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicFloatInjection.h"
#include "unitysdk/RPG/GameCore/AbilityDynamicStringInjection.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/InsertActionType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"
class DEKDEPEBHNC;
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnInsertActionUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEKDEPEBHNC_ABNMGDONIPG_OFFSET UNITYSDK_OFFSET(0xE512EC0)
#define DEKDEPEBHNC_AKLOPAAILPM_OFFSET UNITYSDK_OFFSET(0xE514170)
#define DEKDEPEBHNC_AOFOFOMIMOB_OFFSET UNITYSDK_OFFSET(0xE512B30)
#define DEKDEPEBHNC_BKHMGKEKDKE_OFFSET UNITYSDK_OFFSET(0xE513C80)
#define DEKDEPEBHNC_BOCJGGDLBON_OFFSET UNITYSDK_OFFSET(0xE513BE0)
#define DEKDEPEBHNC_CHBKJHEJOBE_OFFSET UNITYSDK_OFFSET(0xE512610)
#define DEKDEPEBHNC_COILJENEMEK_OFFSET UNITYSDK_OFFSET(0xE513A60)
#define DEKDEPEBHNC_CPOAGNMIBCJ_OFFSET UNITYSDK_OFFSET(0xE5123C0)
#define DEKDEPEBHNC_CTOR_OFFSET UNITYSDK_OFFSET(0xE513F20)
#define DEKDEPEBHNC_DEDCJHBBADG_OFFSET UNITYSDK_OFFSET(0xE5129B0)
#define DEKDEPEBHNC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE512100)
#define DEKDEPEBHNC_DPHBBMGAJOK_OFFSET UNITYSDK_OFFSET(0xE5134D0)
#define DEKDEPEBHNC_FJAAHPLDOJB_OFFSET UNITYSDK_OFFSET(0xE511EA0)
#define DEKDEPEBHNC_GET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xE512790)
#define DEKDEPEBHNC_GET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xE512770)
#define DEKDEPEBHNC_GET_IGNOREASSISTENERGYCOST_OFFSET UNITYSDK_OFFSET(0xE513BA0)
#define DEKDEPEBHNC_GET_ISASSISTSKILL_OFFSET UNITYSDK_OFFSET(0xE513B80)
#define DEKDEPEBHNC_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xE5120E0)
#define DEKDEPEBHNC_GET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xE5139B0)
#define DEKDEPEBHNC_GET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0xE513BC0)
#define DEKDEPEBHNC_GET_UICONFIG_OFFSET UNITYSDK_OFFSET(0xE5139D0)
#define DEKDEPEBHNC_GFCOIAHCBCP_OFFSET UNITYSDK_OFFSET(0xE513D40)
#define DEKDEPEBHNC_GMJHFIMKMKE_OFFSET UNITYSDK_OFFSET(0xE512920)
#define DEKDEPEBHNC_HAGEGFMLMGE_OFFSET UNITYSDK_OFFSET(0xE512570)
#define DEKDEPEBHNC_HECCKKKHKBN_OFFSET UNITYSDK_OFFSET(0xE512470)
#define DEKDEPEBHNC_JBMGABJHHDJ_OFFSET UNITYSDK_OFFSET(0xE513DE0)
#define DEKDEPEBHNC_JDAPABABBKN_OFFSET UNITYSDK_OFFSET(0xE513770)
#define DEKDEPEBHNC_JKLJGIHIKOL_OFFSET UNITYSDK_OFFSET(0xE5131B0)
#define DEKDEPEBHNC_KGAFHLGGNHJ_OFFSET UNITYSDK_OFFSET(0xE514050)
#define DEKDEPEBHNC_KJBLMNEEOCJ_OFFSET UNITYSDK_OFFSET(0xE513220)
#define DEKDEPEBHNC_KNGJFHKOLEO_OFFSET UNITYSDK_OFFSET(0xE511E40)
#define DEKDEPEBHNC_KNJKGFLMEDI_OFFSET UNITYSDK_OFFSET(0xE513AC0)
#define DEKDEPEBHNC_LKMNFMEEFEJ_OFFSET UNITYSDK_OFFSET(0xE514270)
#define DEKDEPEBHNC_LPBEKGCLDFC_OFFSET UNITYSDK_OFFSET(0xE512A10)
#define DEKDEPEBHNC_LPMCMFFDLGH_OFFSET UNITYSDK_OFFSET(0xE512820)
#define DEKDEPEBHNC_MDDJIHFBBLK_OFFSET UNITYSDK_OFFSET(0xE5139F0)
#define DEKDEPEBHNC_NEMAHOCMMGA_OFFSET UNITYSDK_OFFSET(0xE5136D0)
#define DEKDEPEBHNC_NLLPCNJJCDE_OFFSET UNITYSDK_OFFSET(0xE5128D0)
#define DEKDEPEBHNC_OFOCDJDLKJP_OFFSET UNITYSDK_OFFSET(0xE5128C0)
#define DEKDEPEBHNC_PNLDEHPAIOO_OFFSET UNITYSDK_OFFSET(0xE5127B0)
#define DEKDEPEBHNC_PPDODBOEEOM_OFFSET UNITYSDK_OFFSET(0xE512BD0)
#define DEKDEPEBHNC_SET_DYNAMICSTRINGS_OFFSET UNITYSDK_OFFSET(0xE5127A0)
#define DEKDEPEBHNC_SET_DYNAMICVALUES_OFFSET UNITYSDK_OFFSET(0xE512780)
#define DEKDEPEBHNC_SET_IGNOREASSISTENERGYCOST_OFFSET UNITYSDK_OFFSET(0xE513BB0)
#define DEKDEPEBHNC_SET_ISASSISTSKILL_OFFSET UNITYSDK_OFFSET(0xE513B90)
#define DEKDEPEBHNC_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0xE5120F0)
#define DEKDEPEBHNC_SET_ISSILENCE_OFFSET UNITYSDK_OFFSET(0xE5139C0)
#define DEKDEPEBHNC_SET_OVERRIDEELATIONPOINT_OFFSET UNITYSDK_OFFSET(0xE513BD0)
#define DEKDEPEBHNC_SET_UICONFIG_OFFSET UNITYSDK_OFFSET(0xE5139E0)

inline static constexpr unsigned int DEKDEPEBHNC_TypeDefinitionIndex = 56229;

	class DEKDEPEBHNC : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* COBOHFLFEMI; // 0x10
		::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x18
		::RPG::GameCore::TurnInsertActionUIConfig* _UIConfig_k__BackingField; // 0x20
		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* _DynamicValues_k__BackingField; // 0x28
		::System::String* BCKBHPNAMKJ; // 0x30
		::KFELGAIGHAP* BEEAIJDOAAA; // 0x38
		::RPG::GameCore::JsonEnum* IOAMLPELAOA; // 0x40
		::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* HACPIPNNFGJ; // 0x48
		::RPG::GameCore::GameEntity* MIAJNJNECOG; // 0x50
		::GELIALJDFBL* OBFDONOPIEE; // 0x58
		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* _DynamicStrings_k__BackingField; // 0x60
		::Il2CppArray<::System::String*>* PJGLPMGOLPK; // 0x68
		::RPG::GameCore::GameEntity* CKKCCHDAKFC; // 0x70
		::RPG::GameCore::SkillData* JNIIOPDOJLG; // 0x78
		::System::String* LCIJHGBJDGK; // 0x80
		::RPG::GameCore::BoolEx CBGBCMLJDEM; // 0x88
		::System::Boolean KANPLAPEDHM; // 0x8C
		::System::Boolean CNBELANOFKP; // 0x8D
		::System::Boolean PCDINPEGBIL; // 0x8E
		::System::Boolean KHADFIMEIHC; // 0x8F
		::System::Boolean _IsAssistSkill_k__BackingField; // 0x90
		::System::Boolean JDJOOOOANKL; // 0x91
		::System::Boolean ADGJOMOGKJI; // 0x92
		::System::Boolean _IsSilence_k__BackingField; // 0x93
		::DEKDEPEBHNC_GetSkillByTagType JHLGIHOECLB; // 0x94
		::System::Int32 IKDHBIGOPCJ; // 0x98
		::RPG::GameCore::TurnState EHLFPNOBDHO; // 0x9C
		::System::Int32 AGDHGODFHAN; // 0xA0
		::RPG::GameCore::InsertActionType EOFPHIPDLHB; // 0xA4
		::System::Int32 NALMBOOCCIN; // 0xA8
		::RPG::GameCore::ControlSkillType KBKCFAJKBBA; // 0xAC
		::RPG::GameCore::ControlSkillType ODPKFPOJEEL; // 0xB0
		::System::Boolean JEKMHGMNELB; // 0xB4
		::System::Boolean JNGGFOGHJLG; // 0xB5
		::System::Boolean HALEDPBPGBK; // 0xB6
		::System::Boolean BJNADCAFFKC; // 0xB7
		::System::Int32 GBFHFCCAAJB; // 0xB8
		::System::Int32 OOODLFAEFDI; // 0xBC
		::System::Boolean IFAHIIPOEMM; // 0xC0
		::System::Boolean BAPOPGAEDCO; // 0xC1
		::System::Boolean IGMHDHIKJIP; // 0xC2
		::System::Boolean LGKDFBLIOBP; // 0xC3
		::System::Boolean OJOMABNPKJC; // 0xC4
		::System::Boolean OPKADIKKNMC; // 0xC5
		::System::Boolean _IsDisposed_k__BackingField; // 0xC6
		::System::Boolean _IgnoreAssistEnergyCost_k__BackingField; // 0xC7
		::RPG::GameCore::FixPoint _OverrideElationPoint_k__BackingField; // 0xC8
		::System::Void _ctor(::RPG::GameCore::InsertActionType a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::ControlSkillType a3, ::System::Int32 a4, ::System::String* a5, ::System::Int32 a6, ::System::Boolean a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::System::Boolean a10)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::InsertActionType, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ControlSkillType, ::System::Int32, ::System::String*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Int32 KNGJFHKOLEO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_KNGJFHKOLEO_OFFSET))(this);
		}

		::System::Boolean get_IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_IsDisposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_ISDISPOSED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::ControlSkillType CPOAGNMIBCJ()
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_CPOAGNMIBCJ_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* HECCKKKHKBN()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_HECCKKKHKBN_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* CHBKJHEJOBE()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_CHBKJHEJOBE_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* HAGEGFMLMGE()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_HAGEGFMLMGE_OFFSET))(this);
		}

		::RPG::GameCore::SkillData* FJAAHPLDOJB()
		{
			return ((::RPG::GameCore::SkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_FJAAHPLDOJB_OFFSET))(this);
		}

		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* get_DynamicValues()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_DYNAMICVALUES_OFFSET))(this);
		}

		::System::Void set_DynamicValues(::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicFloatInjection>*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_DYNAMICVALUES_OFFSET))(this, a1);
		}

		::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* get_DynamicStrings()
		{
			return ((::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_DYNAMICSTRINGS_OFFSET))(this);
		}

		::System::Void set_DynamicStrings(::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::RPG::GameCore::AbilityDynamicStringInjection>*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_DYNAMICSTRINGS_OFFSET))(this, a1);
		}

		::System::Boolean PNLDEHPAIOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_PNLDEHPAIOO_OFFSET))(this);
		}

		::System::Boolean LPMCMFFDLGH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_LPMCMFFDLGH_OFFSET))(this);
		}

		::RPG::GameCore::ControlSkillType OFOCDJDLKJP()
		{
			return ((::RPG::GameCore::ControlSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_OFOCDJDLKJP_OFFSET))(this);
		}

		::System::Void NLLPCNJJCDE(::RPG::GameCore::ControlSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_NLLPCNJJCDE_OFFSET))(this, a1);
		}

		::System::Boolean GMJHFIMKMKE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GMJHFIMKMKE_OFFSET))(this);
		}

		::System::Void DEDCJHBBADG(::RPG::GameCore::ControlSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_DEDCJHBBADG_OFFSET))(this, a1);
		}

		::System::Void LPBEKGCLDFC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_LPBEKGCLDFC_OFFSET))(this, a1);
		}

		::System::Void AOFOFOMIMOB(::RPG::GameCore::JsonEnum* a1, ::DEKDEPEBHNC_GetSkillByTagType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::DEKDEPEBHNC_GetSkillByTagType))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_AOFOFOMIMOB_OFFSET))(this, a1, a2);
		}

		::System::Void PPDODBOEEOM(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_PPDODBOEEOM_OFFSET))(this, a1, a2);
		}

		::System::Void ABNMGDONIPG(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_ABNMGDONIPG_OFFSET))(this, a1, a2);
		}

		::System::Void JKLJGIHIKOL(::RPG::GameCore::ControlSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ControlSkillType))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_JKLJGIHIKOL_OFFSET))(this, a1);
		}

		::System::Void KJBLMNEEOCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_KJBLMNEEOCJ_OFFSET))(this);
		}

		::System::Void DPHBBMGAJOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_DPHBBMGAJOK_OFFSET))(this);
		}

		::System::Void NEMAHOCMMGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_NEMAHOCMMGA_OFFSET))(this);
		}

		::System::Boolean JDAPABABBKN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_JDAPABABBKN_OFFSET))(this);
		}

		::System::Boolean get_IsSilence()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_ISSILENCE_OFFSET))(this);
		}

		::System::Void set_IsSilence(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_ISSILENCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnInsertActionUIConfig* get_UIConfig()
		{
			return ((::RPG::GameCore::TurnInsertActionUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_UICONFIG_OFFSET))(this);
		}

		::System::Void set_UIConfig(::RPG::GameCore::TurnInsertActionUIConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnInsertActionUIConfig*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_UICONFIG_OFFSET))(this, a1);
		}

		::System::Boolean MDDJIHFBBLK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_MDDJIHFBBLK_OFFSET))(this);
		}

		::RPG::GameCore::ActionBarUIConfig* COILJENEMEK()
		{
			return ((::RPG::GameCore::ActionBarUIConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_COILJENEMEK_OFFSET))(this);
		}

		::System::Boolean KNJKGFLMEDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_KNJKGFLMEDI_OFFSET))(this);
		}

		::System::Boolean get_IsAssistSkill()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_ISASSISTSKILL_OFFSET))(this);
		}

		::System::Void set_IsAssistSkill(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_ISASSISTSKILL_OFFSET))(this, a1);
		}

		::System::Boolean get_IgnoreAssistEnergyCost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_IGNOREASSISTENERGYCOST_OFFSET))(this);
		}

		::System::Void set_IgnoreAssistEnergyCost(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_IGNOREASSISTENERGYCOST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_OverrideElationPoint()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GET_OVERRIDEELATIONPOINT_OFFSET))(this);
		}

		::System::Void set_OverrideElationPoint(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_SET_OVERRIDEELATIONPOINT_OFFSET))(this, a1);
		}

		::System::Boolean BOCJGGDLBON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_BOCJGGDLBON_OFFSET))(this);
		}

		::System::Boolean BKHMGKEKDKE(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_BKHMGKEKDKE_OFFSET))(this, a1);
		}

		::System::Boolean GFCOIAHCBCP(::Il2CppArray<::System::String*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_GFCOIAHCBCP_OFFSET))(this, a1);
		}

		::System::Boolean JBMGABJHHDJ(::DEKDEPEBHNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_JBMGABJHHDJ_OFFSET))(this, a1);
		}

		::System::Int32 KGAFHLGGNHJ(::DEKDEPEBHNC* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DEKDEPEBHNC*))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_KGAFHLGGNHJ_OFFSET))(this, a1);
		}

		::System::Void AKLOPAAILPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_AKLOPAAILPM_OFFSET))(this);
		}

		::System::Void LKMNFMEEFEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEKDEPEBHNC_LKMNFMEEFEJ_OFFSET))(this);
		}

	};
