#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define DPKDLCLMJDI_GET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x1D40)
#define DPKDLCLMJDI_GET_ATTACKBASE_OFFSET UNITYSDK_OFFSET(0x1D30)
#define DPKDLCLMJDI_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x202EC90)
#define DPKDLCLMJDI_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x202EBF0)
#define DPKDLCLMJDI_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x202EC10)
#define DPKDLCLMJDI_GET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x94F0)
#define DPKDLCLMJDI_GET_DEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x94D0)
#define DPKDLCLMJDI_GET_HPADD_OFFSET UNITYSDK_OFFSET(0x2070)
#define DPKDLCLMJDI_GET_HPBASE_OFFSET UNITYSDK_OFFSET(0xAD00)
#define DPKDLCLMJDI_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x202ECB0)
#define DPKDLCLMJDI_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x202EC70)
#define DPKDLCLMJDI_GET_RANKATTACKADD_OFFSET UNITYSDK_OFFSET(0x202EB10)
#define DPKDLCLMJDI_GET_RANKATTACKBASE_OFFSET UNITYSDK_OFFSET(0x202EAF0)
#define DPKDLCLMJDI_GET_RANKCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x202EC30)
#define DPKDLCLMJDI_GET_RANKCRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x202EC50)
#define DPKDLCLMJDI_GET_RANKDEFENCEADD_OFFSET UNITYSDK_OFFSET(0x202EB50)
#define DPKDLCLMJDI_GET_RANKDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x202EB30)
#define DPKDLCLMJDI_GET_RANKHPADD_OFFSET UNITYSDK_OFFSET(0x202EB90)
#define DPKDLCLMJDI_GET_RANKHPBASE_OFFSET UNITYSDK_OFFSET(0x202EB70)
#define DPKDLCLMJDI_GET_RANKSPEEDADD_OFFSET UNITYSDK_OFFSET(0x202EBD0)
#define DPKDLCLMJDI_GET_RANKSPEEDBASE_OFFSET UNITYSDK_OFFSET(0x202EBB0)
#define DPKDLCLMJDI_GET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0x202ECD0)
#define DPKDLCLMJDI_GET_SPEEDADD_OFFSET UNITYSDK_OFFSET(0x2090)
#define DPKDLCLMJDI_GET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x2080)
#define DPKDLCLMJDI_SET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x94C0)
#define DPKDLCLMJDI_SET_ATTACKBASE_OFFSET UNITYSDK_OFFSET(0x94B0)
#define DPKDLCLMJDI_SET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x202ECA0)
#define DPKDLCLMJDI_SET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x202EC00)
#define DPKDLCLMJDI_SET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x202EC20)
#define DPKDLCLMJDI_SET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x9500)
#define DPKDLCLMJDI_SET_DEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x94E0)
#define DPKDLCLMJDI_SET_HPADD_OFFSET UNITYSDK_OFFSET(0x202EAD0)
#define DPKDLCLMJDI_SET_HPBASE_OFFSET UNITYSDK_OFFSET(0xAD10)
#define DPKDLCLMJDI_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x202ECC0)
#define DPKDLCLMJDI_SET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x202EC80)
#define DPKDLCLMJDI_SET_RANKATTACKADD_OFFSET UNITYSDK_OFFSET(0x202EB20)
#define DPKDLCLMJDI_SET_RANKATTACKBASE_OFFSET UNITYSDK_OFFSET(0x202EB00)
#define DPKDLCLMJDI_SET_RANKCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x202EC40)
#define DPKDLCLMJDI_SET_RANKCRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x202EC60)
#define DPKDLCLMJDI_SET_RANKDEFENCEADD_OFFSET UNITYSDK_OFFSET(0x202EB60)
#define DPKDLCLMJDI_SET_RANKDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x202EB40)
#define DPKDLCLMJDI_SET_RANKHPADD_OFFSET UNITYSDK_OFFSET(0x202EBA0)
#define DPKDLCLMJDI_SET_RANKHPBASE_OFFSET UNITYSDK_OFFSET(0x202EB80)
#define DPKDLCLMJDI_SET_RANKSPEEDADD_OFFSET UNITYSDK_OFFSET(0x202EBE0)
#define DPKDLCLMJDI_SET_RANKSPEEDBASE_OFFSET UNITYSDK_OFFSET(0x202EBC0)
#define DPKDLCLMJDI_SET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0x202ECE0)
#define DPKDLCLMJDI_SET_SPEEDADD_OFFSET UNITYSDK_OFFSET(0x202EAE0)
#define DPKDLCLMJDI_SET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0xAD40)

