#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/KBFDDPLFFLK.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APFKPHPNCEC_ABIOAAMKCFM_OFFSET UNITYSDK_OFFSET(0x15BA8CE0)
#define APFKPHPNCEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA85C0)
#define APFKPHPNCEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA8700)
#define APFKPHPNCEC_FCAFHHDNKMH_OFFSET UNITYSDK_OFFSET(0x15BA8D60)
#define APFKPHPNCEC_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x15BA8F70)
#define APFKPHPNCEC_GET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x15BA8F90)
#define APFKPHPNCEC_ICDOIMPOIDK_OFFSET UNITYSDK_OFFSET(0x15BA8D20)
#define APFKPHPNCEC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15BA8600)
#define APFKPHPNCEC_MABDDEIGDMG_OFFSET UNITYSDK_OFFSET(0x15BA8ED0)
#define APFKPHPNCEC_OAJLKKIBLLE_OFFSET UNITYSDK_OFFSET(0x15BA8BC0)
#define APFKPHPNCEC_OMGCBJBEEDO_OFFSET UNITYSDK_OFFSET(0x15BA8900)
#define APFKPHPNCEC_PJKDFLAHPFG_OFFSET UNITYSDK_OFFSET(0x15BA8820)
#define APFKPHPNCEC_SET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x15BA8F80)
#define APFKPHPNCEC_SET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x15BA8FA0)
#define APFKPHPNCEC_TICK_OFFSET UNITYSDK_OFFSET(0x15BA8B60)

	class APFKPHPNCEC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* LAMOLBHEFGP; // 0x18
		::System::UInt32 _SourceEntityID_k__BackingField; // 0x20
		::System::Int32 ACABMBJMIKN; // 0x24
		::RPG::GameCore::EntityType _SourceEntityType_k__BackingField; // 0x28
		::System::Int32 BNNGFPMLBGD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + APFKPHPNCEC_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_DISPOSE_OFFSET))(this);
		}

		::System::Void PJKDFLAHPFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_PJKDFLAHPFG_OFFSET))(this);
		}

		::System::Void OMGCBJBEEDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_OMGCBJBEEDO_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APFKPHPNCEC_TICK_OFFSET))(this, a1);
		}

		::System::Void OAJLKKIBLLE(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + APFKPHPNCEC_OAJLKKIBLLE_OFFSET))(this, a1);
		}

		::System::Void ABIOAAMKCFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_ABIOAAMKCFM_OFFSET))(this);
		}

		::System::Void ICDOIMPOIDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_ICDOIMPOIDK_OFFSET))(this);
		}

		::System::Void FCAFHHDNKMH(::KBFDDPLFFLK a1, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KBFDDPLFFLK, ::System::Predicate_1<::RPG::GameCore::TurnBasedModifierInstance*>*))((::PBYTE)hIl2Cpp + APFKPHPNCEC_FCAFHHDNKMH_OFFSET))(this, a1, a2);
		}

		::System::Void MABDDEIGDMG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + APFKPHPNCEC_MABDDEIGDMG_OFFSET))(this, a1);
		}

		::System::UInt32 get_SourceEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_GET_SOURCEENTITYID_OFFSET))(this);
		}

		::System::Void set_SourceEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APFKPHPNCEC_SET_SOURCEENTITYID_OFFSET))(this, a1);
		}

		::RPG::GameCore::EntityType get_SourceEntityType()
		{
			return ((::RPG::GameCore::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + APFKPHPNCEC_GET_SOURCEENTITYTYPE_OFFSET))(this);
		}

		::System::Void set_SourceEntityType(::RPG::GameCore::EntityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + APFKPHPNCEC_SET_SOURCEENTITYTYPE_OFFSET))(this, a1);
		}

	};
