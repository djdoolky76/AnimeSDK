#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/System/Object.h"
class EHIEFPKGLAN;
class KDKHADGLIPJ;
class MFKLCJHKNBK;
namespace RPG::GameCore { class ChimeraAbility; }
namespace RPG::GameCore { class ChimeraAbilityModifier; }
namespace RPG::GameCore { class ChimeraBattleExtraConditionEvaluator; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HFLKAOHICMK_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0x15C8B530)
#define HFLKAOHICMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8A270)
#define HFLKAOHICMK_EFLLEMCIBBP_OFFSET UNITYSDK_OFFSET(0x15C8B300)
#define HFLKAOHICMK_GJKDCNPIJOK_OFFSET UNITYSDK_OFFSET(0x15C8AA80)
#define HFLKAOHICMK_HJPPIDDALBD_OFFSET UNITYSDK_OFFSET(0x15C8AEF0)
#define HFLKAOHICMK_KGDCKAHGMBI_OFFSET UNITYSDK_OFFSET(0x15C8A280)
#define HFLKAOHICMK_POHEIGDPBBO_1_OFFSET UNITYSDK_OFFSET(0x15C8AE10)
#define HFLKAOHICMK_POHEIGDPBBO_OFFSET UNITYSDK_OFFSET(0x15C8AE80)

inline static constexpr unsigned int HFLKAOHICMK_TypeDefinitionIndex = 76622;

	class HFLKAOHICMK : public ::System::Object
	{
	public:
		::MFKLCJHKNBK* FKINCGODJEP; // 0x10
		::System::Void _ctor(::MFKLCJHKNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKLCJHKNBK*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_CTOR_OFFSET))(this, a1);
		}

		::System::Void KGDCKAHGMBI(::RPG::GameCore::ChimeraBattleActionType a1, ::KDKHADGLIPJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleActionType, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_KGDCKAHGMBI_OFFSET))(this, a1, a2);
		}

		::EHIEFPKGLAN* POHEIGDPBBO(::KDKHADGLIPJ* a1, ::RPG::GameCore::ChimeraAbility* a2, ::EHIEFPKGLAN* a3)
		{
			return ((::EHIEFPKGLAN*(*)(::PVOID, ::KDKHADGLIPJ*, ::RPG::GameCore::ChimeraAbility*, ::EHIEFPKGLAN*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_POHEIGDPBBO_OFFSET))(this, a1, a2, a3);
		}

		::EHIEFPKGLAN* POHEIGDPBBO_1(::KDKHADGLIPJ* a1, ::RPG::GameCore::ChimeraAbility* a2, ::KDKHADGLIPJ* a3)
		{
			return ((::EHIEFPKGLAN*(*)(::PVOID, ::KDKHADGLIPJ*, ::RPG::GameCore::ChimeraAbility*, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_POHEIGDPBBO_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GJKDCNPIJOK(::KDKHADGLIPJ* a1, ::RPG::GameCore::ChimeraAbility* a2, ::KDKHADGLIPJ* a3, ::RPG::GameCore::ChimeraBattleActionType a4, ::Il2CppArray<::System::Object*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDKHADGLIPJ*, ::RPG::GameCore::ChimeraAbility*, ::KDKHADGLIPJ*, ::RPG::GameCore::ChimeraBattleActionType, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_GJKDCNPIJOK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean HJPPIDDALBD(::RPG::GameCore::ChimeraBattleExtraConditionEvaluator* a1, ::KDKHADGLIPJ* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraBattleExtraConditionEvaluator*, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_HJPPIDDALBD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* EFLLEMCIBBP(::EHIEFPKGLAN* a1, ::RPG::GameCore::ChimeraAbilityModifier* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::EHIEFPKGLAN*, ::RPG::GameCore::ChimeraAbilityModifier*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_EFLLEMCIBBP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::KDKHADGLIPJ*>* BOLJDDJDNII(::EHIEFPKGLAN* a1, ::RPG::GameCore::ChimeraAbilityModifier* a2)
		{
			return ((::System::Collections::Generic::List_1<::KDKHADGLIPJ*>*(*)(::PVOID, ::EHIEFPKGLAN*, ::RPG::GameCore::ChimeraAbilityModifier*))((::PBYTE)hIl2Cpp + HFLKAOHICMK_BOLJDDJDNII_OFFSET))(this, a1, a2);
		}

	};
