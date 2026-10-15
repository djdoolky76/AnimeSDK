#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CheckMonsterStance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FGAOCKNPOPJ_AIEBAFCKIMJ_OFFSET UNITYSDK_OFFSET(0x1574ED50)
#define FGAOCKNPOPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1574EAF0)
#define FGAOCKNPOPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1574EB40)
#define FGAOCKNPOPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1574EB80)
#define FGAOCKNPOPJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1574EF00)
#define FGAOCKNPOPJ_TICK_OFFSET UNITYSDK_OFFSET(0x1574EF50)

	class FGAOCKNPOPJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::CheckMonsterStance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CLOPCKJCLMD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CheckMonsterStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CheckMonsterStance*))((::PBYTE)hIl2Cpp + FGAOCKNPOPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOCKNPOPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOCKNPOPJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGAOCKNPOPJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGAOCKNPOPJ_TICK_OFFSET))(this, a1);
		}

		::System::Boolean AIEBAFCKIMJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FGAOCKNPOPJ_AIEBAFCKIMJ_OFFSET))(this, a1);
		}

	};
