#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class PNFAENKDBIJ;
namespace RPG::Client::ChenLingBattle { class SoldierUnit; }
namespace RPG::GameCore { class ChenLingEnemyRow; }

#define PNFAENKDBIJ_BEOIPMPMBOF_OFFSET UNITYSDK_OFFSET(0xC3363B0)
#define PNFAENKDBIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC335F40)
#define PNFAENKDBIJ_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC336000)
#define PNFAENKDBIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC335DE0)
#define PNFAENKDBIJ_GET_ATKSPD_OFFSET UNITYSDK_OFFSET(0xC3364E0)
#define PNFAENKDBIJ_GET_ATK_OFFSET UNITYSDK_OFFSET(0xC3364A0)
#define PNFAENKDBIJ_GET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0xC336500)
#define PNFAENKDBIJ_GET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xC336580)
#define PNFAENKDBIJ_GET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0xC336540)
#define PNFAENKDBIJ_GET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0xC336560)
#define PNFAENKDBIJ_GET_HP_OFFSET UNITYSDK_OFFSET(0xC3364C0)
#define PNFAENKDBIJ_GET_MOVESPD_OFFSET UNITYSDK_OFFSET(0xC336520)
#define PNFAENKDBIJ_GET_READYSCALE_OFFSET UNITYSDK_OFFSET(0xC336480)
#define PNFAENKDBIJ_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xC336460)
#define PNFAENKDBIJ_GET_SIZETIER_OFFSET UNITYSDK_OFFSET(0xC336440)
#define PNFAENKDBIJ_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xC336420)
#define PNFAENKDBIJ_GET_UNITID_OFFSET UNITYSDK_OFFSET(0xC336400)
#define PNFAENKDBIJ_JEAIOOHPIJH_OFFSET UNITYSDK_OFFSET(0xC336270)
#define PNFAENKDBIJ_PKJJGOHAEKE_OFFSET UNITYSDK_OFFSET(0xC336180)
#define PNFAENKDBIJ_SET_ATKSPD_OFFSET UNITYSDK_OFFSET(0xC3364F0)
#define PNFAENKDBIJ_SET_ATK_OFFSET UNITYSDK_OFFSET(0xC3364B0)
#define PNFAENKDBIJ_SET_ATTACKCD_OFFSET UNITYSDK_OFFSET(0xC336510)
#define PNFAENKDBIJ_SET_ATTACKRANGE_OFFSET UNITYSDK_OFFSET(0xC336590)
#define PNFAENKDBIJ_SET_CRTCHANCE_OFFSET UNITYSDK_OFFSET(0xC336550)
#define PNFAENKDBIJ_SET_CRTDAMAGERATIO_OFFSET UNITYSDK_OFFSET(0xC336570)
#define PNFAENKDBIJ_SET_HP_OFFSET UNITYSDK_OFFSET(0xC3364D0)
#define PNFAENKDBIJ_SET_MOVESPD_OFFSET UNITYSDK_OFFSET(0xC336530)
#define PNFAENKDBIJ_SET_READYSCALE_OFFSET UNITYSDK_OFFSET(0xC336490)
#define PNFAENKDBIJ_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xC336470)
#define PNFAENKDBIJ_SET_SIZETIER_OFFSET UNITYSDK_OFFSET(0xC336450)
#define PNFAENKDBIJ_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xC336430)
#define PNFAENKDBIJ_SET_UNITID_OFFSET UNITYSDK_OFFSET(0xC336410)

	class PNFAENKDBIJ : public ::System::Object
	{
	public:
		::System::UInt32 _UnitID_k__BackingField; // 0x10
		::System::Single _ReadyScale_k__BackingField; // 0x14
		::System::UInt32 _SizeTier_k__BackingField; // 0x18
		::System::Single _Scale_k__BackingField; // 0x1C
		::RPG::GameCore::FixPoint _AtkSpd_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _Atk_k__BackingField; // 0x28
		::System::Single _AttackCD_k__BackingField; // 0x30
		::System::UInt32 _SoldierID_k__BackingField; // 0x34
		::RPG::GameCore::FixPoint _MoveSpd_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _CrtDamageRatio_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _CrtChance_k__BackingField; // 0x48
		::RPG::GameCore::FixPoint _Hp_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint _AttackRange_k__BackingField; // 0x58
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::PNFAENKDBIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNFAENKDBIJ*))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::RPG::Client::ChenLingBattle::SoldierUnit* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierUnit*))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_CTOR_2_OFFSET))(this, a1);
		}

		::System::Void PKJJGOHAEKE(::RPG::GameCore::ChenLingEnemyRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingEnemyRow*))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_PKJJGOHAEKE_OFFSET))(this, a1);
		}

		::System::Void JEAIOOHPIJH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_JEAIOOHPIJH_OFFSET))(this, a1);
		}

		::System::Void BEOIPMPMBOF(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_BEOIPMPMBOF_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_UNITID_OFFSET))(this);
		}

		::System::Void set_UnitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_UNITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_SOLDIERID_OFFSET))(this);
		}

		::System::Void set_SoldierID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_SOLDIERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SizeTier()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_SIZETIER_OFFSET))(this);
		}

		::System::Void set_SizeTier(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_SIZETIER_OFFSET))(this, a1);
		}

		::System::Single get_Scale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_SCALE_OFFSET))(this, a1);
		}

		::System::Single get_ReadyScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_READYSCALE_OFFSET))(this);
		}

		::System::Void set_ReadyScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_READYSCALE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Atk()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_ATK_OFFSET))(this);
		}

		::System::Void set_Atk(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_ATK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Hp()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_HP_OFFSET))(this);
		}

		::System::Void set_Hp(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_HP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_AtkSpd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_ATKSPD_OFFSET))(this);
		}

		::System::Void set_AtkSpd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_ATKSPD_OFFSET))(this, a1);
		}

		::System::Single get_AttackCD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_ATTACKCD_OFFSET))(this);
		}

		::System::Void set_AttackCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_ATTACKCD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MoveSpd()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_MOVESPD_OFFSET))(this);
		}

		::System::Void set_MoveSpd(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_MOVESPD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CrtChance()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_CRTCHANCE_OFFSET))(this);
		}

		::System::Void set_CrtChance(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_CRTCHANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CrtDamageRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_CRTDAMAGERATIO_OFFSET))(this);
		}

		::System::Void set_CrtDamageRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_CRTDAMAGERATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_AttackRange()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_GET_ATTACKRANGE_OFFSET))(this);
		}

		::System::Void set_AttackRange(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PNFAENKDBIJ_SET_ATTACKRANGE_OFFSET))(this, a1);
		}

	};
