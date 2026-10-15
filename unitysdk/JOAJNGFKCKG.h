#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/System/Object.h"
class EHIEFPKGLAN;
class JOAJNGFKCKG;
class KBLELMJDBEA;
class KDKHADGLIPJ;
class MFKLCJHKNBK;
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOAJNGFKCKG_AMIHBOCGJEC_OFFSET UNITYSDK_OFFSET(0xB2907B0)
#define JOAJNGFKCKG_BOJCKGEEIGP_OFFSET UNITYSDK_OFFSET(0xB28E1E0)
#define JOAJNGFKCKG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB28F140)
#define JOAJNGFKCKG_CKFMMHHHLJO_OFFSET UNITYSDK_OFFSET(0xB28E800)
#define JOAJNGFKCKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB28F1D0)
#define JOAJNGFKCKG_DAOEDDEAGDP_OFFSET UNITYSDK_OFFSET(0xB28F2D0)
#define JOAJNGFKCKG_EOPFGAOPGLB_OFFSET UNITYSDK_OFFSET(0xB28F330)
#define JOAJNGFKCKG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB28F1E0)
#define JOAJNGFKCKG_FDNJPCCHIEF_OFFSET UNITYSDK_OFFSET(0xB294E70)
#define JOAJNGFKCKG_GACCAKJGBAO_OFFSET UNITYSDK_OFFSET(0xB28F680)
#define JOAJNGFKCKG_HANLPFIDBDL_OFFSET UNITYSDK_OFFSET(0xB296250)
#define JOAJNGFKCKG_IFLGGGCEFGK_OFFSET UNITYSDK_OFFSET(0xB290640)
#define JOAJNGFKCKG_JLNOADLHDBC_OFFSET UNITYSDK_OFFSET(0xB28F8B0)
#define JOAJNGFKCKG_KEBFGGFICMB_OFFSET UNITYSDK_OFFSET(0xB28E3C0)
#define JOAJNGFKCKG_KPHLPLFCDBM_OFFSET UNITYSDK_OFFSET(0xB294A10)
#define JOAJNGFKCKG_LNOKDHMEAMB_OFFSET UNITYSDK_OFFSET(0xB295010)
#define JOAJNGFKCKG_MJOHLOKCDPI_OFFSET UNITYSDK_OFFSET(0xB28FC70)
#define JOAJNGFKCKG_MLFBEAGHKNC_OFFSET UNITYSDK_OFFSET(0xB28F020)
#define JOAJNGFKCKG_MLKJFELKIDA_OFFSET UNITYSDK_OFFSET(0xB28E9A0)
#define JOAJNGFKCKG_NGOFIMANPMC_OFFSET UNITYSDK_OFFSET(0xB294BA0)
#define JOAJNGFKCKG_NKGEHAPFHHE_OFFSET UNITYSDK_OFFSET(0xB290500)
#define JOAJNGFKCKG_PAHJMAOBGNI_OFFSET UNITYSDK_OFFSET(0xB28F460)
#define JOAJNGFKCKG_PIIHKONKLIO_OFFSET UNITYSDK_OFFSET(0xB28EBC0)
#define JOAJNGFKCKG_PPOOAGKCJPP_OFFSET UNITYSDK_OFFSET(0xB28E640)

inline static constexpr unsigned int JOAJNGFKCKG_TypeDefinitionIndex = 75755;

	class JOAJNGFKCKG : public ::System::Object
	{
	public:
		::MFKLCJHKNBK* FKINCGODJEP; // 0x10
		::KBLELMJDBEA* PDENFEFCAGN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_CTOR_OFFSET))(this);
		}

		::System::Void BOJCKGEEIGP(::System::Int32 a1, ::KDKHADGLIPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_BOJCKGEEIGP_OFFSET))(this, a1, a2);
		}

		::System::Void KEBFGGFICMB(::KDKHADGLIPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_KEBFGGFICMB_OFFSET))(this, a1);
		}

		::System::Void PPOOAGKCJPP(::System::Int32 a1, ::KDKHADGLIPJ* a2, ::KDKHADGLIPJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KDKHADGLIPJ*, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_PPOOAGKCJPP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLKJFELKIDA(::System::Int32 a1, ::KDKHADGLIPJ* a2, ::KDKHADGLIPJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KDKHADGLIPJ*, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_MLKJFELKIDA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MLFBEAGHKNC(::System::Int32 a1, ::KDKHADGLIPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_MLFBEAGHKNC_OFFSET))(this, a1, a2);
		}

		::System::Void CKFMMHHHLJO(::KDKHADGLIPJ* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::KDKHADGLIPJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_CKFMMHHHLJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PIIHKONKLIO(::KDKHADGLIPJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KDKHADGLIPJ*, ::System::Single))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_PIIHKONKLIO_OFFSET))(this, a1, a2);
		}

		static ::JOAJNGFKCKG* BPLPBPMEODA(::MFKLCJHKNBK* a1, ::KBLELMJDBEA* a2)
		{
			return ((::JOAJNGFKCKG*(*)(::MFKLCJHKNBK*, ::KBLELMJDBEA*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_EXECUTE_OFFSET))(this);
		}

		::System::Void DAOEDDEAGDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_DAOEDDEAGDP_OFFSET))(this);
		}

		::System::Void PAHJMAOBGNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_PAHJMAOBGNI_OFFSET))(this);
		}

		::System::Boolean GACCAKJGBAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_GACCAKJGBAO_OFFSET))(this);
		}

		::System::Void JLNOADLHDBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_JLNOADLHDBC_OFFSET))(this);
		}

		::System::Boolean EOPFGAOPGLB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_EOPFGAOPGLB_OFFSET))(this);
		}

		::System::Void NKGEHAPFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_NKGEHAPFHHE_OFFSET))(this);
		}

		::System::Void AMIHBOCGJEC(::EHIEFPKGLAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHIEFPKGLAN*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_AMIHBOCGJEC_OFFSET))(this, a1);
		}

		::System::Boolean NGOFIMANPMC(::System::Collections::Generic::List_1<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_NGOFIMANPMC_OFFSET))(this, a1);
		}

		::System::Boolean KPHLPLFCDBM(::EHIEFPKGLAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHIEFPKGLAN*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_KPHLPLFCDBM_OFFSET))(this, a1);
		}

		::System::Int32 IFLGGGCEFGK(::System::Single a1, ::KDKHADGLIPJ* a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::KDKHADGLIPJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_IFLGGGCEFGK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FDNJPCCHIEF(::RPG::GameCore::ChimeraAbilityModifier* a1, ::KDKHADGLIPJ* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraAbilityModifier*, ::KDKHADGLIPJ*, ::System::Int32))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_FDNJPCCHIEF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LNOKDHMEAMB(::RPG::GameCore::ChimeraAbilityModifier* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::EHIEFPKGLAN* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraAbilityModifier*, ::System::Collections::Generic::List_1<::System::Int32>*, ::EHIEFPKGLAN*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_LNOKDHMEAMB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HANLPFIDBDL(::RPG::GameCore::ChimeraAbilityModifier* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraAbilityModifier*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_HANLPFIDBDL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MJOHLOKCDPI(::RPG::GameCore::ChimeraBattleActionType a1, ::KDKHADGLIPJ* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleActionType, ::KDKHADGLIPJ*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + JOAJNGFKCKG_MJOHLOKCDPI_OFFSET))(this, a1, a2, a3);
		}

	};
