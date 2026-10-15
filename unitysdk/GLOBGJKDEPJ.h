#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MonsterHPRatioCheck; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLOBGJKDEPJ_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0x15ABE380)
#define GLOBGJKDEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABE0D0)
#define GLOBGJKDEPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15ABE120)
#define GLOBGJKDEPJ_FCMFJEOAMGC_OFFSET UNITYSDK_OFFSET(0x15ABE780)
#define GLOBGJKDEPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15ABE160)
#define GLOBGJKDEPJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15ABE5D0)
#define GLOBGJKDEPJ_TICK_OFFSET UNITYSDK_OFFSET(0x15ABE640)

	class GLOBGJKDEPJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonsterHPRatioCheck* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CLOPCKJCLMD; // 0x28
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
