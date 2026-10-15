#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MAAGKBJFMHI.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/FateRinExtraSource.h"
#include "unitysdk/RPG/GameCore/FateRinPreCalcPhase.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/RPG/GameCore/ShieldFormulaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICHIALIFCIJ.h"
class NGGLPLKJKMM;
class OOCCBMLAELL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKKGJDHBOMH_BIHOIODJLBC_OFFSET UNITYSDK_OFFSET(0xB99A2E0)
#define MKKGJDHBOMH_BIOPAEADNOD_OFFSET UNITYSDK_OFFSET(0xB99C0E0)
#define MKKGJDHBOMH_BMOEFJHNNHA_OFFSET UNITYSDK_OFFSET(0xB99A600)
#define MKKGJDHBOMH_CHKMDJEMFJL_OFFSET UNITYSDK_OFFSET(0xB99A380)
#define MKKGJDHBOMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB999E20)
#define MKKGJDHBOMH_EGEALPAMNDN_OFFSET UNITYSDK_OFFSET(0xB99B990)
#define MKKGJDHBOMH_EKLOCNDDOPJ_OFFSET UNITYSDK_OFFSET(0xB99B2D0)
#define MKKGJDHBOMH_GEGMIKAHDBF_OFFSET UNITYSDK_OFFSET(0xB99A750)
#define MKKGJDHBOMH_GET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0xB99A060)
#define MKKGJDHBOMH_GET_BASEDAMAGEPCT_OFFSET UNITYSDK_OFFSET(0xB99A0E0)
#define MKKGJDHBOMH_GET_BASEDAMAGE_OFFSET UNITYSDK_OFFSET(0xB99A0C0)
#define MKKGJDHBOMH_GET_BASEHEALPCT_OFFSET UNITYSDK_OFFSET(0xB99A0A0)
#define MKKGJDHBOMH_GET_BASEHEAL_OFFSET UNITYSDK_OFFSET(0xB99A080)
#define MKKGJDHBOMH_GET_BASESHIELD_OFFSET UNITYSDK_OFFSET(0xB99A100)
#define MKKGJDHBOMH_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0xB99A030)
#define MKKGJDHBOMH_GET_PRECALCTASKCONTEXT_OFFSET UNITYSDK_OFFSET(0xB99A050)
#define MKKGJDHBOMH_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0xB99A040)
#define MKKGJDHBOMH_HHEMAGKPOMM_OFFSET UNITYSDK_OFFSET(0xB99AA80)
#define MKKGJDHBOMH_HJGBDJOPIIE_OFFSET UNITYSDK_OFFSET(0xB99AF10)
#define MKKGJDHBOMH_HNHPAOOIFAO_OFFSET UNITYSDK_OFFSET(0xB99BBC0)
#define MKKGJDHBOMH_ILEHKOKFHKL_OFFSET UNITYSDK_OFFSET(0xB99C600)
#define MKKGJDHBOMH_INPHLMHELBE_OFFSET UNITYSDK_OFFSET(0xB99AE20)
#define MKKGJDHBOMH_IPIKGDFJOOO_OFFSET UNITYSDK_OFFSET(0xB99AC50)
#define MKKGJDHBOMH_MJAOFLJNJDF_OFFSET UNITYSDK_OFFSET(0xB99B950)
#define MKKGJDHBOMH_NAGLCEMJIBM_OFFSET UNITYSDK_OFFSET(0xB99BCD0)
#define MKKGJDHBOMH_NBOINJNBNCN_OFFSET UNITYSDK_OFFSET(0xB99A120)
#define MKKGJDHBOMH_NHNODPDCNLK_OFFSET UNITYSDK_OFFSET(0xB99C300)
#define MKKGJDHBOMH_NLIELAJHAPG_OFFSET UNITYSDK_OFFSET(0xB99BEB0)
#define MKKGJDHBOMH_SET_BASECONFIG_OFFSET UNITYSDK_OFFSET(0xB99A070)
#define MKKGJDHBOMH_SET_BASEDAMAGEPCT_OFFSET UNITYSDK_OFFSET(0xB99A0F0)
#define MKKGJDHBOMH_SET_BASEDAMAGE_OFFSET UNITYSDK_OFFSET(0xB99A0D0)
#define MKKGJDHBOMH_SET_BASEHEALPCT_OFFSET UNITYSDK_OFFSET(0xB99A0B0)
#define MKKGJDHBOMH_SET_BASEHEAL_OFFSET UNITYSDK_OFFSET(0xB99A090)
#define MKKGJDHBOMH_SET_BASESHIELD_OFFSET UNITYSDK_OFFSET(0xB99A110)

	class MKKGJDHBOMH : public ::System::Object
	{
	public:
		::NGGLPLKJKMM* _BaseConfig_k__BackingField; // 0x10
		::Il2CppArray<::System::Collections::Generic::List_1<::MAAGKBJFMHI>*>* AMMPPENCFPF; // 0x18
		::RPG::GameCore::GameEntity* _Entity_k__BackingField; // 0x20
		::RPG::GameCore::TaskContext* _PreCalcTaskContext_k__BackingField; // 0x28
		::OOCCBMLAELL* _SubMode_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint DGPBNEAKFDM; // 0x38
		::RPG::GameCore::FixPoint _BaseDamagePct_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint IPLLLCOAPOM; // 0x48
		::RPG::GameCore::FixPoint _BaseHeal_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint COMBFMACFGO; // 0x58
		::RPG::GameCore::FixPoint MCCIKOBOIEM; // 0x60
		::System::Boolean PGCMAOFOLBP; // 0x68
		::System::Boolean FAIDOOKDHHD; // 0x69
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixPoint _BaseDamage_k__BackingField; // 0x70
		::RPG::GameCore::FixPoint _BaseShield_k__BackingField; // 0x78
		::RPG::GameCore::FixPoint BMMCEFDBHLP; // 0x80
		::RPG::GameCore::FixPoint _BaseHealPct_k__BackingField; // 0x88
		::RPG::GameCore::FixPoint NDABMNBIIBI; // 0x90
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::OOCCBMLAELL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* get_Entity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_ENTITY_OFFSET))(this);
		}

		::OOCCBMLAELL* get_SubMode()
		{
			return ((::OOCCBMLAELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_SUBMODE_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* get_PreCalcTaskContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_PRECALCTASKCONTEXT_OFFSET))(this);
		}

		::NGGLPLKJKMM* get_BaseConfig()
		{
			return ((::NGGLPLKJKMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_BASECONFIG_OFFSET))(this);
		}

		::System::Void set_BaseConfig(::NGGLPLKJKMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGGLPLKJKMM*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_SET_BASECONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseHeal()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_BASEHEAL_OFFSET))(this);
		}

		::System::Void set_BaseHeal(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_SET_BASEHEAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseHealPct()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_BASEHEALPCT_OFFSET))(this);
		}

		::System::Void set_BaseHealPct(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_SET_BASEHEALPCT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseDamage()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_BASEDAMAGE_OFFSET))(this);
		}

		::System::Void set_BaseDamage(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_SET_BASEDAMAGE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseDamagePct()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_BASEDAMAGEPCT_OFFSET))(this);
		}

		::System::Void set_BaseDamagePct(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_SET_BASEDAMAGEPCT_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_BaseShield()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GET_BASESHIELD_OFFSET))(this);
		}

		::System::Void set_BaseShield(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_SET_BASESHIELD_OFFSET))(this, a1);
		}

		::System::Void NBOINJNBNCN(::NGGLPLKJKMM* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGGLPLKJKMM*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_NBOINJNBNCN_OFFSET))(this, a1, a2);
		}

		::System::Void BIHOIODJLBC(::RPG::GameCore::FateRinExtraSource a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinExtraSource))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_BIHOIODJLBC_OFFSET))(this, a1);
		}

		::System::Void CHKMDJEMFJL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_CHKMDJEMFJL_OFFSET))(this, a1);
		}

		::System::Void BMOEFJHNNHA(::RPG::GameCore::FateRinExtraSource a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::GameEntity* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinExtraSource, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_BMOEFJHNNHA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::MAAGKBJFMHI GEGMIKAHDBF(::RPG::GameCore::FateRinExtraSource a1)
		{
			return ((::MAAGKBJFMHI(*)(::PVOID, ::RPG::GameCore::FateRinExtraSource))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_GEGMIKAHDBF_OFFSET))(this, a1);
		}

		::System::Void HHEMAGKPOMM(::RPG::GameCore::FateRinPreCalcPhase a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinPreCalcPhase, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_HHEMAGKPOMM_OFFSET))(this, a1, a2, a3);
		}

		::ICHIALIFCIJ EGEALPAMNDN(::System::Boolean a1)
		{
			return ((::ICHIALIFCIJ(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_EGEALPAMNDN_OFFSET))(this, a1);
		}

		::System::Void IPIKGDFJOOO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_IPIKGDFJOOO_OFFSET))(this, a1, a2);
		}

		::System::Void INPHLMHELBE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_INPHLMHELBE_OFFSET))(this, a1, a2);
		}

		::System::Void NLIELAJHAPG(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_NLIELAJHAPG_OFFSET))(this, a1);
		}

		::System::Void BIOPAEADNOD(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_BIOPAEADNOD_OFFSET))(this, a1);
		}

		::System::Void HJGBDJOPIIE(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_HJGBDJOPIIE_OFFSET))(this, a1, a2);
		}

		::System::Void ILEHKOKFHKL(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_ILEHKOKFHKL_OFFSET))(this, a1);
		}

		::System::Void EKLOCNDDOPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_EKLOCNDDOPJ_OFFSET))(this);
		}

		::System::Void MJAOFLJNJDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_MJAOFLJNJDF_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint NHNODPDCNLK(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::AttackFormulaType a5, ::RPG::GameCore::FinalDamageFormulaType a6, ::RPG::GameCore::FixPoint a7, ::RPG::GameCore::FixPoint a8)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::AttackFormulaType, ::RPG::GameCore::FinalDamageFormulaType, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_NHNODPDCNLK_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::GameCore::FixPoint HNHPAOOIFAO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::HealFormulaType a5)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::HealFormulaType))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_HNHPAOOIFAO_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::RPG::GameCore::FixPoint NAGLCEMJIBM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::ShieldFormulaType a4)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ShieldFormulaType))((::PBYTE)hIl2Cpp + MKKGJDHBOMH_NAGLCEMJIBM_OFFSET))(a1, a2, a3, a4);
		}

	};
