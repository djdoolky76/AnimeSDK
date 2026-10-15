#pragma once
#include "unitysdk/unitysdk.h"
class ELKAKOOGJLB;
namespace RPG::GameCore { class TaskContext; }

#define MLCKLJGFLFM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A5DE0)
#define MLCKLJGFLFM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9A5E10)
#define MLCKLJGFLFM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9A5E50)

	class MLCKLJGFLFM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELKAKOOGJLB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELKAKOOGJLB*))((::PBYTE)hIl2Cpp + MLCKLJGFLFM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKLJGFLFM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLCKLJGFLFM_ONTASKBEGIN_OFFSET))(this);
		}

	};
