#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BNBNHLHIJAJ;
class FABMDCOFHCG;
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerParallelAbility; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { template <typename T1, typename T2, typename T3> class Triple_3; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PIIDNAIAHAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9CB4D0)
#define PIIDNAIAHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C8480)
#define PIIDNAIAHAK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A9CA350)
#define PIIDNAIAHAK_FNDGHENFIBL_OFFSET UNITYSDK_OFFSET(0x1A9CB370)
#define PIIDNAIAHAK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A9C86D0)
#define PIIDNAIAHAK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A9CA290)
#define PIIDNAIAHAK_TICK_OFFSET UNITYSDK_OFFSET(0x1A9CA3A0)

inline static constexpr unsigned int PIIDNAIAHAK_TypeDefinitionIndex = 56957;

	class PIIDNAIAHAK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerParallelAbility* OFKGLJOAMLD; // 0x18
		::System::Collections::Generic::List_1<::FABMDCOFHCG*>* PKGNHLKEFKE; // 0x20
		::BNBNHLHIJAJ* ONPOGINJBCB; // 0x28
		::Il2CppArray<::GELIALJDFBL*>* PDJBMIJCFIK; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::Triple_3<::System::Boolean, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntityList*>*>* NEFGIAGAMLD; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::RPG::GameCore::FixPoint OFNOKLJEBBO; // 0x48
		::System::Boolean MEHFJLMANBO; // 0x50
		static ::System::Type** StaticGet_MAEAGHJCHON()
		{
			return (::System::Type**)UnitySDK::FromName("", "PIIDNAIAHAK")->GetStaticField(0x736C0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerParallelAbility* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerParallelAbility*))((::PBYTE)hIl2Cpp + PIIDNAIAHAK_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIIDNAIAHAK_CCTOR_OFFSET))();
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIDNAIAHAK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIDNAIAHAK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIDNAIAHAK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIIDNAIAHAK_TICK_OFFSET))(this, a1);
		}

		::System::Boolean FNDGHENFIBL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PIIDNAIAHAK_FNDGHENFIBL_OFFSET))(this, a1);
		}

	};
