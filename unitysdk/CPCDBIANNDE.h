#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CPCDBIANNDE_CPOBNFFHBDC_OFFSET UNITYSDK_OFFSET(0xE61BFA0)
#define CPCDBIANNDE_CTOR_OFFSET UNITYSDK_OFFSET(0xE61B7F0)
#define CPCDBIANNDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE61B990)
#define CPCDBIANNDE_GET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0xE61C110)
#define CPCDBIANNDE_GET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xE61C130)
#define CPCDBIANNDE_GET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0xE61C150)
#define CPCDBIANNDE_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xE61C170)
#define CPCDBIANNDE_IOBHCBCHBLF_OFFSET UNITYSDK_OFFSET(0xE61B870)
#define CPCDBIANNDE_JFOFGJCINFA_OFFSET UNITYSDK_OFFSET(0xE61BD80)
#define CPCDBIANNDE_KDNJFMDOPLG_OFFSET UNITYSDK_OFFSET(0xE61BBE0)
#define CPCDBIANNDE_LNIHJMLMDLA_OFFSET UNITYSDK_OFFSET(0xE61BC60)
#define CPCDBIANNDE_MOEKLEAHGCG_OFFSET UNITYSDK_OFFSET(0xE61B9E0)
#define CPCDBIANNDE_NOPGJBNMMGO_OFFSET UNITYSDK_OFFSET(0xE61C0F0)
#define CPCDBIANNDE_SET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0xE61C120)
#define CPCDBIANNDE_SET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xE61C140)
#define CPCDBIANNDE_SET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0xE61C160)
#define CPCDBIANNDE_SET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xE61C180)

inline static constexpr unsigned int CPCDBIANNDE_TypeDefinitionIndex = 55607;

	class CPCDBIANNDE : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* _Modifier_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _MaxShield_k__BackingField; // 0x18
		::RPG::GameCore::StringHash ODLJJBJAFIO; // 0x20
		::RPG::GameCore::StringHash KFMCGMHIKAP; // 0x24
		::RPG::GameCore::FixPoint _MaxStack_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _CurShield_k__BackingField; // 0x30
		::System::Void _ctor(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CPCDBIANNDE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCDBIANNDE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MOEKLEAHGCG(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_MOEKLEAHGCG_OFFSET))(this, a1);
		}

		::System::Boolean JFOFGJCINFA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_JFOFGJCINFA_OFFSET))(this, a1);
		}

		::System::Void CPOBNFFHBDC(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_CPOBNFFHBDC_OFFSET))(this, a1);
		}

		::System::Void IOBHCBCHBLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCDBIANNDE_IOBHCBCHBLF_OFFSET))(this);
		}

		::System::Void LNIHJMLMDLA(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_LNIHJMLMDLA_OFFSET))(this, a1);
		}

		::System::Void KDNJFMDOPLG(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_KDNJFMDOPLG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCDBIANNDE_GET_CURSHIELD_OFFSET))(this);
		}

		::System::Void set_CurShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_SET_CURSHIELD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCDBIANNDE_GET_MAXSHIELD_OFFSET))(this);
		}

		::System::Void set_MaxShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_SET_MAXSHIELD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxStack()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCDBIANNDE_GET_MAXSTACK_OFFSET))(this);
		}

		::System::Void set_MaxStack(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CPCDBIANNDE_SET_MAXSTACK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TurnBasedModifierInstance* get_Modifier()
		{
			return ((::RPG::GameCore::TurnBasedModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCDBIANNDE_GET_MODIFIER_OFFSET))(this);
		}

		::System::Void set_Modifier(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CPCDBIANNDE_SET_MODIFIER_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI* NOPGJBNMMGO()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCDBIANNDE_NOPGJBNMMGO_OFFSET))(this);
		}

	};
