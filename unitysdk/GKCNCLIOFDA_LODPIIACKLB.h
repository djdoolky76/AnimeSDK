#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PetPartyInteractionDefinition; }
namespace System { class Object; }
namespace System { class String; }

#define GKCNCLIOFDA_LODPIIACKLB_BFOIOJAGCAP_OFFSET UNITYSDK_OFFSET(0x15A89070)
#define GKCNCLIOFDA_LODPIIACKLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x15A8C600)
#define GKCNCLIOFDA_LODPIIACKLB_CTOR_OFFSET UNITYSDK_OFFSET(0x15A8B860)
#define GKCNCLIOFDA_LODPIIACKLB_EDKLLNGADAD_OFFSET UNITYSDK_OFFSET(0x15A86660)
#define GKCNCLIOFDA_LODPIIACKLB_EDPMIMAHBFE_OFFSET UNITYSDK_OFFSET(0x15A85C80)
#define GKCNCLIOFDA_LODPIIACKLB_GDJKEMIHKKO_OFFSET UNITYSDK_OFFSET(0x15A914F0)
#define GKCNCLIOFDA_LODPIIACKLB_GET_COMBINATIONCHILDPLANS_OFFSET UNITYSDK_OFFSET(0x15A915E0)
#define GKCNCLIOFDA_LODPIIACKLB_GET_CONDITIONSSATISFIED_OFFSET UNITYSDK_OFFSET(0x15A91620)
#define GKCNCLIOFDA_LODPIIACKLB_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A915B0)
#define GKCNCLIOFDA_LODPIIACKLB_GET_ISCOMBINATION_OFFSET UNITYSDK_OFFSET(0x15A91610)
#define GKCNCLIOFDA_LODPIIACKLB_GET_PARTICIPANTS_OFFSET UNITYSDK_OFFSET(0x15A915D0)
#define GKCNCLIOFDA_LODPIIACKLB_GET_SELECTIONKEY_OFFSET UNITYSDK_OFFSET(0x15A915C0)
#define GKCNCLIOFDA_LODPIIACKLB_GET_STARTINTERVALSECONDS_OFFSET UNITYSDK_OFFSET(0x15A91600)
#define GKCNCLIOFDA_LODPIIACKLB_GOLJMHNBFJF_OFFSET UNITYSDK_OFFSET(0x15A86700)
#define GKCNCLIOFDA_LODPIIACKLB_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15A90340)
#define GKCNCLIOFDA_LODPIIACKLB_HENMPNMAHPB_OFFSET UNITYSDK_OFFSET(0x15A87C00)
#define GKCNCLIOFDA_LODPIIACKLB_PMMGNKAIFNJ_OFFSET UNITYSDK_OFFSET(0x15A856D0)
#define GKCNCLIOFDA_LODPIIACKLB_PMNFGKNFIJP_OFFSET UNITYSDK_OFFSET(0x15A91640)
#define GKCNCLIOFDA_LODPIIACKLB_SET_COMBINATIONCHILDPLANS_OFFSET UNITYSDK_OFFSET(0x15A915F0)
#define GKCNCLIOFDA_LODPIIACKLB_SET_CONDITIONSSATISFIED_OFFSET UNITYSDK_OFFSET(0x15A91630)

inline static constexpr unsigned int GKCNCLIOFDA_LODPIIACKLB_TypeDefinitionIndex = 53532;

	class GKCNCLIOFDA_LODPIIACKLB : public ::System::Object
	{
	public:
		::RPG::PoolList_1<::System::Object*>* CLLOHMIFFHJ; // 0x10
		::Il2CppArray<::System::Object*>* _Participants_k__BackingField; // 0x18
		::RPG::PoolList_1<::System::Object*>* _CombinationChildPlans_k__BackingField; // 0x20
		::System::String* _SelectionKey_k__BackingField; // 0x28
		::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x30
		::System::Single _StartIntervalSeconds_k__BackingField; // 0x38
		::System::Boolean _ConditionsSatisfied_k__BackingField; // 0x3C
		::System::Boolean _IsCombination_k__BackingField; // 0x3D
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::Il2CppArray<::System::Object*>* a2, ::RPG::PoolList_1<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::Il2CppArray<::System::Object*>*, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::System::String* a1, ::Il2CppArray<::System::Object*>* a2, ::RPG::PoolList_1<::System::Object*>* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*, ::RPG::PoolList_1<::System::Object*>*, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
		{
			return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GET_DEFINITION_OFFSET))(this);
		}

		::System::String* get_SelectionKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GET_SELECTIONKEY_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_Participants()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GET_PARTICIPANTS_OFFSET))(this);
		}

		::RPG::PoolList_1<::System::Object*>* get_CombinationChildPlans()
		{
			return ((::RPG::PoolList_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GET_COMBINATIONCHILDPLANS_OFFSET))(this);
		}

		::System::Void set_CombinationChildPlans(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_SET_COMBINATIONCHILDPLANS_OFFSET))(this, a1);
		}

		::System::Single get_StartIntervalSeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GET_STARTINTERVALSECONDS_OFFSET))(this);
		}

		::System::Boolean get_IsCombination()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GET_ISCOMBINATION_OFFSET))(this);
		}

		::System::Boolean get_ConditionsSatisfied()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GET_CONDITIONSSATISFIED_OFFSET))(this);
		}

		::System::Void set_ConditionsSatisfied(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_SET_CONDITIONSSATISFIED_OFFSET))(this, a1);
		}

		::System::Boolean PMMGNKAIFNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_PMMGNKAIFNJ_OFFSET))(this);
		}

		::System::Boolean EDKLLNGADAD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_EDKLLNGADAD_OFFSET))(this, a1);
		}

		::System::Boolean EDPMIMAHBFE(::System::String* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_EDPMIMAHBFE_OFFSET))(this, a1, a2);
		}

		::System::Boolean GOLJMHNBFJF(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GOLJMHNBFJF_OFFSET))(this, a1, a2);
		}

		::System::Void HENMPNMAHPB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_HENMPNMAHPB_OFFSET))(this, a1);
		}

		::System::Void BFOIOJAGCAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_BFOIOJAGCAP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_HADOHLNHHGB_OFFSET))(this);
		}

		static ::System::Boolean GDJKEMIHKKO(::RPG::PoolList_1<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::RPG::PoolList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_GDJKEMIHKKO_OFFSET))(a1);
		}

		static ::System::Boolean PMNFGKNFIJP(::RPG::PoolList_1<::System::Object*>* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::RPG::PoolList_1<::System::Object*>*, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_LODPIIACKLB_PMNFGKNFIJP_OFFSET))(a1, a2);
		}

	};
