#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterDieCheck; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJBAPEGNLJL_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0x16C517E0)
#define HJBAPEGNLJL_CTOR_OFFSET UNITYSDK_OFFSET(0x16C51510)
#define HJBAPEGNLJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C51560)
#define HJBAPEGNLJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C515A0)
#define HJBAPEGNLJL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16C51A30)
#define HJBAPEGNLJL_TICK_OFFSET UNITYSDK_OFFSET(0x16C51AA0)

inline static constexpr unsigned int HJBAPEGNLJL_TypeDefinitionIndex = 59485;

	class HJBAPEGNLJL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonsterDieCheck* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CLOPCKJCLMD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterDieCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterDieCheck*))((::PBYTE)hIl2Cpp + HJBAPEGNLJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBAPEGNLJL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBAPEGNLJL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBAPEGNLJL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJBAPEGNLJL_TICK_OFFSET))(this, a1);
		}

		::System::Boolean AIEBAFCKIMJ(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + HJBAPEGNLJL_AIEBAFCKIMJ_OFFSET))(this, a1, a2);
		}

	};
