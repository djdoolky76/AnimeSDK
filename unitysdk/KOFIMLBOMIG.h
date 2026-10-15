#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
class OCELNDMELEI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUseAbility; }
namespace RPG::GameCore { class PVEGameStatistics; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOFIMLBOMIG_ACHAJMMGOKH_OFFSET UNITYSDK_OFFSET(0xB593FC0)
#define KOFIMLBOMIG_BPPCKBJLLIL_OFFSET UNITYSDK_OFFSET(0xB594BA0)
#define KOFIMLBOMIG_CTOR_OFFSET UNITYSDK_OFFSET(0xB594F00)
#define KOFIMLBOMIG_DPHPHJGAJNN_OFFSET UNITYSDK_OFFSET(0xB594E70)
#define KOFIMLBOMIG_FHEHFMNOGFF_OFFSET UNITYSDK_OFFSET(0xB594D70)
#define KOFIMLBOMIG_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0xB594290)
#define KOFIMLBOMIG_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0xB5933B0)
#define KOFIMLBOMIG_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB594EC0)
#define KOFIMLBOMIG_GET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0xB594EE0)
#define KOFIMLBOMIG_GHMOBCEJMIP_OFFSET UNITYSDK_OFFSET(0xB594140)
#define KOFIMLBOMIG_JBLGHBIHNNO_OFFSET UNITYSDK_OFFSET(0xB594CE0)
#define KOFIMLBOMIG_JGHKKPLJNFO_OFFSET UNITYSDK_OFFSET(0xB5935B0)
#define KOFIMLBOMIG_KGJGFCCAHEB_OFFSET UNITYSDK_OFFSET(0xB593F80)
#define KOFIMLBOMIG_OCPGGCBILMH_OFFSET UNITYSDK_OFFSET(0xB593BF0)
#define KOFIMLBOMIG_OFCGFOOCIHE_OFFSET UNITYSDK_OFFSET(0xB594C00)
#define KOFIMLBOMIG_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0xB593480)
#define KOFIMLBOMIG_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0xB5933C0)
#define KOFIMLBOMIG_ONMGLGIKOKA_OFFSET UNITYSDK_OFFSET(0xB5949C0)
#define KOFIMLBOMIG_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET UNITYSDK_OFFSET(0xB594ED0)
#define KOFIMLBOMIG_SET_ELATIONPOWER_OFFSET UNITYSDK_OFFSET(0xB594EF0)

	class KOFIMLBOMIG : public ::LHHEGNEBMLN
	{
	public:
		::System::Collections::Generic::List_1<::OCELNDMELEI*>* _ElationAbilityChangeParamList_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* CKICPNNHBOI; // 0x40
		::System::UInt32 NKCCHCLGKBI; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint _ElationPower_k__BackingField; // 0x50
		::RPG::GameCore::FixPoint FMGKDGLEDPJ; // 0x58
		::RPG::GameCore::FixPoint GFGJAFMIILP; // 0x60
		::System::Boolean NEGEAEEFIBN; // 0x68
		::System::Byte _padding1[0x3];
		::System::UInt32 LJCHAINMLBD; // 0x6C
		::RPG::GameCore::FixPoint LHKEOHCIFBJ; // 0x70
		::RPG::GameCore::FixPoint IEKLENGNGNH; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Boolean JGHKKPLJNFO(::RPG::GameCore::PropertyModifyFunction a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_JGHKKPLJNFO_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 ACHAJMMGOKH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_ACHAJMMGOKH_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void ONMGLGIKOKA(::RPG::GameCore::LevelUseAbility* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelUseAbility*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_ONMGLGIKOKA_OFFSET))(this, a1);
		}

		::System::Void BPPCKBJLLIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_BPPCKBJLLIL_OFFSET))(this);
		}

		::System::Void KGJGFCCAHEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_KGJGFCCAHEB_OFFSET))(this);
		}

		::System::Void OCPGGCBILMH(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_OCPGGCBILMH_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GHMOBCEJMIP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_GHMOBCEJMIP_OFFSET))(this, a1);
		}

		::System::Void OFCGFOOCIHE(::OCELNDMELEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCELNDMELEI*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_OFCGFOOCIHE_OFFSET))(this, a1);
		}

		::System::Void JBLGHBIHNNO(::OCELNDMELEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCELNDMELEI*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_JBLGHBIHNNO_OFFSET))(this, a1);
		}

		::System::Void FHEHFMNOGFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_FHEHFMNOGFF_OFFSET))(this, a1);
		}

		::System::Int32 DPHPHJGAJNN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_DPHPHJGAJNN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::OCELNDMELEI*>* get_ElationAbilityChangeParamList()
		{
			return ((::System::Collections::Generic::List_1<::OCELNDMELEI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_GET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this);
		}

		::System::Void set_ElationAbilityChangeParamList(::System::Collections::Generic::List_1<::OCELNDMELEI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::OCELNDMELEI*>*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_SET_ELATIONABILITYCHANGEPARAMLIST_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_ElationPower()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_GET_ELATIONPOWER_OFFSET))(this);
		}

		::System::Void set_ElationPower(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_SET_ELATIONPOWER_OFFSET))(this, a1);
		}

	};
