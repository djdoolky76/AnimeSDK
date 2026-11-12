#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
class DEEJKBIMHAA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UseSkill; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHJILFFIIFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D5B80)
#define JHJILFFIIFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9D5BF0)
#define JHJILFFIIFM_EJJNKCOGGIJ_OFFSET UNITYSDK_OFFSET(0xB9D6120)
#define JHJILFFIIFM_HAOEOOKKLBN_OFFSET UNITYSDK_OFFSET(0xB9D6900)
#define JHJILFFIIFM_IBCBIAKDGMO_OFFSET UNITYSDK_OFFSET(0xB9D6DD0)
#define JHJILFFIIFM_NLNDNMIOMDF_OFFSET UNITYSDK_OFFSET(0xB9D6B30)
#define JHJILFFIIFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9D5C40)
#define JHJILFFIIFM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9D6D20)
#define JHJILFFIIFM_TICK_OFFSET UNITYSDK_OFFSET(0xB9D6D70)

inline static constexpr unsigned int JHJILFFIIFM_TypeDefinitionIndex = 55560;

	class JHJILFFIIFM : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* DJBFCJCGGKD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::UseSkill* OFKGLJOAMLD; // 0x28
		::DEEJKBIMHAA* AIJGGLCAEON; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UseSkill* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UseSkill*))((::PBYTE)hIl2Cpp + JHJILFFIIFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJILFFIIFM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJILFFIIFM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHJILFFIIFM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHJILFFIIFM_TICK_OFFSET))(this, a1);
		}

		::System::Void HAOEOOKKLBN(::System::Int32 a1, ::RPG::GameCore::ControlSkillType a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::ControlSkillType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JHJILFFIIFM_HAOEOOKKLBN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NLNDNMIOMDF(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JHJILFFIIFM_NLNDNMIOMDF_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* EJJNKCOGGIJ(::System::Int32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHJILFFIIFM_EJJNKCOGGIJ_OFFSET))(this, a1);
		}

		::System::Void IBCBIAKDGMO(::System::Int32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JHJILFFIIFM_IBCBIAKDGMO_OFFSET))(this, a1, a2);
		}

	};
