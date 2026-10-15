#pragma once
#include "unitysdk/unitysdk.h"
class EOCFKGFAPHJ;
namespace RPG::GameCore { class TaskContext; }

#define LKAJOLNIGHK_CTOR_OFFSET UNITYSDK_OFFSET(0xB728650)
#define LKAJOLNIGHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB728680)
#define LKAJOLNIGHK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7286C0)

	class LKAJOLNIGHK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EOCFKGFAPHJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EOCFKGFAPHJ*))((::PBYTE)hIl2Cpp + LKAJOLNIGHK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAJOLNIGHK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKAJOLNIGHK_ONTASKBEGIN_OFFSET))(this);
		}

	};
