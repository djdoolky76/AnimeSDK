#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitColonyOrigamiEntity; }
namespace RPG::GameCore { class MazePuzzleOrigamiRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELJCJFPELEG_CTOR_OFFSET UNITYSDK_OFFSET(0x15524E40)
#define ELJCJFPELEG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15524E70)
#define ELJCJFPELEG_PCPEOJKDHPH_OFFSET UNITYSDK_OFFSET(0x15525340)

	class ELJCJFPELEG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitColonyOrigamiEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitColonyOrigamiEntity*))((::PBYTE)hIl2Cpp + ELJCJFPELEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJCJFPELEG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PCPEOJKDHPH(::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::MazePuzzleOrigamiRow*>*))((::PBYTE)hIl2Cpp + ELJCJFPELEG_PCPEOJKDHPH_OFFSET))(this, a1);
		}

	};
