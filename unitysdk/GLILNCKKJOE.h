#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/CHMCAGBDPJH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonMonster; }
namespace RPG::GameCore { class SummonMonsterData; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLILNCKKJOE_BHMNLCKEEIJ_OFFSET UNITYSDK_OFFSET(0x15AB91E0)
#define GLILNCKKJOE_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB7D20)
#define GLILNCKKJOE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AB9B40)
#define GLILNCKKJOE_EKHEIAEIKGE_OFFSET UNITYSDK_OFFSET(0x15AB82D0)
#define GLILNCKKJOE_FNNNIGEMIDJ_OFFSET UNITYSDK_OFFSET(0x15AB99C0)
#define GLILNCKKJOE_IPHJIDFCFLB_OFFSET UNITYSDK_OFFSET(0x15AB9700)
#define GLILNCKKJOE_JLFOGFIHFDA_OFFSET UNITYSDK_OFFSET(0x15AB9230)
#define GLILNCKKJOE_JOIKKKJBAFA_OFFSET UNITYSDK_OFFSET(0x15AB93D0)
#define GLILNCKKJOE_NDMHDKKJOGE_OFFSET UNITYSDK_OFFSET(0x15AB94C0)
#define GLILNCKKJOE_NLFLIOJPNIJ_OFFSET UNITYSDK_OFFSET(0x15AB9A30)
#define GLILNCKKJOE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AB7DC0)

	class GLILNCKKJOE
	{
	public:
		::KFELGAIGHAP* FIMFLIACJBE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SummonMonster* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SummonMonster*))((::PBYTE)hIl2Cpp + GLILNCKKJOE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILNCKKJOE_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* EKHEIAEIKGE(::RPG::GameCore::SummonMonsterData* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::SummonMonsterData*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GLILNCKKJOE_EKHEIAEIKGE_OFFSET))(this, a1, a2);
		}

		::System::Void NDMHDKKJOGE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GLILNCKKJOE_NDMHDKKJOGE_OFFSET))(this, a1);
		}

		::System::Void JLFOGFIHFDA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GLILNCKKJOE_JLFOGFIHFDA_OFFSET))(this, a1, a2);
		}

		::System::Void JOIKKKJBAFA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GLILNCKKJOE_JOIKKKJBAFA_OFFSET))(this, a1, a2);
		}

		::System::Void IPHJIDFCFLB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::CHMCAGBDPJH a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::CHMCAGBDPJH))((::PBYTE)hIl2Cpp + GLILNCKKJOE_IPHJIDFCFLB_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void NLFLIOJPNIJ(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::CHMCAGBDPJH a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::RPG::GameCore::AbilityProperty, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::CHMCAGBDPJH, ::System::Boolean))((::PBYTE)hIl2Cpp + GLILNCKKJOE_NLFLIOJPNIJ_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean FNNNIGEMIDJ(::RPG::GameCore::AbilityProperty a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + GLILNCKKJOE_FNNNIGEMIDJ_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* BHMNLCKEEIJ()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILNCKKJOE_BHMNLCKEEIJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILNCKKJOE_DISPOSE_OFFSET))(this);
		}

	};
