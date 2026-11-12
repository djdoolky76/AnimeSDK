#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPKNJAMIKEA.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
class LHHEGNEBMLN;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleEventRow; }
namespace RPG::GameCore { class GridFightRoleBackendExtraRankConfigRow; }
namespace RPG::GameCore { class GridFightRoleBackendRankConfigRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABBLGHINPMK_CEMBFIPOFDM_1_OFFSET UNITYSDK_OFFSET(0xB74E0C0)
#define ABBLGHINPMK_CEMBFIPOFDM_OFFSET UNITYSDK_OFFSET(0xB74DFD0)
#define ABBLGHINPMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB74D170)
#define ABBLGHINPMK_DJKGAIOBGJF_OFFSET UNITYSDK_OFFSET(0xB74D310)
#define ABBLGHINPMK_FAOPPFCLKCL_OFFSET UNITYSDK_OFFSET(0xB74E1B0)
#define ABBLGHINPMK_KFHCMJCFINH_OFFSET UNITYSDK_OFFSET(0xB74D180)
#define ABBLGHINPMK_LGPLAOGBGLM_OFFSET UNITYSDK_OFFSET(0xB74D1A0)
#define ABBLGHINPMK_MPKLOIGJIPG_OFFSET UNITYSDK_OFFSET(0xB74D190)
#define ABBLGHINPMK_NKEBOIHBCCD_OFFSET UNITYSDK_OFFSET(0xB74DB90)
#define ABBLGHINPMK_PKMHODPACHF_OFFSET UNITYSDK_OFFSET(0xB74DBF0)

inline static constexpr unsigned int ABBLGHINPMK_TypeDefinitionIndex = 58110;

	class ABBLGHINPMK : public ::NPKNJAMIKEA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::BattleEventDataComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventDataComponent*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleEventCreateType KFHCMJCFINH()
		{
			return ((::RPG::GameCore::BattleEventCreateType(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLGHINPMK_KFHCMJCFINH_OFFSET))(this);
		}

		::System::Boolean MPKLOIGJIPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLGHINPMK_MPKLOIGJIPG_OFFSET))(this);
		}

		::System::Void LGPLAOGBGLM(::RPG::GameCore::BattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleEventRow*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_LGPLAOGBGLM_OFFSET))(this, a1);
		}

		::System::Void DJKGAIOBGJF(::RPG::GameCore::TurnBasedAbilityComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_DJKGAIOBGJF_OFFSET))(this, a1);
		}

		::System::Void NKEBOIHBCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABBLGHINPMK_NKEBOIHBCCD_OFFSET))(this);
		}

		::System::Void PKMHODPACHF(::LHHEGNEBMLN* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LHHEGNEBMLN*, ::System::Object*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_PKMHODPACHF_OFFSET))(this, a1, a2);
		}

		static ::System::Void CEMBFIPOFDM(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendRankConfigRow*>*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_CEMBFIPOFDM_OFFSET))(a1, a2);
		}

		static ::System::Void CEMBFIPOFDM_1(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::System::Collections::Generic::List_1<::RPG::GameCore::GridFightRoleBackendExtraRankConfigRow*>*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_CEMBFIPOFDM_1_OFFSET))(a1, a2);
		}

		static ::System::Void FAOPPFCLKCL(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ABBLGHINPMK_FAOPPFCLKCL_OFFSET))(a1, a2);
		}

	};
