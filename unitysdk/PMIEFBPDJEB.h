#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class AMIKGNNLMNJ;
class BPKPCOFKFLC;
class CIIKBJFOKHL;
class GNMHCHNDJON;
class LMFOOOLDECA;
namespace RPG::GameCore { class BaseChenLingBattleAbilityConditionChecker; }
namespace RPG::GameCore { class ChenLingAbilityConfig; }
namespace System { class String; }

#define PMIEFBPDJEB_CEDHDEKHHFD_OFFSET UNITYSDK_OFFSET(0x188A5730)
#define PMIEFBPDJEB_CLEAR_OFFSET UNITYSDK_OFFSET(0x188A4AF0)
#define PMIEFBPDJEB_CTOR_OFFSET UNITYSDK_OFFSET(0x188A4AE0)
#define PMIEFBPDJEB_EHGAFNFCBNC_OFFSET UNITYSDK_OFFSET(0x188A5020)
#define PMIEFBPDJEB_GBOECLMFGGE_OFFSET UNITYSDK_OFFSET(0x188A5460)
#define PMIEFBPDJEB_GET_ABILITY_OFFSET UNITYSDK_OFFSET(0x188A56D0)
#define PMIEFBPDJEB_GET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x188A56F0)
#define PMIEFBPDJEB_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x188A5750)
#define PMIEFBPDJEB_GET_CURRENTCDTIME_OFFSET UNITYSDK_OFFSET(0x188A5770)
#define PMIEFBPDJEB_GET_ISCASTBEFORE_OFFSET UNITYSDK_OFFSET(0x188A57B0)
#define PMIEFBPDJEB_GET_ISRELEASEDONLYONCE_OFFSET UNITYSDK_OFFSET(0x188A5790)
#define PMIEFBPDJEB_GET_SKILLUID_OFFSET UNITYSDK_OFFSET(0x188A5710)
#define PMIEFBPDJEB_JBHACGCBKEJ_OFFSET UNITYSDK_OFFSET(0x188A4E00)
#define PMIEFBPDJEB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x188A55B0)
#define PMIEFBPDJEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x188A4C00)
#define PMIEFBPDJEB_MICLOLFLMLE_OFFSET UNITYSDK_OFFSET(0x188A4E60)
#define PMIEFBPDJEB_NBHHLHEGBGA_OFFSET UNITYSDK_OFFSET(0x188A4FC0)
#define PMIEFBPDJEB_OPHNBFMFCHM_OFFSET UNITYSDK_OFFSET(0x188A5150)
#define PMIEFBPDJEB_PEJNEMNFHHK_OFFSET UNITYSDK_OFFSET(0x188A50F0)
#define PMIEFBPDJEB_SET_ABILITY_OFFSET UNITYSDK_OFFSET(0x188A56E0)
#define PMIEFBPDJEB_SET_CONDITIONCONFIG_OFFSET UNITYSDK_OFFSET(0x188A5700)
#define PMIEFBPDJEB_SET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x188A5760)
#define PMIEFBPDJEB_SET_CURRENTCDTIME_OFFSET UNITYSDK_OFFSET(0x188A5780)
#define PMIEFBPDJEB_SET_ISCASTBEFORE_OFFSET UNITYSDK_OFFSET(0x188A57C0)
#define PMIEFBPDJEB_SET_ISRELEASEDONLYONCE_OFFSET UNITYSDK_OFFSET(0x188A57A0)
#define PMIEFBPDJEB_SET_SKILLUID_OFFSET UNITYSDK_OFFSET(0x188A5720)

inline static constexpr unsigned int PMIEFBPDJEB_TypeDefinitionIndex = 80601;

	class PMIEFBPDJEB : public ::System::Object
	{
	public:
		::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* _ConditionConfig_k__BackingField; // 0x10
		::GNMHCHNDJON* PGPNHINPDBF; // 0x18
		::CIIKBJFOKHL* _Context_k__BackingField; // 0x20
		::AMIKGNNLMNJ* CBPLMLPCCGB; // 0x28
		::BPKPCOFKFLC* _Ability_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _CurrentCDTime_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint MCPHHDMBKEJ; // 0x40
		::System::Int32 _SkillUID_k__BackingField; // 0x48
		::System::Boolean _IsCastBefore_k__BackingField; // 0x4C
		::System::Boolean _IsReleasedOnlyOnce_k__BackingField; // 0x4D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::CIIKBJFOKHL* a1, ::RPG::GameCore::ChenLingAbilityConfig* a2, ::LMFOOOLDECA* a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::CIIKBJFOKHL*, ::RPG::GameCore::ChenLingAbilityConfig*, ::LMFOOOLDECA*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean JBHACGCBKEJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_JBHACGCBKEJ_OFFSET))(this);
		}

		::System::Boolean MICLOLFLMLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_MICLOLFLMLE_OFFSET))(this);
		}

		::System::Boolean PEJNEMNFHHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_PEJNEMNFHHK_OFFSET))(this);
		}

		::System::Void OPHNBFMFCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_OPHNBFMFCHM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::BPKPCOFKFLC* get_Ability()
		{
			return ((::BPKPCOFKFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GET_ABILITY_OFFSET))(this);
		}

		::System::Void set_Ability(::BPKPCOFKFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPKPCOFKFLC*))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_SET_ABILITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* get_ConditionConfig()
		{
			return ((::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GET_CONDITIONCONFIG_OFFSET))(this);
		}

		::System::Void set_ConditionConfig(::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityConditionChecker*))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_SET_CONDITIONCONFIG_OFFSET))(this, a1);
		}

		::System::Int32 get_SkillUID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GET_SKILLUID_OFFSET))(this);
		}

		::System::Void set_SkillUID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_SET_SKILLUID_OFFSET))(this, a1);
		}

		::System::UInt32 CEDHDEKHHFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_CEDHDEKHHFD_OFFSET))(this);
		}

		::CIIKBJFOKHL* get_Context()
		{
			return ((::CIIKBJFOKHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void set_Context(::CIIKBJFOKHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_SET_CONTEXT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurrentCDTime()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GET_CURRENTCDTIME_OFFSET))(this);
		}

		::System::Void set_CurrentCDTime(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_SET_CURRENTCDTIME_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint EHGAFNFCBNC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_EHGAFNFCBNC_OFFSET))(this);
		}

		::ALMFLCJCHKP* GBOECLMFGGE()
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GBOECLMFGGE_OFFSET))(this);
		}

		::System::Boolean get_IsReleasedOnlyOnce()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GET_ISRELEASEDONLYONCE_OFFSET))(this);
		}

		::System::Void set_IsReleasedOnlyOnce(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_SET_ISRELEASEDONLYONCE_OFFSET))(this, a1);
		}

		::System::Boolean NBHHLHEGBGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_NBHHLHEGBGA_OFFSET))(this);
		}

		::System::Boolean get_IsCastBefore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_GET_ISCASTBEFORE_OFFSET))(this);
		}

		::System::Void set_IsCastBefore(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PMIEFBPDJEB_SET_ISCASTBEFORE_OFFSET))(this, a1);
		}

	};
