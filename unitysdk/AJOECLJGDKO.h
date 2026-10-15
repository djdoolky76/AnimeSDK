#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ACOMAONLNKP;
class BOHBPAKJGCK;
class EPFHDFJPECH;
class KFJJDAKNMAE;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJOECLJGDKO_ABHMCPCPPPP_OFFSET UNITYSDK_OFFSET(0x12CC36A0)
#define AJOECLJGDKO_CMNMAPMBMBJ_OFFSET UNITYSDK_OFFSET(0x12CC3760)
#define AJOECLJGDKO_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC34F0)
#define AJOECLJGDKO_DAAKLCLCODN_OFFSET UNITYSDK_OFFSET(0x12CC3810)
#define AJOECLJGDKO_EGKNFHIBFEL_OFFSET UNITYSDK_OFFSET(0x12CC3850)
#define AJOECLJGDKO_GET_ABILITYOWNER_OFFSET UNITYSDK_OFFSET(0x12CC34B0)
#define AJOECLJGDKO_GET_CURRENTSKILLPARAMS_OFFSET UNITYSDK_OFFSET(0x12CC34D0)
#define AJOECLJGDKO_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0x12CC3700)
#define AJOECLJGDKO_SET_ABILITYOWNER_OFFSET UNITYSDK_OFFSET(0x12CC34C0)
#define AJOECLJGDKO_SET_CURRENTSKILLPARAMS_OFFSET UNITYSDK_OFFSET(0x12CC34E0)

inline static constexpr unsigned int AJOECLJGDKO_TypeDefinitionIndex = 79397;

	class AJOECLJGDKO : public ::System::Object
	{
	public:
		::ACOMAONLNKP* JCAHPHICEEF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::EPFHDFJPECH*>* HILCAKKFAEB; // 0x18
		::EPFHDFJPECH* _AbilityOwner_k__BackingField; // 0x20
		::KFJJDAKNMAE* DIJEKOOEFML; // 0x28
		::System::Collections::Generic::List_1<::EPFHDFJPECH*>* DOHOJEMCHDI; // 0x30
		::Il2CppArray<::RPG::GameCore::FixPoint>* _CurrentSkillParams_k__BackingField; // 0x38
		::BOHBPAKJGCK* HMLPOANFLCE; // 0x40
		::System::Void _ctor(::BOHBPAKJGCK* a1, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOHBPAKJGCK*, ::System::Collections::Generic::List_1<::EPFHDFJPECH*>*))((::PBYTE)hIl2Cpp + AJOECLJGDKO_CTOR_OFFSET))(this, a1, a2);
		}

		::EPFHDFJPECH* get_AbilityOwner()
		{
			return ((::EPFHDFJPECH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOECLJGDKO_GET_ABILITYOWNER_OFFSET))(this);
		}

		::System::Void set_AbilityOwner(::EPFHDFJPECH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFHDFJPECH*))((::PBYTE)hIl2Cpp + AJOECLJGDKO_SET_ABILITYOWNER_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_CurrentSkillParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOECLJGDKO_GET_CURRENTSKILLPARAMS_OFFSET))(this);
		}

		::System::Void set_CurrentSkillParams(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + AJOECLJGDKO_SET_CURRENTSKILLPARAMS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::Int32>* ABHMCPCPPPP(::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + AJOECLJGDKO_ABHMCPCPPPP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + AJOECLJGDKO_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::EPFHDFJPECH* CMNMAPMBMBJ(::System::Int32 a1)
		{
			return ((::EPFHDFJPECH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJOECLJGDKO_CMNMAPMBMBJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::EPFHDFJPECH*>* DAAKLCLCODN()
		{
			return ((::System::Collections::Generic::List_1<::EPFHDFJPECH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOECLJGDKO_DAAKLCLCODN_OFFSET))(this);
		}

		::BOHBPAKJGCK* EGKNFHIBFEL()
		{
			return ((::BOHBPAKJGCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOECLJGDKO_EGKNFHIBFEL_OFFSET))(this);
		}

	};
