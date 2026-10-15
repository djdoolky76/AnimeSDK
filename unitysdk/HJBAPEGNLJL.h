#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterDieCheck; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HJBAPEGNLJL_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0x15CF5950)
#define HJBAPEGNLJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15CF5680)
#define HJBAPEGNLJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CF56D0)
#define HJBAPEGNLJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15CF5710)
#define HJBAPEGNLJL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15CF5BA0)
#define HJBAPEGNLJL_TICK_OFFSET UNITYSDK_OFFSET(0x15CF5C10)

inline static constexpr unsigned int HJBAPEGNLJL_TypeDefinitionIndex = 58229;

	class HJBAPEGNLJL : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CLOPCKJCLMD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::MonsterDieCheck* OFKGLJOAMLD; // 0x28
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
