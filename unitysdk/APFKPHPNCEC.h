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

#define APFKPHPNCEC_ABIOAAMKCFM_OFFSET UNITYSDK_OFFSET(0x15B9CD00)
#define APFKPHPNCEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9C5F0)
#define APFKPHPNCEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9C720)
#define APFKPHPNCEC_FCAFHHDNKMH_OFFSET UNITYSDK_OFFSET(0x15B9CD80)
#define APFKPHPNCEC_GET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x15B9CF90)
#define APFKPHPNCEC_GET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x15B9CFB0)
#define APFKPHPNCEC_ICDOIMPOIDK_OFFSET UNITYSDK_OFFSET(0x15B9CD40)
#define APFKPHPNCEC_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15B9C630)
#define APFKPHPNCEC_MABDDEIGDMG_OFFSET UNITYSDK_OFFSET(0x15B9CEF0)
#define APFKPHPNCEC_OAJLKKIBLLE_OFFSET UNITYSDK_OFFSET(0x15B9CBE0)
#define APFKPHPNCEC_OMGCBJBEEDO_OFFSET UNITYSDK_OFFSET(0x15B9C920)
#define APFKPHPNCEC_PJKDFLAHPFG_OFFSET UNITYSDK_OFFSET(0x15B9C840)
#define APFKPHPNCEC_SET_SOURCEENTITYID_OFFSET UNITYSDK_OFFSET(0x15B9CFA0)
#define APFKPHPNCEC_SET_SOURCEENTITYTYPE_OFFSET UNITYSDK_OFFSET(0x15B9CFC0)
#define APFKPHPNCEC_TICK_OFFSET UNITYSDK_OFFSET(0x15B9CB80)

inline static constexpr unsigned int APFKPHPNCEC_TypeDefinitionIndex = 56967;

	class APFKPHPNCEC : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* LAMOLBHEFGP; // 0x18
		::System::Int32 BNNGFPMLBGD; // 0x20
		::System::UInt32 _SourceEntityID_k__BackingField; // 0x24
		::System::Int32 ACABMBJMIKN; // 0x28
		::RPG::GameCore::EntityType _SourceEntityType_k__BackingField; // 0x2C
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
