#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI;
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CPCDBIANNDE_CPOBNFFHBDC_OFFSET UNITYSDK_OFFSET(0xDCC7C50)
#define CPCDBIANNDE_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC74A0)
#define CPCDBIANNDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCC7640)
#define CPCDBIANNDE_GET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0xDCC7DC0)
#define CPCDBIANNDE_GET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xDCC7DE0)
#define CPCDBIANNDE_GET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0xDCC7E00)
#define CPCDBIANNDE_GET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xDCC7E20)
#define CPCDBIANNDE_IOBHCBCHBLF_OFFSET UNITYSDK_OFFSET(0xDCC7520)
#define CPCDBIANNDE_JFOFGJCINFA_OFFSET UNITYSDK_OFFSET(0xDCC7A30)
#define CPCDBIANNDE_KDNJFMDOPLG_OFFSET UNITYSDK_OFFSET(0xDCC7890)
#define CPCDBIANNDE_LNIHJMLMDLA_OFFSET UNITYSDK_OFFSET(0xDCC7910)
#define CPCDBIANNDE_MOEKLEAHGCG_OFFSET UNITYSDK_OFFSET(0xDCC7690)
#define CPCDBIANNDE_NOPGJBNMMGO_OFFSET UNITYSDK_OFFSET(0xDCC7DA0)
#define CPCDBIANNDE_SET_CURSHIELD_OFFSET UNITYSDK_OFFSET(0xDCC7DD0)
#define CPCDBIANNDE_SET_MAXSHIELD_OFFSET UNITYSDK_OFFSET(0xDCC7DF0)
#define CPCDBIANNDE_SET_MAXSTACK_OFFSET UNITYSDK_OFFSET(0xDCC7E10)
#define CPCDBIANNDE_SET_MODIFIER_OFFSET UNITYSDK_OFFSET(0xDCC7E30)

inline static constexpr unsigned int CPCDBIANNDE_TypeDefinitionIndex = 54443;

	class CPCDBIANNDE : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* _Modifier_k__BackingField; // 0x10
		::RPG::GameCore::StringHash ODLJJBJAFIO; // 0x18
		::RPG::GameCore::StringHash KFMCGMHIKAP; // 0x1C
		::RPG::GameCore::FixPoint _CurShield_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _MaxShield_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _MaxStack_k__BackingField; // 0x30
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