inline static constexpr unsigned int DPKDLCLMJDI_TypeDefinitionIndex = 51964;

	struct alignas(4) DPKDLCLMJDI
	{
		::RPG::GameCore::FixPoint _AttackBase_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _AttackAdd_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _DefenceBase_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _DefenceAdd_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _HPBase_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _HPAdd_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _SpeedBase_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _SpeedAdd_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _RankAttackBase_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint _RankAttackAdd_k__BackingField; // 0x58
		::RPG::GameCore::FixPoint _RankDefenceBase_k__BackingField; // 0x60
		::RPG::GameCore::FixPoint _RankDefenceAdd_k__BackingField; // 0x68
		::RPG::GameCore::FixPoint _RankHPBase_k__BackingField; // 0x70
		::RPG::GameCore::FixPoint _RankHPAdd_k__BackingField; // 0x78
		::RPG::GameCore::FixPoint _RankSpeedBase_k__BackingField; // 0x80
		::RPG::GameCore::FixPoint _RankSpeedAdd_k__BackingField; // 0x88
		::RPG::GameCore::FixPoint _CriticalChance_k__BackingField; // 0x90
		::RPG::GameCore::FixPoint _CriticalDamage_k__BackingField; // 0x98
		::RPG::GameCore::FixPoint _RankCriticalChance_k__BackingField; // 0xA0
		::RPG::GameCore::FixPoint _RankCriticalDamage_k__BackingField; // 0xA8
		::RPG::GameCore::FixPoint _MinimumFatigueRatio_k__BackingField; // 0xB0
		::RPG::GameCore::FixPoint _BaseAggro_k__BackingField; // 0xB8
		::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0xC0
		::RPG::GameCore::FixPoint _SpecialMaxSP_k__BackingField; // 0xC8
		::RPG::GameCore::FixPoint get_AttackBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_ATTACKBASE_OFFSET))(this);
		}

		::System::Void set_AttackBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_ATTACKBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_AttackAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_ATTACKADD_OFFSET))(this);
		}

		::System::Void set_AttackAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_ATTACKADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DefenceBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_DEFENCEBASE_OFFSET))(this);
		}

		::System::Void set_DefenceBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_DEFENCEBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_DefenceAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_DEFENCEADD_OFFSET))(this);
		}

		::System::Void set_DefenceAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_DEFENCEADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_HPBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_HPBASE_OFFSET))(this);
		}

		::System::Void set_HPBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_HPBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_HPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_HPADD_OFFSET))(this);
		}

		::System::Void set_HPAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_HPADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SpeedBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_SPEEDBASE_OFFSET))(this);
		}

		::System::Void set_SpeedBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_SPEEDBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SpeedAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_SPEEDADD_OFFSET))(this);
		}

		::System::Void set_SpeedAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_SPEEDADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankAttackBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKATTACKBASE_OFFSET))(this);
		}

		::System::Void set_RankAttackBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKATTACKBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankAttackAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKATTACKADD_OFFSET))(this);
		}

		::System::Void set_RankAttackAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKATTACKADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankDefenceBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKDEFENCEBASE_OFFSET))(this);
		}

		::System::Void set_RankDefenceBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKDEFENCEBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankDefenceAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKDEFENCEADD_OFFSET))(this);
		}

		::System::Void set_RankDefenceAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKDEFENCEADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankHPBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKHPBASE_OFFSET))(this);
		}

		::System::Void set_RankHPBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKHPBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankHPAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKHPADD_OFFSET))(this);
		}

		::System::Void set_RankHPAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKHPADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankSpeedBase()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKSPEEDBASE_OFFSET))(this);
		}

		::System::Void set_RankSpeedBase(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKSPEEDBASE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankSpeedAdd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKSPEEDADD_OFFSET))(this);
		}

		::System::Void set_RankSpeedAdd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKSPEEDADD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_CRITICALCHANCE_OFFSET))(this);
		}

		::System::Void set_CriticalChance(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_CRITICALCHANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_CRITICALDAMAGE_OFFSET))(this);
		}

		::System::Void set_CriticalDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_CRITICALDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankCriticalChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKCRITICALCHANCE_OFFSET))(this);
		}

		::System::Void set_RankCriticalChance(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKCRITICALCHANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_RankCriticalDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_RANKCRITICALDAMAGE_OFFSET))(this);
		}

		::System::Void set_RankCriticalDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_RANKCRITICALDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
		}

		::System::Void set_MinimumFatigueRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_MINIMUMFATIGUERATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseAggro()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_BASEAGGRO_OFFSET))(this);
		}

		::System::Void set_BaseAggro(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_BASEAGGRO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_MAXSP_OFFSET))(this);
		}

		::System::Void set_MaxSP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_MAXSP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SpecialMaxSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_GET_SPECIALMAXSP_OFFSET))(this);
		}

		::System::Void set_SpecialMaxSP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DPKDLCLMJDI_SET_SPECIALMAXSP_OFFSET))(this, a1);
		}

	};
