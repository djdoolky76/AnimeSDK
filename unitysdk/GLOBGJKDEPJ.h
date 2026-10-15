#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterHPRatioCheck; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLOBGJKDEPJ_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0x15AB27D0)
#define GLOBGJKDEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB2520)
#define GLOBGJKDEPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AB2570)
#define GLOBGJKDEPJ_FCMFJEOAMGC_OFFSET UNITYSDK_OFFSET(0x15AB2BD0)
#define GLOBGJKDEPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AB25B0)
#define GLOBGJKDEPJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AB2A20)
#define GLOBGJKDEPJ_TICK_OFFSET UNITYSDK_OFFSET(0x15AB2A90)

inline static constexpr unsigned int GLOBGJKDEPJ_TypeDefinitionIndex = 58230;

	class GLOBGJKDEPJ : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CLOPCKJCLMD; // 0x18
		::RPG::GameCore::MonsterHPRatioCheck* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonsterHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonsterHPRatioCheck*))((::PBYTE)hIl2Cpp + GLOBGJKDEPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBGJKDEPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBGJKDEPJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLOBGJKDEPJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLOBGJKDEPJ_TICK_OFFSET))(this, a1);
		}

		::System::Boolean AIEBAFCKIMJ(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + GLOBGJKDEPJ_AIEBAFCKIMJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean FCMFJEOAMGC(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + GLOBGJKDEPJ_FCMFJEOAMGC_OFFSET))(this, a1, a2);
		}

	};
